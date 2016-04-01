class cfgBuildingClothes
{
	class Default {
		lootMax = 0;
		lootMin = 0;
		lootCategories[] = {};
		positions[] = {};
		lootRespawnSeconds = 300; // default 5 minute respawn timer
		enabled = true; // override to false to stop loot
	}
	
	#include "Buildings\cfgMilitary.cpp"
	#include "Buildings\cfgResidential.cpp"
	#include "Buildings\cfgIndustrial.cpp"
	#include "Buildings\cfgWreck.cpp"
	#include "Buildings\cfgFarm.cpp"
}