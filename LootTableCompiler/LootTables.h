/*
	________   _______ _      ______    __  __  ____  _____
	|  ____\ \ / /_   _| |    |  ____|  |  \/  |/ __ \|  __ \
	| |__   \ V /  | | | |    | |__     | \  / | |  | | |  | |
	|  __|   > <   | | | |    |  __|    | |\/| | |  | | |  | |
	| |____ / . \ _| |_| |____| |____   | |  | | |__| | |__| |
	|______/_/ \_\_____|______|______|  |_|  |_|\____/|_____/

  	^ Leet ASCII art. For documentation, refer to:

  	http://www.exilemod.com/wiki/developer-toolbox/loot-table-compiler/
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass
1, Restraints
3, PistolAttachments
3, ShotgunAmmo
3, USattachments
//4, Shotguns
4, USpistols
5, USammo
5, VcClothing
5, VcBackpacks
5, VcVests
5, VcHeadgear
8, VCpistols
8, VCammo
10, Chemlights
10, Drinks
10, RoadFlares
28, Food
30, Trash

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass
1, Restraints
3, USattachments
3, VCattachments
3, VCrifles
3, VCammo
//3, ShotgunAmmo
//4, Shotguns
4, USrifles
4, USammo
5, CivilianVests
5, USpistols
//10, Chemlights
10, Drinks
10, RoadFlares
28, Food
30, Trash

///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop
1, USattachments
//1, ShotgunAmmo
1, USammo
1, USlmg
2, USPistolAmmo
3, IndustrialItems
3, MedicalItems
3, Restraints
//4, Shotguns
4, SmokeGrenades
5, Chemlights
5, USrifles
5, RoadFlares
5, VCrifles
5, VCammo
10, USPistols
15, Drinks
15, Food
20, Trash

///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial
1, Restraints
3, RoadFlares
5, Vehicle
6, Trash
8, IndustrialItems

///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> Factories
1, Electronics
4, Trash
5, IndustrialItems

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService
1, Restraints
3, RoadFlares
5, IndustrialItems
6, Trash
8, Vehicle

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military
5, USpistols
6, USrifles
6, USlmg
5, USsnipers
5, USattachments
6, USammo
5, UStraps
5, HandGrenades
5, Explosives

//1, DLCGhillies
//1, Ghillies
//1, Rebreathers
//2, Bipods
//2, DLCAmmo
//2, DLCOptics
//2, DLCSupressor
5, MedicalItems
5, Restraints
//3, DLCRifles
//3, DLCVests
5, MilitaryBackpacks
5, MilitaryHeadgear
5, MilitaryVests
5, SmokeGrenades
//3, UGLFlares
//3, UGLSmokes
5, MilitaryClothing
5, Trash

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc. (Does not spawn on Altis!)
///////////////////////////////////////////////////////////////////////////////
> Medical
3, Trash
10, MedicalItems

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist
//1, DLCAmmo
//1, DLCOptics
//1, DLCSupressor
1, USammo
1, USattachments
2, Explosives
2, HandGrenades
2, MedicalItems
2, Restraints
//3, DLCGhillies
//3, Ghillies
4, MilitaryBackpacks
4, MilitaryHeadgear
8, DLCRifles
8, USsnipers

///////////////////////////////////////////////////////////////////////////////
// Ghost Hotel Buildings
///////////////////////////////////////////////////////////////////////////////
> Radiation
//1, DLCAmmo
//1, DLCOptics
//1, DLCSupressor
1, USammo
1, USattachments
2, EpicWeapons
2, HandGrenades
2, MedicalItems
2, Restraints
//3, DLCGhillies
//3, Ghillies
5, Explosives
5, MilitaryBackpacks
5, MilitaryHeadgear
//5, DLCRifles
5, USsnipers
