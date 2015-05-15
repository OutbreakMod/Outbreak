/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_fireplace", "_pos", "_xPos", "_yPos"];

_loop = true;

if (!([player, "sc_wood", 3] call fnc_hasItem)) exitWith {
	cutText ["I need more wood to make a fireplace", "PLAIN DOWN"];
};

player_performingAction = true;

player playActionNow "Medic";
player setVariable ["action_interrupt", false];

_animState = animationState player;
_started = false;
_finished = false;

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
	
	cutText ["I stopped creating the fireplace", "PLAIN DOWN"];
};

if (_finished) then {

	_location = player modeltoworld [0, 0.3, 0];
	
	if ((_location select 2) < 0) then {
		_location set [2,0];
	};
	
	player setVariable ["action_interrupt", false];
	
	_fireplace = createVehicle ["Land_Fireplace_F", _location, [], 0, "CAN_COLLIDE"];
	_fireplace setDir (random 360);
	
	for "_i" from 1 to 3 do {
		player removeItem "sc_wood";
	};
	
	cutText ["I created a fireplace", "PLAIN DOWN"];
}; 

player_performingAction = false;