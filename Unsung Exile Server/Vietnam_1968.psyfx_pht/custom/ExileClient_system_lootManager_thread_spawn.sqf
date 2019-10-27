 
private["_spawnRadius","_minimumDistanceToTraderZones","_minimumDistanceToTerritories","_lootLifeTime","_buildings","_buildingNetIdsToSpawnLootIn","_building","_lastTimeSentToServer"];
if !(alive player) exitWith {false};
if !((vehicle player) isEqualTo player) exitWith {false};
_spawnRadius = getNumber (missionConfigFile >> "CfgExileLootSettings" >> "spawnRadius");
_minimumDistanceToTraderZones = getNumber (missionConfigFile >> "CfgExileLootSettings" >> "minimumDistanceToTraderZones");
_minimumDistanceToTerritories = getNumber (missionConfigFile >> "CfgExileLootSettings" >> "minimumDistanceToTerritories");
_lootLifeTime = getNumber (missionConfigFile >> "CfgExileLootSettings" >> "lifeTime") * 60;
//_buildings = player nearObjects ["House", _spawnRadius];
_buildings = [];
{
  	_buildings append (player nearObjects [_x, _spawnRadius]);
} forEach ["House","uns_uh1c_wreck","uns_uh1d_wreck","uns_uh1h_wreck","uns_uh1_Wreck","uns_ah1g_Wreck_2","Land_Wreck_BMP2_F","Land_Wreck_BRDM2_F","Land_Wreck_Ural_F"];
_buildingNetIdsToSpawnLootIn = [];
{
	_building = _x;
	try 
	{
		if (isObjectHidden _building) throw false;
		_lastTimeSentToServer = _building getVariable ["ExileLastLootRequestedAt", -99999];
		if ((time - _lastTimeSentToServer) < _lootLifeTime) throw false;
		if (_minimumDistanceToTraderZones > 0) then
		{
			if ([_building, _minimumDistanceToTraderZones] call ExileClient_util_world_isTraderZoneInRange) then
			{
				throw false;
			};
		};
		if (_minimumDistanceToTerritories > 0) then
		{
			if ([_building, _minimumDistanceToTerritories] call ExileClient_util_world_isTerritoryInRange) then
			{
				throw false;
			};
		};
		_buildingNetIdsToSpawnLootIn pushBack (netId _building);
		_building setVariable ["ExileLastLootRequestedAt", time];
	}
	catch 
	{
	};
}
forEach _buildings;
if ((count _buildingNetIdsToSpawnLootIn) > 0) then 
{
	["spawnLootRequest", [_buildingNetIdsToSpawnLootIn]] call ExileClient_system_network_send;
};
