_inVehicle = vehicle player != player;
_searchPosition = getPosATL player;

if (_inVehicle) then {
	_searchPosition = getPosATL (vehicle player);
};

_nearby = _searchPosition nearObjects LOOT_SPAWN_RADIUS;
_nearly = _nearby call KK_fnc_arrayShuffle; // Spice it up :D

{
	
	_building = _x;
	_distance = _building distance player;
	
	//if (_distance >= MIN_LOOT_SPAWN_DISTANCE) then {
		[_building] remoteExecCall ["remoteExec_spawn_loot", 2];
	//};
	
} foreach _nearby;