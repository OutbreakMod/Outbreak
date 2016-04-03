class RscPicture;
class RscButton;
class RscButtonMenuCancel;
class CA_IGUI_Title;
class CA_Title;
class RscText;
class RscControlsGroup;
class RscCombo;
class RscLineBreak;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscIGUIListNBox;
class RscActiveText;

class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscObject;
class IGUIBack;
class RscIGUIListBox;
class RscHTML;

#define IDC_OK            1 //emulate "Ok" button
#define IDC_CANCEL        2 //emulate "Cancel" button

class MyRscStructuredText {
	idc = -1; 
	type = CT_STRUCTURED_TEXT;  // defined constant
	style = ST_LEFT;            // defined constant
	colorBackground[] = {0, 0, 0, 0};        
	colorText[] = {1, 1, 1, 1};
	x = 0.1; 
	y = 0.1; 
	w = 0.3; 
	h = 0.1; 
	size = 0.018;
	text = "";
	sizeEx = 1;
	
	class Attributes {
		font = "TahomaB";
		color = "#000000";
		align = "center";
		valign = "middle";
		shadow = false;
		shadowColor = "#ff0000";
		size = "1";
	};
};

#include "rscTitles.cpp"
#include "rscCraftingMenu.cpp"