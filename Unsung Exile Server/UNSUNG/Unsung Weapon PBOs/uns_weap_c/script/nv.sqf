#define ANIM_BINOCS \
[ \
	"awoppercmstpsoptwbindnon_rfl", "awoppknlmstpsoptwbindnon_rfl", "awopppnemstpsoptwbindnon_rfl", \
	"awoppercmstpsoptwbindnon_pst", "awoppknlmstpsoptwbindnon_pst", "awopppnemstpsoptwbindnon_pst", \
	"awoppknlmstpsoptwbindnon_lnr", "awoppercmstpsoptwbindnon_non", "awopppnemstpsoptwbindnon_non" \
]
[] spawn
{
	private ["_target"];
	_target = objNull;
	while {true} do
	{
		if (player hasWeapon "uns_ANPVS2") then
		{
			waitUntil
			{
				if ((animationState player) in ANIM_BINOCS) then
				{
					player addweapon "NVGoggles";player action ["NVGoggles",player];

					waitUntil {not ((animationState player) in ANIM_BINOCS)};
					player action ["NVGogglesOff",player];player removeweapon "NVGoggles";
				};
				not (player hasWeapon "uns_ANPVS2");
			};
		};
		sleep 5;
	};
};