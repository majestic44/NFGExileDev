//Eggbeast kill action - inspired by DayZ scripts by Rocket
PRIVATE ["_player"];

//kill target 
Tman = _this select 0;
_player = _this select 1;

Tman removeAction Ures_player_kill;
Ures_player_kill = -1;


if (_player distance Tman > 2) then 
{
	_player playActionNow "GesturePoint";
	_player say "throw";
	sleep 0.3;
	Tman switchmove "AmelPercMstpSnonWnonDnon_zasah6hlava";
	hintsilent "Knife thrown";
	if ("uns_kabar" in (magazines _player)) then {_player removemagazine "uns_kabar";Tman addMagazine "uns_kabar";};
	if ("uns_knife" in (magazines _player)) then {_player removemagazine "uns_knife";Tman addMagazine "uns_knife";};
	_player addscore 2
} else
{
	_player playActionNow "GesturePoint"; //GestureAttack
	_player say "kill";
	sleep 0.3;
	Tman switchmove "AmelPercMstpSnonWnonDnon_zasah7bricho";
	hintsilent "Stealth kill";
	_player addscore 4
};

sleep 2;
Tman removeAction Ures_player_kill;
Tman removeAction Ures_player_bkill;
Tman removeAction Ures_player_ckill;
Tman setdamage 1;
