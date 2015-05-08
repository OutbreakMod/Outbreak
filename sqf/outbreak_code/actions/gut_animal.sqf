/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_deadAnimal", "_message", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished", "_configMeat", "_rawMeat", "_amount", "_weaponHolder"];

_type = (_this select 3) select 0;
_deadAnimal = (_this select 3) select 1;

player removeAction action_gutAnimal;
action_gutAnimal = -1;

_loop = true;

if (!([player, "sc_knife"] call fnc_hasItem)) then {
	
	cutText ["I need a knife to gut the animal", "PLAIN DOWN"];
	_loop = false;
};

player removeAction action_gutAnimal;
player playActionNow "Medic";
player setVariable ["action_interrupt", false];

_animState = animationState player;
_started = false;
_finished = false;
player_performingAction = true;

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
	
	cutText ["I have cancelled gutting the animal", "PLAIN DOWN"];
};

_basket = objNull;

if (_finished) then {

	player setVariable ["action_interrupt", false];
	cutText ["I have successfully gutted the animal, meat is next to the carcass", "PLAIN DOWN"];
	
	_configMeat = configFile >> "CfgItems" >> "GutAnimal" >> _type;
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