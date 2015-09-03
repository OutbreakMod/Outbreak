/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie", "_nearby", "_agent"];

diag_log format ["Spawn zombie request %1", _this];

_unit = _this select 0;
_isCity = count (nearestObjects [position _unit, ["House"], 40]) > 3;

_amount = ZOMBIE_SPAWN_WILD;
_rangeMax = ZOMBIE_SPAWN_RANGE_WILD_MAX;
_rangeMin = ZOMBIE_SPAWN_RANGE_WILD_MIN;

if (_isCity) then {
	_amount = ZOMBIE_SPAWN_CITY;
	_rangeMax = ZOMBIE_SPAWN_RANGE_CITY_MAX;
	_rangeMin = ZOMBIE_SPAWN_RANGE_CITY_MIN;
};

hint format["is city: %1", _isCity];

_infected = ([_unit, ZOMBIE_SPAWN_RANGE_WILD_MAX, "isZombie"] call player_findNearby);
_count = (count _infected);
	
// if the amount of current zeds is less than amount threshold, we spawn more infected
if (_count < _amount) then {

	_toSpawn = _amount - _count;
	diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

	for "_i" from 0 to _toSpawn - 1 do { 
	
		_zombiePosition = [];
	
		if (_isCity) then {
			_debugBuilding = (nearestObjects [getPosATL _unit, ["House"], LOOT_SPAWN_RADIUS]) call fnc_selectRandom;
			_zombiePosition = [(getPos _debugBuilding), _rangeMin, _rangeMax, 3] call fnc_selectRandomLocation;
		} else {
			_zombiePosition = [(position _unit), _rangeMin, _rangeMax, 3] call fnc_selectRandomLocation;
		};
		
		diag_log format["LOCATION: %1, status: %2", _zombiePosition, _isCity];
		
		_agent = createAgent ["Zombie", _zombiePosition, [], 0, "NONE"];
		[_agent] call fnc_startZombie;
	};
};