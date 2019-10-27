//Eggbeast kill action - inspired by DayZ scripts by Rocket
PRIVATE ["_player","_dmg"];
//kill target with rifle butt
Tman = _this select 0;
_player = _this select 1;

Tman removeAction Ures_player_ckill;
Ures_player_ckill = -1;
_player playMove "AmelPercMstpSlowWrflDnon_StrokeGun"; //butt smash
sleep 1;
Tman switchmove "AmelPercMstpSnonWnonDnon_zasah6hlava";
sleep 2;
Tman say "bash";
Tman removeAction Ures_player_kill;
Tman removeAction Ures_player_bkill;
Tman removeAction Ures_player_ckill;
_dmg = (getdammage Tman);
Tman setdamage (_dmg +0.3);
{Tman action ["dropweapon","",_x]}forEach weapons Tman;
_player addscore 1;
