class CfgVehicles
{
	#include "Uniforms\cfgUniforms.cpp"
	
	class GroundWeaponHolder;	// External class reference
	#include "Storage\Basket.cpp"
	#include "Storage\Sack.cpp"
	#include "Loot\MedicalBox.cpp"
	#include "Loot\WoodPileBox.cpp"
	
	// Player bases
	class Land_TentA_F;	// External class reference
	#include "Storage\StorageTent.cpp"
	
	class Land_TentDome_F;	// External class reference
	#include "Storage\StorageTentDome.cpp"

	class Land_cargo_house_slum_F;	// External class reference
	#include "Storage\Shack4.cpp"
	
	class Land_Slum_House01_F;	// External class reference
	#include "Storage\Shack3.cpp"

	class Land_Slum_House03_F;	// External class reference
	#include "Storage\Shack2.cpp"
	
	class Land_Slum_House02_F;	// External class reference
	#include "Storage\Shack1.cpp"
	
	class House;	// External class reference
	class SpawnedWreck : House {
		heightAdjustment = 0;
	};
	
	#include "Wrecks\UH1YWreck.cpp"
	#include "Wrecks\Mi8Wreck.cpp"

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
	
	class Hen_random_F;
	class Cock_random_F;
	class Goat_random_F;
	class Sheep_random_F;
	#include "Animals\Hen.cpp"
	#include "Animals\Cock.cpp"
	#include "Animals\Goat.cpp"
	#include "Animals\Sheep.cpp"
};