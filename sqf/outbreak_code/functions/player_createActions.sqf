/*
	Handles different actions for player
	@author: TheAmazingAussie
*/

private ["_inVehicle", "_cursorTarget", "_dist", "_type", "_surface"];

_inVehicle = (vehicle player != player);
_cursorTarget = cursorTarget;

if (isNil 'player_performingAction') then {
	player_performingAction = false;
};

if (isNil 'action_searchWoodPile') then {
	action_searchWoodPile = -1;
};

if (isNil 'action_gutAnimal') then {
	action_gutAnimal = -1;
};

if (isNil 'action_cookMeat') then {
	action_cookMeat = -1;
};

if (!isNil '_cursorTarget' && !_inVehicle && !player_performingAction) then {

	_dist = player distance _cursorTarget;

	if (_dist < 3) then {
		
		_type = typeOf _cursorTarget;
	
		if ((_type in ["Sheep_random_F"]) && (!alive _cursorTarget)) then {
			if (action_gutAnimal < 0) then {
				action_gutAnimal = player addAction ["Gut Animal", "addons\outbreak_code\actions\gut_animal.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
			};
		} else {
			player removeAction action_gutAnimal;
			action_gutAnimal = -1;
		};
		
		if ((inflamed _cursorTarget) && (_type == "Land_FirePlace_F") && ([player, "sc_matchbook"] call fnc_hasItem)) then {
			if (action_cookMeat < 0) then {
				action_cookMeat = player addAction ["Cook Meat", "addons\outbreak_code\actions\cook_meat.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
			};
		} else {
			player removeAction action_cookMeat;
			action_cookMeat = -1;
		};
	} else {
		player removeAction action_cookMeat;
		action_cookMeat = -1;
		player removeAction action_gutAnimal;
		action_gutAnimal = -1;
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

