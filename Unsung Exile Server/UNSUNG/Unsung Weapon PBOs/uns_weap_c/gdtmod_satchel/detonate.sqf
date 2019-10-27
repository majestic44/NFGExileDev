Private["_bomb", "_vehicles"];
_vehicles = gdtmod_satchel_array;
{
	gdtmod_satchel_array = gdtmod_satchel_array - [_x];
	if (_x in gdtmod_satchel_arraytimer) then {gdtmod_satchel_arraytimer = gdtmod_satchel_arraytimer - [_x]};
	_bomb = "HelicopterExploSmall" createvehicle getpos _x;
	_x setdamage 0.95;
} forEach _vehicles;
gdtmod_satchel_array = [];
gdtmod_satchel_arraytimer = [];
