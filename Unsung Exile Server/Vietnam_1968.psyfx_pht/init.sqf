// Author: SSG Anhor
// Usage only with explicit permission of the author!

call compile preprocessFileLineNumbers "Engima\Civilians\Init.sqf";	//Civilians

[] execVM "Custom\EnigmaRevive\init.sqf";							//Revive

[] execVM "R3F_LOG\init.sqf";										//R3F Logistic

[] execVM "time.sqf";												//accelerated time

//First Person
if (isServer) then {
AP_FPD_Mission_Settings = [
0.3,						//Check period. In seconds.
true,						//Force first person driver in Land vehicles. May be "true" or "false".
false,						//Force first person driver in Ships. May be "true" or "false".
false						//Force first person driver in Air vehicles. May be "true" or "false".
];
publicVariable "AP_FPD_Mission_Settings";
};

//Rappel Self
AR_SUPPORTED_VEHICLES_OVERRIDE = [ "uns_UH1D_m60", "uns_h21c_mg", "uns_H13_transport_Army", "uns_ch34_army_M60", "uns_ch53d_m2_usmc", "uns_H13_medevac_Army", "uns_ch34_army", "uns_h21c", "uns_uh1D_med", "uns_ch47a_medevac", "uns_oh6_transport", "uns_H13_amphib_Army" ];

AR_MAX_RAPPEL_POINTS_OVERRIDE = 4;