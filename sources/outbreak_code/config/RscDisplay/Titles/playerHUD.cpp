class playerHUD {
	idd = -1;
	movingEnable = "false";
	duration = 100000;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD', _this select 0];";

	controls[] = {"rscPictureHealth"};
	
	class rscPictureHealth: RscPicture {
		idc = 18500;
		x = 0.948 * safezoneW + safezoneX;
		y = 0.86 * safezoneH + safezoneY; // up down
		w = 0.075;
		h = 0.10;
		text = "\addons\outbreak_assets\textures\ui\icons\health\100.paa";
	};
};