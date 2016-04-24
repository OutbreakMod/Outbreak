class MOD_IndustrialUniform1 : MOD_Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "$STR_A3_Characters_F_Beta_0";
	picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Civil\Data\c_competitor_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "SoldierIndustrial1";
		containerClass = "Supply30";
		mass = 30;
	};
};

class MOD_IndustrialUniform2 : MOD_Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "$STR_A3_worker_overalls";
	picture = "\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_dirty_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "SoldierIndustrial2";
		containerClass = "Supply30";
		mass = 30;
	};
};