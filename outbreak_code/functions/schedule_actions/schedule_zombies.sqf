if (!DISABLE_ZOMBIES) then {
	_nearby = nearestObjects [getPos vehicle player, ["House"], ZOMBIE_SPAWN_RADIUS];//(getPosATL player) nearObjects ZOMBIE_SPAWN_RADIUS;
	//_nearly = _nearby call fnc_arrayShuffle; // Spice it up :D

	{
		_building = _x;
		_distance = _building distance player;

		if (_distance >= MIN_ZOMBIE_SPAWN_DISTANCE) then {
			_type = typeOf _building;
			//if (isClass (configFile >> "cfgBuildingClothes" >> _type)) then {
            if (time > _building getVariable ["zombieSpawnTimer", 0]) then {
                [player, _building] call zombies_spawn;
            };
			//};
		};

	} foreach _nearby;
};