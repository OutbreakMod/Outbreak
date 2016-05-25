class MOD_UniformWild1 : MOD_Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 1;
	displayName = "$STR_A3_guerilla_smocks0";
	picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_2_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "SoldierWild1";
		containerClass = "Supply50";
		mass = 50;
	};
};


class MOD_UniformWild2 : MOD_Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 1;
	displayName = $STR_A3_GUERILLA_SMOCKS;
	picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "SoldierWild2";
		containerClass = "Supply50";
		mass = 50;
	};
};

class MOD_UniformWild3 : MOD_Uniform_Base {
	author = "$STR_A3_Bohemia_Interactive";
	scope = 1;
	displayName = $STR_A3_GUERILLA_GARMENT;
	picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla1_1_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"};
	
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "SoldierWild3";
		containerClass = "Supply30";
		mass = 30;
	};
};