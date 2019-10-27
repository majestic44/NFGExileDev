
private["_Positions", "_config", "_markerTime", "_dropAltitude", "_dropRadius", "_boxType", "_position", "_marker", "_box", "_itemClassName", "_itemCount", "_i", "_supplySmoke", "_parachute"];
_Positions = [[14329,11272],[2763,14359],[3006,6545],[10911,7417],[8971,11098],[628,11510]];
_config = configFile >> "CfgSettings" >> "Events" >> "SupplyBox";
_markerTime = getNumber (_config >> "markerTime");

_config = configFile >> "CfgSettings" >> "Events" >> "SupplyBox";
_dropAltitude = getNumber (_config >> "dropAltitude");
_dropRadius = getNumber (_config >> "dropRadius");
_boxType = selectRandom (getArray (_config >> "types"));
_DropLocation = selectRandom _Positions;
_Position = [_DropLocation, _dropRadius] call ExileClient_util_math_getRandomPositionInCircle;
_position set [2, _dropAltitude];
["toastRequest", ["InfoTitleAndText", ["Supply drop incomming!", "Zulu Time 10 Minutes"]]] call ExileServer_system_network_send_broadcast;
_marker = createMarker [ format["ExileSupplyBox%1", diag_tickTime], _position];
_marker setMarkerType "ExileHeart";
uiSleep (60 * 5);
["toastRequest", ["InfoTitleAndText", ["Supply drop incomming!", "Zulu Time 5 Minutes"]]] call ExileServer_system_network_send_broadcast;
uiSleep (60 * 4);
["toastRequest", ["InfoTitleAndText", ["Supply drop incomming!", "Zulu Time 1 Minute"]]] call ExileServer_system_network_send_broadcast;
uiSleep (60 * 1);
_box = createVehicle ["Exile_Container_SupplyBox", [0, 0, 0], [], 0, "CAN_COLLIDE"];
_box setPosATL _position;
_box setDir (random 360);
clearBackpackCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearItemCargoGlobal _box;
{
    _itemClassName = _x select 0;
    _itemCount = _x select 1;
    for "_i" from 1 to _itemCount do
    {
        [_box, _itemClassName] call ExileClient_util_containerCargo_add;
    };
}
forEach (getArray (_config >> "BoxTypes" >> _boxType >> "items"));
_supplySmoke = createVehicle ["Exile_Ammo_SmokeShellOrange", getPos _box, [], 0, "CAN_COLLIDE"];
_supplySmoke attachTo [_box, [0, 0, 0.5]];
_parachute = createVehicle ["O_Parachute_02_F", getPos _box, [], 0, "FLY"];
_parachute setPosATL _position;
_parachute setDir (getDir _box);
_box attachTo [_parachute, [0, 0, -1.2]];
waitUntil { ((getPos _box) select 2) < 1.5 };
detach _supplySmoke;
detach _box;
_parachute disableCollisionWith _box;
_box disableCollisionWith _parachute;
_position = getPos _box;
_position set [2, 0];
_box setPos _position;
_box setVelocity [0, 0, 0];
uiSleep (60 * _markerTime);
deleteMarker _marker;
