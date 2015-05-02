/*
	Player initialization for event handlers and spawn loot checking
	@author: TheAmazingAussie
*/

private ["_respawning", "_timer", "_spawnPosition"];

// close dialog
closeDialog 114; //continue idd

_respawning = _this select 0;

_previousUnit = player;
_newUnit = (createGroup west) createUnit ["b_survivor_F", getPos player, [], 0, "NONE"];

addSwitchableUnit _newUnit;
setPlayable _newUnit;
selectPlayer _newUnit;
deleteVehicle (_previousUnit);

// new handlers
//player removeAllMPEventHandlers "MPRespawn";
//player removeAllMPEventHandlers "MPKilled";
player removeAllEventHandlers "Killed";
player removeAllEventHandlers "Respawn";

//player addMPEventHandler ["MPRespawn", { _this call player_respawn; }];
//player addMPEventHandler ["MPKilled", { _this call player_murdered; }];
player addEventHandler ["Killed", { _this call player_killed; }];
player addEventHandler ["Respawn", { _this call player_respawn; }];

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
		titleText [format["Retrying authentication (%1)... Please wait...", _LOGIN_TRIES], "BLACK FADED", 0.1];
	};
};

if (_NOT_LOGGED_IN) then {
	titleText ["Error occurred, please try again later.","BLACK FADED", _HIGH_NUMBER];
} else {
	titleFadeOut 7;

	if (!_respawning) then {

		_spawnThread = [] spawn {
			_timer = 0;
			while {true} do {
				
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
			
		_ambienceThread = [] spawn {
			while {true} do {
				_sound = format["ambient_%1", floor(random 7) + 1];
				_length = getNumber(configFile >> "cfgMusic" >> _sound >> "duration");
				_pause = ((random 5) + 2) + _length;
				playMusic _sound;
				sleep _pause;
			};
		};

		_keyPressThread = [] spawn {
			while {true} do {
				waitUntil {!(isNull (findDisplay 46))};
				(findDisplay 46) displayAddEventHandler ["KeyDown", "null = [_this select 1] execVM 'addons\outbreak_code\functions\player_pressKey.sqf'"];
				waituntil {isNull (finddisplay 46)};
			};
		};

		_itemInteractThread = [] spawn {
			while {true} do {
				 waituntil {!(isnull (finddisplay 602))};
				((findDisplay 602) displayCtrl 633) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
				((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
				((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
				((findDisplay 602) displayCtrl 640) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
				 waituntil {isnull (finddisplay 602)};
			};
		};
	};
};