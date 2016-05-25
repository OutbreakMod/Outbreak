
class CUP_6Rnd_45ACP_M;

class 6Rnd_45ACP_M : CUP_6Rnd_45ACP_M {
	
	model = "addons\outbreak_assets\models\45acp_box";
	
	class cfgItemActions {
		doubleClick = "['6Rnd_45ACP_M', '7Rnd_45ACP_M'] call fnc_convertMagazines;";
	};
};

class CUP_7Rnd_45ACP_1911;

class 7Rnd_45ACP_M : CUP_7Rnd_45ACP_1911 {
	
	model = "addons\outbreak_assets\models\45acp_box";
	
	class cfgItemActions {
		doubleClick = "['7Rnd_45ACP_M', '6Rnd_45ACP_M'] call fnc_convertMagazines;";
	};
};