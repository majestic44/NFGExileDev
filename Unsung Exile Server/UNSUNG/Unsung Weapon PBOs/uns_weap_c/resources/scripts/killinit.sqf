//Eggbeast kill action - inspired by DayZ scripts by Rocket
PRIVATE ["_player","_hasclacker","_hasraft","_raftdonated","_hassc","_cbayo", "_hasbayouneq","_hasbayoeq","_hasbutt","_i","_chsil","_j","_crsil","_k","_loop","_weapons","_magazines","_playerisswimming","_inVehicle","_hasknife","_nobayo","_wpn","_bayo","_nohsil","_hsil","_hashsiluneq","_hashsileq","_hashsilitem","_norsil","_rsil","_hasrsiluneq","_hasrsileq","_hasrsilitem","_isMan","_isAlive","_text2","_fstring0","_fstring","_ficon"];

//calls
//uns_weap_c\resources\scripts\actions\clacker.sqf done
//uns_weap_c\resources\scripts\actions\raft.sqf done
//uns_weap_c\resources\scripts\actions\sharkchaser.sqf done
//uns_weap_c\resources\scripts\actions\bayo_fix.sqf done
//uns_weap_c\resources\scripts\actions\bayo_fold.sqf done
//uns_weap_c\resources\scripts\actions\hsil_fix.sqf done
//uns_weap_c\resources\scripts\actions\rmv_hsil.sqf done
//uns_weap_c\resources\scripts\actions\rsil_fix.sqf done
//uns_weap_c\resources\scripts\actions\rmv_rsil.sqf done
//uns_weap_c\resources\scripts\actions\kill.sqf done
//uns_weap_c\resources\scripts\actions\killb.sqf done
//uns_weap_c\resources\scripts\actions\killc.sqf done

if (not (local player)) exitwith {};
_player = player;

//medkit
//if (Ures_player_heal >=0) then {_player removeAction Ures_player_heal};
//Ures_player_heal = -1;
//_hasmed = false;

//clacker
if (Ures_clacker >=0) then {_player removeAction Ures_clacker};
Ures_clacker = -1;
_hasclacker = false;
//raft
if (Ures_raft >=0) then {_player removeAction Ures_raft};
Ures_raft = -1;
_hasraft = false;
_raftdonated = 0;
//shark chaser
if (Ures_sc >=0) then {_player removeAction Ures_sc};
Ures_sc = -1;
_hassc = false;

if (Ures_player_kill >=0) then {_player removeAction Ures_player_kill};
Ures_player_kill = -1;

if (Ures_player_bkill >=0) then {_player removeAction Ures_player_bkill};
Ures_player_bkill = -1;
if (Ures_player_ckill >=0) then {_player removeAction Ures_player_ckill};
Ures_player_ckill = -1;
Ures_myCursorTarget3 = objNull;

//set up bayonet class weapons
if (Ures_player_foldbayo >=0) then {_player removeAction Ures_player_foldbayo};
Ures_player_foldbayo =-1;
if (Ures_player_fixbayo >=0) then {_player removeAction Ures_player_fixbayo};
Ures_player_fixbayo =-1;

_cbayo = count Ures_bayoweps;
allbayos =[];
allbayoUs=[];
_hasbayouneq = false;
_hasbayoeq = false;
_hasbutt = false;

_i = 0;
while {_i < _cbayo} do
{
	allbayoUs = allbayoUs + [(Ures_bayoweps select _i select 0)];//no bayo
	allbayos = allbayos + [(Ures_bayoweps select _i select 1)];//bayo
	_i = _i + 1;
};

//set up silenced class weapons
//handguns
Ures_player_rmvhsil =-1;
Ures_player_fixhsil =-1;
_chsil = count Ures_hsilweps;
allhsil =[];
allhsilU=[];
_j = 0;
while {_j < _chsil} do
{
	allhsilU = allhsilU + [(Ures_hsilweps select _j select 0)];//no silencer
	allhsil = allhsil + [(Ures_hsilweps select _j select 1)];//silencers
	_j = _j + 1;
};

