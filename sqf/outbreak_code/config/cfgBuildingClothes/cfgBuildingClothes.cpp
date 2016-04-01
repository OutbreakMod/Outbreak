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
	/*
		Land_Fort_Watchtower
		RU_WarfareBUAVterminal
		HMMWVWreck
		BMP2Wreck
		Land_Mil_Barracks_L
		Land_Mil_Barracks
		Land_Mil_House
	*/
	
	#include "Buildings\cfgResidential.cpp"
	#include "Buildings\cfgIndustrial.cpp"
	//Land_Repair_center
	
	#include "Buildings\cfgWreck.cpp"
	#include "Buildings\cfgFarm.cpp"
}