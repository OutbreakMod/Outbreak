class CfgLootCategories {
	
	class GeneralTools {
		
		loot[] = {
			{"ItemGPS","item",0.05},
			{"ItemMap","item",0.1},
			{"ItemWatch","item",0.07},
			{"Binocular","item",0.06},
			{"sc_knife","item",0.06}
		};
	};
	
	class MilitaryTools {
		
		loot[] = {
			{"sc_mre","item",0.06},
			{"NVGoggles","item",0.03},
			{"Rangefinder","item",0.05}
		};
	};
	
	class AssaultRifles {
		
		loot[] = {
			{"arifle_Katiba_C_ACO_pointer_snds_F","gun",0.12},
			{"arifle_Katiba_C_F","gun",0.12},
			{"arifle_MXC_F","gun",0.15},
			{"arifle_MX_Holo_pointer_F","gun",0.10},
			{"arifle_MXM_RCO_pointer_snds_F","gun",0.05},
			{"arifle_Katiba_F","gun",0.20},
			{"arifle_TRG21_GL_ACO_pointer_F","gun",0.15}
			
		};
	};
	
	class SniperRifles {
		
		loot[] = {
			{"srifle_EBR_ACO_F","gun",0.08},
			{"srifle_EBR_ARCO_pointer_F","gun",0.07},
			{"srifle_EBR_ARCO_pointer_snds_F","gun",0.05},
			{"srifle_EBR_DMS_pointer_snds_F","gun",0.05},
			{"rifle_EBR_SOS_F","gun",0.01}
		};
	};
	
	class MedicalGeneral {
		
		loot[] = {
			{"MedicalBox","supplybox",0.04}
		};
	};
	
	class Medical {
		
		loot[] = {
			{"sc_bandage", "item",0.06},
			{"sc_ibuprofen", "item",0.04},
			{"sc_morphine", "item",0.04},
			{"sc_epinephrine", "item",0.03},
			{"sc_blood", "item",0.02}
		};
	};
	
	class Supermarket {
		
		loot[] = {
			{"sc_twinkies", "item",0.02},
			{"sc_snoballs", "item",0.02},
			{"sc_pbj", "item",0.02},
			{"sc_donut", "item",0.02},
			{"sc_potato", "item",0.08},
			{"sc_energy_drink", "item",0.06},
			{"sc_corn", "item",0.05},
			{"sc_coffee", "item",0.07},
			{"sc_cereal", "item",0.06},
			{"sc_carrot", "item",0.05},
			{"sc_candybar", "item",0.02},
			{"sc_soda", "item",0.06},
			{"sc_juicebox", "item",0.06},
			{"sc_chips", "item", 0.1},
			{"sc_cannedfood","item", 0.05}
		};
	};
	
	class CivillianFoodStorage {
		
		loot[] = {
			{"sc_energy_drink", "item",0.06},
			{"sc_corn", "item",0.02},
			{"sc_coffee", "item",0.03},
			{"sc_cereal", "item",0.03},
			{"sc_soda", "item",0.04},
			{"sc_juicebox", "item",0.06},
			{"sc_chips", "item", 0.5},
			{"sc_cannedfood","item", 0.05}
		};
	};

	class CivillianPistols {
		
		loot[] = {
			{"hgun_P07_F","gun",0.08},
			{"hgun_Pistol_heavy_01_F", "gun",0.06},
			{"hgun_ACPC2_F", "gun",0.06}
		};
	};
	
	class CivillianClothes {
		
		loot[] = {
			{"U_C_Poloshirt_blue", "item",0.04},
			{"U_C_Poloshirt_burgundy", "item",0.04},
			{"U_C_Poloshirt_stripped", "item",0.04},
			{"U_C_Poloshirt_tricolour", "item",0.04},
			{"U_C_Poloshirt_salmon", "item",0.04},
			{"U_C_Poloshirt_redwhite", "item",0.04},
			{"U_C_Commoner1_1", "item",0.04},
			{"U_C_Poor_1", "item",0.04}
		};
	};
	
	/*
_weaponHolder = createVehicle ["GroundWeaponHolder", getPos player, [], 0, "CAN_COLLIDE"];
_weaponHolder addItemCargoGlobal ["B_Kitbag_mcamo", 1];

_weaponHolder = createVehicle ["GroundWeaponHolder", getPos player, [], 0, "CAN_COLLIDE"];
_weaponHolder addItemCargoGlobal ["B_AssaultPack_khk", 1];

_weaponHolder = createVehicle ["GroundWeaponHolder", _lootPos, [], 0, "CAN_COLLIDE"];
						_weaponHolder setVariable ["isLoot", true];
						_weaponHolder addBackpackCargoGlobal ["B_AssaultPack_khk", 1];
	*/
	
	class CivillianBackpacks {
		
		loot[] = {
			{"B_OutdoorPack_blk", "backpack",0.05},
			{"B_OutdoorPack_tan", "backpack",0.04},
			{"B_OutdoorPack_blu", "backpack",0.05},
			{"B_HuntingBackpack", "backpack",0.04},
			{"B_Kitbag_mcamo", "backpack",0.05},
			{"B_Kitbag_sgg", "backpack",0.04},
			{"B_Kitbag_cbr", "backpack",0.04}
		};
	};
};