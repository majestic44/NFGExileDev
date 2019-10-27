//Eggbeast launch inflatable raft
PRIVATE ["_player","_myraft"];

_player = _this select 0;

if !("UNS_sharkchaser" in (magazines _player)) exitwith {};

_player removeAction Ures_sc;

_player say "fuckoff";
_myraft = createVehicle ["SmokeShellBlue",position _player, [], 1, "NONE"];

if ("UNS_sharkchaser" in (magazines _player)) then
{
	_player removemagazine "UNS_sharkchaser";
};
Ures_sc = -1;


