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

while {(_NOT_LOGGED_IN) && (_LOGIN_TRIES <= 20)} do {
	
	if ((player getVariable ["outbreaklogin", -1]) == 1) then {
		_NOT_LOGGED_IN = false;
	} else {
		sleep 1;
		_LOGIN_TRIES = _LOGIN_TRIES + 1;
		
		titleText [format["Retrying authenticatio in %1 seconds... Please wait...",-_wait],"BLACK FADED",10e10];
	};
};

if (_NOT_LOGGED_IN) then {
	titleText ["Error occurred, please try again later.","BLACK FADED",10e10];
} else {
	
	hint "Welcome to Outbreak";
	
	// key press
	//(findDisplay 46) displayAddEventHandler ["KeyDown","_this call player_pressKey"];

	_spawnCheck = [] spawn {
		_timer = 0;
		while {alive player} do {
			
			// spawn loot check every 60 seconds
			if ((_timer % 20) == 0) then {
				[player, "loot"] call player_spawnCheck;
			};
			
			if ((_timer % 1) == 0) then {
				[] execVM "addons\outbreak_code\functions\player_createActions.sqf";
			};
			
			// wreck gen every 30 seconds
			//if ((_timer % 30) == 0) then {
				//[player, "towngen"] call player_spawnCheck;
			//};
			
			if ((_timer % 20) == 0) then {
				[] call player_hiveSync;
			};
			
			sleep 1; // loop timer every second
			_timer = _timer + 1;
		};
	};
		
	_ambience = [] spawn {
		while {alive player} do {
			_sound = format["ambient_%1", floor(random 7) + 1];
			_pause = ((random 5) + 2) + getNumber(configFile >> "cfgMusic" >> _sound >> "duration");
			playMusic _sound;
			sleep _pause;
		};
	};
	
	_keyPressThread = [] spawn {
		while {alive player} do {
			waitUntil {!(isNull (findDisplay 46))};
			(findDisplay 46) displayAddEventHandler ["KeyDown","_this call player_pressKey"];
		};
	};
	
	_inventoryInteract = [] spawn {
		while {alive player} do {
			 waituntil {!(isnull (finddisplay 602))};
			((findDisplay 602) displayCtrl 633) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			((findDisplay 602) displayCtrl 640) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			 waituntil {isnull (finddisplay 602)};
		};
	};
};