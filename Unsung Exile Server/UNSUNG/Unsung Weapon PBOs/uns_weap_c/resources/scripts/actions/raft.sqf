//Eggbeast launch inflatable raft
PRIVATE ["_player","_myraft"];

_player = _this select 0;

if !("UNS_EAM2Braft" in (magazines _player)) exitwith {};

_player removeAction Ures_raft;

_player say "inflate";

_myraft = createVehicle ["UNS_floatraft_3",position _player, [], 10, "NONE"];

if ("UNS_EAM2Braft" in (magazines _player)) then
{
	_player removemagazine "UNS_EAM2Braft";
};
Ures_raft = -1;

