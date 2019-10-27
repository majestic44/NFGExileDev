ASL_Show_Repair_Options_Menu_Array = 
[
	["Repair Menu",false],
	["Repair Body",[0],"",-5,[["expression","['repairBoatHull'] Call salvage_setup"]],"1","1"],
	["Repair Fuel Tank",[0],"",-5,[["expression","['repairFuelTank'] Call salvage_setup"]],"1","1"],
	["Repair Engine",[0],"",-5,[["expression","['repairEngine'] Call salvage_setup"]],"1","1"],
	["Salvage Body",[0],"",-5,[["expression","['salvageBoatHull'] Call salvage_setup"]],"1","1"],
	["Salvage Fuel Tank",[0],"",-5,[["expression","['salvageFuelTank'] Call salvage_setup"]],"1","1"],
	["Salvage Engine",[0],"",-5,[["expression","['salvageEngine'] Call salvage_setup"]],"1","1"]
];
showCommandingMenu "";
showCommandingMenu "#USER:ASL_Show_Repair_Options_Menu_Array";

salvage_setup = {
_vehicle = cursorObject;
_action = _this select 0;
[_action,_vehicle] execVM 'Custom\advancedRepair\Bones_fnc_salvageAndRepair.sqf';
};