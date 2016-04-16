class U_I_OfficerUniform : Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "$STR_A3_combat_fatigues_haf_tee";
	picture = "\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "I_officer_F";
		containerClass = "Supply40";
		mass = 40;
	};
};

class U_I_CombatUniform : Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 2;
	displayName = "$STR_A3_combat_fatigues_haf0";
	picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "I_soldier_F";
		containerClass = "Supply40";
		mass = 40;
	};
};