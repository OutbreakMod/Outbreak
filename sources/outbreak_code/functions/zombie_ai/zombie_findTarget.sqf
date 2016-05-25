/*
	Infected find target locate
	@author: TheAmazingAussie
*/

private ["_unit", "_hasTarget", "_target", "_cooldown", "_players", "_zombies"];

_unit = _this;

_hasTarget = _unit call zombie_hasTarget;

_target = _unit getVariable ["zombieTarget", _unit];
_cooldown = _unit getVariable ["zombieTargetCooldown", 0];

// Don't locate target if cooldown still active
if (!(_cooldown > 0)) then {
	if (!_hasTarget) then {
		
		_players = ([_unit, ZOMBIE_SEARCH_DISTANCE, "isPlayer"] call player_findNearby);
		
		if (count _players > 0) then {
			
			_target = _players call BIS_fnc_selectRandom;
			
			if ([_unit, _target] call fnc_hasSight) then {
				
				// Roarrrrrrrrrrrr
				[_unit, "zalert" + str((floor random 5) + 1)] call object_speak;
				
				// tell zombie to ttack player
				_unit setVariable ["zombieTarget", _target, true];
				
				// Add zombie to targets list of aggro'd zombies
				_zombies = _target getVariable ["attackingZombies", []];
				
				if (!(_target in _zombies)) then {
					_zombies pushBack _unit;
				};
				
				_target setVariable ["attackingZombies", _zombies, true];
				
				// Set timers 	
				_unit setVariable ["loseZombieTimer", LOSE_ZOMBIE_TIMER, true];
				_unit setVariable ["zombieTimerGunshot", 0, true];
			};
		};
	};
};

_target;