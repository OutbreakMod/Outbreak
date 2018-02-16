if (!DISABLE_ZOMBIES) then {
	_nearby = nearestObjects [getPosATL vehicle player, ["House"], ZOMBIE_SPAWN_RADIUS];

    // Do military zombie spawns first
	{
		_building = _x;
		_distance = _building distance player;

		if (_distance >= MIN_ZOMBIE_SPAWN_DISTANCE) then {
			_type = typeOf _building;
			if (isClass (configFile >> "cfgBuildingClothes" >> _type)) then {
                _zombieClothes = getText (configFile >> "cfgBuildingClothes" >> _type >> "zombieClothes");
                
                if (_zombieClothes == "military") then {
                    if (time > _building getVariable ["zombieSpawnTimer", 0]) then {
                        [player, _building] call zombies_spawn;
                    };
                };
			};
		};

	} foreach _nearby;
    
    // Do other buildings last
	{
		_building = _x;
		_distance = _building distance player;

		if (_distance >= MIN_ZOMBIE_SPAWN_DISTANCE) then {
			_type = typeOf _building;
            
			if (isClass (configFile >> "cfgBuildingClothes" >> _type)) then {
                _zombieClothes = getText (configFile >> "cfgBuildingClothes" >> _type >> "zombieClothes");
                
                if (_zombieClothes != "military") then {
                    if (time > _building getVariable ["zombieSpawnTimer", 0]) then {
                        [player, _building] call zombies_spawn;
                    };
                };
			};
		};

	} foreach _nearby;
};