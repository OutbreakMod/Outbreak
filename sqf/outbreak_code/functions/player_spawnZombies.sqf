/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie", "_nearby", "_agent"];

diag_log format ["Spawn zombie request %1", _this];

_unit = _this select 0;
_building = _this select 1;
_position = getPosATL _building;

_amount = 3;

// number of infected around house
_infected = [_position, 10, "isZombie"] call player_findNearby;
_count = (count _infected);

// limit zombies per city
_globalinfected = [_unit, LOOT_SPAWN_RADIUS, "isZombie"] call player_findNearby;

// check for max amount within city
if (count _globalinfected < MAX_INFECTED_CITY) then {
	
	// if the amount of current zeds is less than amount threshold, we spawn more infected
	if (_count < _amount) then {

		_toSpawn = _amount - _count;
		diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

		for "_i" from 0 to _toSpawn - 1 do { 
		
			_zombiePosition = [];
			_needsRelocated = true;
			_counter = 0;
			
			while {_needsRelocated} do {
				
				_zombiePosition = [_position, 3, 15, 3] call fnc_selectRandomLocation;
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
				_agent = createAgent ["Zombie", _zombiePosition, [], 0, "NONE"];
				[_agent, _building] call fnc_zombie;
			};
			
			/*_zombiePosition = [_position, 5, 15, 5] call fnc_selectRandomLocation;
			_agent = createAgent ["Zombie", _zombiePosition, [], 0, "NONE"];
			[_agent, _building] call fnc_startZombie;*/
		};
	};
};

_building setVariable ["zombieSpawnTimer", serverTime + 600];