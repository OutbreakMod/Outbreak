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
	
	#include "Buildings\cfgMilitaryLoot.cpp"
	#include "Buildings\cfgResidentialLoot.cpp"
	#include "Buildings\cfgIndustrialLoot.cpp"
	#include "Buildings\cfgWreckLoot.cpp"
	#include "Buildings\cfgFarmLoot.cpp"
}