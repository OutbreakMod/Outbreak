/*
	Player initialization for event handlers and spawn loot checking
	@author: TheAmazingAussie
*/

private ["_respawning", "_timer", "_spawnPosition"];

// close dialog
closeDialog 114; //continue idd

// if the person is currently just respawning
_respawning = _this select 0;

_previousUnit = player;
_newUnit = (createGroup west) createUnit ["b_survivor_F", getPos player, [], 0, "NONE"];

addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;
deleteVehicle (_previousUnit);

// new handlers
player removeAllMPEventHandlers "MPRespawn";
player addMPEventHandler ["MPRespawn", { _this call player_respawn; }];

player removeAllEventHandlers "MPKilled";
player addMPEventHandler ["MPKilled", { _this call player_murdered; }];

player removeAllEventHandlers "Killed";
player addEventHandler ["Killed", { _this call player_killed; }];

// add variable
player setVariable ["playeruuid", getPlayerUID player];

// clears a players inventory from default mission items
player call player_clearInventory;

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
		
		titleText [format["Retrying authentication (%1)... Please wait...", _LOGIN_TRIES],"BLACK FADED", 0.1];
	};
};

if (_NOT_LOGGED_IN) then {
	titleText ["Error occurred, please try again later.","BLACK FADED",99999999];
} else {
	
	titleFadeOut 7;
	
	// create player threads
	execVM "addons\outbreak_code\functions\player_spawnThreads.sqf";
};