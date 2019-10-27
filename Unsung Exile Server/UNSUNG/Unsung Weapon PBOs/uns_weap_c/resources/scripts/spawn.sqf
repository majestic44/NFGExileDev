// player spawn script calls
//uns_weap_c\resources\scripts\Ures_fuelactions.sqf done
//uns_weap_c\resources\scripts\killinit.sqf done

PRIVATE ["_monitor","_monitor2"];
if (not (local player)) exitwith {};
if (isnil "Ures_vecmods") then {Ures_vecmods=0;};
if !(Ures_vecmods == 4)  exitwith {};
_monitor = [] execVM "uns_weap_c\resources\scripts\Ures_fuelactions.sqf";
//EB TEMP DISABLE
_monitor2 = [] execVM "uns_weap_c\resources\scripts\killinit.sqf";
