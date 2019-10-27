sleep 1;
Private["_gdtmod_satchel_attach", "_gdtmod_satchel_deactivate", "_gdtmod_satchel_settimer", "_gdtmod_satchel_starttimer", "_vehicle"];
_vehicle = _this;
_gdtmod_satchel_attach = _vehicle addaction ["Attach Satchel to Vehicle", "uns_weap\gdtmod_satchel\attach.sqf", [], -1, false, false, "", "(alive _target) and (player == vehicle player) and ('PipeBomb' in (magazines player)) and (not (_target in gdtmod_satchel_array))"];
_gdtmod_satchel_settimer = _vehicle addaction ["Set timer +1 minute", "uns_weap\gdtmod_satchel\settimer.sqf", [], -1, false, false, "", "(alive _target) and (player == vehicle player) and (_target in gdtmod_satchel_array) and (not (_target in gdtmod_satchel_arraytimer))"];
_gdtmod_satchel_starttimer = _vehicle addaction ["Start timer", "uns_weap\gdtmod_satchel\starttimer.sqf", [], -1, false, false, "", "(alive _target) and (player == vehicle player) and (_target in gdtmod_satchel_array) and (not (_target in gdtmod_satchel_arraytimer))"];
_gdtmod_satchel_deactivate = _vehicle addaction ["Deactivate bomb", "uns_weap\gdtmod_satchel\deactivate.sqf", [], -1, false, false, "", "(alive _target) and (player == vehicle player) and (_target in gdtmod_satchel_array)"];
