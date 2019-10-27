sleep 1;
Private["_gdtmod_satchel_detonate", "_vehicle"];
while {true} do {
	sleep 0.1;
	waitUntil {(not (isNull player)) and (alive player)};
	_vehicle = (vehicle player);
	_gdtmod_satchel_detonate = vehicle player addaction ["Touch Off vehicle bomb(s)", "uns_weap\gdtmod_satchel\detonate.sqf" ,[] ,-1 ,false, false, "",  "count gdtmod_satchel_array > 0"];
	waitUntil {not ((vehicle player) == _vehicle)};
	_vehicle removeaction _gdtmod_satchel_detonate;
};
