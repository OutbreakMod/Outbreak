class rscBloodyScreen {
	idd = -1;
	movingEnable = "false";
	duration = 5;
	fadein = 2;
	name = "BloodyScreen";
	controls[] = {"BloodyScreen"};
	
	class BloodyScreen: RscPicture {
		x = 0 * safezoneW + safezoneX;
		y = 0 * safezoneH + safezoneY;
		w = 1 * safezoneW;
		h = 1 * safezoneH;
		text = "\addons\outbreak_assets\textures\status\bloodyscreen.paa";
	};
};