//rifles
Ures_player_rmvrsil =-1;
Ures_player_fixrsil =-1;
_crsil = count Ures_rsilweps;
allrsil =[];
allrsilU=[];
_k = 0;
while {_k < _crsil} do
{
	allrsilU = allrsilU + [(Ures_rsilweps select _k select 0)];//no silencer
	allrsil = allrsil + [(Ures_rsilweps select _k select 1)];//silencers
	_k = _k + 1;
};

for [{_loop=0}, {_loop<1}, {_loop=_loop}] do
{
	if (!isNull player) then 
	{
		_player = player;
		_vehicle = vehicle _player;
		_weapons = weapons _player;
		_magazines = magazines _player;
		_playerisswimming = ((getPosASL _player select 2 <1) and (getPosATL _player select 2 >2));
		_inVehicle = ((_vehicle != _player) || (_playerisswimming));

		_hasknife = ( ("uns_knife" in (magazines _player)) || ("uns_kabar" in (magazines _player)) );

/*
	//medkit
		_hasmed = ( ("UNS_MedKit" in (_items)) and !(_inVehicle) );
		if ( (_hasmed) and (!_inVehicle) and (Ures_player_heal<0) ) then 
		{
			Ures_player_heal = _player addAction ["<t color='#f79b31'>" +"~ Use Med kit"+ "</t>", "uns_weap\resources\scripts\actions\healme.sqf",[_player], 0, false, true,"",""];
		};
		if (!(_hasmed) and (Ures_player_heal>=0)) then 
		{
			_player removeAction Ures_player_heal;
			Ures_player_heal = -1;
		};
*/
	//claymore clacker
		_hasclacker = ( ("uns_ItemM57clacker" in (_magazines))  and !(_inVehicle) );
		if ( (_hasclacker) and (!_inVehicle) and (Ures_clacker < 0) ) then 
		{
			Ures_clacker = _player addAction ["<t color='#f79b31'>" +" ~Fire Claymores"+ "</t>", "uns_weap_c\resources\scripts\actions\clacker.sqf",[_player], 0, false, true,"",""];
		};
		if (!(_hasclacker) and (Ures_clacker>=0)) then 
		{
			_player removeAction Ures_clacker;
			Ures_clacker = -1;
		};

	//liferaft
		_hasraft = ("UNS_EAM2Braft" in (_magazines));
		if ( (_raftdonated == 0) and !(_hasraft) and (_playerisswimming) and ((vest _player) == "UNS_JP_Vest") ) then
		{
			_player addmagazine "UNS_EAM2Braft";
			_raftdonated = 1;
			sleep 0.1;
			_hasraft = true;
		};

		if ( (_hasraft) and (Ures_raft < 0) and (_playerisswimming) ) then 
		{
			Ures_raft = _player addAction ["<t color='#f79b31'>" +" ~Inflate Raft"+ "</t>", "uns_weap_c\resources\scripts\actions\raft.sqf",[_player], 0, false, true,"",""];
		};

		if (!(_hasraft) and (Ures_raft>=0)) then 
		{
			_player removeAction Ures_raft;
			Ures_raft = -1;
		};

	//shark chaser
		_hassc = ("UNS_sharkchaser" in (_magazines));
		if ( (_hassc) and (_playerisswimming) and (Ures_sc < 0) ) then 
		{
			Ures_sc = _player addAction ["<t color='#f79b31'>" +" ~Use Shark Chaser"+ "</t>", "uns_weap_c\resources\scripts\actions\sharkchaser.sqf",[_player], 0, false, true,"",""];
		};
		if (!(_hassc) and (Ures_sc>=0)) then 
		{
			_player removeAction Ures_sc;
			Ures_sc = -1;
		};
		_wpn = primaryweapon _player;
		_hasbutt = (_wpn !="");
	//	hint format ["butt:%1",_hasbutt];

	//bayonet monitor
		_nobayo = 0;
		{if (_player hasweapon _x) then {_nobayo=_nobayo+1}}forEach allbayoUs;
		_bayo = 0;
		{if (_player hasweapon _x) then {_bayo=_bayo+1}}forEach allbayos;

		_hasbayouneq = ((_nobayo>0) and !(_inVehicle) );
		_hasbayoeq = ((_bayo>0) and !(_inVehicle) );

		if ( (_hasbayouneq) and (!_inVehicle) and (Ures_player_fixbayo<0)) then 
		{
			Ures_player_fixbayo = _player addAction ["<t color='#f79b31'>" +" ~Fix Bayonet"+ "</t>", "uns_weap_c\resources\scripts\actions\bayo_fix.sqf",[_player], 0, false, true,"",""];
		};
		if ( !(_hasbayouneq) and (Ures_player_fixbayo>=0)) then
		{
			_player removeAction Ures_player_fixbayo;
			Ures_player_fixbayo = -1;
		};
		if ( (_hasbayoeq) and (!_inVehicle) and (Ures_player_foldbayo<0) ) then 
		{
			Ures_player_foldbayo = _player addAction ["<t color='#f79b31'>" +" ~Fold Bayonet"+ "</t>", "uns_weap_c\resources\scripts\actions\bayo_fold.sqf",[_player], 0, false, true,"",""];
		};
		if ( !(_hasbayoeq) and (Ures_player_foldbayo>=0) ) then
		{
			_player removeAction Ures_player_foldbayo;
			Ures_player_foldbayo = -1;
		};

	//silencer monitor
	//handguns
		_nohsil = 0;
		{if (_player hasweapon _x) then {_nohsil=_nohsil+1}}forEach allhsilU;
		_hsil = 0;
		{if (_player hasweapon _x) then {_hsil=_hsil+1}}forEach allhsil;

		_hashsiluneq = ((_nohsil>0) and !(_inVehicle) );
		_hashsileq = ((_hsil>0) and !(_inVehicle) );
//##revise
		_hashsilitem = (("EB_ItemSil_hgun" in (_magazines))|| ("uns_ItemSil_hgun" in (_magazines)));

		if ( (_hashsiluneq) and (!_inVehicle) and (Ures_player_fixhsil<0)) then 
		{
			Ures_player_fixhsil = _player addAction ["<t color='#f79b31'>" +" ~Attach Handgun Silencer"+ "</t>", "uns_weap_c\resources\scripts\actions\hsil_fix.sqf",[_player], 0, false, true,"",""];
		};
		if ( !(_hashsiluneq) and (Ures_player_fixhsil>=0)) then
		{
			_player removeAction Ures_player_fixhsil;
			Ures_player_fixhsil = -1;
		};

		if ( (_hashsileq) and (!_inVehicle) and (Ures_player_rmvhsil <0)) then 
		{
			Ures_player_rmvhsil = _player addAction ["<t color='#f79b31'>" +" ~Remove Handgun Silencer"+ "</t>", "uns_weap_c\resources\scripts\actions\rmv_hsil.sqf",[_player], 0, false, true,"",""];
		};
		if ( !(_hashsileq) and (Ures_player_rmvhsil>=0)) then
		{
			_player removeAction Ures_player_rmvhsil;
			Ures_player_rmvhsil = -1;
		};
	//rifles
		_norsil = 0;
		{if (_player hasweapon _x) then {_norsil=_norsil+1}}forEach allrsilU;
		_rsil = 0;
		{if (_player hasweapon _x) then {_rsil=_rsil+1}}forEach allrsil;

		_hasrsiluneq = ((_norsil>0) and !(_inVehicle) );
		_hasrsileq = ((_rsil>0) and !(_inVehicle) );
//##edit
		_hasrsilitem = ( ("EB_ItemSil_rifle" in (_magazines)) || ("uns_ItemSil_rifle" in (_magazines)) );

		if ( (_hasrsiluneq) and !(_inVehicle) and (Ures_player_fixrsil<0)) then 
		{
			Ures_player_fixrsil = _player addAction ["<t color='#f79b31'>" +" ~Attach Rifle Silencer"+ "</t>", "uns_weap_c\resources\scripts\actions\rsil_fix.sqf",[_player], 0, false, true,"",""];
		};
		if ( !(_hasrsiluneq) and (Ures_player_fixrsil>=0)) then
		{
			_player removeAction Ures_player_fixrsil;
			Ures_player_fixrsil = -1;
		};

		if ( (_hasrsileq) and (!_inVehicle) and (Ures_player_rmvrsil <0)) then 
		{
			Ures_player_rmvrsil = _player addAction ["<t color='#f79b31'>" +" ~Remove Rifle Silencer"+ "</t>", "uns_weap_c\resources\scripts\actions\rmv_rsil.sqf",[_player], 0, false, true,"",""];
		};
		if ( !(_hasrsileq) and (Ures_player_rmvrsil>=0)) then
		{
			_player removeAction Ures_player_rmvrsil;
			Ures_player_rmvrsil = -1;
		};
		if ( (!isNull cursorTarget) and (!_inVehicle) and (_player distance cursorTarget < 10) and ( (_hasknife) || (_hasbayoeq) || (_hasbutt) ) ) then 
		{
			_isMan = cursorTarget isKindOf "Man";
			_isAlive = ( (alive cursorTarget) and (side cursorTarget == east) );
			_text2 = getText (configFile >> "CfgVehicles" >> typeOf cursorTarget >> "displayName");
			//hintsilent format ["vec: %1", _text2];
	///////##################################
	//Allow player to kill man
	///////##################################
			if ( (_hasknife) and (_isMan) and (_isAlive) ) then 
			{
				if (Ures_player_kill < 0) then 
				{
					_vehicle = cursorTarget;
					Ures_myCursorTarget3 = _vehicle;
					_fstring0 = format["knife %1",_text2];//kill name of type of man
					_ficon = "<img image='\uns_weap_c\resources\img\kill.paa' size='1.0' shadow='false' />";
					_fstring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_ficon,_fstring0];
					if (_hasknife) then 
					{
						Ures_player_kill = Ures_myCursorTarget3 addAction [_fstring, "uns_weap_c\resources\scripts\actions\kill.sqf",[_vehicle,_player], 3, true, true,"",""];
					};
				};
			} else 
			{
				Ures_myCursorTarget3 removeAction Ures_player_kill;
				Ures_player_kill = -1;
			};
	///bayonet
			if ( (_hasbayoeq) and (_isMan) and (_isAlive) ) then 
			{
				if (Ures_player_bkill < 0) then 
				{
					_vehicle = cursorTarget;
					Ures_myCursorTarget3 = _vehicle;
					_fstring0 = format["bayonet %1",_text2];//kill name of type of man
					_ficon = "<img image='\uns_weap_c\resources\img\kill.paa' size='1.0' shadow='false' />";
					_fstring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_ficon,_fstring0];
					if (_hasbayoeq) then 
					{
						Ures_player_bkill = Ures_myCursorTarget3 addAction [_fstring, "uns_weap_c\resources\scripts\actions\killb.sqf",[_vehicle,_player], 3, true, true,"",""];
					};
				};
			} else 
			{
				Ures_myCursorTarget3 removeAction Ures_player_bkill;
				Ures_player_bkill = -1;
			};

			if ( (_hasbutt) and (_isMan) and (_isAlive) ) then 
			{
				if (Ures_player_ckill < 0) then 
				{
					_vehicle = cursorTarget;
					Ures_myCursorTarget3 = _vehicle;
					_fstring0 = format["Club %1",_text2];//kill name of type of man
					_ficon = "<img image='\uns_weap_c\resources\img\kill_butt.paa' size='1.0' shadow='false' />";
					_fstring = format ["<t color='#f79b31'>" +"%1 %2"+ "</t>",_ficon,_fstring0];
					if (_hasbutt) then 
					{
						Ures_player_ckill = Ures_myCursorTarget3 addAction [_fstring, "uns_weap_c\resources\scripts\actions\killc.sqf",[_vehicle,_player], 3, true, true,"",""];
					};
				};
			} else 
			{
				Ures_myCursorTarget3 removeAction Ures_player_ckill;
				Ures_player_ckill = -1;
			};


		} else 
	///////##################################
		{
			Ures_myCursorTarget3 removeAction Ures_player_kill; Ures_player_kill = -1;
			Ures_myCursorTarget3 removeAction Ures_player_bkill; Ures_player_bkill = -1;
			Ures_myCursorTarget3 removeAction Ures_player_ckill; Ures_player_ckill = -1;
		};
	};
sleep 1;
};