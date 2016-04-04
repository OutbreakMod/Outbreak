class rscCraftingMenu
{
	idd = 35900;
	onLoad="uiNamespace setVariable ['rscCraftingMenu', _this select 0]";
	onUnload="uiNamespace setVariable ['rscCraftingMenu', displayNull]";
	movingEnable = false;
	enableSimulation = true;

	class controls
	{	
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by AmazingAussie, v1.063, #Filupu)
		////////////////////////////////////////////////////////

		class itemMainMenu: RscPicture
		{
			idc = 35901;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.30875 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.398438 * safezoneW;
			h = 0.467 * safezoneH;
		};
		class itemComboSelection: RscCombo
		{
			idc = 35902;
			text = "SELECT AN ITEM"; //--- ToDo: Localize;
			x = 0.329469 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.357 * safezoneW;
			h = 0.03825 * safezoneH;
		};
		class itemComboText: RscText
		{
			idc = 35903;
			text = "Select the item you want to craft"; //--- ToDo: Localize;
			x = 0.329468 * safezoneW + safezoneX;
			y = 0.2722 * safezoneH + safezoneY;
			w = 0.357 * safezoneW;
			h = 0.03825 * safezoneH;
		};
		class itemPicture1: RscPicture
		{
			idc = 35904;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.340625 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture2: RscPicture
		{
			idc = 35905;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.423499 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture3: RscPicture
		{
			idc = 35906;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.511156 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture4: RscPicture
		{
			idc = 35907;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.595625 * safezoneW + safezoneX;
			y = 0.364 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture5: RscPicture
		{
			idc = 35908;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.340625 * safezoneW + safezoneX;
			y = 0.5102 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture6: RscPicture
		{
			idc = 35909;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.4235 * safezoneW + safezoneX;
			y = 0.5102 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture7: RscPicture
		{
			idc = 35910;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.511157 * safezoneW + safezoneX;
			y = 0.5102 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemPicture8: RscPicture
		{
			idc = 35911;
			text = "#(argb,8,8,3)color(0,0,0,0.5)";
			x = 0.594032 * safezoneW + safezoneX;
			y = 0.5102 * safezoneH + safezoneY;
			w = 0.06375 * safezoneW;
			h = 0.085 * safezoneH;
		};
		class itemText1: MultipleLineRscText
		{
			idc = 35912;
			text = "ITEM 1"; //--- ToDo: Localize;
			x = 0.337437 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText2: MultipleLineRscText
		{
			idc = 35913;
			text = "ITEM 2"; //--- ToDo: Localize;
			x = 0.420312 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText3: MultipleLineRscText
		{
			idc = 35914;
			text = "ITEM 3"; //--- ToDo: Localize;
			x = 0.507969 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText4: MultipleLineRscText
		{
			idc = 35915;
			text = "ITEM 4"; //--- ToDo: Localize;
			x = 0.594031 * safezoneW + safezoneX;
			y = 0.4558 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText5: MultipleLineRscText
		{
			idc = 35916;
			text = "ITEM 5"; //--- ToDo: Localize;
			x = 0.337437 * safezoneW + safezoneX;
			y = 0.5986 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText6: MultipleLineRscText
		{
			idc = 35917;
			text = "ITEM 6"; //--- ToDo: Localize;
			x = 0.420312 * safezoneW + safezoneX;
			y = 0.5986 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText7: MultipleLineRscText
		{
			idc = 35918;
			text = "ITEM 7"; //--- ToDo: Localize;
			x = 0.507969 * safezoneW + safezoneX;
			y = 0.5986 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemText8: MultipleLineRscText
		{
			idc = 35919;
			text = "ITEM 8"; //--- ToDo: Localize;
			x = 0.590844 * safezoneW + safezoneX;
			y = 0.5986 * safezoneH + safezoneY;
			w = 0.069 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.025;
		};
		class itemInfo: RscText
		{
			idc = 35920;
			text = "If items are in red, it means you don't have enough"; //--- ToDo: Localize;
			x = 0.315 * safezoneW + safezoneX;
			y = 0.6598 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.042 * safezoneH;
			sizeEx = 0.028;
		};
		class cancelButton: RscButtonMenuCancel
		{
			idc = 35921;
			x = 0.6275 * safezoneW + safezoneX;
			y = 0.6632 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 0";
		};
		class craftItemButton: RscButtonMenuCancel
		{
			idc = 35922;
			text = "craft item"; //--- ToDo: Localize;
			x = 0.523906 * safezoneW + safezoneX;
			y = 0.6632 * safezoneH + safezoneY;
			w = 0.0935 * safezoneW;
			h = 0.04 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};