if !(IsServer) exitWith {};

private _pos = _this;
if(isNil "BD_Chem_Init")then{BD_Chem_Init = false};

//check if gas has already been launched
private _rL = [ (_pos select 0),(_pos select 1),0] nearObjects ["uns_m7grenade_fired", 20];
if (_rL isEqualTo []) then 
{
	private _obj = "uns_m7grenade_fired" createvehicle [ (_pos select 0),(_pos select 1),0.1];
//	_obj setVectorDirAndUp [[0,0,1],[1,1,1]];
	_pos = position _obj;

	private _baseDamage = 0.004; //0.07;
	private _maxRange = 25;
//player units
	{
		private _playerDist = _x distance _pos;

		//call once only
		private _initdone = _x getVariable "BD_Chem_Init";
		if (
			(!((vehicle _x) isKindOf "Tank")) && 
			(local _x) && (alive _x) &&
			!( (goggles _x) == "UNS_M17") && 
			(_playerDist < _maxRange) &&
			(_initdone != 1)
		) then
		{
		//adding check for gasmask
			private 	_chemResist = _x getVariable ["BD_Chem_ChemResistant",0]; // not defined?##
			private 	_chemResist = 1 - _chemResist;
			private 	_playerChemCont = _x getVariable ["BD_Chem_ChemContamination",0];
			_x setVariable ["BD_Chem_ChemContamination",_playerChemCont + (((1 * _maxRange) / _playerDist) * _chemResist)];
			sleep 1;
			[_x] execVM "\uns_weap_c\resources\chem\player.sqf";
			_x setVariable ["BD_Chem_Init",1];
		};
	} foreach (playableUnits);
//end player units

//damage routine
	private _doDamage = 
	{
		private _u = _this select 0;
		private _d = _this select 1;
		private _r = _this select 2;
		private _b = _this select 3; 
		sleep (1 + random 2);
		_chemResist = _u getVariable ["BD_Chem_ChemResistant",0];
		_chemResist = 1 - _chemResist;
		private _damage = damage _u;
		if (_damage < 0.9) then //don't kill them
		{
			_u setDamage (_damage + ((_b * (_r / _d))) * _chemResist);
		};
	};

//setup sounds
	private _gas_sounds =["choke01","choke02","choke03","choke04","choke05","choke06","choke07","choke08","dry_heave","dry_heave3","dry_heave4","puke_1","puke_2","puke_splash"];
	private _cgas = count _gas_sounds -1;
	
//damage loop
	private _timest = 5; //5 iterations
	while { _timest >0} do
	{
// counts down
		_timest = (_timest -1);
//find victims
		private _units = _pos nearObjects ["Man",_maxRange];
		private _vehs = _pos nearEntities [["LandVehicle","Air"],_maxRange];
		private _vehCrews = [];
		{
			{
				_vehCrews = _vehCrews + [_X];
			} forEach (crew _X);
		} forEach _vehs;
		_units = _units + _vehCrews;
		{
			if ( (_x in _units) and ((goggles _x) == "UNS_M17")) then {_units = _units - [_x]};
		}foreach _units;
		if ( ((count _units)<1) && (_timest >1) ) then 
		{
			_timest = 1;
		};
//run loop on all affected units
		{
			private _dist = _X distance _pos;
			if( (damage _X < 0.9) && (_dist <= _maxRange) )then // in area
			{
			//adding check for gasmask
				if ( (!((vehicle _X) isKindOf "Tank")) and !( (goggles _X) == "UNS_M17") ) then
				{
					//basedamage x range / 
					//dam = 0.004 x (25 /1) = 0.1
					//damfar = 0.004 x (25 /20) = 0.1
					//max should be 0.1
			// apply damage					
					[_X,_dist,_maxRange,_baseDamage] spawn _doDamage; 
			//puke
					private _r = round random _cgas;
					private _snd = _gas_sounds select _r;
					_X say3D _snd;
			//play crazy movement anims
/*
					if (_r < 3) then 
					{
						_X playMove "Acts_CivilHiding_2"; //kneeling puking
					};
					if (_r == 3) then 
					{
						_X playMove "ApanPknlMwlkSnonWnonDfr"; //panic walk
					};
					if (_r == 4) then 
					{
						_X playMove "AmovPincMrunSnonWnonDf"; //panic crawl
					};
					if (_r == 5) then 
					{
						_X playMove "amovpknlmstpsraswrfldnon_amovppnemstpsraswrfldnon"; //go prone
					};
					if (_r == 6) then 
					{
						_X playMove "AinjPpneMstpSnonWrflDnon"; //roll on back
					};
					if (_r == 7) then 
					{
						_X playMove "Acts_InjuredCoughRifle02"; // lying on back coughing
					};
					if (_r == 8) then 
					{
						_X playMove "Acts_CivilInjuredHead_1"; // rolling on back
					};
					if (_r == 9) then 
					{
						_X playMove "Acts_CivilShocked_1"; // sitting gasping
					};
					if (_r == 10) then 
					{
						_X playMove "Acts_Executioner_Squat"; // squatting slowly
					};
					if ((_r > 10) and (_r < 20)) then 
					{
						_X playMove "Acts_CivilInjuredChest_1"; // rolling on back
					};
					//ActsPercMrunSlowWrflDf_TumbleOver
					//ActsPercMstpSnonWpstDnon_sceneBardak02
					//AmovPercMstpSlowWrflDnon_ActsPpneMstpSlowWrflDr_GrenadeEscape
					//AidlPpneMstpSnonWnonDnon_SleepC_killFly
*/
					sleep (random 5)+5;
					_X allowFleeing 1; //always fleeing
				}; //time loop gas fx
			};  //damage >0.9
/*
			//reset the action
			if (_timest ==1) then //last pass
			{
				_X playMove "AidlPercMstpSnonWnonDnon_G01";
			} else
			{
				_X playMove "Acts_CivilShocked_1";
			};
*/
		} forEach _units;
	//reset the action
//		{_X playMove "AidlPercMstpSnonWnonDnon_G01";}forEach _units;
	};//end timer
//	hint "damage ended";
};
//hint "damage ended";

//add score to thrower - doesn't work
/*
_i = 0;
while {_i <= _countunitsstart} do 
{
	_cunit = _units select _i;
	if (! Alive _cunit) then 
	{
		player addscore 1;
	};
	_i = _i + 1;
};
*/