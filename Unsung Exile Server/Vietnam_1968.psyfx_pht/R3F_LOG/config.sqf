/*
 MAIN CONFIGURATION FILE
  
 English and French comments
  
 (EN)
 This file contains the configuration variables of the logistics system.
 For the configuration of the creation factory, see the file "config_creation_factory.sqf".
 IMPORTANT NOTE : when a logistics feature is given to an object/vehicle class name, all the classes which inherit
                  of the parent/generic class (according to the CfgVehicles) will also have this feature.
                  CfgVehicles tree view example : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
*/

/*
 DISABLE LOGISTICS ON OBJECTS BY DEFAULT
  
 (EN)
 Define if objects and vehicles have logistics features by default,
 or if it must be allowed explicitely on specific objects/vehicles.
  
 If false : all objects are enabled according to the class names listed in this configuration file
            You can disable some objects with : object setVariable ["R3F_LOG_disabled", true];
 If true :  all objects are disabled by default
            You can enable some objects with : object setVariable ["R3F_LOG_disabled", false];
*/

R3F_LOG_CFG_disabled_by_default = false;

/*
 LOCK THE LOGISTICS FEATURES TO SIDE, FACTION OR PLAYER
 
 (EN)
 Define the lock mode of the logistics features for an object.
 An object can be locked to the a side, faction, a player (respawn) or a unit (life).
 If the object is locked, the player can unlock it according to the
 value of the config variable R3F_LOG_CFG_unlock_objects_timer.
 
 If "none" : no lock features, everyone can used the logistics features.
 If "side" : the object is locked to the last side which interacts with it.
 If "faction" : the object is locked to the last faction which interacts with it.
 If "player" : the object is locked to the last player which interacts with it. The lock is transmitted after respawn.
 If "unit" : the object is locked to the last player which interacts with it. The lock is lost when the unit dies.
 
 Note : for military objects (not civilian), the lock is initialized to the object's side.
 
 See also the config variable R3F_LOG_CFG_unlock_objects_timer.
*/

R3F_LOG_CFG_lock_objects_mode = "none";

/*
 COUNTDOWN TO UNLOCK AN OBJECT
 
 Define the countdown duration (in seconds) to unlock a locked object.
 Set to -1 to deny the unlock of objects.
 See also the config variable R3F_LOG_CFG_lock_objects_mode.
*/

R3F_LOG_CFG_unlock_objects_timer = -1;

/*
 ALLOW NO GRAVITY OVER GROUND
 
 Define if movable objects with no gravity simulation can be set in height over the ground (no ground contact).
 The no gravity objects corresponds to most of decoration and constructions items.
*/

R3F_LOG_CFG_no_gravity_objects_can_be_set_in_height_over_ground = true;

/*
 LANGUAGE
 
 Automatic language selection according to the game language.
 New languages can be easily added (read below).
*/

R3F_LOG_CFG_language = switch (language) do
{
    case "English":{"en"};
    case "French":{"fr"};
	case "Deutsch":{"de"};
       
    default {"en"}; // If language is not supported, use English
};

/*
 CONDITION TO ALLOW LOGISTICS
 
 (EN)
 This variable allow to set a dynamic SQF condition to allow/deny all logistics features only on specific clients.
 The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 For example you can allow logistics only on few clients having a known game ID by setting the variable to :
 "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 Or only for the server admin : "serverCommandAvailable "#kick"""
 The condition is evaluted in real time, so it can use condition depending on the mission progress : "alive officer && taskState task1 == ""Succeeded"""
 Or to deny logistics in a circular area defined by a marker : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 Note that quotes of the strings inside the string condition must be doubled.
 Note : if the condition depends of the aimed objects/vehicle, you can use the command cursorTarget
 To allow the logistics to everyone, just set the condition to "true".
*/

R3F_LOG_CFG_string_condition_allow_logistics_on_this_client = "true";

/*
 CONDITION TO ALLOW CREATION FACTORY
 
 (EN)
 This variable allow to set a dynamic SQF condition to allow/deny the access to the creation factory only on specific clients.
 The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 For example you can allow the creation factory only on few clients having a known game ID by setting the variable to :
 "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 Or only for the server admin : "serverCommandAvailable "#kick"""
 Note that quotes of the strings inside the string condition must be doubled.
 Note : if the condition depends of the aimed objects/véhicule, you can use the command cursorTarget
 Note also that the condition is evaluted in real time, so it can use condition depending on the mission progress :
 "alive officer && taskState task1 == ""Succeeded"""
 To allow the creation factory to everyone, just set the condition to "true".
*/

