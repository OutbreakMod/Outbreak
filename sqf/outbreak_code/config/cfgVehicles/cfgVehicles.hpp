class CfgVehicles
{
	// Loot spawn
	class GroundWeaponHolder;	
	#include "WeaponHolders\OutbreakBasket.hpp"
	#include "WeaponHolders\ItemSack.hpp"
	#include "Loot\MedicalBox.hpp"
	#include "Loot\WoodPileBox.hpp"
	
	// Player bases
	class Land_TentA_F;
	#include "PlayerBases\OutbreakTent.hpp"
	
	class Land_TentDome_F;
	#include "PlayerBases\OutbreakTentDome.hpp"

	class Land_cargo_house_slum_F;
	#include "PlayerBases\OutbreakShackV4.hpp"
	
	class Land_Slum_House01_F;
	#include "PlayerBases\OutbreakShackV3.hpp"

	class Land_Slum_House03_F;
	#include "PlayerBases\OutbreakShackV2.hpp"
	
	class Land_Slum_House02_F;
	#include "PlayerBases\OutbreakShackV1.hpp"
	
	class House;
	class SpawnedWreck : House {
		heightAdjustment = 0;
	};
	
	#include "Wrecks\UH1YWreck.hpp"
	#include "Wrecks\Mi8Wreck.hpp"
};