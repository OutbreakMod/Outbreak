/*
	All player management threads
	@author: TheAmazingAussie
*/

_spawnThread = [] spawn {
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
	
_ambienceThread = [] spawn {
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
		(findDisplay 46) displayAddEventHandler ["KeyDown", "null = [_this select 1] execVM 'addons\outbreak_code\functions\player_pressKey.sqf'"];
		waituntil {isNull (finddisplay 46)};
	};
};

_itemInteractThread = [] spawn {
	while {alive player} do {
		 waituntil {!(isnull (finddisplay 602))};
		((findDisplay 602) displayCtrl 633) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
		((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
		((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
		((findDisplay 602) displayCtrl 640) ctrlSetEventHandler ["LBDblClick", "_this call player_useItem"];
		 waituntil {isnull (finddisplay 602)};
	};
};