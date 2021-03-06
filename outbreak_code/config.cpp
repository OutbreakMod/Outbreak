class CfgPatches {
	class outbreak_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"outbreak_assets", "A3_Characters_F", "CUP_Weapons_AK", "A3_Characters_F_Common"};
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
#include "config\CfgRemoteExec\cfgRemoteExec.cpp"

//#include "config\CfgMoves\CfgMoves.cpp"