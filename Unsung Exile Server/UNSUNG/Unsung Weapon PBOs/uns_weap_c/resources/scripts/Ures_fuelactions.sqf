//Eggbeast fuel actions - inspired by DayZ scripts by Rocket

PRIVATE ["_player","_vehicle","_inVehicle","_hasFuelE","_hasFuel","_hasSiphon","_equipped","_isVehicle","_isFuel","_isMan","_isAlive","_text","_fstring0","_fstring","_ficon","_nstring0","_nstring","_nicon","_vstring0","_vstring","_vicon","_vname","_fuel","_magazines"];
//calls
//uns_weap_c\resources\scripts\actions\Fuelcan_fill.sqf done
//uns_weap_c\resources\scripts\actions\Siphon_vec.sqf done
//uns_weap_c\resources\scripts\actions\Refuel_vec.sqf done

if (not (local player)) exitwith {};

Ures_player_fillfuel = 	-1;
Ures_player_siphonfuel = -1;
Ures_player_refuelAction = -1;
Ures_myCursorTarget = objNull;
Ures_myCursorTarget2 = objNull;

//hintsilent "monitor script active 2";

for [{_loop=0}, {_loop<1}, {_loop=_loop}] do
{
	if (!isNull player) then 
	{
		_player = player;
		_vehicle = vehicle _player;
		_inVehicle = (_vehicle != _player);
		_magazines = magazines _player;
		_hasFuelE = ("uns_ItemFuelcanEmpty" in _magazines);
		_hasFuel = ("uns_ItemFuelcan" in _magazines);
		_hasSiphon = ("uns_ItemSiphon" in _magazines);
		_equipped = ((_hasFuelE) or (_hasfuel));
		//if (_hasSiphon) then {hintsilent "has siphon"};

		if ( (!isNull cursorTarget) and (!_inVehicle) and (_player distance cursorTarget < 8) and (_equipped) ) then 
		{	//Has some kind of target
			_isVehicle = cursorTarget isKindOf "AllVehicles";
			_isFuel = false;
			_isMan = cursorTarget isKindOf "Man";
			_isAlive = alive cursorTarget;
			_text = getText (configFile >> "CfgVehicles" >> typeOf cursorTarget >> "displayName");
			//hintsilent format ["vec: %1", _text];

			if (_hasFuelE) then 
			{
//				_isFuel = (cursorTarget isKindOf "Land_Ind_TankSmall") or (cursorTarget isKindOf "Land_fuel_tank_big") or (cursorTarget isKindOf "Land_fuel_tank_stairs") or (cursorTarget isKindOf "Land_wagon_tanker") or (cursorTarget isKindOf "Land_A_FuelStation_Shed") or (cursorTarget isKindOf "Land_repair_center") or (cursorTarget isKindOf "FuelStation") or (cursorTarget isKindOf "FuelStation_army") or (cursorTarget isKindOf "Land_Mil_Repair_center_EP1") or (cursorTarget isKindOf "Land_A_FuelStation_Build") or (cursorTarget isKindOf "Land_A_FuelStation_Feed") or (cursorTarget isKindOf "Land_Ind_FuelStation_Feed_EP1") or (cursorTarget isKindOf "Land_Ind_FuelStation_Build_EP1") or (cursorTarget isKindOf "Land_Ind_FuelStation_Shed_EP1") or (cursorTarget isKindOf "Land_Ind_Garage01_EP1") or (cursorTarget isKindOf "Land_benzina_schnell") or (cursorTarget isKindOf "Land_fuelstation") or (cursorTarget isKindOf "Land_fuelstation_army") or (cursorTarget isKindOf "Land_ibr_FuelStation_Feed") or (cursorTarget isKindOf "Land_ibr_FuelStation_Build") or (cursorTarget isKindOf "Land_ibr_FuelStation_Shed") or (cursorTarget isKindOf "Barrel5") or (cursorTarget isKindOf "Barrels") or (cursorTarget isKindOf "Land_Ind_TankSmall2") or (cursorTarget isKindOf "CDF_WarfareBVehicleServicePoint") or (cursorTarget isKindOf "INS_WarfareBVehicleServicePoint") or (cursorTarget isKindOf "RU_WarfareBVehicleServicePoint") or (cursorTarget isKindOf "USMC_WarfareBVehicleServicePoint") or (cursorTarget isKindOf "KamazRefuel") or (cursorTarget isKindOf "KamazRepair") or (cursorTarget isKindOf "MtvrRefuel") or (cursorTarget isKindOf "MtvrRepair") or (cursorTarget isKindOf "UralRepair_CDF") or (cursorTarget isKindOf "UralRefuel_CDF") or (cursorTarget isKindOf "UralRepair_INS") or (cursorTarget isKindOf "UralRefuel_INS") or (cursorTarget isKindOf "MtvrRefuel_DES_EP1") or (cursorTarget isKindOf "MtvrRepair_DES_EP1") or (cursorTarget isKindOf "UralRefuel_TK_EP1") or (cursorTarget isKindOf "UralRepair_TK_EP1") or (cursorTarget isKindOf "V3S_Refuel_TK_GUE_EP1");
				_isFuel = (cursorTarget isKindOf "LAND_UNS_FuelDepot") or (cursorTarget isKindOf "Barels") or (cursorTarget isKindOf "Barel") or (cursorTarget isKindOf "uns_FARPtent") or (cursorTarget isKindOf "LAND_uns_tent3supply") or (cursorTarget isKindOf "LAND_CSJBladder_refuel") or (cursorTarget isKindOf "FuelStation_army") or (cursorTarget isKindOf "Barrel5") or (cursorTarget isKindOf "Barrels") or (cursorTarget isKindOf "UralRefuel_INS");//develop
				};
			//if (_isfuel) then {hintsilent "fuel"};

	///////##################################
	//Allow player to fill Fuel can
	///////##################################

			if ( (_hasFuelE) and (_isFuel) ) then 
			{
				if (Ures_player_fillfuel < 0) then 
				{
					_fstring0 = format[Localize "str_action_refuel",_text];
					_ficon = "<img image='\uns_weap_c\resources\img\ui_action_refuel_ca.paa' size='1.0' shadow='false' />";
					_fstring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_ficon,_fstring0];
					Ures_player_fillfuel = _player addAction [_fstring, "uns_weap_c\resources\scripts\actions\Fuelcan_fill.sqf",[], 3, true, true,"",""];
				};
			} else 
			{
				_player removeAction Ures_player_fillfuel;
				Ures_player_fillfuel = -1;
			};
	///////##################################
	//Allow player to siphon Fuel: vehicle to fuelcan with siphon
	///////##################################

			if( (_hasFuelE) and (_hasSiphon) and (_isVehicle) and (!_isMan) and (_isAlive)) then 
			{
				if (Ures_player_siphonfuel < 0)then
				{
					_vehicle = cursorTarget;
					Ures_myCursorTarget = _vehicle;
					_fuel = fuel _vehicle;
					if (_fuel > 0) then
					{
						Ures_myCursorTarget removeAction Ures_player_siphonfuel;
						_nstring0 = format ["Siphon fuel from %1",_text];
						_nicon = "<img image='\uns_weap_c\resources\img\ui_action_refuel_ca.paa' size='1.0' shadow='false' />";
						_nstring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_nicon,_nstring0];
						Ures_player_siphonfuel = Ures_myCursorTarget addAction [_nstring, "uns_weap_c\resources\scripts\actions\Siphon_vec.sqf",[], 3, true, true, "",""];
					};
				};
			} else 
			{
				Ures_myCursorTarget removeAction Ures_player_siphonfuel;
				Ures_player_siphonfuel = -1;
			};

	///////##################################
	//Refueling Vehicles
	///////##################################

			if ( (_hasFuel) and (_isVehicle) and (_isAlive) and (!_isMan) ) then 
			{
				if (Ures_player_refuelAction < 0) then 
				{
					_vehicle = cursorTarget;
					Ures_myCursorTarget2 = _vehicle;
					Ures_myCursorTarget2 removeAction Ures_player_refuelAction;
					_fuel = fuel _vehicle;
					if (_fuel < 1) then
					{
						_vname = format[Localize "str_state_refuel"];
						_vstring0 = format["%1 the %2",_vname,_text];
						_vicon = "<img image='\uns_weap_c\resources\img\ui_action_refuel_ca.paa' size='1.0' shadow='false' />";
						_vstring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_vicon,_vstring0];
						Ures_player_refuelAction = Ures_myCursorTarget2 addAction [_vstring, "uns_weap_c\resources\scripts\actions\Refuel_vec.sqf",[], 4, true, true, "",""];
					};
				};
			} else 
			{
				Ures_myCursorTarget2 removeAction Ures_player_refuelAction;
				Ures_player_refuelAction = -1;
			};
		} else 
	///////##################################
		{
			Ures_myCursorTarget2 removeAction Ures_player_refuelAction; Ures_myCursorTarget2 = objNull;
			_player removeAction Ures_player_fillfuel; Ures_player_fillfuel = -1;
			Ures_myCursorTarget removeAction Ures_player_siphonfuel; Ures_player_siphonfuel = -1;
		};
	};
sleep 1;
};

