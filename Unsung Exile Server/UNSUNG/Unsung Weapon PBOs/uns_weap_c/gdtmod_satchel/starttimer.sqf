Private["_bomb", "_timer", "_vehicle"];
_vehicle = _this select 0;
_timer = gdtmod_satchel_time * 60;
gdtmod_satchel_arraytimer = gdtmod_satchel_arraytimer + [_vehicle];
_vehicle say "gdtmod_satchel_starttimer";
while {(_timer > 0) and (alive _vehicle) and (_vehicle in gdtmod_satchel_array)} do
{
	Sleep 1;
	_timer = _timer - 1;
};
if (_vehicle in gdtmod_satchel_array) then
{
	gdtmod_satchel_array = gdtmod_satchel_array - [_vehicle];
	if (_vehicle in gdtmod_satchel_arraytimer) then {gdtmod_satchel_arraytimer = gdtmod_satchel_arraytimer - [_vehicle]};
	_bomb = "HelicopterExploSmall" createvehicle getpos _vehicle;
	_vehicle setdamage 0.95;
};
