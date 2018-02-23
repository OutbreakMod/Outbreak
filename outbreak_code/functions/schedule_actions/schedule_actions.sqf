/*
	Create actions every 1 second
	@author: TheAmazingAussie
*/

[] execVM "addons\outbreak_code\functions\player_createActions.sqf";

if (SHOW_DEBUG_MENU) then {
    [] execVM "addons\outbreak_code\functions\player_debugMenu.sqf";  
};

_health = player getVariable ["health", 6000];

if (_health < 6000) then {
	_health = _health + 1;
	player setVariable ["health", _health, true];
};

player setVariable ["last_position", (getPosATL player), true];

// Save variable
if ((name player) != "Error: No unit") then {
	_name = name player;
	_uid = getPlayerUID player;
	_pos = getPosATL player;
	_inventory = (player call player_serializeInventory);
	_hit = player getHit "legs";
	_stomach = player getVariable ["stomach", FULL_STOMACH];
	_thirst = player getVariable ["thirst", FULL_THIRST];

	_saveData = [player, _name, _uid, _pos, _inventory, _hit, _health, _stomach, _thirst];
	player setVariable ["playerSaveData", _saveData, true];
};

call player_updateStatus;

if (_health < 1500) then {
	_interval = 20;
	_bloodUpdate = player getVariable ["bloodUpdate", _interval];
	
	if (_bloodUpdate == 0) then {
		4 cutRsc ["rscBloodyScreen", "PLAIN", 0];
		player setVariable ["bloodUpdate", _interval];
		
	} else {
		
		if (_bloodUpdate == _interval) then {
			4 cutFadeOut 5;
		};
		
		player setVariable ["bloodUpdate", _bloodUpdate - 1];
	};
	
};