/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_trees"];

player_performingAction = true;

_started = false;
_finished = false;
_woodCutting = false;
_loop = true;
_trees = getArray(configFile >> "CfgGame" >> "trees");

_findNearestTree = objNull;

{
	_obj = _x call obj_getModelName;
	
	if (_obj in _trees) then {
		if ((damage _x) < 1) then {
			_findNearestTree = _x;
		};
	};
	
	diag_log format ["tree: %1", _obj];

} foreach nearestObjects [getPosATL player, [], 4];

_distance2d = [player, _findNearestTree] call BIS_fnc_distance2D;
_distance3d = player distance _findNearestTree;
_countOut = ceil(_distance3d-_distance2d);

if (!isNull _findNearestTree) then {
	_woodCutting = true;
} else {
	cutText ["There are no trees", "PLAIN DOWN"];
};

if (_woodCutting) then {

	player playActionNow "Medic";
	player setVariable ["action_interrupt", false];

	while {_loop} do {

		_animState = animationState player;
		_hasAction = ["medic", _animState] call fnc_inString;
		
		if (_hasAction) then {
			_started = true;
		};
		
		if (!(isnull (finddisplay 602))) then {;
			closeDialog 602;
		};
		
		if (_started && !_hasAction) then {
			_loop = false;
			_finished = true;
		};
		
		if (player getVariable ["action_interrupt", false]) then {
			_loop = false;
		};
		
		sleep 0.1;
	};

	if (!_finished) then {

		player setVariable ["action_interrupt", false];

		if (vehicle player == player) then {
			player switchmove "";
			player playActionNow "stop";
		};
		
		cutText ["I've stoppped chopping wood", "PLAIN DOWN"];
	};

	if (_finished) then {

		_location = player modeltoworld [0, 0.3, 0];
		
		if ((_location select 2) < 0) then {
			_location set [2,0];
		};
		
		cutText ["I've chopped one piece of wood", "PLAIN DOWN"];
		
		_wpPos = player modeltoWorld [0,-1,0];
		_wpPos set [2,0]; // assuming the player in on the ground.
		_nearByPile = nearestObjects [_wpPos, ["WeaponHolderSimulated", "GroundWeaponHolder"], 2];
		_item = objNull;
		
		 if (count _nearByPile == 0) then {
			_item = createVehicle ["GroundWeaponHolder", _wpPos, [], 1, "CAN_COLLIDE"];
		} else {
			_item = _nearByPile select 0;
		};
		
		_item addMagazineCargoGlobal ["log", 1];
		_item setDir (getDir player);
		
		_findNearestTree setDamage 1; //kill tree
	}; 
};

player_performingAction = false;