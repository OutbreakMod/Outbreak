/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie"];

diag_log format ["Spawn zombie request %1", _this];

_unit = _this select 0;
_amount = ZOMBIE_SPAWN_WILD;

// find nearby zombies
_infected = ([_unit, ZOMBIE_SPAWN_RANGE_WILD_MAX, "isZombie"] call player_findNearby);
_count = (count _infected);
	
// if the amount of current zeds is less than amount threshold, we spawn more infected
if (_count < _amount) then {

	// find the number to spawn
	_toSpawn = _amount - _count;
	
	// log client dev stuff
	diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

	// spawn any missing infected
	for "_i" from 0 to _toSpawn - 1 do { 
		
		// find safe position to spawn zombie
		_zombiePosition = [(position _unit), ZOMBIE_SPAWN_RANGE_WILD_MIN, ZOMBIE_SPAWN_RANGE_WILD_MAX, 1, 0, 50, 0] call BIS_fnc_findSafePos;
		
		// spawn zombie
		_agent = createAgent ["b_survivor_F", _zombiePosition, [], 0, "NONE"];
		
		// log spawn
		diag_log format ["Spawning zombie at %1", _zombiePosition];
		
		// init zombie
		[_agent] call fnc_startZombie;
	};
};