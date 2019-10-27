//monitorvec called by init
//calls
//\uns_weap_c\resources\scripts\Ures_rearm.sqf done
//uns_weap_c\resources\scripts\gocarrier2.sqf done

PRIVATE ["_oncarrier","_oncarrier2","_inrepairzone","_vec","_type","_trk","_tpresent","_tcount","_tk","_ntk","_trktype","_loop2","_dam","_ful","_texta1","_astring0","_aicon","_astring","_oldvec","_loop"];

Ures_airload1=-1;
_oncarrier = false;
_oncarrier2 = false;
_inrepairzone = false;

if (isNil "Ures_vecmods") then {Ures_vecmods=0};

uns_Repair = 
{
	if (isnull player) exitwith{};//player not yet init, do nothing
	_vec = (vehicle player);
	_type = typeOf vehicle player;

//edit to include carrier and repair/fuel/ammo trucks

	_trk = [];
	_tpresent = false;
	_tcount = 0;
	_trk = (nearestObjects [player, ["Car","Truck"], 50]);
	sleep 0.3;
	_tcount = (count _trk);

	_tk = 0;
	while {_tk < _tcount} do 
	{
		_ntk = (_trk select (_tk));
		_trktype = typeOf (vehicle _ntk);
		if (_trktype in uns_supplytruck) then 
		{
			_tpresent = true;
			_tk = _tcount;
		};
		_tk = _tk + 1;
		sleep 1;
	};
	_oncarrier = (count (nearestObjects [_vec, ['Land_LHD_house_1'], 150]) >0);sleep 0.1;
	_oncarrier2 = (count (nearestObjects [_vec, ['JDG_carrier_Spawner'], 150]) >0);sleep 0.1;
	_inrepairzone = ((_tpresent) or (_oncarrier) or (_oncarrier2));

	if( ((getDammage _vec > 0) or (fuel _vec < 0.99) or (_vec isKindOf "staticweapon" and getDammage _vec > 0)) and not (_vec isKindOf "Man") ) then
	{
		if((_inrepairzone) and (_vec != player) and (speed _vec > -2) and (speed _vec < 2) and (position _vec select 2 < 2.0) and (local _vec) ) then
		{
			 titleText [localize "STR_M04t83", "PLAIN DOWN",0.3];//Servicing
			 for [{_loop2=0}, {_loop2<1}, {_loop2=_loop2}] do
			 {
			    sleep 0.2;	    		    
			    if (getDammage _vec > 0) then {_vec setDammage ((getDammage _vec)-0.0125);};
			    if (Fuel _vec < 1) then {_vec setFuel ((Fuel _vec)+0.0125);};
			    if (getDammage _vec == 0 and Fuel _vec == 1) then {_loop2=1;};
			    if(_vec != vehicle player or speed _vec < -2 or speed _vec > 2 or position _vec select 2 > 2.0) then 
				{
					_loop2 = 1;
					titleText [localize "STR_M04t84", "PLAIN DOWN",0.3]; //Aborted
				};
			    _dam = (getDammage _vec)*100;
			    _ful = (Fuel _vec)*100;
			    hint format["Damage: %1\nFuel: %2",Round _dam,Round _ful];
			};
			_vec setVehicleAmmo 1;	
		};
	};

//adding service menu to MR planes
	if( (_inrepairzone) and (_type in Ures_planes_west) and (speed _vec > -2) and (speed _vec < 2) and (position _vec select 2 < 2.0) and (local _vec) and (Ures_vecmods == 4) and (Ures_airload1 <0) and ((getDammage _vec) == 0) and ((Fuel _vec) == 1) ) then 
	{
		_texta1 = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
		_astring0 = format["Rearm %1",_texta1];
		_aicon = "<img image='\uns_weap_c\resources\img\cbu.paa' size='1.0' shadow='false' />";
		_astring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_aicon,_astring0];
		Ures_airload1 = _vec addAction [_astring, "\uns_weap_c\resources\scripts\Ures_rearm.sqf",[_vec,_player,Ures_airfn1], 5, true, true,"",""];
	};
	if ( !(Ures_airload1 <0) and ( (speed _vec < -2) or (speed _vec > 2) or (position _vec select 2 > 2.0) ) )then
	{
		_vec removeaction Ures_airload1;
		Ures_airload1 = -1;
	};
//adding taxi script for aircraft carrier
	if ( (_oncarrier2) and (_vec iskindof "plane") and (Ures_airtaxi <0) and ((getposASL _vec select 2) < 18) ) then
	{
		Ures_airtaxi = _vec addAction ["<t color='#f79b31'>"+"~ Taxi to deck"+ "</t>", "uns_weap_c\resources\scripts\gocarrier2.sqf",[_vec], 5, true, true,"",""];
	};
	if ( !(Ures_airtaxi <0) and ( (speed _vec < -2) or (speed _vec > 2) ) )then
	{
		_vec removeaction Ures_airtaxi;
		Ures_airtaxi = -1;
	};
	if (_vec==player) then 
	{
		_oldvec = nearestObject [player, "Air"];
		_oldvec removeaction Ures_airload1;
		Ures_airload1 = -1;
		_oldvec removeaction Ures_airtaxi;
		Ures_airtaxi = -1;
	};
};
for [{_loop=0}, {_loop<1}, {_loop=_loop}] do
{
	[] call uns_Repair;
	sleep 5.1;
	if (Ures_vecmods == 0) then {_loop=1;};
};
