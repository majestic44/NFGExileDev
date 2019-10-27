// Ures_rearm called from monitorvec
//Ures_airload1 = _vec addAction [_astring, "uns_weap_c\resources\scripts\Ures_rearm.sqf",[_vec,_player], 5, true, true,"",""];

//calls
//uns_weap_c\resources\scripts\Ures_rearmfnU.sqf done

PRIVATE ["_vec","_type"];
//##editing
_vec = _this select 0; //(vehicle player);
_type = typeOf vehicle player;
Ures_airfn1 = _this select 2;

if ( !(Ures_airfn1<0) || (_vec == player) || (speed _vec < -2) || (speed _vec > 2) ) then
{
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
};

_vec removeAction Ures_airload1;
Ures_airload1=-1; publicVariable "Ures_airfn1";

//unsung
if (isNil "Ures_vecmods") then {Ures_vecmods=0};
if ( (Ures_vecmods == 4) && (speed _vec > -2) && (speed _vec < 2) ) then
{
	if ( (_vec != player) and ((_vec iskindof "Plane")||(_vec iskindof "Helicopter")) ) then
	{
		Ures_airfn1 = _vec addAction [Ures_astring1, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",1, 5, true, true,"",""];
		Ures_airfn2 = _vec addAction [Ures_astring2, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",2, 5, true, true,"",""];
		Ures_airfn3 = _vec addAction [Ures_astring3, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",3, 5, true, true,"",""];
		Ures_airfn4 = _vec addAction [Ures_astring4, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",4, 5, true, true,"",""];
		Ures_airfn5 = _vec addAction [Ures_astring5, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",5, 5, true, true,"",""];
		Ures_airfn6 = _vec addAction [Ures_astring8, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",6, 5, true, true,"",""];
		Ures_airfn7 = _vec addAction [Ures_astring7, "uns_weap_c\resources\scripts\Ures_rearmfnU.sqf",7, 5, true, true,"",""];
	};
};
