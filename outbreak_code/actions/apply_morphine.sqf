/*
	Build a fireplace
	@author: TheAmazingAussie
*/

private ["_animation", "_animState", "_loop", "_started", "_finished", "_type", "_dist", "_fireplace", "_pos", "_xPos", "_yPos"];

_loop = true;
_target = _this select 3;

player removeAction action_applyMorphine;
action_applyMorphine = -1;

player_performingAction = true;

player playActionNow "Medic";
INTERRUPT_ACTION = false;

_animState = animationState player;
_started = false;
_finished = false;

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
		[player, ""] remoteExecCall ["fnc_anim_switchMove"];
		player playActionNow "stop";
	};
	
	cutText ["I stopped applying morphine", "PLAIN DOWN"];
};

if (_finished) then {
	INTERRUPT_ACTION = false;
	_target setDamage 0;
    
	player removeItem "morphine";
	
	if ((name _target) != (name player)) then {
		cutText [format["I've successfully applied morphine to %1", name _target], "PLAIN DOWN"];
	} else {
		cutText ["I've successfully applied morphine", "PLAIN DOWN"];
	};
}; 

player_performingAction = false;