//Resources module by Eggbeast

/*
This module allows players to:
a) rearm selected aircraft with multiple role loadouts of weapons/mags when parked near an ammo truck or on the carrier
b) refuel vehicles with a full jerrycan, fill jerrycans at fueltanks, and siphon fuel from vehicles with a siphon and an ampty jerrycan
c) taxi to the upper deck of the aircraft carrier
d) use a knife to kill enemies by throwing it at enemies within 10m of player (knife is lost), or stabbing them within 2m (knife is retained)
e) bash enemies with a primary weapon (hurts them and makes them drop weapons)
f) unattach and attach bayonets with selected weapons and kill enemies with attached bayonet
g) heal using medkits
h) unattach and attach silencers to selected weapons
i) fire all nearby M18 claymores with an M57 "clacker" trigger
j) survive in an automatically inflated liferaft if you are downed over the sea while wearing a pilot lifejacket (survival aids and CSAR functions included)
k) survive longer against sharks with Shark Chaser repellent

//calls
\uns_weap_c\resources\scripts\monitorvec.sqf done
\uns_weap_c\resources\scripts\spawn.sqf done

*/
PRIVATE ["_cthread","_pthread"];

if (isNil "Ures_vecmods") then {Ures_vecmods=0};
if !(Ures_vecmods == 4) exitwith {};

//VEHICLE ARRAYS
//taxi to carrier
	URes_airtaxi = -1;
//URes_resources mod - knife and fuel
	URes_player_fillfuel = 	-1;
	URes_player_siphonfuel = -1;
	URes_player_refuelAction = -1;
	URes_myCursorTarget = objNull;
	URes_myCursorTarget2 = objNull;
	URes_myCursorTarget3 = objNull;
	URes_player_kill = -1;
	URes_player_bkill = -1;
	URes_player_ckill = -1;
//set up bayonet class weapons
	URes_player_foldbayo =-1;
	URes_player_fixbayo =-1;
//set up silenced class weapons
	URes_player_rmvhsil =-1;
	URes_player_fixhsil =-1;
	URes_player_rmvrsil =-1;
	URes_player_fixrsil =-1;
//medkit
	URes_player_heal =-1;
	URes_clacker = -1;
//raft
	URes_raft = -1;
	URes_sc = -1;

//repair /refuel / ammo trucks

//"MtvrRepair_DES_EP1","MtvrRepair","PRACS_M250_Repair","UralRepair_CDF","UralRepair_TK_EP1","UralRepair_INS","KamazRepair","T810Repair_ACR","t810_repair","O_Ifrit_F",

uns_supplytruck = ["uns_M113_ENG","LAND_UNS_Motorpool_repair"];
//to add: 
//"uns_truck_repair","uns_nvatruck_repair","uns_truck_refuel","uns_nvatruck_refuel","uns_truck_reammo","uns_nvatruck_reammo"
//modded loadout planes and helis

URes_planes_west =
	["uns_A1J_MR","uns_A4B_skyhawk_MR","uns_A4E_skyhawk_MR","uns_A6_Intruder_MR","uns_A7_MR","uns_A7N_MR","uns_f100b_MR","UNS_F111_MR","UNS_F111_D_MR","uns_f105D_MR","uns_f105F_MR"];
//missing:
//migs, F4, cobra	

URes_twoseaterplanes =
	["uns_A6_Intruder_MR","UNS_F111_MR","UNS_F111_D_MR","uns_f105F_MR"];

aicon1 = "<img image='uns_weap_c\resources\img\air.paa' size='1.0' shadow='false' />";
URes_astring1 = format ["<t color='#f79b31'>" +"%1 CAP"+ "</t>",aicon1];
aicon2 = "<img image='uns_weap_c\resources\img\mark.paa' size='1.0' shadow='false' />";
URes_astring2 = format ["<t color='#f79b31'>" +"%1 CAS"+ "</t>",aicon2];
aicon3 = "<img image='uns_weap_c\resources\img\sup01.paa' size='1.0' shadow='false' />";
URes_astring3 = format ["<t color='#f79b31'>" +"%1 AGM"+ "</t>",aicon3];
aicon4 = "<img image='uns_weap_c\resources\img\offensive.paa' size='1.0' shadow='false' />";
URes_astring4 = format ["<t color='#f79b31'>" +"%1 MR"+ "</t>",aicon4];
aicon5 = "<img image='uns_weap_c\resources\img\strk.paa' size='1.0' shadow='false' />";
URes_astring5 = format ["<t color='#f79b31'>" +"%1 BMB"+ "</t>",aicon5];
aicon6 = "<img image='uns_weap_c\resources\img\vecs.paa' size='1.0' shadow='false' />";
URes_astring6 = format ["<t color='#f79b31'>" +"%1 LGB"+ "</t>",aicon6];
aicon7 = "<img image='uns_weap_c\resources\img\sead.paa' size='1.0' shadow='false' />";
URes_astring7 = format ["<t color='#f79b31'>" +"%1 SEAD"+ "</t>",aicon7];
aicon8 = "<img image='uns_weap_c\resources\img\cbu.paa' size='1.0' shadow='false' />";
URes_astring8 = format ["<t color='#f79b31'>" +"%1 CBU"+ "</t>",aicon8];

//delete
URes_bayoweps = [];
URes_rsilweps = [];
URes_hsilweps =	[];

URes_Allactivetraps = ["uns_Tripwire1a","uns_Tripwire1b","uns_Tripwire2a","uns_Tripwire2b","uns_m16apmine","uns_m18apmine","uns_Punji1","uns_Punji2","uns_artilleryround1a","uns_TripwireM49"];
URes_westtraps = ["uns_m16apmine","uns_m18apmine","uns_TripwireM49","uns_Tripwire1a","uns_Tripwire1b","Mine"];
URes_easttraps = ["uns_Tripwire2a","uns_Tripwire2b","uns_TripwireM49","uns_Punji1","uns_Punji2","uns_artilleryround1a"];
URes_punjitraps = ["uns_Punji1","uns_Punji2"];
URes_vectraps = ["uns_Tripwire1b","mineE","uns_artilleryround1a"];

//All weapons that class as a tripwire or trap (requires uns_traps)
URes_EVO_Trapweapons = ["uns_Tripwire1a","uns_Tripwire1b","uns_Tripwire2a","uns_Tripwire2b","uns_m16apmine","uns_Punji1","uns_Punji2","uns_artilleryround1a","uns_m18apmine","uns_TripwireM49","uns_m16apmine"];

_cthread = [] execVM "\uns_weap_c\resources\scripts\monitorvec.sqf";
//temp disable
//_pthread = [] execVM "\uns_weap_c\resources\scripts\spawn.sqf";
