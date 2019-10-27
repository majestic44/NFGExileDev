/* 
 * This file contains config parameters and a function call to start the civilian script.
 * The parameters in this file may be edited by the mission developer.
 *
 * See file Engima\Civilians\Documentation.txt for documentation and a full reference of 
 * how to customize and use Engima's Civilians.
 */
 
private ["_parameters"];

// Set civilian parameters.
_parameters = [
	["UNIT_CLASSES", ["uns_civilian1", "uns_civilian1_b1", "uns_civilian1_b2", "uns_civilian2", "uns_civilian2_b1", "uns_civilian2_b2", "uns_civilian3", "uns_civilian3_b1", "uns_civilian3_b2", "uns_civilian4", "uns_civilian4_b1", "uns_civilian4_b2"]],
	["UNITS_PER_BUILDING", 0.4],
	["MAX_GROUPS_COUNT", 50],
	["MIN_SPAWN_DISTANCE", 50],
	["MAX_SPAWN_DISTANCE", 300],
	["BLACKLIST_MARKERS", []],
	["HIDE_BLACKLIST_MARKERS", true],
	["ON_UNIT_SPAWNED_CALLBACK", {}],
	["ON_UNIT_REMOVE_CALLBACK", { true }],
	["DEBUG", false]
];

// Start the script
_parameters spawn ENGIMA_CIVILIANS_StartCivilians;
