//Eggbeast kill action - inspired by DayZ scripts by Rocket
PRIVATE ["_player"];

//kill target 
Tman = _this select 0;
_player = _this select 1;

Tman removeAction Ures_player_bkill;
Ures_player_bkill = -1;
_player playMove "AmovPercMrunSrasWrflDf_AmovPercMevaSrasWrflDb"; // bayo lunge
_player say "stab";
sleep 0.5;
Tman switchmove "AmelPercMstpSnonWnonDnon_zasah7bricho";
sleep 2;
Tman removeAction Ures_player_kill;
Tman removeAction Ures_player_bkill;
Tman removeAction Ures_player_ckill;
Tman setdamage 1;

_player addscore 1;