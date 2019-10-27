/*
 * Created by SSG Anhor
 * for www.znation.rocks
 * NO USE WITHOUT PERMISSION OF THE AUTHOR!
 */

if (!hasInterface || isServer) exitWith {};

//Advanced repair
Bones_fnc_salvageAndRepairMenuHelo = compileFinal preprocessFileLineNumbers "custom\advancedRepair\Bones_fnc_salvageAndRepairMenuHelo.sqf";
Bones_fnc_salvageAndRepairMenuCar = compileFinal preprocessFileLineNumbers "custom\advancedRepair\Bones_fnc_salvageAndRepairMenuCar.sqf";
Bones_fnc_salvageAndRepairMenuTank = compileFinal preprocessFileLineNumbers "custom\advancedRepair\Bones_fnc_salvageAndRepairMenuTank.sqf";
Bones_fnc_salvageAndRepairMenuBoat = compileFinal preprocessFileLineNumbers "custom\advancedRepair\Bones_fnc_salvageAndRepairMenuBoat.sqf";

private _npcs = [
//MAIN TRADER
["Exile_Trader_Armory", ["InBaseMoves_patrolling2"], "Exile_Trader_Armory", "AsianHead_A3_05", [["uns_m16A1_camo","","","",["uns_30Rnd_556x45_Stanag",28],[],""],[],[],["UNS_SOG_BDU_BK",[["uns_30Rnd_556x45_Stanag",1,28]]],["UNS_M1956_A1",[["uns_30Rnd_556x45_Stanag",1,28]]],[],"UNS_Beret_MRF","G_Aviator",[],["","","","","",""]], [6960.23, 10168.4, 34.3769], [-0.270785, -0.96264, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["InBaseMoves_patrolling1"], "Exile_Trader_Hardware", "AsianHead_A3_04", [["uns_m16A1_camo","","","",["uns_30Rnd_556x45_Stanag",28],[],""],[],[],["UNS_SOG_BDU_BK",[["uns_30Rnd_556x45_Stanag",2,28]]],["UNS_M1956_A1",[["uns_30Rnd_556x45_Stanag",1,28]]],[],"UNS_Beret_MRF","G_Aviator",[],["","","","","",""]], [6960.71, 10163.9, 34.3734], [-0.986271, -0.165136, 0], [0, 0, 1]],
["Exile_Trader_Office", ["InBaseMoves_HandsBehindBack1"], "Exile_Trader_Office", "AsianHead_A3_03", [[],[],["uns_bhp","","","",["uns_13Rnd_hp",13],[],""],["UNS_SOG_BDU_BK",[["uns_13Rnd_hp",3,13]]],["UNS_M1956_A1",[]],[],"UNS_Beret_5LTCOL","G_Aviator",[],["","","","","",""]], [6987.15, 10165.8, 34.614], [-0.999761, -0.0218698, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"], "Exile_Trader_Vehicle", "AsianHead_A3_03", [[],[],["uns_bhp","","","",["uns_13Rnd_hp",13],[],""],["UNS_SOG_BDU_BK",[["uns_13Rnd_hp",3,13]]],["UNS_M1956_A1",[]],[],"UNS_HP_Helmet_11AC","G_Aviator",[],["","","","","",""]], [6972.67, 10167.2, 34.7366], [0.00553787, -0.999985, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["Acts_CivilListening_2"], "Exile_Trader_WasteDump", "AsianHead_A3_02", [[],[],[],["UNS_VC_S",[]],[],["UNS_VC_R1",[]],"UNS_Conehat_VC","UNS_Scarf_Red",[],["","","","","",""]], [6996.2, 10155, 34.6658], [0.999355, -0.0358967, 0], [0, 0, 1]],
["Exile_Guard_01", ["InBaseMoves_patrolling2"], "Exile_Guard_01", "AsianHead_A3_02", [["uns_m60","","","",["uns_m60mag",100],[],""],[],[],["UNS_SOG_BDU_BK",[]],["UNS_M1956_A11",[]],[],"UNS_Headband_BK","G_Aviator",[],["","","","","",""]], [6957.56, 10134.5, 34.3164], [0.00589907, -0.999983, 0], [0, 0, 1]],
["Exile_Guard_02", ["InBaseMoves_patrolling1"], "Exile_Guard_02", "AsianHead_A3_05", [["uns_m16A1_camo","","","",["uns_30Rnd_556x45_Stanag",28],[],""],[],[],["UNS_SOG_BDU_BK",[["uns_30Rnd_556x45_Stanag",3,28]]],["UNS_M1956_A10",[]],[],"UNS_Headband_BK","G_Aviator",[],["","","","","",""]], [6987.31, 10134.6, 34.5446], [0.00408401, -0.999992, 0], [0, 0, 1]],
//AIRCRAFT TRADER
["Exile_Trader_Aircraft", ["InBaseMoves_table1"], "Exile_Trader_Aircraft", "AsianHead_A3_06", [[],[],["uns_bhp","","","",["uns_13Rnd_hp",13],[],""],["UNS_Pilot_BDU",[["uns_13Rnd_hp",3,13]]],["UNS_M1956_A1",[]],[],"UNS_HP_Helmet_1MD","G_Aviator",[],["","","","","",""]], [6998.76, 7455.79, 16.6631], [0.0159342, -0.999873, 0], [0, 0, 1]],
//BOAT TRADER
["Exile_Trader_Boat", ["HubSittingChairUB_idle1","HubSittingChairUB_idle2","HubSittingChairUB_idle3","HubSittingChairUB_move1"], "Exile_Trader_Boat", "AsianHead_A3_03", [["uns_m60","","","",[],[],""],[],[],["UNS_SOG_BDU_BK",[]],["UNS_M1956_A11",[]],[],"UNS_Beret_AVM","G_Aviator",[],["","","","","",""]], [5535.46, 5944.83, 1.11695], [0.718629, 0.695394, 0], [0, 0, 1]],
//ROULETTE
["Exile_Trader_RussianRoulette", ["HubBriefing_loop","HubBriefing_scratch","HubBriefing_stretch","HubBriefing_think"], "Exile_Trader_RussianRoulette", "AsianHead_A3_07", [[],[],["uns_bhp","","","",["uns_13Rnd_hp",13],[],""],["UNS_VC_B",[["uns_13Rnd_hp",2,13]]],["UNS_M1956_A1",[["uns_13Rnd_hp",1,13]]],[],"UNS_Conehat_VC","UNS_Scarf_Red",[],["","","","","",""]], [10271.4, 12931.1, 60.6282], [0.675719, 0.737159, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;

waitUntil {alive player};

[] execVM "3rdViewRestrictions.sqf";

_Player = _this select 0;

_Player execVM "GF_Ambient_Environment_Sounds\GF_AES_init.sqf";