/*
	Creates threads for player functions
	@author: TheAmazingAussie
*/

// register scheduled functions

[] spawn {
	
	_timer = 1;
	
	_scheduled = [
		["loot", 20],
		["actions", 1],
		["blood", 1],
		["zombie", 200],
		["health", 1],
		["health_level", 10],
		["bones", 1],
		["sync", 60]
	];
	
	while {true} do {
	
		{
			_task = _x select 0;
			_seconds = _x select 1;
			
			if ((_timer % _seconds) == 0) then {
				null = [player, _task] spawn player_scheduler_actions;
			};
			
		} foreach _scheduled;
		
		sleep 1; // loop timer every second
		_timer = _timer + 1;
	};
};

[] spawn {
	while {true} do {
		_sound = format["ambient_%1", floor(random 7) + 1];
		_length = getNumber(configFile >> "cfgMusic" >> _sound >> "duration");
		_pause = ((random 5) + 2) + _length;
		playMusic _sound;
		sleep _pause;
	};
};

[] spawn {
	while {true} do {
		waitUntil {!(isNull (findDisplay 46))};
		(findDisplay 46) displayAddEventHandler ["KeyDown", "null = [_this select 1] execVM 'addons\outbreak_code\functions\player_pressKey.sqf'"];
		waituntil {isNull (finddisplay 46)};
	};
};

[] spawn {

	while {true} do {
		 waitUntil {!(isNull (findDisplay 602))};
		 
		 _idHandle = [633, 638, 619]; 
		 
		 {	
			((findDisplay 602) displayCtrl _x) ctrlSetEventHandler ["LBDblClick", "_this call player_selectItem"];
		 } forEach _idHandle;
		
		 waitUntil {isNull (findDisplay 602)};
	};
};