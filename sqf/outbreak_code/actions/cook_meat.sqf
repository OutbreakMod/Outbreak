/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_fireplace", "_target", "_lit", "_configMeat", "_cookedMeat", "_i", "_countMeat"];

_type = (_this select 3) select 0;
_target = (_this select 3) select 1;

player removeAction action_cookMeat;
action_cookMeat = -1;

player playActionNow "Medic";
INTERRUPT_ACTION = false;

_animState = animationState player;
_loop = true;
_started = false;
_finished = false;
player_performingAction = true;

while {_loop} do {

	_animState = animationState player;
	_hasAction = ["medic", _animState] call fnc_inString;
	
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
		player switchmove "";
		player playActionNow "stop";
	};
	
	cutText ["I've stopped cooking meat", "PLAIN DOWN"];
};

if (_finished) then {

	INTERRUPT_ACTION = false;
	cutText ["I've cooked all meat", "PLAIN DOWN"];
	
	_meat = ["sc_rawmutton"];
	
	{
		_configMeat = configFile >> "cfgGame" >> "cfgMeat" >> _x;
		_cookedMeat = getText(_configMeat >> "cooked");
	
		_countMeat = ([player, _x] call fnc_countItems);
		
		for "_i" from 1 to _countMeat do {
			player removeItem _x;
			player addItem _cookedMeat;
		}
		
	} foreach _meat;
}; 

player_performingAction = false;