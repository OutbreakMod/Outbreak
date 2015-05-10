/*
	Spawning method check for both infected and loot
	@author: TheAmazingAussie
*/

private ["_nearby", "_nearbyRadius", "_positions", "_weapon_holder", "_lootPos", "_spawnItem", "_spawnItems", "_itemClass", "_itemType", "_lootPos", "_i", "_x", "_lootArray"];

_unit = _this select 0;
_check = _this select 1;

if (_check == "towngen") then {
	[player] spawn spawn_townWreckGenerator;
};

if (_check == "loot") then {

	_nearbyRadius = 100;
	_nearby = (getPosATL _unit) nearObjects ["building", _nearbyRadius];
		
	{
		if (serverTime > _x getVariable ["loottimer", 0]) then {

			// clear previous loot
			_lootArray = _x getVariable ["lootarray", []];
		
			for "_i" from 0 to count (_lootArray) - 1 do {
				deleteVehicle (_lootArray select _i);
			};
			
			sleep 0.01;
			
			_x setVariable ["lootarray", []];
			_x call building_spawnLoot;
		};
		
	} foreach _nearby;
};

if (_check == "animal") then {
	
	_animalRadius = 5;
	_minimumSpawnRadius = 20;
	_maximumSpawnRadius = 40;
	
	_animalAgents = ["Sheep_random_F"]; // goat only animal in arma 3 which hasn't got broken AI
	//["Goat_random_F", "Sheep_random_F", "Rabbit_F"]; // "Cock_random_F", "Hen_random_F", 
	
	_nearAnimals = (getPosATL player) nearEntities [_animalAgents, _maximumSpawnRadius];

	if ((count _nearAnimals) < _animalRadius) then {
		
		_animalsToSpawn = _animalRadius - (count _nearAnimals);	
		
		for "_i" from 0 to (_animalsToSpawn) do { 
			[_maximumSpawnRadius, _maximumSpawnRadius, _animalAgents] spawn player_spawnAnimal;
		};
	};
};

// Create scroll menu actions

if (_check == "actions") then {
	[] execVM "addons\outbreak_code\functions\player_createActions.sqf";
};

// Sync user to database

if (_check == "sync") then {
	[] call player_hiveSync;
};
			