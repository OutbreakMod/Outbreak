/*
	Handles key pressing
	@author: TheAmazingAussie
*/

_keyCode =  _this select 1;
_handled = false;

// Interrupt actions, ie, searching for logs etc

if (_keyCode in actionKeys "MoveForward" || _keyCode in actionKeys "MoveLeft" || _keyCode in actionKeys "MoveRight" || _keyCode in actionKeys "MoveBack") exitWith {
	_interrupt = true;
};