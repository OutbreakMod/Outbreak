/*
	Spawn wild zombies
	@author: TheAmazingAussie
*/

_animalTypes = ["MOD_Hen", "MOD_Cock", "MOD_Goat", "MOD_Sheep"];

_houses = player nearObjects ["House", 50];
_cities = nearestLocations [getPosATL player, ["NameCityCapital","NameCity","NameVillage"], 150];

if (!(count _houses > 3) && (count _cities == 0)) then { 

	/////////////////////////
	// WILD ANIMAL SPAWNING
	/////////////////////////

	_animals = ([getPosATL player, MAX_ANIMAL_SPAWN_DISTANCE, "isAnimal"] call player_findNearby);

	if (count _animals == 0) then {
		for "_i" from 1 to 3 do {

			_animalPosition = [];
			_animalType = selectRandom _animalTypes;
			
			_favouriteZones = ((configFile >> "CfgVehicles" >> _animalType >> "favouriteZones") call BIS_fnc_getCfgData);
			_animalPositions = selectBestPlaces [(getPosATL player), MAX_ANIMAL_SPAWN_DISTANCE, _favouriteZones, 10, 5];
			_animalPosition = (selectRandom _animalPositions) select 0;
		
			if (player distance _animalPosition >= MIN_ANIMAL_SPAWN_DISTANCE) then {
				if (!(surfaceIsWater _animalPosition)) then {
				
					_animal = createAgent [_animalType, _animalPosition, [], 0, "FORM"];
					_animal setVariable ["BIS_fnc_animalBehaviour_disable", true];
					_animal setVariable ["isAnimal", true, true];
					
					// When player disconnects these animals will be removed
					_spawnedZombies = player getVariable ["spawnedZombies", []];
					_spawnedZombies pushBack _animal;
					
					//player setPos _animalPosition;
					
					 // add zombie to players spawned zombie list
					player setVariable ["spawnedZombies", _spawnedZombies, true];
					
					[_animal] spawn {
						
						_animal = _this select 0;
						_loop = true;
						
						while {_loop} do {
						
							if (alive _animal) then {
								_animalPosition = [getPosATL _animal, 3, 10, 3] call fnc_selectRandomLocation;
								_animal moveTo _animalPosition;
								
								_players = ([getPos _animal, MAX_ANIMAL_SPAWN_DISTANCE, "isPlayer"] call player_findNearby);
					
								if (!(count _players > 0)) exitWith {
									_animal setDamage 1;
									deleteVehicle (_animal);
									_loop = false;
								};
							} else {
								_loop = false;
							};
						};
					};
				};
			};
		};
		
	};
	
	/////////////////////////
	// WILD ZOMBIE SPAWNING
	/////////////////////////
	
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