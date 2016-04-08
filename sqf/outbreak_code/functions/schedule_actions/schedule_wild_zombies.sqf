/*
	Spawn wild zombies
	@author: TheAmazingAussie
*/

_zombies = ([getPosATL player, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, "isZombie"] call player_findNearby);

if (count _zombies == 0) then {
	for "_i" from 1 to 3 do {

		_zombiePosition = [];
		_needsRelocated = true;
		_counter = 0;

		while {_needsRelocated} do {

			_zombiePosition = [getPosATL player, MIN_ZOMBIE_SPAWN_DISTANCE, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, 3] call fnc_selectRandomLocation;
			_players = [_zombiePosition, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;

			if ((count _players) == 0) then {
				_needsRelocated = false;
			};

			_counter = _counter + 1;

			if (_counter > 20) then {
				_zombiePosition = [];
				_needsRelocated = false;
			};
		};

		if (count _zombiePosition > 0) then {
			[[_zombiePosition]] call zombie_create;
		};
	};
};