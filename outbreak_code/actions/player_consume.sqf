/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_class", "_player", "_displayName"];

_class = _this select 0;

_config = configFile >> "CfgMagazines" >> _class;

_displayName = (_config >> "displayName") call BIS_fnc_getCfgData;
_water = (_config >> "Nutrition" >> "water") call BIS_fnc_getCfgData;
_energy = (_config >> "Nutrition" >> "energy") call BIS_fnc_getCfgData;

player removeAction action_consumeItem;
action_consumeItem = -1;

player_performingAction = true;

player playActionNow "PutDown";
INTERRUPT_ACTION = false;

_animState = animationState player;
_started = false;
_finished = false;
_loop = true;

while {_loop} do {

	_animState = animationState player;
	_hasAction = ["PutDown", _animState] call fnc_inString;
	
	if (_hasAction) then {
		_started = true;
	};
	
	if (!(isnull (finddisplay 602))) then {;
		closeDialog 602;
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
		[player, ""] remoteExecCall ["fnc_anim_switchMove"];
		player playActionNow "stop";
	};
	
	cutText [format["I stopped consuming %1", _displayName], "PLAIN DOWN"];
};

if (_finished) then {
	
	INTERRUPT_ACTION = false;
	player removeItem _class;
	
	cutText [format["I've consumed %1", _displayName], "PLAIN DOWN"];
	
	_stomach = player getVariable ["stomach", FULL_STOMACH];
	_stomach = _stomach + _energy;

	if (_stomach >= 0) then {
		player setVariable ["stomach", _stomach, true];
	};

	_thirst = player getVariable ["thirst", FULL_THIRST];
	_thirst = _thirst - _water;

	if (_thirst >= 0) then {
		player setVariable ["thirst", _thirst, true];
	};
}; 

player_performingAction = false;