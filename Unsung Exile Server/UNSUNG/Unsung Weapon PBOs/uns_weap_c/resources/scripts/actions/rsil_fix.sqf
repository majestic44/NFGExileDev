//Eggbeast rifle silencer fix action 
//init contains array
PRIVATE ["_player","_i","_wepcount"];

_player = _this select 0;

_player removeAction Ures_player_fixrsil;

_wepcount = count Ures_rsilweps;

_i = 0;
while {_i < _wepcount} do
{
	if ((primaryweapon _player)== (Ures_rsilweps select _i select 0) ) then 
	{
		_player selectweapon (primaryweapon _player);
		_player playmove "AmovPercMstpSlowWrflDnon_seeWatch";
		_player say "Sil_on";
		sleep 1;
//##edit
		_player removeweapon (Ures_rsilweps select _i select 0);
		_player removeweapon ("uns_ItemSil_rifle");
		_player addWeapon (Ures_rsilweps select _i select 1);
		_player selectWeapon (Ures_rsilweps select _i select 1);
	};
	_i = _i + 1;
};
Ures_player_fixrsil =-1;

