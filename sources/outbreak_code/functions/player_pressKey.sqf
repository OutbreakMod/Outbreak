/*
	Handles key pressing
	@author: TheAmazingAussie
*/

private["_keyCode", "_handled"];

_keyCode = _this select 0;
_handled = false;

// no debug
if (_keyCode == 210) then {

	if (isNil 'debugMenu') then {
		debugMenu = true;
	} else {
		debugMenu = !debugMenu;
	};
	
	[] execVM "addons\outbreak_code\functions\player_debugMenu.sqf";
};

if (_keyCode == 22) then {
	[] execVM "addons\outbreak_code\functions\gui\fn_createCraftingDialog.sqf";
};

// Interrupt actions, ie, searching for logs etc

if (_keyCode in actionKeys "MoveForward") then {
	_handled = true;
	INTERRUPT_ACTION = true;
};

if (_keyCode in actionKeys "MoveLeft") then {
	_handled = true;
	INTERRUPT_ACTION = true;
};

if (_keyCode in actionKeys "MoveRight") then {
	_handled = true;
	INTERRUPT_ACTION = true;
};

if (_keyCode in actionKeys "MoveBack") then {
	_handled = true;
	INTERRUPT_ACTION = true;
};

_handled