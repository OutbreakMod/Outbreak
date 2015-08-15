/*
	Clears all infected and animals who are alive on login
	@author: TheAmazingAussie
*/

private ["_radius", "_near"];

_radius = 200;
_near = [player, ZOMBIE_SPAWN_RANGE_WILD_MAX] call player_findNearbyZombies;

{
	if (alive _x) then {
		deleteVehicle _x;
	};
	
} forEach _near;