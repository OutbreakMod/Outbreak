/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_trees", "_woodCutting", "_findNearestTree", "_obj"];

player_performingAction = true;

_started = false;
_finished = false;
_woodCutting = false;
_loop = true;

_currentPos = player modelToWorld[0, 5, 0];
if !(surfaceIsWater _currentPos) then {
	_currentPos = ATLtoASL _currentPos;
};

_objects = lineIntersectsWith[eyePos player, _currentPos, player, objNull, true];
_object = objNull;

_type = 0;

{
	_strObj = str _x;
	if ((_strObj find " t_") != -1) exitWith{ _object = _x };
	if ((_strObj find " b_") != -1) exitWith{ _object = _x; _type = 1 };
	if ((_strObj find " bo_t_") != -1) exitWith{ _object = _x };
	if ((_strObj find " MAP_t_") != -1) exitWith{ _object = _x };
	if ((_strObj find " MAP_b_") != -1) exitWith{ _object = _x; _type = 1 };
} foreach _objects;

if (!isNull _object) then {
	if (alive _object) then {
		_woodCutting = true;
	};
};

if (!_woodCutting) then {
	cutText ["I need to find a tree and look at it, to chop it down", "PLAIN DOWN"];
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
		
		_object setDamage 1; //kill tree
	}; 
};

player_performingAction = false;