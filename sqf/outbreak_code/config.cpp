class CfgPatches {
	class outbreak_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"outbreak_assets"};
	};
};

// zombie loot
#include "config\cfgLoot\cfgBuildingType.cpp"

// configuration files
#include "config\cfgGame\cfgGame.cpp"
#include "config\cfgVehicles\cfgVehicles.cpp"
#include "config\cfgMagazines\cfgMagazines.cpp"

// weapons
#include "config\cfgWeapons\cfgWeapons.cpp"

// zombies
#include "config\cfgZombies\cfgZombies.cpp"