//Eggbeast bayonet fix action 
//init contains array Ures_bayoweps = [etc];
PRIVATE ["_player","_i","_wepcount"];
_player = _this select 0;

_player selectweapon (primaryweapon _player);

_player removeAction Ures_player_fixbayo;
_player playmove "AmovPercMstpSlowWrflDnon_seeWatch";

_player say "Bayo_on";
_wepcount = count Ures_bayoweps;

_i = 0;
while {_i <_wepcount} do
{
	if ((primaryweapon _player)== (Ures_bayoweps select _i select 0) ) then 
	{
//##edit
		_player removeweapon (Ures_bayoweps select _i select 0);
		_player addWeapon (Ures_bayoweps select _i select 1);
		_player selectWeapon (Ures_bayoweps select _i select 1);
	};
	_i = _i + 1;
};
Ures_player_fixbayo = -1;

