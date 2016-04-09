/*
	Infected find target locate
	@author: TheAmazingAussie
*/

_unit = _this;

_players = ([_unit, 50, "isPlayer"] call player_findNearby);
_hasTarget = _unit call zombie_hasTarget;
_target = _unit getVariable ["zombieTarget", _unit];

if (!_hasTarget) then {
	if (count _players > 0) then {
		
		_target = _players call BIS_fnc_selectRandom;
		
		if ([_unit, _target] call fnc_hasSight) then {
			
			[_unit, "zalert" + str((floor random 5) + 1)] call object_speak;
			_unit setVariable ["zombieTarget", _target, true];
			_unit setVariable ["loseZombieTimer", LOSE_ZOMBIE_TIMER, true];
			
			_zombies = _target getVariable ["attackingZombies", []];
			_zombies = _zombies + [_unit];
			_target setVariable ["attackingZombies", _zombies, true];
		};
	};
};
