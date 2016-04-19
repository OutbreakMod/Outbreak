class playerHUD {
	idd = -1;
	movingEnable = "false";
	duration = 100000;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD', _this select 0];";

	controls[] = {"rscPictureHealth", "rscPictureFood", "rscPictureThirst"};
	
	class rscPictureHealth: RscPicture {
		idc = 18500;
		x = 0.948 * safezoneW + safezoneX;
		y = 0.86 * safezoneH + safezoneY; // up down
		w = 0.075;
		h = 0.10;
		text = "\addons\outbreak_assets\textures\ui\icons\health\100.paa";
	};
	
	class rscPictureFood: RscPicture {
		idc = 18501;
		x = 0.948 * safezoneW + safezoneX;
		y = 0.76 * safezoneH + safezoneY; // up down
		w = 0.075;
		h = 0.10;
		text = "\addons\outbreak_assets\textures\ui\icons\food\25.paa";
	};
	
	class rscPictureThirst: RscPicture {
		idc = 18502;
		x = 0.948 * safezoneW + safezoneX;
		y = 0.66 * safezoneH + safezoneY; // up down
		w = 0.075;
		h = 0.10;
		text = "\addons\outbreak_assets\textures\ui\icons\thirst\75.paa";
	};
};