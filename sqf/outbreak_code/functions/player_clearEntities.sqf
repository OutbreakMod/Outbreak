/*
	Clears all infected and animals who are alive on login
	@author: TheAmazingAussie
*/

private ["_radius", "_near"];

_radius = 200;

// find near zombies
_near = [player, _radius, "isZombie"] call player_findNearby;

// delete all things
{
	if (alive _x) then {
		deleteVehicle _x;
	};
	
} forEach _near;