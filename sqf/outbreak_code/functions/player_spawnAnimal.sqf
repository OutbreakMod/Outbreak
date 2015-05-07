/*
	Spawns wild animals around player
	@author: TheAmazingAussie
*/

private ["_minimumSpawnRadius", "_maximumSpawnRadius", "_animalAgents", "_animalGroup", "_animalUnit", "_animalType", "_animalPosition"];

_minimumSpawnRadius = _this select 0;
_maximumSpawnRadius = _this select 1;
_animalAgents = _this select 2;

// find best animal position
_animalPosition = [getPosATL player, _minimumSpawnRadius, _maximumSpawnRadius, 1, 0, 50, 0] call BIS_fnc_findSafePos;

// create group for goat
_animalGroup = createGroup Civilian;

// select random animal
_animalType = _animalAgents call BIS_fnc_selectRandom;

// create unit
_animalUnit = (_animalGroup) createUnit [_animalType, _animalPosition, [], 0, "NONE"];

// create AI
[_animalPosition, _animalUnit] execFSM "addons\outbreak_code\functions\fsm\animal_ai.fsm";