R3F_LOG_CFG_string_condition_allow_creation_factory_on_this_client = "false";

/*
 ********************************************************************************************
 * BELOW IS THE CLASS NAMES CONFIGURATION / CI-DESSOUS LA CONFIGURATION DES NOMS DE CLASSES *
 ********************************************************************************************
 
 (EN)
 There are two ways to manage new objects with the logistics system. The first one is to add these objects in the
 following appropriate lists. The second one is to create a new external file in the /addons_config/ directory,
 based on /addons_config/TEMPLATE.sqf, and to add a #include below to.
 The first method is better to add/fix only some various class names.
 The second method is better to take into account an additional addon.
 
 These variables are based on the inheritance principle according to the CfgVehicles tree.
 It means that a features accorded to a class name, is also accorded to all child classes.
 Inheritance tree view : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
*/

#include "addons_config\Exile.sqf"

/****** TOW WITH VEHICLE / REMORQUER AVEC VEHICULE ******/

/*
 List of class names of ground vehicles which can tow objects.
*/

R3F_LOG_CFG_can_tow = R3F_LOG_CFG_can_tow +
[
	"pook_URAL_UTILITY_NVA",
	"pook_P12_NVA",
	"uns_M35A2",
	"uns_M35A2_Open",
	"uns_M35A2_fueltanker",
	"uns_M35A2_ammo",
	"uns_M35A2_repair",
	"uns_Type55",
	"uns_xm706",
	"uns_xm706e1",
	"uns_M577_amb",
	"uns_Type55_LMG",
	"uns_Type55_MG",
	"uns_Type55_patrol",
	"uns_BTR152_DSHK",
	"uns_nvatruck_mg",
	"uns_M113_30cal",
	"uns_M113_M60",
	"uns_M113_M2",
	"uns_M113_M134",
	"uns_M113_ENG",
	"uns_zil157",
	"uns_zil157_repair",
	"uns_nvatruck_repair",
	"uns_nvatruck_mg",
	"uns_nvatruck",
	"uns_nvatruck_open",
	"BTR40_TK_INS_EP1",
	"uns_Type63_mg",
	"TowingTractor"
];

/*
 List of class names of objects which can be towed.
*/

R3F_LOG_CFG_can_be_towed = R3F_LOG_CFG_can_be_towed +
[
	"uns_m274",
	"uns_m274_m60",
	"UNS_Zodiac_W",
	"UNS_PATROL_BOAT_NVA",
	"uns_pbr",
	"uns_pbr_mk18",
	"Exile_Car_OldTractor_Red",
	"uns_m37b1",
	"uns_willys",
	"uns_willys_2",
	"uns_willys_2_m60",
	"uns_willys_2_m1919",
	"uns_willys_2_usmp",
	"uns_m37b1_m1919",
	"pook_URAL_UTILITY_NVA",
	"pook_P12_NVA",
	"uns_M35A2",
	"uns_M35A2_Open",
	"uns_M35A2_fueltanker",
	"uns_M35A2_ammo",
	"uns_M35A2_repair",
	"uns_Type55",
	"uns_xm706",
	"uns_xm706e1",
	"uns_Type55_LMG",
	"uns_Type55_MG",
	"uns_Type55_patrol",
	"uns_BTR152_DSHK",
	"uns_M113_30cal",
	"uns_M113_M60",
	"uns_M113_M2",
	"uns_M113_M134",
	"uns_M113_ENG",
	"uns_M577_amb",
	"uns_zil157",
	"uns_zil157_repair",
	"uns_nvatruck_repair",
	"uns_nvatruck_mg",
	"uns_nvatruck",
	"uns_nvatruck_open",
	"BTR40_TK_INS_EP1",
	"uns_Type63_mg",
	"Uns_M55_Quad",
	"uns_UH1D_m60",
	"uns_H13_transport_Army",
	"uns_H13_gunship_Army",
	"uns_H13_medevac_Army",
	"uns_uh1D_med",
	"uns_oh6_transport",
	"uns_ch34_army",
	"uns_h21c",
	"uns_ch47a_medevac",
	"uns_ch34_army_M60",
	"uns_h21c_mg"
];


/****** LIFT WITH VEHICLE / HELIPORTER AVEC VEHICULE ******/

/*
 List of class names of helicopters which can lift objects.
*/

R3F_LOG_CFG_can_lift = R3F_LOG_CFG_can_lift +
[
    "uns_ch34_army",
	"uns_h21c",
	"uns_ch47a_medevac",
	"uns_ch34_army_M60",
	"uns_h21c_mg",
	"uns_Mi8TV_VPAF_MG",
	"uns_ch47_m60_army",
	"uns_ch53d_m2_usmc"
];

