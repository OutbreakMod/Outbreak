/*
	Player initialization for event handlers and spawn loot checking
	@author: TheAmazingAussie
*/

private ["_respawning", "_timer"];

_respawning = _this select 0;
_previousUnit = player;
_newUnit = (createGroup west) createUnit ["b_survivor_F", getPosATL player, [], 0, "NONE"];

addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;
deleteVehicle (_previousUnit);

// new handlers
player removeAllEventHandlers "Killed";
player removeAllEventHandlers "Respawn";
player removeAllEventHandlers "HandleDamage";

player addEventHandler ["Killed", { _this call player_killed; }];
player addEventHandler ["Respawn", { _this call player_respawn; }];
player addEventHandler ["HandleDamage", { _this call player_handleDamage; }];

// add variable
player setVariable ["outbreaklogin", -1];
player setVariable ["playeruuid", getPlayerUID player, true];
player setVariable ["alive", true];
player setVariable ["deathmessage", format["His name was %1 and died from death", name player], true];
player enableFatigue false;

// medical
player setVariable ["blood", 6000, true];
player setVariable ["health", 6000, true];

// reset actions
action_searchWoodPile = -1;
action_gutAnimal = -1;
action_cookMeat = -1;
action_makeshiftBaseBasic = -1;
action_studyBody = -1;

player_performingAction = false;
needsFractureUpdate = false;
player_noWeapon = nil;
player_primaryWeapon = nil;

// clears a players inventory from default mission items
player call player_clearInventory;

_LOGIN_TIMER = 10;
while {_LOGIN_TIMER > 0} do {
	titleText [format["Logging in %1 seconds... Please wait...", _LOGIN_TIMER], "BLACK FADED", 0.1];
	_LOGIN_TIMER = _LOGIN_TIMER - 1;
	sleep 1;
};

hive_playerLogin = [player];
publicVariableServer "hive_playerLogin";

_NOT_LOGGED_IN = true;
_LOGIN_TRIES = 0;
_HIGH_NUMBER = 9999999;

while {(_NOT_LOGGED_IN) && (_LOGIN_TRIES <= 20)} do {
	if ((player getVariable ["outbreaklogin", -1]) == 1) then {
		_NOT_LOGGED_IN = false;
	} else {
		sleep 1;
		_LOGIN_TRIES = _LOGIN_TRIES + 1;
		titleText [format["Retrying authentication (%1)... Please wait...", _LOGIN_TRIES], "BLACK FADED", 0.1];
		
		hive_playerLogin = [player];
		publicVariableServer "hive_playerLogin";
	};
};

if (_NOT_LOGGED_IN) then {
	titleText ["Error occurred, please try again later.","BLACK FADED", _HIGH_NUMBER];
} else {

	// melee fix shit
	player removeItems "hatchet_swing";
	
	if ((handgunWeapon player) == "Hatchet") then {
		player addMagazine "hatchet_swing";
	};
	
	titleFadeOut 7;
	//[] execVM "addons\outbreak_code\functions\player_clearEntities.sqf";
	
	if (!_respawning) then {
		[] execVM "addons\outbreak_code\functions\player_scheduler.sqf";
	};
};