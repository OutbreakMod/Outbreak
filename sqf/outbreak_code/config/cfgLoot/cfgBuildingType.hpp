class CfgBuildingType
{
	class Default {
		lootMax = 0;
		lootMin = 0;
		lootCategories[] = {};
		positions[] = {};
		lootRespawnSeconds = 300; // default 5 minute respawn timer
		enabled = true; // override to false to stop loot
	}
	
	#include "Buildings\cfgMilitaryLoot.hpp"
	#include "Buildings\cfgResidentialLoot.hpp"
	#include "Buildings\cfgIndustrialLoot.hpp"
	#include "Buildings\cfgWreckLoot.hpp"
	#include "Buildings\cfgFarmLoot.hpp"
}