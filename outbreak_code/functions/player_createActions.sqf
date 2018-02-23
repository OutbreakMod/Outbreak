/*
	Handles different actions for player
	@author: TheAmazingAussie
*/

private ["_inVehicle", "_cursorTarget", "_dist", "_type", "_surface"];

_inVehicle = (vehicle player != player);
_cursorTarget = cursorTarget;

if (!isNil '_cursorTarget' && !_inVehicle && !player_performingAction) then {
	_dist = player distance _cursorTarget;
	//hint format["%1", typeOf _cursorTarget];
	//diag_log format["CURSOR TARGET: %1", typeOf _cursorTarget];
	
	if (_dist < 4) then {
		
		_type = typeOf _cursorTarget;
		
		///////////////////
		// Gut animal
		///////////////////
		if ((_type in ["Goat_random_F", "Sheep_random_F"] || _cursorTarget isKindOf "Man") && (!alive _cursorTarget)) then {
			if (action_gutAnimal < 0) then {
				action_gutAnimal = player addAction [localize "STR_ACTIONS_GUT_BODY", "addons\outbreak_code\actions\gut_animal.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
			};
		} else {
			player removeAction action_gutAnimal;
			action_gutAnimal = -1;
		};
		
		/////////////////
		// Study body
		/////////////////
		if ((_cursorTarget isKindOf "Man") && (!alive _cursorTarget)) then {
			if (action_studyDeadBody < 0) then {
				action_studyDeadBody = player addAction [localize "STR_ACTIONS_STUDY_BODY", "addons\outbreak_code\actions\study_body.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
			};
		} else {
			player removeAction action_studyDeadBody;
			action_studyDeadBody = -1;
		};
		
		///////////////////
		// Apply morphine
		///////////////////
		if ((_cursorTarget isKindOf "Man") && (alive _cursorTarget) && (_cursorTarget getVariable ["leg_break", false])) then {
			if (action_applyMorphine < 0) then {
				action_applyMorphine = player addAction [localize "STR_ACTIONS_APPLY_MORPHINE", "addons\outbreak_code\actions\apply_morphine.sqf", _cursorTarget, 3, true, true, "", ""];
			};
		} else {
			player removeAction action_applyMorphine;
			action_applyMorphine = -1;
		};
		
		///////////////////
		// Cook meat
		///////////////////
		if ((inflamed _cursorTarget) && (_type == "Land_FirePlace_F") && ([player, "matchbox"] call fnc_hasItem)) then {
			if (action_cookMeat < 0) then {
				action_cookMeat = player addAction [localize "STR_ACTIONS_COOK_MEAT", "addons\outbreak_code\actions\cook_meat.sqf", [_type, _cursorTarget], 3, true, true, "", ""];
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
		player removeAction action_studyDeadBody;
		action_studyDeadBody = -1;
		player removeAction action_applyMorphine;
		action_applyMorphine = -1;
		player removeAction action_consumeItem;
		action_consumeItem = -1;
	};
};

// misc actions not requiring objects

if (!_inVehicle && !player_performingAction) then {
	_currentPos = player modelToWorld [0, 5, 0];
	
	if !(surfaceIsWater _currentPos) then {
		_currentPos = ATLtoASL _currentPos;
	};

	_objects = lineIntersectsWith[eyePos player, _currentPos, player, objNull, true];
	_object = objNull;
	_objName = "";

	_type = 0;

	{	
		_objName = _x call obj_getModelName;
		_object = _x;
		
	} forEach _objects;

	if (!isNull _object) then {
		////////////
		// Trees  //
		////////////
		if (_objName in CHOP_TREES && alive _object && ([player, "fireaxe"] call fnc_hasItem) or ([player, "axe"] call fnc_hasItem)) then {
			if (action_chopTree < 0) then {
				action_chopTree = player addAction [localize "STR_ACTIONS_CHOP_TREE", "addons\outbreak_code\actions\chop_tree.sqf", _object, 3, true, true, "", ""];
			};
		} else {
			player removeAction action_chopTree;
			action_chopTree = -1;
		};
		
	} else {
		player removeAction action_chopTree;
		action_chopTree = -1;
	};
	
	if ((["forest", surfaceType position player] call fnc_inString) && (speed player == 0)) then {
		if (action_searchLogs < 0) then {
			action_searchLogs = player addAction [localize "STR_ACTIONS_SEARCH_LOGS", "addons\outbreak_code\actions\search_logs.sqf", "ground", 3, true, true, "", ""];
		};
	} else {
		player removeAction action_searchLogs;
		action_searchLogs = -1;
	};
};
