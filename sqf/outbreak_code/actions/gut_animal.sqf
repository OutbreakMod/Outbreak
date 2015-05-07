/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_deadAnimal", "_message", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished"];

_type = (_this select 3) select 0;
_deadAnimal = (_this select 3) select 1;

player removeAction action_gutAnimal;
action_gutAnimal = -1;

_animation = "Medic";
_check = "medic";

player playActionNow _animation;
player setVariable ["action_interrupt", false];

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

if (_finished) then {

	player setVariable ["action_interrupt", false];
	cutText ["I have successfully gutted the animal, meat is next to the carcass", "PLAIN DOWN"];
	
	deleteVehicle (_deadAnimal);
	
	_weaponHolder = createVehicle ["Sack0", (getPos _deadAnimal), [], 0, "CAN_COLLIDE"];
	_weaponHolder addItemCargoGlobal ["sc_rawmutton", 4];
	
	[_weaponHolder] spawn {
		sleep 60;
		deleteVehicle (_this select 0);
	};
}; 

player_performingAction = false;
action_gutAnimal = -1;