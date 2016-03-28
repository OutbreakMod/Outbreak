/*
	Infected find target locate
	@author: TheAmazingAussie
*/

_unit = _this;

_players = ([_unit, 20, "isPlayer"] call player_findNearby);
_hasTarget = _unit call fnc_hasTarget;
_target = _unit getVariable ["zombieTarget", _unit];

// if there's players within range
if (count _players > 0) then {

	// first check if we don't have a target
	if (!_hasTarget) then {
	
		// select random player within range
		_target = _players call BIS_fnc_selectRandom;
		
		// tell zombie our new target
		[_unit, "zalert" + str(round random 3)] call object_speak;
		_unit setVariable ["zombieTarget", _target, true];
	};
	
} else {

	// if there's no players to target within range but we have a target, then we reset wandering
	// to the last place we saw the target
	
	if (_hasTarget) then {
	
		if (_target != _unit) then {
			_targetPosition = _target getVariable ["last_position", []];
			_unit setVariable ["zombieSpawned", _targetPosition, true];
		};
		
		_unit setVariable ["zombieTarget", _unit, true];
	};
};
