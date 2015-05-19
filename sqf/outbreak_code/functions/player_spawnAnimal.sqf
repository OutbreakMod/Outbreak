/*
	Spawns wild animals around player
	@author: TheAmazingAussie
*/

private ["_minimumSpawnRadius", "_maximumSpawnRadius", "_animalAgents", "_animalGroup", "_animalUnit", "_animalType", "_animalPosition"];

_unitGroup =  createGroup civilian;
_maximumSpawnRadius = _this select 0;
_minimumSpawnRadius = _this select 1;
_animalType = _this select 2;
_pos = _this select 3;

// find best animal position
_animalPosition = [_pos, _minimumSpawnRadius, _maximumSpawnRadius, 1, 0, 50, 0] call BIS_fnc_findSafePos;

// create unit
_animalUnit = (_unitGroup) createUnit [_animalType, _animalPosition, [], 0, "NONE"];

// create AI
[_animalPosition, _animalUnit] execFSM "addons\outbreak_code\functions\fsm\animal_ai.fsm";

{ _x reveal _animalUnit; } foreach playableUnits;