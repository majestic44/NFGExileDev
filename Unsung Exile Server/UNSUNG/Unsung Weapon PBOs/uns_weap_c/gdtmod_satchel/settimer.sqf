Private["_vehicle"];
_vehicle = _this select 0;
if (not (gdtmod_satchel_vehicle == _vehicle)) then
{
	gdtmod_satchel_time = 0;
	gdtmod_satchel_vehicle = _vehicle;
};
gdtmod_satchel_time = gdtmod_satchel_time + 1;
_vehicle say "gdtmod_satchel_settimer";
cutText [format["Timer set to %1 minutes", gdtmod_satchel_time],"PLAIN"];
