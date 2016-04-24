class CfgVehicles
{
	#include "..\cfgUniforms\cfgModels\Wild.cpp"
	#include "..\cfgUniforms\cfgModels\Civillian.cpp"
	#include "..\cfgUniforms\cfgModels\Industrial.cpp"
	
	class GroundWeaponHolder;		// External class reference
	#include "Storage\Basket.cpp"
	#include "Storage\Sack.cpp"
	#include "Loot\MedicalBox.cpp"
	#include "Loot\WoodPileBox.cpp"

	class Land_TentA_F;				// External class reference
	class Land_Slum_House02_F;  	// External class reference
	class Land_TentDome_F;			// External class reference
	class Land_cargo_house_slum_F;	// External class reference
	class Land_Slum_House01_F;		// External class reference
	class Land_Slum_House03_F;		// External class reference
	#include "Storage\StorageTent.cpp"
	#include "Storage\StorageTentDome.cpp"
	#include "Storage\Shack4.cpp"
	#include "Storage\Shack3.cpp"
	#include "Storage\Shack2.cpp"
	

	#include "Storage\Shack1.cpp"
	
	class House;					// External class reference
	class SpawnedWreck : House {
		heightAdjustment = 0;
	};
	#include "Wrecks\UH1YWreck.cpp"
	#include "Wrecks\Mi8Wreck.cpp"
	
	class Hen_random_F;
	class Cock_random_F;
	class Goat_random_F;
	class Sheep_random_F;
	#include "Animals\Hen.cpp"
	#include "Animals\Cock.cpp"
	#include "Animals\Goat.cpp"
	#include "Animals\Sheep.cpp"

	class b_survivor_F;	// External class reference
	class Survivor : b_survivor_F {
		//faceType = "ZombieFace";
		uniformClass = "";
		weapons[] = {};
		respawnWeapons[] = {};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		//moves = "CfgMovesZombieSdr";
		//gestures = "CfgGesturesZombie";
	};
	class Zombie : b_survivor_F {
		faceType = "ZombieFace";
		uniformClass = "";
		weapons[] = {};
		respawnWeapons[] = {};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
	};
};