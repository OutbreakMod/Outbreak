/*
	Creates threads for player functions
	@author: TheAmazingAussie
*/

// register scheduled functions

[] spawn {
	
	_timer = 0;
	
	_scheduled = [
	["loot", 60],
	["npc", 300],
	["actions", 1],
	["debugmenu", 1],
	["blood", 1],
	["health", 1],
	["bones", 1],
	["sync", 60]
	];
	
	while {true} do {
		{
			_task = _x select 0;
			_seconds = _x select 1;
			
			if ((_timer % _seconds) == 0) then {
				[player, _task] spawn player_spawnCheck;
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
		 waituntil {!(isnull (finddisplay 602))};
		 
		 if (player_performingAction) then { 
			closeDialog 602;
		 } else { 
			((findDisplay 602) displayCtrl 633) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
			//((findDisplay 602) displayCtrl 640) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"]; // disable tent interaction
		};
		
		 waituntil {isnull (finddisplay 602)};
	};
};