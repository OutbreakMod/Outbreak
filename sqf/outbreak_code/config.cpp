class CfgPatches {
	class outbreak_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"outbreak_assets"};
	};
};

// configuration files
#include "config\cfgGame\cfgGame.hpp"
#include "config\cfgVehicles\cfgVehicles.hpp"
#include "config\cfgMagazines\cfgMagazines.hpp"

// Player music
#include "config\cfgMusic.hpp"

// weapons
#include "config\cfgWeapons\cfgWeapons.hpp"

// zombies
#include "config\cfgZombies\cfgZombies.hpp"