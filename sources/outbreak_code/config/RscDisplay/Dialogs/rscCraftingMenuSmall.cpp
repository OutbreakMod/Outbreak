class rscCraftingMenuSmall
{
	idd = 35900;
	onLoad="uiNamespace setVariable ['rscCraftingMenuSmall', _this select 0]";
	onUnload="uiNamespace setVariable ['rscCraftingMenuSmall', displayNull]";
	movingEnable = false;
	enableSimulation = true;

	class controls
	{	
		class mainMenu: RscPicture
		{
			idc = 35901;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.30875 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.398438 * safezoneW;
			h = 0.34 * safezoneH;
		};
		class itemComboSelection: RscCombo
		{
			idc = 35902;
			text = "SELECT AN ITEM"; //--- ToDo: Localize;
			x = 0.329469 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.357 * safezoneW;
			h = 0.03825 * safezoneH;
			sizeEx = 0.025;
		};
		class itemPicture1: RscPicture
		{
			idc = 35903;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.340625 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture2: RscPicture
		{
			idc = 35904;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.423499 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture3: RscPicture
		{
			idc = 35905;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.511156 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture4: RscPicture
		{
			idc = 35906;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.595625 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemDisplayText: RscText
		{
			idc = 35907;
			text = "Select the item you want to craft"; //--- ToDo: Localize;
			x = 0.329468 * safezoneW + safezoneX;
			y = 0.2722 * safezoneH + safezoneY;
			w = 0.357 * safezoneW;
			h = 0.03825 * safezoneH;
		};
		class itemText1: MultipleLineRscText
		{
			idc = 35908;
			text = "ITEM 1"; //--- ToDo: Localize;
			x = 0.337437 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;//h = 0.01825 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText2: MultipleLineRscText
		{
			idc = 35909;
			text = "ITEM 2"; //--- ToDo: Localize;
			x = 0.420312 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;//h = 0.01825 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText3: MultipleLineRscText
		{
			idc = 35910;
			text = "ITEM 3"; //--- ToDo: Localize;
			x = 0.507969 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;//h = 0.01825 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText4: MultipleLineRscText
		{
			idc = 35911;
			text = "ITEM 4"; //--- ToDo: Localize;
			x = 0.592438 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;//h = 0.01825 * safezoneH;
			sizeEx = 0.025;
		};
		class cancelButton: RscButtonMenuCancel
		{
			idc = 35912;
			x = 0.6275 * safezoneW + safezoneX;
			y = 0.551 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 0";
		};
		class craftItemButton: RscButtonMenuCancel
		{
			idc = 35913;
			text = "craft item"; //--- ToDo: Localize;
			x = 0.523906 * safezoneW + safezoneX;
			y = 0.551 * safezoneH + safezoneY;
			w = 0.0935 * safezoneW;
			h = 0.04 * safezoneH;
		};
	};
};