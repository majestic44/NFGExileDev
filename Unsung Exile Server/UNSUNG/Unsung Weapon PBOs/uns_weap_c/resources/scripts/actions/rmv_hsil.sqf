//Eggbeast handgun silencer removal action 
PRIVATE ["_player","_i","_wepcount"];
_player = _this select 0;

_player removeAction Ures_player_rmvhsil;
_wepcount = count Ures_hsilweps;

_i = 0;
while {_i < _wepcount} do
{
	if (_player hasweapon (Ures_hsilweps select _i select 1) ) then 
	{
		_player selectweapon (Ures_hsilweps select _i select 1);
		_player playmove "PistolMagazineReloadKneel";
		sleep 1;
		_player say "Sil_off";
//##edit
		_player removeweapon (Ures_hsilweps select _i select 1);
		_player addweapon ("uns_ItemSil_hgun");
		_player addWeapon (Ures_hsilweps select _i select 0);
		_player selectWeapon (Ures_hsilweps select _i select 0);
	};
	_i = _i + 1;
};
Ures_player_rmvhsil =-1;
