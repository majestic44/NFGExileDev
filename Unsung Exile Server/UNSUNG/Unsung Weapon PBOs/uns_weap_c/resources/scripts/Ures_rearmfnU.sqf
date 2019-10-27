///   Unsung Planes rearm script

// Ures_rearmfnU called from Ures_rearm
//Ures_airfn1 = _vec addAction [Ures_astring1, "Actions\Ures_rearmfnU.sqf",[_vec,_player,1], 5, true, true,"",""];
//1 Combat Air Patrol (CAP)
//2 Close Air Support (CAS)
//3 Anti Tank Air-Ground Missiles (AGM)
//4 Multi-role (MR)
//5 Bombs (BMB)
//6 Laser Guided Bombs (LGB)
//7 Suppression of Enemy Air Defences (SEAD)

/////////////// NEW
//URes_planes_west = ["uns_A1J_MR","uns_A4B_skyhawk_MR", "uns_A4E_skyhawk_MR","uns_A6_Intruder_MR", "uns_A7_MR","uns_A7N_MR","uns_f100b_MR", "UNS_F111_MR","UNS_F111_D_MR","uns_f105D_MR","uns_f105F_MR"];
//missing: //migs, f4, cobra	
//URes_twoseaterplanes = ["uns_A6_Intruder_MR","UNS_F111_MR","UNS_F111_D_MR","uns_f105F_MR"];
PRIVATE ["_fntype","_stringa","_msg","_txt","_name","_head","_separator1","_vecimg","_msgarray1","_vec","_type","_fnsel","_weapons","_magazines","_x","_magt","_wept","_muzzles","_i"];

Ures_confirm_rearm =
{
	_fntype = _this select 0; //e.g.Ures_astring1
	_stringa = "";
	_msg = "";
	_txt = "";
	_name = getText (configFile >> "CfgVehicles" >> typeOf (vehicle player)>> "displayName");
	_head = parseText format["<t color='#FFFFCC'>  %1</t>",_name];
	_separator1 = parseText "<br /><br />";
	_vecimg = parseText format["<t size='2.2'><img image='%1'/></t>",getText (configFile >> "CfgVehicles" >> format["%1", typeOf (vehicle player)] >> "picture")];
	_msgarray1 = [_vecimg," ",_head,_separator1];

	if (_fntype==1) then {_stringa = parseText "<img image='uns_weap_c\resources\img\air.paa' size='2.0' shadow='false' /><br />Combat Air Patrol (CAP)</t>"};
	if (_fntype==2) then {_stringa = parseText "<img image='uns_weap_c\resources\img\mark.paa' size='2.0' shadow='false' /><br />Close Air Support (CAS)</t>"};
	if (_fntype==3) then {_stringa = parseText "<img image='uns_weap_c\resources\img\sup01.paa' size='2.0' shadow='false' /><br />Anti-Tank Air-Ground Support (AGM)</t>"};
	if (_fntype==4) then {_stringa = parseText "<img image='uns_weap_c\resources\img\offensive.paa' size='2.0' shadow='false' /><br />Multi-Role Combat (MR)</t>"};
	if (_fntype==5) then {_stringa = parseText "<img image='uns_weap_c\resources\img\strk.paa' size='2.0' shadow='false' /><br />Bombing Run (BMB)</t>"};
	if (_fntype==6) then {_stringa = parseText "<img image='uns_weap_c\resources\img\cbu.paa' size='2.0' shadow='false' /><br />Cluster Munitions (CBU)</t>"};
	if (_fntype==7) then {_stringa = parseText "<img image='uns_weap_c\resources\img\defend.paa' size='2.0' shadow='false' /><br />Suppressing Enemy Air Defences (SEAD)</t>"};

	_msgarray1 = _msgarray1+["Armed for "]+[_stringa];
	_txt = composeText _msgarray1;
	hintsilent _txt;
};

_vec = (vehicle player);
_type = typeOf (vehicle player);
_fnsel = _this select 3;

_vec removeAction Ures_airfn1;
_vec removeAction Ures_airfn2;
_vec removeAction Ures_airfn3;
_vec removeAction Ures_airfn4;
_vec removeAction Ures_airfn5;
_vec removeAction Ures_airfn6;
_vec removeAction Ures_airfn7;

Ures_airfn1=-1;
Ures_airfn2=-1;
Ures_airfn3=-1;
Ures_airfn4=-1;
Ures_airfn5=-1;
Ures_airfn6=-1;
Ures_airfn7=-1;

_weapons = weapons _vec;
{_vec removeweapon _x}forEach _weapons;
_magazines = magazines _vec;
//{if !(_x == "120Rnd_CMFlare_Chaff_Magazine") then {_vec removemagazine _x}}forEach _magazines;
{_vec removemagazine _x}forEach _magazines;

if (_type in  Ures_twoseaterplanes) then
{
	_magt = _vec magazinesTurret [-1];
	{_vec removemagazine _x}forEach _magt;
	_wept = _vec weaponsTurret [-1];
	{_vec removeweapon _x}forEach _wept;
	{_vec removeMagazineTurret [_x,[-1]];}forEach _magt;

	_magt = _vec magazinesTurret [0];
	{_vec removemagazine _x}forEach _magt;
	_wept = _vec weaponsTurret [0];
	{_vec removeweapon _x}forEach _wept;

	_vec removeMagazine "LaserBatteries";
	_vec addMagazine "LaserBatteries";
	if(not ("LaserDesignator_mounted" in _weapons)) then {_vec addweapon "LaserDesignator_mounted"};
	_vec addMagazineTurret ["120Rnd_CMFlare_Chaff_Magazine",[-1]];
};

_vec addMagazine "120Rnd_CMFlare_Chaff_Magazine";
_vec addweapon "CMFlareLauncher";
player selectWeapon "CMFlareLauncher";
_muzzles = getArray(configFile>>"cfgWeapons" >> "CMFlareLauncher" >> "muzzles");
player selectWeapon (_muzzles select 0);

