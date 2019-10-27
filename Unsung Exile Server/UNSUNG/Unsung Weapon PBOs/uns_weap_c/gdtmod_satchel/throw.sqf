Private["_dir", "_dummy"];
_dummy = "SkeetDisk" createVehiclelocal [((getpos gdtmod_satchel_bomb) select 0), ((getpos gdtmod_satchel_bomb) select 1), 1];
_dummy setpos [((getpos gdtmod_satchel_bomb) select 0), ((getpos gdtmod_satchel_bomb) select 1), 1];
_dir = player weaponDirection (currentWeapon player);
_dummy setvelocity [(_dir select 0) * 10, (_dir select 1) * 10, (_dir select 2) * 20];
while {((alive gdtmod_satchel_bomb) and ((getpos _dummy) select 2) > 0.3)} do
{
	gdtmod_satchel_bomb setpos getpos _dummy;
	sleep 0.01;
};
gdtmod_satchel_bomb setpos [getpos gdtmod_satchel_bomb select 0, getpos gdtmod_satchel_bomb select 1, 0];
deletevehicle _dummy;
