/*
	Clears all infected and animals who are alive on login
	@author: TheAmazingAussie
*/

private ["_radius", "_near"];

_radius = 200;

{
	deleteVehicle _x;
} forEach ([getPos vehicle player, _radius, "isZombie"] call player_findNearby);