/*
if !(_vec isKindof "Helicopter") then
{
	_vec addMagazine "120Rnd_CMFlare_Chaff_Magazine";
	_vec addweapon "CMFlareLauncher";
	player selectWeapon "CMFlareLauncher";
	_muzzles = getArray(configFile>>"cfgWeapons" >> "CMFlareLauncher" >> "muzzles");
	player selectWeapon (_muzzles select 0);
};
if (_type == "CSJ_UH1Gun") then
{
	_magt = _vec magazinesTurret [0];
	{_vec removemagazine _x}forEach _magt;
	_wept = _vec weaponsTurret [0];
	{_vec removeweapon _x}forEach _wept;
};
*/

_i = 0;
playsound "reload";

_vec removeaction Ures_airload1;
while {_i < 100} do 
{
	hintsilent format["Re-arming completion: %1",_i];
	if ((vehicle player) == player)then {_i=1000};
	if ((speed _vec < -1) or (speed _vec > 1) or (position _vec select 2 > 2.0) ) then {_i=1000};
	if ( (! alive _vec) or (! alive player) ) then {_i=1000};
	sleep 1.5;
	_i = _i + 5;
};
sleep 2;

if (_i < 1000) then 
{
  [_fnsel] call Ures_confirm_rearm;
  _vec removeaction Ures_airload1; //EB migrate to other scripts
  Ures_airload1 = -1;
  switch (_fnsel) do
  {
	case 1://CAP
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_1100Rnd_M39_HEI";
			_vec addMagazine "uns_AIM9Dx1";
			_vec addMagazine "uns_AIM9Dx1";
			_vec addMagazine "uns_2Rnd_F100_Fuel";
			_vec addMagazine "uns_AIM9Dx1";
			_vec addMagazine "uns_AIM9Dx1";
			_vec addMagazine "uns_7Rnd_pylonblank";

			_vec addweapon "uns_M39E";
			_vec addweapon "uns_AIM9DLauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addMagazine "uns_F105_1Rnd_Fuel";
			_vec addMagazine "uns_27Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_AIM54x1";
			_vec addMagazine "uns_AIM54x1";
			if (_type == "UNS_F111_D_MR") then 
			{	
				_vec addMagazine "uns_F111_fueltank_camox2";
			} else
			{
				_vec addMagazine "uns_F111_fueltankx2";
			};
			_vec addMagazine "uns_AIM54_bayx1";
			_vec addMagazine "uns_AIM54_bayx1";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addMagazine "uns_45Rnd_pylonblank";

			_vec addweapon "uns_AIM54_Launcher";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_720Rnd_Skyraider_4x20mm";
			_vec addMagazine "uns_1500Rnd_762x51_M134_twin";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_14Rnd_WP_FFAR";
			_vec addMagazine "uns_LAU59_70mmpodx2";
			_vec addMagazine "uns_SUU14_podx4";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "uns_2rnd_suu11";
			_vec addMagazine "Uns_2Rnd_M47_WP";
			_vec addMagazine "uns_A1j_1Rnd_Fuel";
			_vec addMagazine "Uns_2Rnd_CBU22";
			_vec addMagazine "Uns_4Rnd_CBU25";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "uns_suu11a_gunpod";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "uns_WPLauncher";
			_vec addweapon "Uns_M47WPLauncher";
			_vec addweapon "Uns_CBU22Launcher";
			_vec addweapon "Uns_CBU25Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_AIM9Dx2";
			_vec addMagazine "uns_1Rnd_A4_fueltank";
			_vec addMagazine "uns_27Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "uns_AIM9DLauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_1Rnd_A4_fueltank";
			_vec addMagazine "uns_27Rnd_pylonblank";
			_vec addMagazine "uns_8Rnd_zuniHE";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "uns_12Rnd_zuniHE";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_2Rnd_A6Fuel";
			_vec addMagazine "uns_1rnd_rackx3";
			_vec addMagazine "uns_42Rnd_pylonblank";
			_vec addMagazine "uns_LAU10_125mmpodx3";

			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon  "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_1030Rnd_M61_HEI";
			_vec addMagazine "uns_AIM9Ex4";
			if (_type == "uns_A7_MR") then 
			{	
				_vec addMagazine "uns_2Rnd_A7Fuel";
			} else
			{
				_vec addMagazine "uns_2Rnd_A7FuelNavy";
			};
			_vec addMagazine "uns_8Rnd_zuniHE";
			_vec addMagazine "Uns_AIM9Dx2";
			_vec addMagazine "uns_54Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9DLauncher";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};

/*
		if(_type == "uns_mig17_CAP") then 
		{
			_vec addMagazine "uns_240rnd_23mm_nr23";
			_vec addweapon "uns_nr23x3";
			_vec addMagazine "uns_K13x4";
			_vec addweapon "uns_K13Launcher";
//			_vec addMagazine "uns_mig17_Fueltank";
//			_vec addweapon "uns_mig17_Fuelauncher";
		};
		if(_type == "uns_MIG19PM") then 
		{
			_vec addMagazine "uns_205rnd_30mm_nr30";
			_vec addweapon "uns_NR30x3";
			_vec addMagazine "uns_K13x4";
			_vec addweapon "uns_K13Launcher";
			_vec addMagazine "uns_mig17_Fueltank";
			_vec addweapon "uns_mig17_Fuelauncher";
		};
		if(_type == "uns_mig21_CAP") then 
		{
			_vec addMagazine "uns_200Rnd_23mm_GP9";
			_vec addweapon "uns_GP9";

			_vec addMagazine "uns_K13x4";
			_vec addweapon "uns_K13Launcher";
 			_vec addMagazine "uns_1rnd_NR30pod";
		};
		if(_type == "CSJ_C123") then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addweapon "uns_M61A1";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "uns_AIM9Dx12";
			_vec addweapon "uns_AIM9DLauncher";
			_vec addMagazine "uns_AIM9Ex8";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addMagazine "uns_AIM7Ex6";
			_vec addweapon "uns_AIM7ELauncher";
			_vec addMagazine "uns_2Rnd_BLU82";
			_vec addweapon "Uns_BLU82Launcher";
		};
//helicopters
		if(_type == "UNS_AH1G") then 
		{
			_vec addMagazine "uns_M75_GL_150rnd";
			_vec addweapon "uns_M75_cobra_GL";
			_vec addMagazine "uns_4000Rnd_762x51_M134";
			_vec addweapon "uns_M134";
			_vec addMagazine "uns_3000Rnd_762x51_M134_twin";
			_vec addweapon "uns_suu11a_gunpod";
		};
//huey
		if(_type == "CSJ_UH1Gun") then 
		{
			_vec addMagazine "uns_M158_70mmpodx2";
			_vec addMagazine "uns_7Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "uns_7Rnd_WP_FFAR";
			_vec addweapon "uns_WPLauncher";
		};
*/
	};
	case 2://CAS
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_1100Rnd_M39_HEI";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "Uns_2Rnd_CBU75";
			_vec addMagazine "uns_2rnd_F100_rackx3";
			_vec addMagazine "uns_1Rnd_F100_Fuel";
			_vec addMagazine "Uns_6Rnd_Napalm_500";

			_vec addweapon "uns_M39E";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then
		{
			_vec addMagazine "uns_1030Rnd_M61_HEI";
			_vec addMagazine "uns_38Rnd_FFAR";
 			_vec addMagazine "uns_M200_70mmpodx2";
 			_vec addMagazine "uns_3rnd_F105_rackx6";
			_vec addMagazine "Uns_12Rnd_Napalm_750";
			_vec addMagazine "Uns_6Rnd_Mk82_snake";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addMagazine "uns_4Rnd_rackx6";
			_vec addMagazine "uns_2Rnd_pylonblank";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_22Rnd_pylonblank";
			_vec addMagazine "uns_12Rnd_CBU75";
			_vec addMagazine "Uns_12Rnd_Napalm_750";
			_vec addMagazine "uns_1rnd_F4_uns_suu23";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addweapon "Uns_CBU75Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_720Rnd_Skyraider_4x20mm_HEI";
			_vec addMagazine "uns_1500Rnd_762x51_M134_twin";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_2Rnd_Napalm_500";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "uns_2rnd_suu11";
			_vec addMagazine "Uns_2Rnd_CBUM1A";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_4Rnd_CBU14A";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "uns_suu11a_gunpod";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addweapon "Uns_CBUM1ALauncher";
			_vec addweapon "Uns_CBU14ALauncher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_1rnd_rackx6";
 			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_2Rnd_pylonblank";
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "Uns_6Rnd_Napalm_500";
			_vec addMagazine "uns_15Rnd_pylonblank";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_8Rnd_zuniWP";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "Uns_2Rnd_Napalm_500";
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_Mk82_snake";
 			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_2Rnd_pylonblank";
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_3Rnd_pylonblank";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_8Rnd_zuniFRAG";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_MK82SnakeLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "uns_12Rnd_zuniFRAG";
			_vec addMagazine "uns_12Rnd_zuniWP";
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_12Rnd_Napalm_500";
			_vec addMagazine "Uns_6Rnd_Mk82_snake";
			_vec addMagazine "uns_LAU10_125mmpodx3";
			_vec addMagazine "uns_LAU10_125mmpodx3";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
		if( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_1030Rnd_M61_HEI";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_AIM9Dx2";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_12Rnd_Mk82_snake";
			_vec addMagazine "uns_24Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_Napalm_750";

			_vec addweapon "uns_M61A1";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "uns_AIM9DLauncher";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
/*
		if(_type == "uns_mig17_CAP") then 
		{
			_vec addMagazine "uns_80rnd_37mm_n37";
			_vec addweapon "uns_N37";
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "uns_S5_ub32_podx2";
			_vec addMagazine "uns_64Rnd_57mm";
			_vec addweapon "Uns_57mmLauncher";
			_vec addMagazine "Uns_2Rnd_Napalm_ZB360";
			_vec addweapon "Uns_NapalmLauncher_ZB360";
		};
		if(_type == "uns_MIG19PM") then 
		{
			_vec addMagazine "uns_205rnd_30mm_nr30";
			_vec addweapon "uns_NR30x3";
			_vec addMagazine "uns_S5_ub16_podx2";
			_vec addMagazine "uns_S5_ub32_podx2";
			_vec addMagazine "uns_96Rnd_57mm";
			_vec addweapon "Uns_57mmLauncher";
			_vec addMagazine "Uns_2Rnd_Napalm_ZB360";
			_vec addweapon "Uns_NapalmLauncher_ZB360";
		};
		if(_type == "uns_mig21_CAS") then 
		{
			_vec addMagazine "uns_70rnd_30mm_nr30";
			_vec addweapon "uns_NR30";
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "Uns_2Rnd_Napalm_ZB360";
			_vec addMagazine "uns_S5_ub32_podx2";
			_vec addMagazine "uns_64Rnd_57mm";
			_vec addweapon "uns_57mmLauncher";
			_vec addweapon "Uns_NapalmLauncher_ZB360";
 			_vec addMagazine "uns_1rnd_NR30pod";
		};
		if(_type == "CSJ_C123") then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addweapon "uns_M61A1";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addMagazine "uns_114Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "uns_28Rnd_WP_FFAR";
			_vec addweapon "uns_WPLauncher";
			_vec addMagazine "Uns_12Rnd_Mk82_snake";
			_vec addweapon "uns_MK82SnakeLauncher";
			_vec addMagazine "Uns_8Rnd_Napalm_750";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addMagazine "Uns_4Rnd_CBU75";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addMagazine "Uns_4Rnd_CBU32A";
			_vec addweapon "Uns_CBU32ALauncher";
			_vec addMagazine "Uns_4Rnd_CBU32B";
			_vec addweapon "Uns_CBU32BLauncher";
			_vec addMagazine "Uns_4Rnd_GBU8";
			_vec addweapon "Uns_GBU8Launcher";
			_vec addMagazine "uns_2Rnd_BLU82";
			_vec addweapon "Uns_BLU82Launcher";
		};
//helicopters
		if(_type == "UNS_AH1G") then 
		{
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_M75_GL_302rnd";
			_vec addweapon "uns_M75_cobra_GL";
			_vec addMagazine "uns_4000Rnd_762x51_M134";
			_vec addweapon "uns_M134";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
		};
//huey
		if(_type == "CSJ_UH1Gun") then 
		{
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
		};
*/
	};
	case 3://AGM
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_800Rnd_M39";
			_vec addMagazine "uns_8Rnd_zuniAT";
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_AGM12x2";
			_vec addMagazine "uns_2rnd_F100_rackx3";
			_vec addMagazine "uns_1Rnd_F100_Fuel";
			_vec addMagazine "Uns_6Rnd_CBU75";

			_vec addweapon "uns_M39E";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_AGM12_Launcher";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then
		{
			_vec addMagazine "uns_1030Rnd_M61";
			_vec addMagazine "uns_AGM12x2";
 			_vec addMagazine "uns_3rnd_F105_rackx6";
			_vec addMagazine "Uns_18Rnd_Mk82";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AGM12_Launcher";
			_vec addweapon "uns_MK82Launcher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_AGM12x4";
			_vec addMagazine "uns_AGM65Bx2";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_47Rnd_pylonblank";

			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_AGM65B_Launcher";
			_vec addweapon "uns_AGM12_Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_1200Rnd_Skyraider_4x20mm";
			_vec addMagazine "uns_19Rnd_FFAR";
			_vec addMagazine "uns_8Rnd_zuniAT";
			_vec addMagazine "uns_10Rnd_HVAR_AT";
 			_vec addMagazine "uns_AGM12x2";
			_vec addMagazine "uns_LAU10_125mmpodx2";
 			_vec addMagazine "uns_M200_70mmpodx1";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_HVARLauncher";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_AGM12_Launcher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_AGM45x2";
			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_6Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_CBU75";
			_vec addMagazine "uns_15Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "uns_CBU75Launcher";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_AGM45x2";
 			_vec addMagazine "uns_AGM12x2";
 			_vec addMagazine "uns_1Rnd_A4_fueltank";
			_vec addMagazine "uns_27Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "uns_AGM12_Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "uns_AGM65Bx2";
			_vec addMagazine "uns_AGM12x2";
			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_24Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_Mk82_snake";
			_vec addMagazine "uns_15Rnd_pylonblank";
			_vec addMagazine "uns_6Rnd_pylonblank";

			_vec addweapon "uns_AGM65B_Launcher";
			_vec addweapon "uns_AGM12_Launcher";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
		if ( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_1030Rnd_M61";
			_vec addMagazine "uns_AGM65Bx2";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_AGM12x2";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_12Rnd_CBU75";
			_vec addMagazine "uns_30Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_AGM65B_Launcher";
			_vec addweapon "Uns_AGM12_Launcher";
			_vec addweapon "Uns_CBU75Launcher";
		};
/*
		if(_type == "uns_mig17_CAP") then 
		{
			_vec addMagazine "uns_160rnd_37mm_n37";
			_vec addweapon "uns_N37";
			_vec addMagazine "uns_S5_ub32_podx2";
			_vec addMagazine "uns_S5_ub16_podx2";
			_vec addMagazine "uns_96Rnd_57mm";
			_vec addweapon "Uns_57mmLauncher";
		};
		if(_type == "uns_MIG19PM") then 
		{
			_vec addMagazine "uns_180rnd_30mm_nr30";
			_vec addweapon "uns_NR30x2";
			_vec addMagazine "uns_2rnd_NR30pod";
			_vec addMagazine "uns_S5_ub32_podx2";
			_vec addMagazine "uns_64Rnd_57mm";
			_vec addweapon "Uns_57mmLauncher";
			_vec addMagazine "Uns_2Rnd_Napalm_ZB360";
			_vec addweapon "Uns_NapalmLauncher_ZB360";
		};
		if(_type == "uns_mig21_CAP") then 
		{
			_vec addMagazine "uns_30rnd_30mm_nr30";
			_vec addweapon "uns_NR30";
			_vec addMagazine "uns_Mig21_2Rnd_Fuel";
			_vec addMagazine "uns_S5_ub16_podx2";
			_vec addMagazine "uns_32Rnd_57mm";
			_vec addweapon "uns_57mmLauncher";
 			_vec addMagazine "Uns_1Rnd_fab500";
			_vec addweapon "Uns_BombLauncher_fab500";
			_vec addweapon "uns_Mig21Fuelauncher";
		};
		if(_type == "CSJ_C123") then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addweapon "uns_M61A1";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addMagazine "uns_76Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "uns_AGM65Bx8";
			_vec addweapon "uns_AGM65B_Launcher";
			_vec addMagazine "uns_AGM45x8";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addMagazine "uns_AGM12x4";
			_vec addweapon "uns_AGM12_Launcher";
			_vec addMagazine "LaserBatteries";
			_vec addweapon "LaserDesignator_mounted";
			_vec addMagazine "uns_2Rnd_BLU82";
			_vec addweapon "Uns_BLU82Launcher";
		};		
//helicopters
		if(_type == "UNS_AH1G") then 
		{
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_M75_GL_150rnd";
			_vec addweapon "uns_M75_cobra_GL";
			_vec addMagazine "uns_4000Rnd_762x51_M134";
			_vec addweapon "uns_M134";
			_vec addMagazine "uns_cobra_M195_20mm";
			_vec addweapon "uns_cobra_M195";
			_vec addMagazine "uns_19Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
		};
//huey
		if(_type == "CSJ_UH1Gun") then 
		{
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_8Rnd_zuniAT";
			_vec addweapon "Uns_ZuniLauncher";
		};
*/
	};
	case 4://MR
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_800Rnd_M39";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "Uns_2Rnd_CBU24";
			_vec addMagazine "uns_2rnd_F100_rackx3";
			_vec addMagazine "uns_1Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_Mk82";

			_vec addweapon "uns_M39E";
			_vec addweapon "uns_FFARLauncher";
			_vec addweapon "uns_Mk82Launcher";
			_vec addweapon "Uns_CBU24Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then
		{
			_vec addMagazine "uns_1030Rnd_M61";
			_vec addMagazine "uns_19Rnd_FFAR";
			_vec addMagazine "uns_4Rnd_zuniFRAG";
			_vec addMagazine "uns_M200_70mmpodx1";
			_vec addMagazine "uns_LAU10_125mmpodx1";
 			_vec addMagazine "uns_2rnd_F105_rackx6";
			_vec addMagazine "uns_F105_1Rnd_Fuel";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_500";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_500";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_500";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_500";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_500";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_500";
			_vec addMagazine "uns_15Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_MK82SnakeLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_2Rnd_rackx6";
			_vec addMagazine "uns_AGM12x2";
			_vec addMagazine "uns_AGM65Bx2";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_22Rnd_pylonblank";
			_vec addMagazine "uns_12Rnd_mk82";
			_vec addMagazine "uns_13Rnd_pylonblank";

			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_AGM65B_Launcher";
			_vec addweapon "uns_AGM12_Launcher";
			_vec addweapon "uns_MK82Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_720Rnd_Skyraider_4x20mm";
			_vec addMagazine "uns_1500Rnd_762x51_M134_twin";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_8Rnd_zuniHE";
			_vec addMagazine "uns_SUU14_podx2";
 			_vec addMagazine "Uns_2Rnd_Napalm_750";
			_vec addMagazine "Uns_2Rnd_CBUM1A";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "Uns_2Rnd_M47_WP";
			_vec addMagazine "uns_2rnd_suu11";
			_vec addMagazine "uns_LAU10_125mmpodx2";
 			_vec addMagazine "uns_A1j_1Rnd_Fuel";
			_vec addMagazine "Uns_2Rnd_CBU25";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "uns_suu11a_gunpod";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "Uns_M47WPLauncher";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addweapon "Uns_CBUM1ALauncher";
			_vec addweapon "Uns_CBU25Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_76Rnd_FFAR";
 			_vec addMagazine "uns_2rnd_rackx3";
 			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_2Rnd_pylonblank";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "Uns_6Rnd_Mk82_snake";
			_vec addMagazine "uns_15Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_19Rnd_FFAR";
			_vec addMagazine "uns_4Rnd_zuniAT";
 			_vec addMagazine "uns_LAU10_125mmpodx1";
			_vec addMagazine "uns_M200_70mmpodx1";
 			_vec addMagazine "uns_3rnd_rackx6";
			_vec addMagazine "Uns_12Rnd_Mk81_snake";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
 			_vec addMagazine "uns_1Rnd_pylonblank";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "uns_10Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_MK81SnakeLauncher";
			_vec addweapon "Uns_NapalmLauncher_750";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "uns_8Rnd_zuniFRAG";
			_vec addMagazine "uns_8Rnd_zuniAT";
			_vec addMagazine "uns_8Rnd_zuniHE";
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_12Rnd_Mk82";
			_vec addMagazine "Uns_3Rnd_CBU75";
			_vec addMagazine "Uns_3Rnd_CBU24";
			_vec addMagazine "uns_LAU10_125mmpodx3";
			_vec addMagazine "uns_LAU10_125mmpodx3";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_MK82Launcher";
			_vec addweapon "uns_CBU75Launcher";
			_vec addweapon "Uns_CBU24Launcher";
		};
		if ( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_1030Rnd_M61";
			_vec addMagazine "uns_8Rnd_zuniAT";
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_AIM9Dx2";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_12Rnd_Napalm_500";
			_vec addMagazine "uns_12Rnd_mk82";
			_vec addMagazine "uns_18Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_AIM9DLauncher";
			_vec addweapon "Uns_NapalmLauncher_500";
			_vec addweapon "uns_MK82Launcher";
		};
/*
		if(_type == "uns_mig17_CAP") then 
		{
			_vec addMagazine "uns_40rnd_37mm_n37";
			_vec addweapon "uns_N37";
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "uns_S5_ub16_podx2";
			_vec addMagazine "uns_32Rnd_57mm";
			_vec addweapon "Uns_57mmLauncher";
			_vec addMagazine "Uns_2Rnd_fab500";
			_vec addweapon "Uns_BombLauncher_fab500";
		};
		if(_type == "uns_MIG19PM") then 
		{
			_vec addMagazine "uns_180rnd_30mm_nr30";
			_vec addweapon "uns_NR30x2";
			_vec addMagazine "uns_K13x2";
			_vec addweapon "uns_K13Launcher";
			_vec addMagazine "uns_S5_ub32_podx2";
			_vec addMagazine "uns_32Rnd_57mm";
			_vec addweapon "Uns_57mmLauncher";
			_vec addMagazine "uns_2Rnd_FAB250";
			_vec addweapon "Uns_BombLauncher_fab250";
		};
		if(_type == "uns_mig21_CAS") then 
		{
			_vec addMagazine "uns_30rnd_30mm_nr30";
			_vec addweapon "uns_NR30";
			_vec addMagazine "uns_K13x2";
			_vec addweapon "uns_K13Launcher";
			_vec addMagazine "Uns_2Rnd_fab250";
 			_vec addMagazine "uns_S5_ub32_podx1";
			_vec addMagazine "uns_32Rnd_57mm";
			_vec addweapon "uns_57mmLauncher";
			_vec addweapon "Uns_BombLauncher_fab250";
		};
		if(_type == "CSJ_C123") then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addweapon "uns_M61A1";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addMagazine "uns_84Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "Uns_4Rnd_Mk82_snake";
			_vec addweapon "uns_MK82SnakeLauncher";
			_vec addMagazine "Uns_2Rnd_CBU75";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addMagazine "Uns_2Rnd_CBU24";
			_vec addweapon "Uns_CBU24Launcher";
			_vec addMagazine "Uns_2Rnd_CBU32A";
			_vec addweapon "Uns_CBU32ALauncher";
			_vec addMagazine "Uns_2Rnd_CBU32B";
			_vec addweapon "Uns_CBU32BLauncher";
			_vec addMagazine "Uns_2Rnd_Mk84";
			_vec addweapon "Uns_Mk84Launcher";
			_vec addMagazine "uns_AGM45x4";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addMagazine "uns_2Rnd_BLU82";
			_vec addweapon "Uns_BLU82Launcher";
		};		
//helicopters
		if(_type == "UNS_AH1G") then 
		{
			_vec addMagazine "uns_M158_70mmpodx2";
			_vec addMagazine "uns_M75_GL_302rnd";
			_vec addweapon "uns_M75_cobra_GL";
			_vec addMagazine "uns_4000Rnd_762x51_M134";
			_vec addweapon "uns_M134";
			_vec addMagazine "uns_7Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "uns_7Rnd_WP_FFAR";
			_vec addweapon "uns_WPLauncher";
		};
//huey
		if(_type == "CSJ_UH1Gun") then 
		{
			_vec addMagazine "uns_M200_70mmpodx1";
			_vec addMagazine "uns_LAU10_125mmpodx1";
			_vec addMagazine "uns_19Rnd_FFAR";
			_vec addweapon "Uns_FFARLauncher";
			_vec addMagazine "uns_4Rnd_zuniFRAG";
			_vec addweapon "Uns_ZuniLauncher";
		};
*/
	};
	case 5://BMB
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_800Rnd_M39";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
 			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "uns_2rnd_F100_rackx3";
			_vec addMagazine "uns_1Rnd_F100_Fuel";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";

			_vec addweapon "uns_M39E";
			_vec addweapon "Uns_Mk82SnakeLauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then
		{
			_vec addMagazine "uns_1030Rnd_M61_HEI";
			_vec addMagazine "uns_8Rnd_zuniAT";
 			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_3rnd_F105_rackx6";
			_vec addMagazine "Uns_18Rnd_Mk82_snake";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_4rnd_rackx6";
			_vec addMagazine "uns_2Rnd_Mk84";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_22Rnd_pylonblank";
			_vec addMagazine "Uns_24Rnd_Mk82";
			_vec addMagazine "uns_1Rnd_pylonblank";

			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_MK82Launcher";
			_vec addweapon "Uns_Mk84Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_1200Rnd_Skyraider_4x20mm";
			_vec addMagazine "uns_SUU14_podx2";
 			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "Uns_1Rnd_Mk82_snake";
			_vec addMagazine "uns_A1j_1Rnd_Fuel";
 			_vec addMagazine "Uns_2Rnd_CBU22";
 			_vec addMagazine "Uns_2Rnd_CBU25";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "uns_MK82SnakeLauncher";
			_vec addweapon "Uns_CBU22Launcher";
			_vec addweapon "Uns_CBU25Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
 			_vec addMagazine "uns_2rnd_rackx3";
 			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "Uns_6Rnd_Mk81";
			_vec addMagazine "Uns_6Rnd_Mk81_snake";
			_vec addMagazine "uns_15Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_Mk81Launcher";
			_vec addweapon "Uns_Mk81SnakeLauncher";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
 			_vec addMagazine "Uns_2Rnd_Mk82_snake";
 			_vec addMagazine "uns_3rnd_rackx6";
			_vec addMagazine "Uns_18Rnd_Mk82";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "uns_MK82Launcher";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "uns_1rnd_rackx3";
			_vec addMagazine "uns_30Rnd_pylonblank";
			_vec addMagazine "Uns_15Rnd_Mk83";

			_vec addweapon "uns_MK83Launcher";
		};
		if ( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_515Rnd_M61";
			_vec addMagazine "uns_6rnd_rackx3";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_36Rnd_pylonblank";
			_vec addMagazine "Uns_18Rnd_Mk83";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_MK83Launcher";
		};
