/*
	Searching house for logs
	@author: TheAmazingAussie
*/

private ["_type", "_message", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished"];

_type = _this select 3;

player removeAction action_searchLogs;
action_searchLogs = -1;

if (_type == "ground") then {

	_message = "I have cancelled searching the ground for wood logs";
	_animation = "Medic";
	_check = "medic";

	player playActionNow _animation;
	INTERRUPT_ACTION = false;
	
	_animState = animationState player;
	_loop = true;
	_started = false;
	_finished = false;
	player_performingAction = true;

	while {_loop} do {
	
		_animState = animationState player;
		_hasAction = [_check, _animState] call fnc_inString;
		
		if (_hasAction) then {
			_started = true;
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

	_loop = false;

	if (!_finished) then {
	
		INTERRUPT_ACTION = false;

		if (vehicle player == player) then {
			player switchmove "";
			player playActionNow "stop";
		};
		
		cutText ["I have canceled searching for logs", "PLAIN DOWN"];
	};

	if (_finished) then {
	
		INTERRUPT_ACTION = false;
		player addItem "log";
		
		// TODO: Add chance
		cutText ["I have found a log!", "PLAIN DOWN"];
	}; 
	
	player_performingAction = false;
	action_searchLogs = -1;
};