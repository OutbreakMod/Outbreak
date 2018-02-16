class CfgPatches {
	class outbreak_doorsounds {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Buildings_Data", "CUP_Buildings_Config"};
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
	
	#include "buildings\Land_Ss_hangar.hpp"
};