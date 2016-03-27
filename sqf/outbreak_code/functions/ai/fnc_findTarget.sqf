/*
	Infected find target locate
	@author: TheAmazingAussie
*/

_unit = _this;

_players = ([_unit, 20, "isPlayer"] call player_findNearby);
_hasTarget = _unit call fnc_hasTarget;
_target = _unit getVariable ["zombieTarget", _unit];

if (count _players > 0) then {

	if (!_hasTarget) then {
	
		_target = _players call BIS_fnc_selectRandom;
		_unit setVariable ["zombieTarget", _target, true];
	};
	
} else {

	if (_hasTarget) then {
	
		if (_target != _unit) then {
			//_unit setVariable ["zombieSpawned", getPosATL _target, true];
		};
		
		_unit setVariable ["zombieTarget", _unit, true];
	};
};
