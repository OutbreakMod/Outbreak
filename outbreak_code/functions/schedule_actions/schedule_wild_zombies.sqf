/*
	Spawn wild zombies
	@author: TheAmazingAussie
*/

_animalTypes = ["MOD_Hen", "MOD_Cock", "MOD_Goat", "MOD_Sheep"];
_position = getPosATL vehicle player;

_houses = _position nearObjects ["House", 50];
_cities = nearestLocations [_position, ["NameCityCapital","NameCity","NameVillage"], 150];
	
if ((count _houses) == 0 && (count _cities == 0)) then { 
	if (!DISABLE_ZOMBIES) then {
		_zombies = ([_position, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, "isZombie"] call player_findNearby);
		
		if (count _zombies == 0) then {
			
			for "_i" from 1 to 3 do {
				_zombiePosition = [_position, MIN_WILD_ZOMBIE_SPAWN_DISTANCE, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, 3] call fnc_selectRandomLocation;
				_players = [_zombiePosition, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;

				if (!(count _players > 0)) then {
					[[_zombiePosition]] call zombie_create;
				};
			};
		};
	};
};