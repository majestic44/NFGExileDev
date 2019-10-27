Private["_vehicle"];
_vehicle = _this select 0;
gdtmod_satchel_time = 0;
player removemagazine "pipebomb";
gdtmod_satchel_array = gdtmod_satchel_array + [_vehicle];
_vehicle say "gdtmod_satchel_attach";
gdtmod_satchel_vehicle = _vehicle;
