/*
	Spawns wild animals around player
	@author: TheAmazingAussie
*/

private ["_minimumSpawnRadius", "_maximumSpawnRadius", "_animalRadius", "_animalAgents", "_nearAnimals", "_animalGroup", "_animalUnit", "_animalType", "_animalPosition"];

_minimumSpawnRadius = 15;
_maximumSpawnRadius = 30;

_animalRadius = 5;
_animalAgents = ["Cock_random_F", "Hen_random_F", "Goat_random_F", "Sheep_random_F", "Rabbit_F"];

// find near animals
_nearAnimals = (getPosATL player) nearEntities [_animalAgents, _maximumSpawnRadius];

if ((count _nearAnimals) < _animalRadius) then {
	
	_animalsToSpawn = _animalRadius - (count _nearAnimals);
	
	for "_i" from 0 to (_animalsToSpawn) do { 
	
		_animalPosition = [getPosATL player, _minimumSpawnRadius, _maximumSpawnRadius, 1, 0, 50, 0] call BIS_fnc_findSafePos;
		
		// create group for goat
		_animalGroup = createGroup Civilian;
		
		// select random animal
		_animalType = _animalAgents call BIS_fnc_selectRandom;
		
		// create unit
		_animalUnit = (_animalGroup) createUnit [_animalType, _animalPosition, [], 0, "NONE"];
	};
};