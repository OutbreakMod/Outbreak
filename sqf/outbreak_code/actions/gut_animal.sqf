/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_deadAnimal", "_message", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished", "_configMeat", "_rawMeat", "_amount", "_weaponHolder"];

_type = (_this select 3) select 0;
_deadAnimal = (_this select 3) select 1;

_loop = true;

player removeAction action_gutAnimal;
action_gutAnimal = -1;

if (!([player, "sc_knife"] call fnc_hasItem)) exitWith {
	
	cutText ["I need a knife to gut the animal", "PLAIN DOWN"];
	_loop = false;
};

player_performingAction = true;

player playActionNow "Medic";
INTERRUPT_ACTION = false;

_animState = animationState player;
_started = false;
_finished = false;

// PLAY SOUND
[(getPosATL _deadAnimal), "effects_guts", 2] call object_speak;

while {_loop} do {

	_animState = animationState player;
	_hasAction = ["medic", _animState] call fnc_inString;
	
	if (!(isnull (finddisplay 602))) then {;
		closeDialog 602;
	};
	
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
	
	cutText ["I have cancelled gutting the animal", "PLAIN DOWN"];
};

_basket = objNull;

if (_finished) then {

	INTERRUPT_ACTION = false;
	cutText ["I have successfully gutted the animal, meat is next to the carcass", "PLAIN DOWN"];
	
	_configMeat = configFile >> "cfgGame" >> "cfgGutAnimal" >> _type;
	_rawMeat = getText(_configMeat >> "raw");
	_amount = getNumber(_configMeat >> "yield");

	_basket = createVehicle ["OutbreakBasket", (getPosATL _deadAnimal), [], 0, "CAN_COLLIDE"];
	_basket setDir (random 360);
	_basket addItemCargoGlobal [_rawMeat, _amount];
	
	deleteVehicle (_deadAnimal);
}; 

player_performingAction = false;

if (_finished) then {

	[_basket] spawn {
	
		sleep 60;
		deleteVehicle (_this select 0);
	};
}; 