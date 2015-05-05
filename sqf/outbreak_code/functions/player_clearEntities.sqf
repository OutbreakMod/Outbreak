/*
	Clears all infected and animals who are alive on login
	@author: TheAmazingAussie
*/

private ["_entityCheckRadius", "_entityAgents", "_nearEntity"];

_entityCheckRadius = 1000;
_entityAgents = ["Cock_random_F", "Hen_random_F", "Goat_random_F", "Sheep_random_F", "Rabbit_F"];
_nearEntity = (getPos player) nearEntities [_animalAgents, _entityCheckRadius];

// remove all animals on join
{
	if (alive _x) then {
		deleteVehicle (_x);
	};
} foreach _entityAgents;