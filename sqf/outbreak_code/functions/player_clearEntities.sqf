/*
	Clears all infected and animals who are alive on login
	@author: TheAmazingAussie
*/

private ["_entityCheckRadius", "_entityAgents", "_nearEntity"];

_entityCheckRadius = 500;
_entityAgents = ["Cock_random_F", "Hen_random_F", "Goat_random_F", "Sheep_random_F", "Rabbit_F"];
_nearEntity = (getPos player) nearEntities [_entityAgents, _entityCheckRadius];

// remove all animals on join
{
	if (alive _x) then {
		deleteVehicle _x;
	} else {
		player reveal _x;
	};
} foreach _nearEntity;