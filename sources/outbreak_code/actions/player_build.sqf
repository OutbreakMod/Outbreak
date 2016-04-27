/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished", "_vehicle", "_location", "_class", "_cities"];

_class = _this select 0;
_worldspace = _this select 1;

player removeAction action_build;
action_build = -1;

_cfgRecipe = (configFile >> "CfgRecipes" >> _class);
_consumes = (_cfgRecipe >> "consume") call BIS_fnc_getCfgData;
_type =  (_cfgRecipe >> "recipeCreate") call BIS_fnc_getCfgData;
_persistent =  ((_cfgRecipe >> "persistent") call BIS_fnc_getCfgData) == 1;

if (_persistent) then {
	_cities = nearestLocations [getPosATL player, ["NameCityCapital","NameCity","NameVillage"], 300];

	if ((count _cities) > 0) exitWith {
		cutText ["I'm too close to a city", "PLAIN DOWN"];
	};
};

player playActionNow "Medic";

INTERRUPT_ACTION = false;
player_performingAction = true;

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
		[player, ""] remoteExecCall ["fnc_anim_switchMove"];
		player playActionNow "stop";
	};
	
	cutText ["I have cancelled building", "PLAIN DOWN"];
	
	deleteVehicle (BUILDING_OBJECT);
	BUILDING_OBJECT = objNull;
};

if (_finished) then {

	INTERRUPT_ACTION = false;
	cutText ["I have finished building", "PLAIN DOWN"];
	

	_vehicle = createVehicle [_type, (_worldspace select 0), [], 0, "CAN_COLLIDE"];
	_vehicle setPos (_worldspace select 0);
	_vehicle setDir (_worldspace select 1);
	_vehicle setVectorDir (_worldspace select 2);
	_vehicle setVectorUp (_worldspace select 3);

	deleteVehicle (BUILDING_OBJECT);
	BUILDING_OBJECT = objNull;
	player setVariable ["CraftedVehicle", objNull, true];
	
	_objectID = (_worldspace select 0) call create_uid;
	_vehicle setVariable ["ObjectID", _objectID, true];
	
	if (_persistent) then {
		[player, _vehicle, _type, _worldspace, ""] remoteExecCall ["remoteExec_new_object", 2];
	};

	{
		_ingredient = _x select 0;
		_amount = _x select 1;
		
		for "_i" from 1 to _amount do {
			player removeItem _ingredient;
		};
	} forEach _consumes;
}; 

player_performingAction = false;