/*
		if(_type == "uns_mig17_CAP") then 
		{
			_vec addMagazine "uns_40rnd_37mm_n37";
			_vec addweapon "uns_N37";
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "Uns_4Rnd_fab250";
			_vec addweapon "Uns_BombLauncher_fab250";
		};
		if(_type == "uns_MIG19PM") then 
		{
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "uns_2Rnd_FAB500";
			_vec addweapon "Uns_BombLauncher_fab500";
			_vec addMagazine "uns_4Rnd_FAB250";
			_vec addweapon "Uns_BombLauncher_fab250";
		};
		if(_type == "uns_mig21_CAP") then 
		{
			_vec addMagazine "uns_30rnd_30mm_nr30";
			_vec addweapon "uns_nr30";
			_vec addMagazine "Uns_4Rnd_fab250";
			_vec addweapon "Uns_BombLauncher_fab250";
			_vec addMagazine "Uns_1Rnd_fab500";
			_vec addweapon "Uns_BombLauncher_fab500";
		};
		if(_type == "CSJ_C123") then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addweapon "uns_M61A1";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addMagazine "Uns_10Rnd_Mk81";
			_vec addweapon "Uns_Mk81Launcher"; 
			_vec addMagazine "Uns_8Rnd_Mk82";
			_vec addweapon "uns_MK82Launcher"; 
			_vec addMagazine "Uns_6Rnd_Mk83";
			_vec addweapon "Uns_Mk83Launcher";
			_vec addMagazine "Uns_4Rnd_Mk84";
			_vec addweapon "Uns_Mk84Launcher";
			_vec addMagazine "uns_2Rnd_BLU82";
			_vec addweapon "Uns_BLU82Launcher";
		};
//helicopters
		if(_type == "UNS_AH1G") then 
		{
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_M75_GL_302rnd";
			_vec addweapon "uns_M75_cobra_GL";
			_vec addMagazine "uns_4000Rnd_762x51_M134";
			_vec addweapon "uns_M134";
			_vec addMagazine "uns_8Rnd_zuniAT";
			_vec addweapon "Uns_ZuniLauncher";
		};
//huey
		if(_type == "CSJ_UH1Gun") then 
		{
			_vec addMagazine "Uns_2Rnd_Napalm_500";
			_vec addweapon "Uns_NapalmLauncher_500";
		};
*/
	};
	case 6://LGB
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_800Rnd_M39_HEI";
			_vec addMagazine "uns_8Rnd_zuniFRAG";
			_vec addMagazine "uns_LAU10_125mmpodx2";
 			_vec addMagazine "Uns_2Rnd_CBU75";
			_vec addMagazine "uns_2rnd_F100_rackx3";
			_vec addMagazine "uns_1Rnd_F100_Fuel";
			_vec addMagazine "Uns_6Rnd_CBU24";

			_vec addweapon "uns_M39E";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addweapon "uns_CBU24Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then
		{
			_vec addMagazine "uns_1030Rnd_M61_HEI";
			_vec addMagazine "Uns_4Rnd_GBU8";
			_vec addMagazine "uns_1rnd_F105_rackx6";
 			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_Mk83";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "Uns_Mk83Launcher";
			_vec addweapon "Uns_GBU8Launcher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_2rnd_rackx3";
			_vec addMagazine "Uns_4Rnd_GBU8";
			_vec addMagazine "uns_AIM9Ex2";
			_vec addMagazine "uns_10Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_Mk83";
			_vec addMagazine "uns_31Rnd_pylonblank";

			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "Uns_GBU8Launcher";
			_vec addweapon "Uns_Mk83Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_1200Rnd_Skyraider_4x20mm";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_SUU14_podx2";
 			_vec addMagazine "Uns_2Rnd_CBUM1A";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "uns_M200_70mmpodx2";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "Uns_5Rnd_CBU75";
 			_vec addMagazine "Uns_2Rnd_CBU14A";
			_vec addMagazine "Uns_2Rnd_CBU22";
			_vec addMagazine "Uns_2Rnd_CBU25";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "Uns_CBUM1ALauncher";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addweapon "Uns_CBU14ALauncher";
			_vec addweapon "Uns_CBU22Launcher";
			_vec addweapon "Uns_CBU25Launcher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
 			_vec addMagazine "uns_2rnd_rackx3";
 			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "Uns_12Rnd_CBU75";
			_vec addMagazine "uns_15Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_CBU75Launcher";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "Uns_2Rnd_CBU75";
			_vec addMagazine "uns_3rnd_rackx3";
			_vec addMagazine "uns_18Rnd_pylonblank";
 			_vec addMagazine "uns_LAU10_125mmpodx2";
 			_vec addMagazine "uns_2Rnd_pylonblank";
 			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "Uns_3Rnd_CBU24";
			_vec addMagazine "uns_4Rnd_zuniHE";
			_vec addMagazine "uns_8Rnd_zuniFRAG";
			_vec addMagazine "uns_4Rnd_zuniWP";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addweapon "Uns_CBU24Launcher";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "Uns_1Rnd_GBU8";
			_vec addMagazine "Uns_1Rnd_GBU8";
			_vec addMagazine "uns_AGM45x2";
			_vec addMagazine "uns_1rnd_rackx3";
			_vec addMagazine "uns_42Rnd_pylonblank";
			_vec addMagazine "Uns_1Rnd_GBU8";
			_vec addMagazine "Uns_1Rnd_GBU8";
 			_vec addMagazine "uns_ALQ110";

			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "Uns_GBU8Launcher";
		};
		if ( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_515Rnd_M61";
			_vec addMagazine "uns_6rnd_rackx6";
			_vec addMagazine "Uns_AIM9Ex2";
			_vec addMagazine "Uns_12Rnd_CBU24";
			_vec addMagazine "Uns_12Rnd_Mk82_snake";
			_vec addMagazine "Uns_12Rnd_CBU75";
			_vec addMagazine "uns_18Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_CBU24Launcher";
			_vec addweapon "uns_CBU75Launcher";
			_vec addweapon "uns_MK82SnakeLauncher";
		};
