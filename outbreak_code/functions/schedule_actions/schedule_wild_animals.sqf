/*
	Spawn wild zombies
	@author: TheAmazingAussie
*/

_animalTypes = ["MOD_Hen", "MOD_Cock", "MOD_Goat", "MOD_Sheep"];
_pos = getPosATL vehicle player;

_cities = nearestLocations [_position, ["NameCityCapital","NameCity","NameVillage"], 150];

if ((count _houses) == 0 && (count _cities == 0)) then { 
	_animals = ([_position, MAX_ANIMAL_SPAWN_DISTANCE, "isAnimal"] call player_findNearby);

	if (count _animals == 0) then {
		for "_i" from 1 to 3 do {

			_animalType = selectRandom _animalTypes;
			_animalPosition = [_position, MIN_ANIMAL_SPAWN_DISTANCE, MAX_ANIMAL_SPAWN_DISTANCE, 3] call fnc_selectRandomLocation;
		
            _animal = createAgent [_animalType, _animalPosition, [], 0, "FORM"];
            _animal setVariable ["BIS_fnc_animalBehaviour_disable", true];
            _animal setVariable ["isAnimal", true, true];
            
            _spawnedZombies = player getVariable ["spawnedZombies", []];
            _spawnedZombies pushBack _animal;
            
            // add animal to spawned zombie list so they can be cleared when player disconnects
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