class CfgVehicles
{
	class GroundWeaponHolder;	// External class reference
	#include "WeaponHolders\OutbreakBasket.cpp"
	#include "WeaponHolders\ItemSack.cpp"
	#include "Loot\MedicalBox.cpp"
	#include "Loot\WoodPileBox.cpp"
	
	// Player bases
	class Land_TentA_F;	// External class reference
	#include "PlayerBases\OutbreakTent.cpp"
	
	class Land_TentDome_F;	// External class reference
	#include "PlayerBases\OutbreakTentDome.cpp"

	class Land_cargo_house_slum_F;	// External class reference
	#include "PlayerBases\OutbreakShackV4.cpp"
	
	class Land_Slum_House01_F;	// External class reference
	#include "PlayerBases\OutbreakShackV3.cpp"

	class Land_Slum_House03_F;	// External class reference
	#include "PlayerBases\OutbreakShackV2.cpp"
	
	class Land_Slum_House02_F;	// External class reference
	#include "PlayerBases\OutbreakShackV1.cpp"
	
	class House;	// External class reference
	class SpawnedWreck : House {
		heightAdjustment = 0;
	};
	
	#include "Wrecks\UH1YWreck.cpp"
	#include "Wrecks\Mi8Wreck.cpp"

	class b_survivor_F;	// External class reference
	class Zombie : b_survivor_F {
		faceType = "ZombieFace";
	};
};