/*
	Interact with small misc objects defined by config file
	@author: TheAmazingAussie
*/

private ["_inVehicle", "_cursorTarget", "_dist", "_type", "_surface"];

_inVehicle = (vehicle player != player);

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
		if (_objName in CHOP_TREES && alive _object && ([player, "fireaxe"] call fnc_hasItem or [player, "axe"] call fnc_hasItem)) then {
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
	
	if (["forest", surfaceType position player] call fnc_inString) then {
		if (action_searchLogs < 0) then {
			action_searchLogs = player addAction [localize "STR_ACTIONS_SEARCH_LOGS", "addons\outbreak_code\actions\search_logs.sqf", "ground", 3, true, true, "", ""];
		};
	} else {
		player removeAction action_searchLogs;
		action_searchLogs = -1;
	};
};