/*
 List of class names of objects which can be lifted.
*/

R3F_LOG_CFG_can_be_lifted = R3F_LOG_CFG_can_be_lifted +
[     
	"uns_m274",
	"uns_m274_m60",
	"UNS_Zodiac_W",
	"UNS_PATROL_BOAT_NVA",
	"uns_pbr",
	"uns_pbr_mk18",
	"Exile_Car_OldTractor_Red",
	"uns_m37b1",
	"uns_willys",
	"uns_willys_2",
	"uns_willys_2_m60",
	"uns_willys_2_m1919",
	"uns_willys_2_usmp",
	"uns_m37b1_m1919",
	"pook_URAL_UTILITY_NVA",
	"pook_P12_NVA",
	"uns_M35A2",
	"uns_M35A2_Open",
	"uns_M35A2_fueltanker",
	"uns_M35A2_ammo",
	"uns_M35A2_repair",
	"uns_Type55",
	"uns_xm706",
	"uns_xm706e1",
	"uns_Type55_LMG",
	"uns_Type55_MG",
	"uns_Type55_patrol",
	"uns_BTR152_DSHK",
	"uns_M113_30cal",
	"uns_M113_M60",
	"uns_M113_M2",
	"uns_M113_M134",
	"uns_M113_ENG",
	"uns_M577_amb",
	"uns_zil157",
	"uns_zil157_repair",
	"uns_nvatruck_repair",
	"uns_nvatruck_mg",
	"uns_nvatruck",
	"uns_nvatruck_open",
	"uns_Type63_mg",
	"BTR40_TK_INS_EP1",
	"Uns_M114_artillery",
	"Uns_M55_Quad",
	"uns_UH1D_m60",
	"uns_H13_transport_Army",
	"uns_H13_gunship_Army",
	"uns_H13_medevac_Army",
	"uns_uh1D_med",
	"uns_oh6_transport",
	"uns_ch34_army",
	"uns_h21c",
	"uns_ch47a_medevac",
	"uns_ch34_army_M60",
	"uns_h21c_mg",
	"uns_Mi8TV_VPAF_MG",
	"uns_ach47_m134",
	"uns_ch53d_m2_usmc",
	"TowingTractor"
];


/****** LOAD IN VEHICLE / CHARGER DANS LE VEHICULE ******/

/*
 (EN)
 This section uses a numeric quantification of capacity and cost of the objets.
 For example, in a vehicle has a capacity of 100, we will be able to load in 5 objects costing 20 capacity units.
 The capacity doesn't represent a real volume or weight, but a choice made for gameplay.
*/

/*
 List of class names of vehicles or cargo objects which can transport objects.
 The second element of the nested arrays is the load capacity (in relation with the capacity cost of the objects).
*/

R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo +
[
	["uns_ch34_army", 1000],
	["uns_UH1D_m60", 300],
	["uns_uh1D_med", 300],
	["uns_h21c", 1000],
	["uns_ch47a_medevac", 1500],
	["uns_ch34_army_M60", 1000],
	["uns_h21c_mg", 1000],
	["uns_Mi8TV_VPAF_MG", 1500],
	["uns_ch47_m60_army", 1500],
	["uns_ch53d_m2_usmc", 1500],
	["uns_zil157", 1000],
	["uns_nvatruck_mg", 1000],
	["uns_zil157_repair", 1000],
    ["uns_nvatruck_repair", 1000],
    ["uns_M35A2", 1000],
	["uns_M35A2_Open", 1000],
    ["uns_pbr", 800],
	["uns_pbr_mk18", 800],
    ["uns_PBR_M10", 800]
];

/*
 List of class names of objects which can be loaded in transport vehicle/cargo.
 The second element of the nested arrays is the cost capacity (in relation with the capacity of the vehicles).
*/

R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
	["uns_m274", 300],
	["uns_m274_m60", 300],
	["uns_willys_2", 500],
	["uns_willys", 500],
	["uns_m37b1", 800],
	["uns_m37b1_m1919", 800],
	["uns_willys_2_usmp", 500],
    ["uns_willys_2_m60", 500],
	["UNS_Zodiac_W", 500],
    ["uns_willys_2_m1919", 500]
];

/****** MOVABLE-BY-PLAYER OBJECTS / OBJETS DEPLACABLES PAR LE JOUEUR ******/

//List of class names of objects which can be carried and moved by a player.

R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
    // Here Comes that stuff in what a player can Move 
    // e.g. : "CargoNet_01_box_F", "Box_NATO_AmmoVeh_F"
];
