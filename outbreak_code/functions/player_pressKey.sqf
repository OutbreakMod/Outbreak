/*
	Handles key pressing
	@author: TheAmazingAussie
*/

private["_keyCode", "_handled"];

_keyCode = _this select 0;
_handled = false;

// no debug
if (_keyCode == 210) then {
	[] call fnc_createSettingsDialog;
};

if (_keyCode == 22) then {
	[] call fnc_createCraftingDialog;
};

if (_keyCode == 57) then {
	if (BUILDING) then {
		_object = BUILDING_OBJECT;
		[BUILDING_RECIPE, BUILDING_WORLDSPACE] spawn player_build;
		
		BUILDING = false;
		BUILDING_RECIPE = "";
		BUILDING_WORLDSPACE = [];
		//BUILDING_OBJECT = objNull;
	};
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