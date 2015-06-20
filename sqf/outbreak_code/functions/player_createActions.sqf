/*
	Handles different actions for player
	@author: TheAmazingAussie
*/

private ["_inVehicle", "_cursorTarget", "_dist", "_type", "_surface"];

_inVehicle = (vehicle player != player);
_cursorTarget = cursorTarget;

if (!isNil '_cursorTarget' && !_inVehicle && !player_performingAction) then {

	_dist = player distance _cursorTarget;

	if (_dist < 4) then {
		
		_type = typeOf _cursorTarget;
		
		///////////////////
		// Gut animal
		///////////////////
		if ((_type in ["Sheep_random_F"]) && (!alive _cursorTarget)) then {
			if (action_gutAnimal < 0) then {
				action_gutAnimal = player addAction ["Gut Animal", "addons\outbreak_code\actions\gut_animal.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
			};
		} else {
			player removeAction action_gutAnimal;
			action_gutAnimal = -1;
		};
		
		/////////////////
		// Study body
		/////////////////
		if ((_cursorTarget isKindOf "Man") && (!alive _cursorTarget)) then {
			if (action_studyBody < 0) then {
				action_studyBody = player addAction ["Study Body", "addons\outbreak_code\actions\study_body.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
			};
		} else {
			player removeAction action_studyBody;
			action_studyBody = -1;
		};
		
		///////////////////
		// Apply morphine
		///////////////////
		if ((_cursorTarget isKindOf "Man") && (alive _cursorTarget) && (_cursorTarget getVariable ["leg_break", false])) then {
			if (action_applyMorphine < 0) then {
				action_applyMorphine = player addAction ["Apply Morphine", "addons\outbreak_code\actions\apply_morphine.sqf", _cursorTarget, 3, true, true, "", ""];
			};
		} else {
			player removeAction action_applyMorphine;
			action_applyMorphine = -1;
		};
		
		///////////////////
		// Cook meat
		///////////////////
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
		player removeAction action_studyBody;
		action_studyBody = -1;
		player removeAction action_applyMorphine;
		action_applyMorphine = -1;
	};
};

// misc actions not requiring objects

if (!_inVehicle && !player_performingAction) then {
	
	diag_log format ["cursortest4"];
	
	_surface = surfaceType getPosATL player;
	_isForest = ["forest", str(_surface)] call fnc_inString;

	///////////////////
	// Search legs
	///////////////////
	if (_isForest) then {
		if (action_searchWoodPile < 0) then {
			action_searchWoodPile = player addAction ["Search for logs", "addons\outbreak_code\actions\search_logs.sqf", "ground", 3, true, true, "", ""];
		};
	} else {
		player removeAction action_searchWoodPile;
		action_searchWoodPile = -1;
	};

	// create basic structure
	
	///////////////////
	// Build makeshift base
	///////////////////
	if (([player, "sc_wood", 20] call fnc_hasItem) && ([player, "sc_toolbox"] call fnc_hasItem) && ([player, "sc_hammer"] call fnc_hasItem) && ([player, "sc_scrap", 2] call fnc_hasItem)) then {
		if (action_makeshiftBaseBasic < 0) then {
			action_makeshiftBaseBasic = player addAction ["Build Makeshift Base", "addons\outbreak_code\actions\makeshift_base.sqf", "OutbreakShackV1", 3, true, true, "", ""];
		};
	} else {
		player removeAction action_makeshiftBaseBasic;
		action_makeshiftBaseBasic = -1;
	};
};
