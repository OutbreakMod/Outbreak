/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_trees", "_woodCutting", "_findNearestTree", "_obj"];

_object = _this select 3;
player_performingAction = true;

player removeAction action_chopTree;
action_chopTree = -1;

_started = false;
_finished = false;
_loop = true;

player playActionNow "Medic";
INTERRUPT_ACTION = false;

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
	
	if (INTERRUPT_ACTION) then {
		_loop = false;
	};
	
	sleep 0.1;
};

if (!_finished) then {

	INTERRUPT_ACTION = false;

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
	_nearByPile = nearestObjects [_wpPos, ["ItemSack"], 2];
	_item = objNull;
	
	 if (count _nearByPile == 0) then {
		_item = createVehicle ["ItemSack", _wpPos, [], 1, "CAN_COLLIDE"];
	} else {
		_item = _nearByPile select 0;
	};
	
	_item addMagazineCargoGlobal ["log", 1];
	_item setDir (getDir player);
	
	_object setDamage 1; //kill tree
}; 

player_performingAction = false;