/*
		if(_type == "uns_mig17_CAP") then 
		{
			_vec addMagazine "uns_40rnd_37mm_n37";
			_vec addweapon "uns_N37";
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "Uns_2Rnd_kab500";
			_vec addweapon "Uns_BombLauncher_kab500";
			_vec addMagazine "Uns_2Rnd_kab250";
			_vec addweapon "Uns_BombLauncher_kab250";
		};
		if(_type == "uns_MIG19PM") then 
		{
			_vec addMagazine "uns_160Rnd_23mm_nr23";
			_vec addweapon "uns_nr23x2";
			_vec addMagazine "uns_2Rnd_kAB500";
			_vec addweapon "Uns_BombLauncher_kab500";
			_vec addMagazine "uns_4Rnd_kAB250";
			_vec addweapon "Uns_BombLauncher_kab250";
		};
		if(_type == "uns_mig21_CAP") then 
		{
			_vec addMagazine "uns_30rnd_30mm_nr30";
			_vec addweapon "uns_NR30";
			_vec addMagazine "uns_32Rnd_57mm";
			_vec addweapon "uns_57mmLauncher";
			_vec addMagazine "Uns_2Rnd_kab250";
			_vec addweapon "Uns_BombLauncher_kab250";
			_vec addMagazine "Uns_2Rnd_kab500";
			_vec addweapon "Uns_BombLauncher_kab500";
			_vec addMagazine "uns_S5_ub32_podx1";
		};
		if(_type == "CSJ_C123") then 
		{
			_vec addMagazine "uns_2060Rnd_M61_HEI";
			_vec addweapon "uns_M61A1";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addMagazine "uns_28Rnd_WP_FFAR";
			_vec addweapon "uns_WPLauncher";
			_vec addMagazine "Uns_12Rnd_Napalm_750";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addMagazine "Uns_12Rnd_CBU75";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addMagazine "Uns_6Rnd_CBU24";
			_vec addweapon "Uns_CBU24Launcher";
			_vec addMagazine "Uns_6Rnd_CBU32A";
			_vec addweapon "Uns_CBU32ALauncher";
			_vec addMagazine "Uns_6Rnd_CBU32B";
			_vec addweapon "Uns_CBU32BLauncher";
			_vec addMagazine "uns_2Rnd_BLU82";
			_vec addweapon "Uns_BLU82Launcher";
		};		
//helicopters
		if(_type == "UNS_AH1G") then 
		{
			_vec addMagazine "uns_LAU10_125mmpodx2";
			_vec addMagazine "uns_M75_GL_150rnd";
			_vec addweapon "uns_M75_cobra_GL";
			_vec addMagazine "uns_4000Rnd_762x51_M134";
			_vec addweapon "uns_M134";
			_vec addMagazine "uns_8Rnd_zuniFRAG";
			_vec addweapon "Uns_ZuniLauncher";
		};
//huey
		if(_type == "CSJ_UH1Gun") then 
		{
			_vec addMagazine "uns_LAU10_125mmpodx1";
			_vec addMagazine "uns_4Rnd_zuniWP";
			_vec addweapon "Uns_ZuniLauncher";
			_vec addMagazine "Uns_1Rnd_CBU24";
			_vec addweapon "Uns_CBU24Launcher";
		};
*/
	};
	case 7://SEAD
	{
		if(_type == "uns_f100b_MR") then 
		{
			_vec addMagazine "uns_800Rnd_M39";
			_vec addMagazine "uns_38Rnd_FFAR";
			_vec addMagazine "uns_M200_70mmpodx2";
 			_vec addMagazine "uns_2Rnd_F100_Fuel";
			_vec addMagazine "uns_AGM45x2";
			_vec addMagazine "uns_7Rnd_pylonblank";

			_vec addweapon "uns_M39E";
			_vec addweapon "Uns_FFARLauncher";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if( (_type == "uns_f105D_MR") || (_type == "uns_f105F_MR") ) then
		{
			_vec addMagazine "uns_1030Rnd_M61";
			_vec addMagazine "uns_AGM45x2";
			if (_type == "uns_f105F_MR") then 
			{	
				_vec addMagazine "uns_AGM78x2";
			} else
			{
				_vec addMagazine "uns_AGM12x2";
			};
			_vec addMagazine "uns_1rnd_F105_rackx6";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_6Rnd_CBU75";
			_vec addMagazine "uns_9Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AGM45_Launcher";
			if (_type == "uns_f105F_MR") then 
			{	
				_vec addweapon "uns_AGM78_Launcher";
			} else
			{
				_vec addweapon "uns_AGM12_Launcher";
			};
			_vec addweapon "Uns_CBU75Launcher";
		};
		if ( (_type == "UNS_F111_MR") || (_type == "UNS_F111_D_MR") )then 
		{
			_vec addMagazine "uns_AGM45x4";
			_vec addMagazine "Uns_2Rnd_GBU8";
			_vec addMagazine "uns_AIM9Ex4";
			_vec addMagazine "uns_45Rnd_pylonblank";

			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "Uns_GBU8Launcher";
			_vec addweapon "uns_AGM45_Launcher";
		};
		if(_type == "uns_A1J_MR") then 
		{
			_vec addMagazine "Uns_1200Rnd_Skyraider_4x20mm";
			_vec addMagazine "uns_14Rnd_WP_FFAR";
			_vec addMagazine "uns_LAU59_70mmpodx2";
 			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "Uns_2Rnd_CBU32B";
			_vec addMagazine "Uns_2Rnd_CBU32A";
			_vec addMagazine "uns_SUU14_podx2";
			_vec addMagazine "Uns_4Rnd_CBU24";
 			_vec addMagazine "uns_A1j_1Rnd_Fuel";
			_vec addMagazine "Uns_4Rnd_CBU14A";

			_vec addweapon "Uns_M2_4x20mm";
			_vec addweapon "uns_WPLauncher";
			_vec addweapon "Uns_CBU24Launcher";
			_vec addweapon "Uns_CBU32BLauncher";
			_vec addweapon "Uns_CBU32ALauncher";
			_vec addweapon "Uns_CBU14ALauncher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A4B_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_AGM45x2";
			_vec addMagazine "uns_1Rnd_A4_fueltank";
			_vec addMagazine "uns_27Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A4E_skyhawk_MR") then 
		{
			_vec addMagazine "uns_200Rnd_20mm_Mk12";
			_vec addMagazine "uns_AGM45x4";
			_vec addMagazine "uns_1Rnd_A4_fueltank";
			_vec addMagazine "uns_27Rnd_pylonblank";

			_vec addweapon "uns_20mm_Cannon_mk12";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "uns_FuelTank_Launcher";
		};
		if(_type == "uns_A6_Intruder_MR") then 
		{
			_vec addMagazine "uns_AGM45x2";
			_vec addMagazine "uns_2rnd_rackx6";
			_vec addMagazine "uns_1rnd_rackx6";
			_vec addMagazine "uns_12Rnd_pylonblank";
			_vec addMagazine "Uns_4Rnd_CBU24";
			_vec addMagazine "Uns_2Rnd_CBU32A";
			_vec addMagazine "Uns_4Rnd_CBU75";
			_vec addMagazine "Uns_2Rnd_CBU32B";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "uns_1Rnd_pylonblank";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
			_vec addMagazine "Uns_1Rnd_Napalm_750";
 			_vec addMagazine "uns_15Rnd_pylonblank";

			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "Uns_NapalmLauncher_750";
			_vec addweapon "Uns_CBU75Launcher";
			_vec addweapon "Uns_CBU32ALauncher";
			_vec addweapon "Uns_CBU32BLauncher";
		};
		if ( (_type == "uns_A7_MR") || (_type == "uns_A7N_MR") ) then 
		{
			_vec addMagazine "uns_515Rnd_M61";
			_vec addMagazine "uns_AGM45x4";
			_vec addMagazine "uns_AGM12x2";
			_vec addMagazine "Uns_AIM9Ex2";
			_vec addMagazine "uns_54Rnd_pylonblank";

			_vec addweapon "uns_M61A1";
			_vec addweapon "uns_AIM9ELauncher";
			_vec addweapon "uns_AGM45_Launcher";
			_vec addweapon "uns_AGM12_Launcher";
		};		
	};
  };
};
