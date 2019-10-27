class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };											// infiSTAR AntiHack
		class fn_xm8apps_server { allowedTargets=2; };										// infiSTAR xm8apps
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };		// ExileMod
		class AR_Client_Rappel_From_Heli { allowedTargets=0; };								// Advanced Rappeling
		class AR_Hint { allowedTargets=1; };												// Advanced Rappeling
		class AR_Hide_Object_Global { allowedTargets=2; };									// Advanced Rappeling
		class AR_Enable_Rappelling_Animation { allowedTargets=2; };							// Advanced Rappeling
		class AR_Rappel_From_Heli { allowedTargets=2; };									// Advanced Rappeling
		class AUR_Hint { allowedTargets=1; };												// Advanced Urban Rappeling
		class AUR_Hide_Object_Global { allowedTargets=2; };									// Advanced Urban Rappeling
		class AUR_Enable_Rappelling_Animation_Global { allowedTargets=2; };					// Advanced Urban Rappeling
		class AUR_Play_Rappelling_Sounds_Global { allowedTargets=2; };						// Advanced Urban Rappeling
	};
	class Commands
	{
		mode=1;
		jip=0;
		class say3D { allowedTargets=0; };													// UNS Musik
		class setHit { allowedTargets=0; };													// Burn Hut
	};
};