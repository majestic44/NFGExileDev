Private["_vehicle"];
_vehicle = _this select 0;
if (_vehicle in gdtmod_satchel_array) then
{
	gdtmod_satchel_array = gdtmod_satchel_array - [_vehicle];
	if (_vehicle in gdtmod_satchel_arraytimer) then {gdtmod_satchel_arraytimer = gdtmod_satchel_arraytimer - [_vehicle]};
	Player addmagazine "PipeBomb";
	_vehicle say "gdtmod_satchel_deactivate";
};
