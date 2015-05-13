/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished", "_vehicle", "_location", "_class", "_cities"];

_type = (_this select 3);

_loop = true;

player removeAction action_makeshiftBaseBasic;
action_makeshiftBaseBasic = -1;

_cities = nearestLocations [getPosATL player, ["NameCityCapital","NameCity","NameVillage"], 200];

if ((count _cities) > 0) exitWith {
	
	cutText ["I'm too close to a city", "PLAIN DOWN"];
	_loop = false;
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
	
	cutText ["I have stopped building", "PLAIN DOWN"];
};

_basket = objNull;

if (_finished) then {

	player setVariable ["action_interrupt", false];
	cutText ["I have finished building", "PLAIN DOWN"];
	
	_location = player modelToWorld [0,2.5,0];
	_location set [2,0];
	
	if (_type == "v1") then {
		_class = "OutbreakShackV1";
	};
	
	_vehicle = createVehicle [_class, _location, [], 0, "CAN_COLLIDE"];
	_vehicle setDir round(direction player);
	_vehicle setPos _location;
		
	// save to database
	hive_newObject = [player, _vehicle];
	publicVariableServe "hive_newObject";
}; 

player_performingAction = false;