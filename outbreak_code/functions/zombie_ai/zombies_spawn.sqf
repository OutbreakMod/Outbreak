/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie", "_nearby", "_agent"];

_unit = _this select 0;
_building = _this select 1;
_position = getPosATL _building;

_amount = floor (random 5) + 1;
_amountSpawned = 0;

_infected = [getPos vehicle _unit, ZOMBIE_SPAWN_RADIUS, "isZombie"] call player_findNearby;
_playersNearby = [getPos vehicle _unit, ZOMBIE_SPAWN_RADIUS, "isPlayer"] call player_findNearby;

_NEW_MAX_INFECTED_CITY = 20;//(MAX_INFECTED_CITY * (count _playersNearby));

_count = count _infected;

if (_count < _NEW_MAX_INFECTED_CITY) then {
	_amountSpawned = _NEW_MAX_INFECTED_CITY - _count;
	
	if (_amountSpawned >= _amount) then {
		_amountSpawned = _amount;
	};
	
	//hint format["amount zombie spawned: %1", _amountSpawned];
	diag_log format ["There needs to be (%1) more zombies to spawn!", _amountSpawned];

	for "_i" from 0 to _amountSpawned - 1 do { 
	
		_players = [_position, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;
		
		if ((count _players) == 0) then {
			[[_position, _building]] call zombie_create;
		};
	};
};

_building setVariable ["zombieSpawnTimer", time + ZOMBIE_RESPAWN_COOLDOWN];