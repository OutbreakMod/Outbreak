/*
	Player initialization for event handlers and spawn loot checking
	@author: TheAmazingAussie
*/

private ["_timer"];

_previousUnit = player;
_newUnit = (createGroup west) createUnit ["Survivor", getPosATL player, [], 0, "NONE"];

addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;
deleteVehicle (_previousUnit);

setAperture 10000;
1 fadeSound 0;
1 fadeSpeech 0;

// new handlers
player removeAllEventHandlers "Killed";
player removeAllEventHandlers "Respawn";
player removeAllEventHandlers "HandleDamage";
player removeAllEventHandlers "Fired";

player addEventHandler ["Killed", { _this call player_killed; }];
player addEventHandler ["Respawn", { _this call player_respawn; }];
player addEventHandler ["HandleDamage", { _this call player_handleDamage; }];
player addEventHandler ["Fired", { _this call player_fired; }];

player setVariable ["playeruuid", getPlayerUID player, true];
player setVariable ["alive", true];
player setVariable ["isPlayer", true, true];
player setVariable ["deathmessage", format["His name was %1 and died from death", name player], true];
player enableFatigue false;

// clears a players inventory from default mission items
player call player_clearInventory;

player setVariable ["health", FULL_HEALTH, true];
player setVariable ["stomach", FULL_STOMACH, true];

//if respawn from grey screen
FULL_HEALTH call fnc_simulateHealthEffect;

_LOGIN_TIMER = 10;
while {_LOGIN_TIMER > 0} do {
	titleText [format[localize "STR_LOGIN_PLEASE_WAIT", _LOGIN_TIMER], "BLACK FADED", 0.2];
	_LOGIN_TIMER = _LOGIN_TIMER - 1;
	sleep 1;
};

[player] remoteExecCall ["remoteExec_player_login", 2];

_LOGIN_TRIES = 0;
_HIGH_NUMBER = 9999999;

while {(!LOGGED_IN) && (_LOGIN_TRIES <= 20)} do {
	if (!LOGGED_IN) then {
		sleep 1;
		_LOGIN_TRIES = _LOGIN_TRIES + 1;
		titleText [format[localize "STR_LOGIN_LOAD_CHARACTER", _LOGIN_TRIES], "BLACK FADED", 0.2];
	};
};

if (!LOGGED_IN) then {
	titleText [localize "STR_LOGIN_ERROR_OCCURRED", "BLACK FADED", _HIGH_NUMBER];
} else {
	titleFadeOut 7;
	//[] execVM "addons\outbreak_code\functions\player_clearEntities.sqf";
};