/*
	Handle apply settings from GUI
	@author: TheAmazingAussie
*/

_settingToApply = _this select 0;

if (_settingToApply == "user_stats") then {
    SHOW_DEBUG_MENU = !SHOW_DEBUG_MENU;
    hintSilent "";
};

if (_settingToApply == "user_icons") then {
    SHOW_PLAYER_ICONS = !SHOW_PLAYER_ICONS;
    
    if (!SHOW_PLAYER_ICONS) then {
        5 cutFadeOut 0;
    } else {
        SHOW_PLAYER_ICONS_CHECK = true;  
    };
};
