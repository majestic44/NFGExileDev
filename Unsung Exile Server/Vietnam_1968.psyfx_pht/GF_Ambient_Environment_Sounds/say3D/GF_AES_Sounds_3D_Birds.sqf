diag_log "";


if (GF_AES_Systemchat_info) then {
systemchat "GF_AES_3D_Sounds_Birds initialized";			
};	

GF_AES_Sounds_3D_Birds_Spawn = {

if (GF_AES_Systemchat_info) then {
systemchat "GF_AES_Sounds_3D_Birds";			
};	

[] spawn {
	while {true} do {
	
	if ((date select 3) < 6 or (date select 3) > 19) then {
	
if (GF_AES_hintsilent_info) then {
hintsilent "nightime";		
};	

	sleep GF_AES_Sounds_Birds_Loop;
	
	if ((!(surfaceIsWater getPos player)) && (!(vehicle player != player))) then {
	
	_Player_Pos = getpos player;	
	_Pos = [[[_Player_Pos, (20)],[]],[]] call BIS_fnc_randomPos;	
	_Sound = "#particlesource" createVehicleLocal _Pos;	
			
	_array = selectRandom[	
	"Owl1",
	"Owl2"
	];
	
	_Sound say3D [_array, 100, 1];	
			
if (GF_AES_hintsilent_info) then {
hintsilent "loop";	
};	

	sleep GF_AES_Sounds_Birds_Loop;
	
	}else{
	
if (GF_AES_hintsilent_info) then {
hintsilent "surfaceIsWater or inside vehicle";		
};	

	sleep 3;
	};	

	} else {

if (GF_AES_hintsilent_info) then {
hintsilent "daytime";	
};	

	sleep GF_AES_Sounds_Birds_Loop;
	
	if ((!(surfaceIsWater getPos player)) && (!(vehicle player != player))) then {
	
	_Player_Pos = getpos player;	
	_Pos = [[[_Player_Pos, (20)],[]],[]] call BIS_fnc_randomPos;	
	_Sound = "#particlesource" createVehicleLocal _Pos;	
	
	
	_array = selectRandom[	
	"Gibbon1",
	"Gibbon2"
	];
	
	_Sound say3D [_array, 100, 1];	
			
if (GF_AES_hintsilent_info) then {
hintsilent "loop";	
};	

	sleep GF_AES_Sounds_Birds_Loop;

	}else{

if (GF_AES_hintsilent_info) then {
hintsilent "surfaceIsWater or inside vehicle";	
};	
	sleep 3;
	};		
};	
};
};
};

_x = 0;

for "_x" from 0 to GF_AES_Sounds_Birds_Spawn_x_Number do {
[]spawn GF_AES_Sounds_3D_Birds_Spawn;
};