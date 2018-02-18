class rscUserSettings
{
	idd = 49300;
	onLoad="uiNamespace setVariable ['rscUserSettings', _this select 0];";
	onUnload="uiNamespace setVariable ['rscUserSettings', nil];";
	movingEnable = true;
	enableSimulation = true;

	class controls
	{	
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by Alex, v1.063, #Sediwa)
        ////////////////////////////////////////////////////////

        class mainMenuSettings: RscPicture
        {
            idc = 49301;
            text = "#(argb,8,8,3)color(0,0,0,0.5)";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.253 * safezoneH;
        };
        class textSettings: RscText
        {
            idc = 49302;
            text = "Change your settings"; //--- ToDo: Localize;
            x = 0.453594 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
            h = 0.033 * safezoneH;
        };
        class cancelButtonSettings: RscButtonMenuCancel
        {
            idc = 49303;
            action = "closeDialog 0";
            x = 0.489687 * safezoneW + safezoneX;
            y = 0.544 * safezoneH + safezoneY;
            w = 0.0567187 * safezoneW;
            h = 0.033 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class showUserStatsSettings: RscButtonMenuCancel
        {
            idc = 49304;
            text = "Show User Stats"; //--- ToDo: Localize;
            x = 0.453594 * safezoneW + safezoneX;
            y = 0.412 * safezoneH + safezoneY;
            w = 0.0935 * safezoneW;
            h = 0.04 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
            action = "['user_stats'] execVM 'addons\outbreak_code\functions\gui\fnc_applySettings.sqf'";
        };
        class showUserIconsSettings: RscButtonMenuCancel
        {
            idc = 49305;
            text = "Show User Icons"; //--- ToDo: Localize;
            x = 0.453594 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.0935 * safezoneW;
            h = 0.04 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
            action = "['user_icons'] execVM 'addons\outbreak_code\functions\gui\fnc_applySettings.sqf'";
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////


	};
};