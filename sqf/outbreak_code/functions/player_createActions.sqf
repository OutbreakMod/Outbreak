/*
	Handles different actions for player
	@author: TheAmazingAussie
*/

if (isNil 'player_noWeapon') then {
	player_noWeapon = player addAction ["Select No Weapon", {
		player action ["SwitchWeapon", player, player, 100];
		player switchcamera cameraView;
	}];
};

if (isNil 'player_primaryWeapon') then {
	player_primaryWeapon = player addAction ["Select Primary Weapon", {
		player action ["SwitchWeapon", player, player, 1];
		player switchcamera cameraView;
	}];
};

_inVehicle = (vehicle player != player);
_cursorTarget = cursorTarget;

if (isNil 'player_performingAction') then {
	player_performingAction = false;
};

if (isNil 'action_searchWoodPile') then {
	action_searchWoodPile = -1;
};

if (!isNil '_cursorTarget' && !_inVehicle && !player_performingAction) then {

	/////////////////////////
	// Search ground for wood
	/////////////////////////
	
	_dist = player distance _cursorTarget;

	if (_dist < 4) then {
		if (_cursorTarget isKindOf "Pile_of_wood") then {

		};
	};
};

// misc actions not requiring objects

if (!_inVehicle && !player_performingAction) then {
	
	_surface = surfaceType getPosATL player;
	_isForest = ["forest", str(_surface)] call fnc_inString;
	
	if (_isForest) then {
		if (action_searchWoodPile < 0) then {
			action_searchWoodPile = player addAction ["Search for logs", "addons\outbreak_code\actions\search_logs.sqf", "ground", 3, true, true, "", ""];
		};
	} else {
		player removeAction action_searchWoodPile;
		action_searchWoodPile = -1;
	};
};

