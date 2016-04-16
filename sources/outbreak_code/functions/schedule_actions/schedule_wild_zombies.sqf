/*
	Spawn wild zombies
	@author: TheAmazingAussie
*/

_cities = nearestLocations [getPosATL player, ["NameCityCapital","NameCity","NameVillage"], 100];

_houses = nearObjects ["House", 50];

if (!(count _houses > 3)) then { // if we have more than 3 houses nearby, no wild animal spawns

	_zombies = ([getPosATL player, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, "isZombie"] call player_findNearby);
	
	if (count _zombies == 0) then {
		
		for "_i" from 1 to 3 do {

			_zombiePosition = [getPosATL player, MIN_WILD_ZOMBIE_SPAWN_DISTANCE, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, 3] call fnc_selectRandomLocation;
			_players = [_zombiePosition, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;

			if (!(count _players > 0)) then {
				[[_zombiePosition]] call zombie_create;
			};
		};
	};
};