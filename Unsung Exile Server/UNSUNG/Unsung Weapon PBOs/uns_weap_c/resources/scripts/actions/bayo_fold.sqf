//Eggbeast bayonet fold action 
PRIVATE ["_player","_i","_wepcount"];
_player = _this select 0;

_player selectweapon (primaryweapon _player);

_player removeAction Ures_player_foldbayo;
_player playmove "AmovPercMstpSlowWrflDnon_seeWatch";

_wepcount = count Ures_bayoweps;
_player say "Bayo_off";
_i = 0;
while {_i < _wepcount} do
{
	if ((primaryweapon _player)== (Ures_bayoweps select _i select 1) ) then 
	{
//##edit
		_player removeweapon (Ures_bayoweps select _i select 1);
		_player addWeapon (Ures_bayoweps select _i select 0);
		_player selectWeapon (Ures_bayoweps select _i select 0);
	};
	_i = _i + 1;
};
Ures_player_foldbayo =-1;
