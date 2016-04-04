/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished", "_vehicle", "_location", "_class", "_cities"];

_class = _this select 0;
_type = _this select 1;
_persistent = _this select 2;

player removeAction action_build;
action_build = -1;

_cfgRecipe = (configFile >> "CfgMagazines" >> _class >> "cfgCraft");
_recipes = (_cfgRecipe >> "recipe") call BIS_fnc_getCfgData;
_consumes = (_cfgRecipe >> "consume") call BIS_fnc_getCfgData;

_canBuild = true;

{
	_ingredient = _x select 0;
	_amount = _x select 1;
	if (!([player, _ingredient, _amount] call fnc_hasItem)) then {
		
		_displayName = getText (configFile >> "CfgMagazines" >> _ingredient >> "displayName");
		cutText [format["Approximately %1 of %2 is required to build this", _amount, toLower (_displayName)], "PLAIN DOWN"];		
		_canBuild = false;
	};
	
} forEach _recipes;

if (_persistent) then {
	_cities = nearestLocations [getPosATL player, ["NameCityCapital","NameCity","NameVillage"], 300];

	if ((count _cities) > 0) exitWith {
		cutText ["I'm too close to a city", "PLAIN DOWN"];
		_canBuild = false;
	};
};

if (!_canBuild) exitWith {};

player_performingAction = true;

player playActionNow "Medic";
INTERRUPT_ACTION = false;

_loop = true;
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
	
	if (INTERRUPT_ACTION) then {
		_loop = false;
	};
};

waitUntil {!_loop};

_loop = false;

if (!_finished) then {

	INTERRUPT_ACTION = false;

	if (vehicle player == player) then {
		player switchmove "";
		player playActionNow "stop";
	};
	
	cutText ["I have stopped building", "PLAIN DOWN"];
};

_basket = objNull;

if (_finished) then {

	INTERRUPT_ACTION = false;
	cutText ["I have finished building", "PLAIN DOWN"];
	
	_location = player modelToWorld [0,2.5,0];
	_location set [2,0];
	
	_dir = round(direction player);
	
	_vehicle = createVehicle [_type, _location, [], 0, "CAN_COLLIDE"];
	_vehicle setDir _dir;
	_vehicle setPos _location;
	
	// Add object ID (if it's zero, it will automatically be inserted)
	_objectID = _location call create_uid;
	_vehicle setVariable ["ObjectID", _objectID, true];
	
	// save to database
	if (_persistent) then {
		hive_newObject = [player, _vehicle, _type, [_location, vectorDir _vehicle, vectorUp _vehicle], _dir, ""];
		publicVariableServer "hive_newObject";
	};

	// remove consumable ingredients
	{
		_ingredient = _x select 0;
		_amount = _x select 1;
		
		for "_i" from 1 to _amount do {
			player removeItem _ingredient;
		};
	} forEach _consumes;
}; 

player_performingAction = false;