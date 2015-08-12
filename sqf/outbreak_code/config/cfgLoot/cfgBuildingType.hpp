class CfgBuildingType
{
	class Default {
		lootMax = 0;
		lootMin = 0;
		lootCategories[] = {};
		positions[] = {};
		lootRespawnSeconds = 300; // default 5 minute respawn timer
		
	}
	
	#include "Buildings\cfgMilitaryLoot.hpp"
	#include "Buildings\cfgResidentialLoot.hpp"
	#include "Buildings\cfgIndustrialLoot.hpp"
	#include "Buildings\cfgWreckLoot.hpp"
	#include "Buildings\cfgFarmLoot.hpp"
	
	//Land_HouseV_1I1
	//Land_Rail_House_01
	//Land_Panelak
	//Land_Panelak2
	//Land_rail_station_big
	//Land_sara_hasic_zbroj
	
	//Land_repair_center >> industrial
	//Land_Shed_Ind02 >> industrial
	//Land_Shed_W01 >> industrial
	//Land_Tovarna2 >> industrial
	//Land_hut06 >> industrial
	//Land_kulna >> industrial
	//Land_houseV_2T2 >> industrial
	//Land_a_stationhouse >> military
}