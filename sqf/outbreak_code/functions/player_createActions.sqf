/*
	Handles different actions for player
	@author: TheAmazingAussie
*/

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

	if (_dist < 3) then {
		
		hint format["Cursor: %1 -//- %2", typeOf _cursorTarget, _cursorTarget];
	
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

