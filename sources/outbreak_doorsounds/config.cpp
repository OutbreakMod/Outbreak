class CfgPatches {
	class outbreak_doorsounds {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_Mil", "CUP_CAStructures_Mil", "Farm_Cowshed", "CUP_Farm_Cowshed", "CUP_Buildings_Data", "CABuildings", "CABuildings2", "Barn_Metal"};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgVehicles {
	class HouseBase;	// External class reference
	
	class House : HouseBase {
		class DestructionEffects;	// External class reference
	};
	
	class Ruins;	// External class reference
	
	#include "buildings\Land_Mil_Barracks_i.hpp"
	#include "buildings\Land_Mil_ControlTower.hpp"
	#include "buildings\Land_Ss_hangar.hpp"
	#include "buildings\Land_Hangar_2.hpp"
	#include "buildings\Land_Farm_Cowshed.hpp"
	#include "buildings\Land_Barn_Metal.hpp"
};