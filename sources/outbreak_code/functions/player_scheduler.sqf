/*
	Creates threads for player functions
	@author: TheAmazingAussie
*/

// register scheduled functions

[] spawn {
	
	_timer = 0;
	
	_scheduled = [
		["loot", 20],
		["zombies", 180],
		["sync", 180],
		["wild_zombies", 300],
		["wild_animals", 180],
		["actions", 1],
		["sfx", 1],
		["fracture", 1],
		["health", 0],
		["leg_damage", 0]
	];
	
	while {true} do {
	
		if (LOGGED_IN) then {
	
			{
				if (alive player) then {
					
					_task = _x select 0;
					_seconds = _x select 1;
					
					if (_seconds > 0) then {
						if ((_timer % _seconds) == 0) then {
							[] execVM format["addons\outbreak_code\functions\schedule_actions\schedule_%1.sqf", _task];
						};
					} else {
						[] execVM format["addons\outbreak_code\functions\schedule_actions\schedule_%1.sqf", _task];
					};
				};
			} foreach _scheduled;
			
			sleep 0.25; // loop timer every 250m
			_timer = _timer + 0.25;
		};
	};
};

[] spawn {
	while {true} do {
		if (LOGGED_IN) then {
			_sound = format["ambient_%1", floor(random 8) + 1];
			_length = (configFile >> "cfgMusic" >> _sound >> "duration") call BIS_fnc_getCfgData;
			_pause = ((random 5) + 2) + _length;
			playMusic _sound;
			sleep _pause;
		};
	};
};

[] spawn {
	while {true} do {
		if (LOGGED_IN) then {
			waitUntil {!(isNull (findDisplay 46))};
			(findDisplay 46) displayAddEventHandler ["KeyDown", "null = [_this select 1] execVM 'addons\outbreak_code\functions\player_pressKey.sqf'"];
			waituntil {isNull (finddisplay 46)};
		};
	};
};

[] spawn {

	while {true} do {
		if (LOGGED_IN) then {
			 waitUntil {!(isNull (findDisplay 602))};
			 {	
				((findDisplay 602) displayCtrl _x) ctrlSetEventHandler ["LBDblClick", "_this call player_selectItem"];
			 } forEach [633, 638, 619];
			 waitUntil {isNull (findDisplay 602)};
		};
	};
};