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
		server_spawnLoot = [_building];
		publicVariableServer "server_spawnLoot";
	//};
	
	if (_distance >= MIN_ZOMBIE_SPAWN_DISTANCE) then {
		_type = typeOf _building;
		if (isClass (configFile >> "cfgBuildingClothes" >> _type)) then {
			if (serverTime > _building getVariable ["zombieSpawnTimer", 0]) then {
				[player, _building] call zombies_spawn;
			};
		};
	};
	
} foreach _nearby;