class CfgPatches {
	class outbreak_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"outbreak_assets", "Unlocked_Uniforms"};
	};
};


#include "config\cfgBuildingClothes\cfgBuildingClothes.cpp"
#include "config\cfgGame\cfgGame.cpp"
#include "config\cfgVehicles\cfgVehicles.cpp"
#include "config\cfgMagazines\cfgMagazines.cpp"
#include "config\cfgWeapons\cfgWeapons.cpp"
#include "config\cfgZombies\cfgZombies.cpp"
#include "config\RscDisplay\includes.cpp"
#include "config\cfgRecipes\cfgRecipes.cpp"

class CfgRemoteExec
{        
	// List of script functions allowed to be sent from client via remoteExec
	class Functions
	{
		mode = 1;
		jip = 1;
		
		/* server only remoteexec */
		class remoteExec_add_cleanup { allowedTargets=2; };
		class remoteExec_new_object { allowedTargets=2; }; 
		class remoteExec_player_delete { allowedTargets=2; };
		class remoteExec_player_login { allowedTargets=2; };
		class remoteExec_spawn_loot { allowedTargets=2; };
		
		/* client only remoteexec */
		class fnc_anim_switchMove { allowedTargets=1; };
		class fnc_anim_playMoveNow { allowedTargets=1; };
		class fnc_object_speak { allowedTargets=1; };
	};
	
    class Commands
    {
        mode=0;
        jip=0;
    };
};