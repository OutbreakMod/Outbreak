class CfgLootCategories {
	
	class GeneralTools {
		
		loot[] = {
			{"ItemMap","single",0.05},
			{"ItemWatch","single",0.03},
			{"Binocular","single",0.06},
		};
	};
	
	class MilitaryTools {
		
		loot[] = {
			{"ItemGPS","item",0.05},
			{"mre","item",0.06},
			{"Rangefinder","single",0.01}
		};
	};
	
	class MilitarySpecial {
		
		loot[] = {
			{"NVGoggles","single",0.01},
			{"Rangefinder","single",0.02}
		};
	};
	
		
	class MilitaryPistols {
		
		loot[] = {
			{"hgun_Pistol_heavy_01_F","gun",0.06}, // @mas makarov
			{"muzzle_snds_L","item",0.01}
		};
	};

	class CookingUtilities {
		
		loot[] = {
			{"matchbox","item",0.08},
			{"knife","item",0.06}
		};
	};
	
	class USHelicrash {
		
		loot[] = {
			{"tent","single",0.1}, // 10% 
			{"arifle_mas_m4","gun",0.07}, // @mas
			{"arifle_mas_hk417c","gun",0.06}, // @mas
			{"arifle_mas_m16","gun",0.07}, // @mas
			{"arifle_mas_fal","gun",0.05} // @mas
		};
	};
	
	class RUHelicrash {
		
		loot[] = {
			{"arifle_mas_asval_h","gun",0.04}, // 10% 
			{"LMG_mas_rpk_F","gun",0.08}, // @mas
			{"LMG_mas_pkm_F","gun",0.07}, // @mas
			{"srifle_mas_vss_h","gun",0.03} // @mas
		};
	};
	
	class Attachments {
		
		loot[] = {
			{"optic_mas_acog_eo", "item",0.01},
			{"optic_ACO", "item",0.01},
			{"optic_mas_Holosight_blk", "item",0.01},
			{"muzzle_mas_snds_M", "item",0.01},
			{"optic_mas_kobra", "item",0.01},
			{"muzzle_mas_snds_AK", "item",0.01},
			{"optic_mas_PSO_eo", "item",0.01},
			{"optic_mas_acog_eo","item",0.01}
		};
	};

	class AssaultRifles {
		
		loot[] = {
			//{"arifle_Katiba_C_ACO_pointer_snds_F","gun",00.3},
			//{"arifle_Katiba_C_F","gun",0.6},
			//{"arifle_MXC_F","gun",0.08},
			//{"arifle_MX_Holo_pointer_F","gun",0.07},
			//{"arifle_MXM_RCO_pointer_snds_F","gun",0.03},
			//{"arifle_Katiba_F","gun",0.08}
			{"arifle_mas_ak_74m","gun",0.06},
			{"arifle_mas_aks74","gun",0.07},
			{"arifle_mas_ak74","gun",0.06},
			{"arifle_mas_akm","gun",0.05},
			{"arifle_mas_m14_a","gun",0.03}
		};
	};
	
	class SubmachineGuns {
		
		loot[] = {
			{"hgun_PDW2000_Holo_F","gun",0.03},
			{"SMG_01_Holo_F","gun",0.03},
			{"hgun_mas_sa61_F","gun",0.05},
			{"arifle_mas_bizon","gun",0.04}// @mas
			
		};
	};
	
	class LightMachineGuns {
		
		loot[] = {
			{"hgun_PDW2000_Holo_F","gun",0.06},
			{"LMG_mas_pkm_F","gun",0.03}
			
		};
	};
	
	class SniperRifles {
		
		loot[] = {
			{"srifle_mas_svd_h","gun",0.02},
			{"srifle_mas_ksvk_h","gun",0.01},
		};
	};
	
	class HighCaliberRifles {
		
		loot[] = {
			{"srifle_mas_m107_h","gun",0.01} // @mas m107
		};
	};
	
	class MedicalGeneral {
		
		loot[] = {
			{"MedicalBox","supplybox",0.04}
		};
	};
	
	class Medical {
		
		loot[] = {
			{"bandage", "item",0.08},
			{"ibuprofen", "item",0.06},
			{"morphine", "item",0.05},
			{"epinephrine", "item",0.04},
			{"blood", "item",0.02}
		};
	};
	
	class MiscMedical {
		
		loot[] = {
			{"bandage", "item",0.08},
			{"ibuprofen", "item",0.06},
			{"morphine", "item",0.05},
		};
	};
	
	class Supermarket {
		
		loot[] = {
			{"twinkies", "item",0.02},
			{"snoballs", "item",0.02},
			{"energy_drink", "item",0.06},
			{"cereal", "item",0.06},
			{"candybar", "item",0.03},
			{"soda", "item",0.06},
			{"orangedrink", "item",0.06},
			{"chips", "item", 0.01},
			{"cannedfood","item", 0.05}
		};
	};
	
	class CivillianFoodStorage {
		
		loot[] = {
			{"energy_drink", "item",0.03},
			{"corn", "item",0.02},
			{"cereal", "item",0.03},
			{"soda", "item",0.04},
			{"orangedrink", "item",0.04},
			{"chips", "item", 0.03},
			{"cannedfood","item", 0.06}
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

	class Hunting {
		
		loot[] = {
			{"srifle_mas_m24_v_h","gun",0.02}, //@mas
			{"Trixie_CZ550", "gun",0.04}
		};
	};
	
	class Farm {
		
		loot[] = {
			{"Trixie_Enfield", "gun",0.08},
			{"Trixie_CZ550", "gun",0.03},
			{"arifle_mas_saiga","gun",0.06},
			{"WoodPileBox","supplybox",0.1}, //0.1
			{"carrot", "item",0.05},
			{"potato", "item",0.05}
		};
	};


	class CivillianBackpacks {
		
		loot[] = {
			{"B_OutdoorPack_blk", "backpack",0.02},
			{"B_OutdoorPack_tan", "backpack",0.02},
			{"B_OutdoorPack_blu", "backpack",0.02},
			{"B_HuntingBackpack", "backpack",0.015},
			{"B_Kitbag_mcamo", "backpack",0.01},
			{"B_Kitbag_sgg", "backpack",0.01},
			{"B_Kitbag_cbr", "backpack",0.01}
		};
	};
	
	class Industrial {
		
		loot[] = {
			{"axe","single", 0.09},
			{"jerrycan","single", 0.08},
			{"cartyre","single", 0.06},
			{"hammer","single", 0.09},
			{"toolbox","single", 0.06},
			{"scrap","item", 0.06}
		};
	};

	class Firestation {
		
		loot[] = {
			{"fireaxe","single", 0.08},
			{"axe","single", 0.06},
			{"jerrycan","single", 0.08},
			{"hammer","single", 0.09},
			{"toolbox","single", 0.06},
			{"scrap","item", 0.06}
		};
	};
	
	class Magazines {
		
		loot[] = {
			{"20Rnd_mas_762x51_Stanag", "magazine",0.02},
			{"5Rnd_127x108_Mag", "magazine",0.04},
			{"10Rnd_mas_762x54_mag","magazine",0.02}, // @mas
			{"5Rnd_mas_762x51_Stanag","magazine",0.03}, // @mas
			{"30Rnd_mas_762x39_mag", "magazine",0.05}, // @mas
			{"30Rnd_mas_545x39_mag", "magazine",0.06} // @mas	
			
		};
	};
	
	class CivillianPistols {
		
		loot[] = {
			{"hgun_mas_mak_F","gun",0.06}, // @mas makarov
			{"hgun_mas_grach_F", "gun",0.04} // @mas russian mil pistol
		};
	};


	class CivillianMagazines {
		
		loot[] = {
			{"Trixie_CZ550_Mag","magazine",0.02},
			{"Trixie_Enfield_Mag","magazine",0.03},
			{"8Rnd_mas_9x18_Mag","magazine",0.05},
			{"15Rnd_mas_9x21_Mag","magazine",0.04}
		};
	};
};