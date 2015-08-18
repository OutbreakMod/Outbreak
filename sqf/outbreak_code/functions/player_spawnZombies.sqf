/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie", "_nearby"];

diag_log format ["Spawn zombie request %1", _this];

_unit = _this select 0;
_isCity = count (nearestObjects [getPosATL _unit, ["House"], 20]) > 4;

_amount = ZOMBIE_SPAWN_WILD;
_rangeMax = ZOMBIE_SPAWN_RANGE_WILD_MAX;
_rangeMin = ZOMBIE_SPAWN_RANGE_WILD_MIN;

if (_isCity) then {
	_amount = ZOMBIE_SPAWN_CITY;
	_rangeMax = ZOMBIE_SPAWN_RANGE_CITY_MAX;
	_rangeMin = ZOMBIE_SPAWN_RANGE_CITY_MIN;
};

_infected = ([_unit, ZOMBIE_SPAWN_RANGE_WILD_MAX, "isZombie"] call player_findNearby);
_count = (count _infected);
	
// if the amount of current zeds is less than amount threshold, we spawn more infected
if (_count < _amount) then {

	_toSpawn = _amount - _count;
	diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

	for "_i" from 0 to _toSpawn - 1 do { 
		
		_zombiePosition = [(getPosATL _unit), _rangeMin, _rangeMax, 1, 0, 50, 0] call BIS_fnc_findSafePos;
		_agent = createAgent ["Zombie", _zombiePosition, [], 0, "NONE"];
		[_agent] call fnc_startZombie;
	};
};

_nearby = (getPosATL _unit) nearObjects ["building", 100];

{
	if ((typeOf _x) in ["MOD_Mi8Wreck", "Mi8Wreck", "MOD_UH1YWreck", "Land_Wreck_Heli_Attack_02_F"]) then {
		
		_maxZeds = floor (random 6) + 2;
		_x setVariable ["helicrashNoZeds", true, true];
		
		for "_i" from 0 to _maxZeds - 1 do {

			_spawnMinRadius = 5;
			_spawnMaxRadius = 8;
			_zombiePosition = [(getPos _x), (random _spawnMaxRadius) + _spawnMinRadius, random 360] call BIS_fnc_relPos;
			[(createAgent ["Zombie", _zombiePosition, [], 0, "NONE"])] call fnc_startZombie;
			
		};
	};
	
} forEach _nearby;