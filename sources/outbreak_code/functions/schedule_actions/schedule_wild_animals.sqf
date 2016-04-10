/*
	Spawn wild zombies
	@author: TheAmazingAussie
*/

_cities = nearestLocations [getPosATL player, ["NameCityCapital","NameCity","NameVillage"], 100];

if (count _cities == 0) then {

	_animals = ([getPosATL player, MAX_ANIMAL_SPAWN_DISTANCE, "isAnimal"] call player_findNearby);

	if (count _animals == 0) then {
		for "_i" from 1 to 3 do {

			_animalPosition = [];
			_needsRelocated = true;
			_counter = 0;

			while {_needsRelocated} do {

				_animalPosition = [getPosATL player, MIN_ANIMAL_SPAWN_DISTANCE, MAX_ANIMAL_SPAWN_DISTANCE, 3] call fnc_selectRandomLocation;
				_players = [_animalPosition, MIN_ANIMAL_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;

				if ((count _players) == 0) then {
					if (count _animalPosition > 0) then {
						if (["grass", surfaceType _animalPosition] call fnc_inString) then {
							_needsRelocated = false;
						};
					};
				};

				_counter = _counter + 1;

				if (_counter > 10) then {
					_animalPosition = [];
					_needsRelocated = false;
				};
			};

			if (count _animalPosition > 0) then {
				
				_animals = ["Hen_random_F", "Cock_random_F", "Goat_random_F", "Sheep_random_F"];
				
				_animal = createAgent [selectRandom _animals, _animalPosition, [], 0, "CAN_COLLIDE"];
				_animal setVariable ["BIS_fnc_animalBehaviour_disable", true];
				_animal setVariable ["isAnimal", true, true];
				
				// When player disconnects these animals will be removed
				_spawnedZombies = player getVariable ["spawnedZombies", []];
				_spawnedZombies pushBack _animal;
				
				 // add zombie to players spawned zombie list
				player setVariable ["spawnedZombies", _spawnedZombies, true];
				
				[_animal] spawn {
					
					_animal = _this select 0;
					
					while {alive _animal} do {
					
						_animalPosition = [getPosATL _animal, 3, 10, 3] call fnc_selectRandomLocation;
						_animal moveTo _animalPosition;
						
						_players = ([getPos _animal, MAX_ANIMAL_SPAWN_DISTANCE, "isPlayer"] call player_findNearby);
			
						if (!(count _players > 0)) exitWith {
							_animal setDamage 1;
							deleteVehicle (_animal);
						};
					};
				};
			};
		};
	};
};