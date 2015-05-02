/*
	Handles key pressing
	@author: TheAmazingAussie
*/

private["_keyCode", "_handled"];

_keyCode = _this select 0;
_handled = false;

// Interrupt actions, ie, searching for logs etc

if (_keyCode in actionKeys "MoveForward") then {
	player setVariable ["action_interrupt", true];
	_handled = true;
};

if (_keyCode in actionKeys "MoveLeft") then {
	player setVariable ["action_interrupt", true];
	_handled = true;
};

if (_keyCode in actionKeys "MoveRight") then {
	player setVariable ["action_interrupt", true];
	_handled = true;
};

if (_keyCode in actionKeys "MoveBack") then {
	player setVariable ["action_interrupt", true];
	_handled = true;
};

_handled