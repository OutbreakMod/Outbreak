/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_fireplace", "_target", "_lit"];

_type = (_this select 3) select 0;
_target = (_this select 3) select 1;
_lit = (_this select 3) select 2;

player playActionNow "Medic";
player setVariable ["action_interrupt", false];

_animState = animationState player;
_loop = true;
_started = false;
_finished = false;
player_performingAction = true;

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

_loop = false;

if (!_finished) then {

	player setVariable ["action_interrupt", false];

	if (vehicle player == player) then {
		player switchmove "";
		player playActionNow "stop";
	};
	
	if (_lit) then {
		cutText ["I've cancelled lighting the fireplace", "PLAIN DOWN"];
	} else {
		cutText ["I've cancelled extinguishing the fireplace", "PLAIN DOWN"];
	};
};

if (_finished) then {

	player setVariable ["action_interrupt", false];
	
	if (_lit) then {
		cutText ["I've lit the fireplace", "PLAIN DOWN"];
		_target inflame true;
	} else {
		cutText ["I've extinguished the fire", "PLAIN DOWN"];
		_target inflame false;
	};
}; 

player_performingAction = false;

if (_lit) then {
	action_lightFireplace = -1;
} else {
	action_extFireplace = -1;
};