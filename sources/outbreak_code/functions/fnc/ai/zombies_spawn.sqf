/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie", "_nearby", "_agent"];

_unit = _this select 0;
_building = _this select 1;
_position = getPosATL _building;

_amount = 3;

// limit zombies per city
_infected = [_unit, LOOT_SPAWN_RADIUS, "isZombie"] call player_findNearby;
_count = count _infected;

// check for max amount within city
if (_count < MAX_INFECTED_CITY) then {

	_toSpawn = MAX_INFECTED_CITY - _count;
	
	if (_toSpawn >= _amount) then {
		_toSpawn = _amount;
	};
	
	diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

	for "_i" from 0 to _toSpawn - 1 do { 
	
		_players = [_position, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;
		
		if ((count _players) == 0) then {
			[[_position, _building]] call zombie_create;
		};
		
		/*_zombiePosition = [];
		_needsRelocated = true;
		_counter = 0;
		
		while {_needsRelocated} do {
			
			_zombiePosition = [_position, 3, 15, 3] call fnc_selectRandomLocation;
			_players = [_zombiePosition, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;
			
			if ((count _players) == 0) then {
				_needsRelocated = false;
			};
			
			_counter = _counter + 1;
			
			if (_counter > 10) then {
				_zombiePosition = [];
				_needsRelocated = false;
			};
		};
		
		if (count _zombiePosition > 0) then {
			[[_zombiePosition, _building]] call zombie_create;
		};*/
	};
};

_building setVariable ["zombieSpawnTimer", serverTime + 600];