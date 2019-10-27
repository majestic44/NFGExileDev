//Eggbeast heal with medkit action 
PRIVATE ["_player"];
_player = _this select 0;

if ((getdammage _player)<0.1) exitwith {};

_player removeAction Ures_player_heal;
_player playmove "AinvPknlMstpSlayWrflDnon_healed";

_player say "heal";
_player setdamage 0;

if ("UNS_MedKit" in (items _player)) then
{
	_player removeitem "UNS_MedKit";
};
Ures_player_heal = -1;
