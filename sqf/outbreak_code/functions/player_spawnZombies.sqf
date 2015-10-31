/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie", "_nearby", "_agent"];

diag_log format ["Spawn zombie request %1", _this];

_unit = _this select 0;
_isCity = false;

_amount = ZOMBIE_SPAWN_WILD;
_rangeMax = ZOMBIE_SPAWN_RANGE_WILD_MAX;
_rangeMin = ZOMBIE_SPAWN_RANGE_WILD_MIN;

_nearCities = nearestLocations [getPosATL _unit, ["NameCityCapital","NameCity"], 200];
_nearVillages = nearestLocations [getPosATL _unit, ["NameVillage"], 100];

if ((count _nearCities) > 0) then {

	_amount = ZOMBIE_SPAWN_CITY;
	_rangeMax = ZOMBIE_SPAWN_RANGE_CITY_MAX;
	_rangeMin = ZOMBIE_SPAWN_RANGE_CITY_MIN;
	_isCity = true;
};

if ((count _nearVillages) > 0) then {

	_amount = ZOMBIE_SPAWN_VILLAGE;
	_rangeMax = ZOMBIE_SPAWN_RANGE_VILLAGE_MAX;
	_rangeMin = ZOMBIE_SPAWN_RANGE_VILLAGE_MIN;
	_isCity = true;
	
};

_infected = ([_unit, _rangeMax, "isZombie"] call player_findNearby);
_count = (count _infected);
	
// if the amount of current zeds is less than amount threshold, we spawn more infected
if (_count < _amount) then {

	_toSpawn = _amount - _count;
	diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

	for "_i" from 0 to _toSpawn - 1 do { 
	
		/*_zombiePosition = [];
	
		if (_isCity) then {
			_debugBuilding = (nearestObjects [getPosATL _unit, ["House"], LOOT_SPAWN_RADIUS]) call fnc_selectRandom;
			_zombiePosition = [(getPos _debugBuilding), _rangeMin, _rangeMax, 3] call fnc_selectRandomLocation;
		} else {
			
		};*/
		
		_zombiePosition = [(position _unit), _rangeMin, _rangeMax, 3] call fnc_selectRandomLocation;
		
		if ((_unit distance _zombiePosition) > _rangeMin) then { // stop zombies spawning infront of players
			_agent = createAgent ["Zombie", _zombiePosition, [], 0, "NONE"];
			[_agent] call fnc_startZombie;	
		};
	};
};