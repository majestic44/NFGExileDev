private ["_partsNeeded","_itemsNeeded","_partsToActOn","_partToActOn","_brokenParts","_repairableParts","_salvageableParts","_itemAction","_equippedMagazines","_vehicle","_action","_usedArray","_missingArray","_duration","_progress","_sleepDuration","_startTime","_label"];

_partsNeeded = [];
_itemsNeeded = [];
_partsToActOn = [];
_partToActOn = [];
_repairableParts =[];
_salvageableParts =[];
_equippedMagazines = magazines player;
_vehicle = _this select 1;
_action = _this select 0;
_usedArray = [];
_missingArray = [];

if (ExileClientActionDelayShown) exitWith { false };
ExileClientActionDelayShown = true;
ExileClientActionDelayAbort = false;

//Check if repairable
if (!local _vehicle) exitwith
{
	["InfoTitleAndText", ["Salvage/Repair Info", "Get in driver seat first"]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
};
if (ExileClientPlayerIsInCombat) exitWith
{
	["ErrorTitleOnly", ["You are in combat!"]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
};
if (vehicle player isEqualTo _vehicle) exitWith 
{
	["ErrorTitleOnly", ["Are you serious?"]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
};
if (ExilePlayerInSafezone) exitWith 
{
	["ErrorTitleOnly", ["Leave Safezone First!"]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
};

//Get the attributes for the type of repair

//////////////////////////////////////////////////////////////////////Helicopter

if (_action == 'repairHeloHull') then
{
_partsToActOn = ["HitHull","HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitRGlass","HitLGlass","HitLight","HitBatteries","HitMissiles","HitHydraulics","HitTransmission","HitAvionics","HitGear","HitHStabilizerL1","HitHStabilizerR1","HitVStabilizer1","HitTail","HitPitotTube","HitStaticPort","HitStarter1","HitStarter2","HitStarter3","HitWinch"];
_partsNeeded = 
	[
	["Exile_Item_MetalBoard","Metal Board"],
	["Exile_Item_JunkMetal","Junk Metal"],
	["DDR_Item_Glass","Glass"]
	];
_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
_itemAction = 0;
_duration = 30;
};

if (_action == 'salvageHeloHull') then
{
_partsToActOn = ["HitHull","HitGlass1","HitGlass2","HitGlass3","HitGlass4","HitGlass5","HitGlass6","HitRGlass","HitLGlass","HitLight","HitBatteries","HitMissiles","HitHydraulics","HitTransmission","HitAvionics","HitGear","HitHStabilizerL1","HitHStabilizerR1","HitVStabilizer1","HitTail","HitPitotTube","HitStaticPort","HitStarter1","HitStarter2","HitStarter3","HitWinch"];
_partsNeeded = 
	[
	["Exile_Item_MetalBoard","Metal Board"],
	["Exile_Item_JunkMetal","Junk Metal"],
	["DDR_Item_Glass","Glass"]
	];
_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
_itemAction = 1;
_duration = 30;
};

if (_action == 'repairFuelTank') then
{
_partsToActOn = ["HitFuel"];
_partsNeeded = 
	[
	["DDR_Item_Fuel_Tank","Fuel Tank"]
	];
_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
_itemAction = 0;
_duration = 30;
};

if (_action == 'salvageFuelTank') then
{
_partsToActOn = ["HitFuel"];
_partsNeeded = 
	[
	["DDR_Item_Fuel_Tank","Fuel Tank"]
	];
_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
_itemAction = 1;
_duration = 30;
};

if (_action == 'repairMainRotor') then
{
	_partsToActOn = ["HitHRotor"];
	_partsNeeded = 
		[
		["DDR_Item_Main_Rotor","Main Rotor"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageMainRotor') then
{
	_partsToActOn = ["HitHRotor"];
	_partsNeeded = 
		[
		["DDR_Item_Main_Rotor","Main Rotor"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairTailRotor') then
{
	_partsToActOn = ["HitVRotor"];
	_partsNeeded = 
		[
		["DDR_Item_Tailrotor","Tail Rotor"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageTailRotor') then
{
	_partsToActOn = ["HitVRotor"];
	_partsNeeded = 
		[
		["DDR_Item_Tailrotor","Tail Rotor"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairEngine') then
{
	_partsToActOn = ["HitEngine","HitEngine1","HitEngine2","HitEngine3"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageEngine') then
{
	_partsToActOn = ["HitEngine","HitEngine1","HitEngine2","HitEngine3"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

//////////////////////////////////////////////////////////////////////////////////Car

if (_action == 'repairCarHull') then
{
	_partsToActOn = ["hitbody","hitrglass","hitlglass","hitglass1","hitglass2","hitglass3","hitglass4","hitglass5","hitglass6","hitglass7","hitglass8","hitturret","hitgun","hitspare","hithull"];
	_partsNeeded = 
		[
		["Exile_Item_MetalBoard","Metal Board"],
		["DDR_Item_Glass","Glass"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageCarHull') then
{
	_partsToActOn = ["hitbody","hitrglass","hitlglass","hitglass1","hitglass2","hitglass3","hitglass4","hitglass5","hitglass6","hitglass7","hitglass8","hitturret","hitgun","hitspare","hithull"];
	_partsNeeded = 
	[
	["Exile_Item_MetalBoard","Metal Board"],
	["DDR_Item_Glass","Glass"]
	];
	_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairFuelTank') then
{
	_partsToActOn = ["hitfuel"];
	_partsNeeded = 
		[
		["DDR_Item_Fuel_Tank","Fuel Tank"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageFuelTank') then
{
	_partsToActOn = ["hitfuel"];
	_partsNeeded = 
	[
	["DDR_Item_Fuel_Tank","Fuel Tank"]
	];
	_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairWheel') then
{
	_partsToActOn = ["hitlfwheel","hitlbwheel","hitrfwheel","hitrbwheel","hitlf2wheel","hitrf2wheel","hitlmwheel","hitrmwheel"];
	_partsNeeded = 
	[
	["Exile_Item_CarWheel","Car Wheel"]
	];
	_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageWheel') then
{
	_partsToActOn = ["hitlfwheel","hitlbwheel","hitrfwheel","hitrbwheel","hitlf2wheel","hitrf2wheel","hitlmwheel","hitrmwheel"];
	_partsNeeded = 
	[
	["Exile_Item_CarWheel","Car Wheel"]
	];
	_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairEngine') then
{
	_partsToActOn = ["hitengine"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageEngine') then
{
	_partsToActOn = ["hitengine"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////Tank
/////////////////////////////////////////////////////////////

if (_action == 'repairTankHull') then
{
	_partsToActOn = ["hithull","hitturret","hitgun","hitbody"];
	_partsNeeded = 
		[
		["Exile_Item_MetalBoard","Metal Board"],
		["Exile_Item_JunkMetal","Junk Metal"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageTankHull') then
{
	_partsToActOn = ["hithull","hitturret","hitgun","hitbody"];
	_partsNeeded = 
		[
		["Exile_Item_MetalBoard","Metal Board"],
		["Exile_Item_JunkMetal","Junk Metal"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairFuelTank') then
{
	_partsToActOn = ["hitfuel"];
	_partsNeeded = 
		[
		["DDR_Item_Fuel_Tank","Fuel Tank"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageFuelTank') then
{
	_partsToActOn = ["hitfuel"];
	_partsNeeded = 
		[
		["DDR_Item_Fuel_Tank","Fuel Tank"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairTrack') then
{
	_partsToActOn = ["hitltrack","hitrtrack"];
	_partsNeeded = 
	[
	["Exile_Item_MetalBoard","Metal Board"]
	];
	_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageTrack') then
{
	_partsToActOn = ["hitltrack","hitrtrack"];
	_partsNeeded = 
	[
	["Exile_Item_MetalBoard","Metal Board"]
	];
	_itemsNeeded = 
	[
	["Exile_Item_Foolbox","Foolbox"]
	];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairEngine') then
{
	_partsToActOn = ["hitengine"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageEngine') then
{
	_partsToActOn = ["hitengine"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

//////////////////////////////////////////////////////////////////////////////////Boat

if (_action == 'repairBoatHull') then
{
	_partsToActOn = ["hithull","hitturret","hitgun","hitbody"];
	_partsNeeded = 
		[
		["DDR_Item_Fiberglass","Fiberglass"],
		["Exile_Item_JunkMetal","Junk Metal"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageBoatHull') then
{
	_partsToActOn = ["hithull","hitturret","hitgun","hitbody"];
	_partsNeeded = 
		[
		["DDR_Item_Fiberglass","Fiberglass"],
		["Exile_Item_JunkMetal","Junk Metal"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairFuelTank') then
{
	_partsToActOn = ["hitfuel"];
	_partsNeeded = 
		[
		["DDR_Item_Fuel_Tank","Fuel Tank"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageFuelTank') then
{
	_partsToActOn = ["hitfuel"];
	_partsNeeded = 
		[
		["DDR_Item_Fuel_Tank","Fuel Tank"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

if (_action == 'repairEngine') then
{
	_partsToActOn = ["hitengine"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 0;
	_duration = 30;
};

if (_action == 'salvageEngine') then
{
	_partsToActOn = ["hitengine"];
	_partsNeeded = 
		[
		["DDR_Item_Engine","Engine"]
		];
	_itemsNeeded = 
		[
		["Exile_Item_Foolbox","Foolbox"]
		];
	_itemAction = 1;
	_duration = 30;
};

//find all repairable and salvageable parts

{
	if ((_vehicle getHitPointDamage _x) > 0) then
	{	
		_repairableParts pushBack _x;
	};
}forEach _partsToActOn;

{
	if ((_vehicle getHitPointDamage _x) < .2) then
	{	
		_salvageableParts pushBack _x;
	};
}forEach _partsToActOn;

//Check for all required tools and parts

if (_itemAction == 0) then
{
	{
	_currentItem = _x select 0;
	if (_currentItem in _equippedMagazines) then
		{	
			_usedArray pushback (_x select 1);
		}
		else
		{
			_missingArray pushback (_x select 1);
		};
	}forEach _partsNeeded;
};

{
_currentItem = _x select 0;
if (_currentItem in _equippedMagazines) then
	{	
		_usedArray pushback (_x select 1);
	}
	else
	{
		_missingArray pushback (_x select 1);
	};
}forEach _itemsNeeded;

//Check if there is anything to salvage/repair	
if ((_itemAction == 1) && (_salvageableParts isEqualto [])) exitwith 
	{
	["ErrorTitleAndText", ["Salvage/Repair Info", "The items you are trying to salvage are all broken!"]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
	};
if ((_itemAction == 0) && (_repairableParts isEqualto [])) exitwith 
	{
	["ErrorTitleAndText", ["Salvage/Repair Info", "The items you are trying to repair are all fine!"]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
	};	

_temp1 = count _missingArray;
if !(_temp1 == 0) exitwith
	{
	["ErrorTitleAndText", ["Missing Items!", format ["You are missing the following items : %1, %2, %3, %4. Aborted!",(_missingArray select 0), (_missingArray select 1),(_missingArray select 2),(_missingArray select 3)]]] call ExileClient_gui_toaster_addTemplateToast;
	ExileClientActionDelayShown = false;
	ExileClientActionDelayAbort = false;
	};

//Repair-Salvage the parts listed	
if (_action == 'repairHeloHull' || _action == 'repairFuelTank' || _action == 'repairMainRotor' || _action == 'repairTailRotor' || _action == 'repairEngine' || _action == 'repairCarHull' || _action == 'repairWheel' || _action == 'repairTankHull' || _action == 'repairTrack' || _action == 'repairBoatHull' || _action == 'salvageHeloHull' || _action == 'salvageFuelTank' || _action == 'salvageMainRotor' || _action == 'salvageTailRotor' || _action == 'salvageEngine' || _action == 'salvageCarHull' || _action == 'salvageWheel' || _action == 'salvageTankHull' || _action == 'salvageTrack' || _action == 'salvageBoatHull') then
{
	if(_itemAction == 0) then
	{
	_partToActOn = _repairableParts;
	}
	else
	{
	_partToActOn = _salvageableParts;
	};
}
else
{
	if(_itemAction == 0) then
	{
	_partToActOn pushback (_repairableParts select 0);
	}
	else
	{
	_partToActOn pushback (_salvageableParts select 0);
	};
};
_animation = "Exile_Acts_RepairVehicle01_Animation01";
disableSerialization;
("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileActionProgress", "PLAIN", 1, false];

_keyDownHandle = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call ExileClient_action_event_onKeyDown"];
_mouseButtonDownHandle = (findDisplay 46) displayAddEventHandler ["MouseButtonDown","_this call ExileClient_action_event_onMouseButtonDown"];

player switchMove _animation;
["switchMoveRequest", [netId player, _animation]] call ExileClient_system_network_send;

_startTime = diag_tickTime;
_sleepDuration = _duration / 100;
_progress = 0;

_display = uiNamespace getVariable "RscExileActionProgress";   
_label = _display displayCtrl 4002;
_label ctrlSetText "0%";
_progressBarBackground = _display displayCtrl 4001;  
_progressBarMaxSize = ctrlPosition _progressBarBackground;
_progressBar = _display displayCtrl 4000;  
_progressBar ctrlSetPosition [_progressBarMaxSize select 0, _progressBarMaxSize select 1, 0, _progressBarMaxSize select 3];
_progressBar ctrlSetBackgroundColor [0, 0.78, 0.93, 1];
_progressBar ctrlCommit 0;
_progressBar ctrlSetPosition _progressBarMaxSize; 
_progressBar ctrlCommit _duration;

try
{
	while {_progress < 1} do
	{	
		if (ExileClientActionDelayAbort) then 
		{
			throw 1;
		};

		uiSleep _sleepDuration; 
		_progress = ((diag_tickTime - _startTime) / _duration) min 1;
		_label ctrlSetText format["%1%2", round (_progress * 100), "%"];
	};
	throw 0;
}
catch
{
	_progressBarColor = [];
	switch (_exception) do 
	{
		case 0:
		{
			_progressBarColor = [0.7, 0.93, 0, 1];
			if(_action == 'repairAllHelo' || _action == 'repairAllCar') then
			{
			_vehicle setdamage 0;
			}
			else
			{
				{
				_vehicle setHitPointDamage [_x,_itemAction];
				}forEach _partToActOn;
			};
			if (_itemAction == 0) then
			{
				{
				_tempItem = _x select 0;
				player removeItem _tempItem;
				}forEach _partsNeeded;
			} 
			else
			{
				{
				_tempPart = _x select 0;
				_itemCount = {_x == _tempPart} count (Magazines player);
				player addItem _tempPart select 0;
				_tempcount = {_x == _tempPart} count (Magazines player);
				if(_itemCount == _tempcount) then
				{
					_holder = createVehicle ["GroundWeaponHolder", position player, [], 0, "CAN_COLLIDE"];
					_holder addItemCargoGlobal [_tempPart, 1];
					["InfoTitleAndText",["Repair/Salvage Info", format["You have no space, %1 placed on the ground!",_x select 1]]] call ExileClient_gui_toaster_addTemplateToast;
				};
				}forEach _partsNeeded;
			};
			["InfoTitleAndText",["Repair/Salvage Info", "You have completed the action!"]] call ExileClient_gui_toaster_addTemplateToast;
		};
		case 1: 	
		{ 
			["InfoTitleAndText",["Repair/Salvage Info", "Do not move while repairing or salvaging!"]] call ExileClient_gui_toaster_addTemplateToast;
			_progressBarColor = [0.82, 0.82, 0.82, 1];
		};
	};	
	player switchMove "";
	["switchMoveRequest", [netId player, ""]] call ExileClient_system_network_send;
	_progressBar ctrlSetBackgroundColor _progressBarColor;
	_progressBar ctrlSetPosition _progressBarMaxSize;
	_progressBar ctrlCommit 0;
};

("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutFadeOut 2; 
(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyDownHandle];
(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown", _mouseButtonDownHandle];
ExileClientActionDelayShown = false;
ExileClientActionDelayAbort = false;