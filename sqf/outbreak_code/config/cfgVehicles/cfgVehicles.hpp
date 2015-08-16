class CfgVehicles
{
	class GroundWeaponHolder;	// External class reference
	#include "WeaponHolders\OutbreakBasket.hpp"
	#include "WeaponHolders\ItemSack.hpp"
	#include "Loot\MedicalBox.hpp"
	#include "Loot\WoodPileBox.hpp"
	
	// Player bases
	class Land_TentA_F;	// External class reference
	#include "PlayerBases\OutbreakTent.hpp"
	
	class Land_TentDome_F;	// External class reference
	#include "PlayerBases\OutbreakTentDome.hpp"

	class Land_cargo_house_slum_F;	// External class reference
	#include "PlayerBases\OutbreakShackV4.hpp"
	
	class Land_Slum_House01_F;	// External class reference
	#include "PlayerBases\OutbreakShackV3.hpp"

	class Land_Slum_House03_F;	// External class reference
	#include "PlayerBases\OutbreakShackV2.hpp"
	
	class Land_Slum_House02_F;	// External class reference
	#include "PlayerBases\OutbreakShackV1.hpp"
	
	class House;	// External class reference
	class SpawnedWreck : House {
		heightAdjustment = 0;
	};
	
	#include "Wrecks\UH1YWreck.hpp"
	#include "Wrecks\Mi8Wreck.hpp"

	class b_survivor_F;	// External class reference
	class Zombie : b_survivor_F {
		faceType = "ZombieFace";
	};
};