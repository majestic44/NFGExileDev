diag_log "Sound loaded";

GF_AES_Systemchat_info						= false;					//	Show Systemchat information
GF_AES_hintsilent_info						= false;					//	Show hint information

GF_AES_Sounds_3D_Birds						= true;					//	Birds Sounds

GF_AES_Sounds_Birds_Spawn_x_Number			= 1;					//	Change the number of Spawned loops at the same time

GF_AES_Sounds_Birds_Loop					= 120 + random 60;		//  Set the seconds to loop sounds

if (GF_AES_Systemchat_info) then {
systemchat "GF Ambient Environment Sounds Script initialized";			
};

if (GF_AES_Sounds_3D_Birds) then {
[] execVM "GF_Ambient_Environment_Sounds\say3D\GF_AES_Sounds_3D_Birds.sqf";
};
