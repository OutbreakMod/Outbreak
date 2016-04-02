/*
	Spawning method check for both infected and loot
	@author: TheAmazingAussie
*/

private ["_nearby", "_nearbyRadius", "_positions", "_lootPos", "_spawnItem", "_spawnItems", "_itemClass", "_itemType", "_lootPos", "_i", "_x", "_lootArray"];

_unit = _this select 0;
_check = _this select 1;

if (_check == "zombie") then {
	//[_unit] call player_spawnZombies;
};

if (_check == "loot") then {

	_inVehicle = vehicle player != player;
	_searchPosition = getPosATL _unit;
	
	if (_inVehicle) then {
		_searchPosition = getPosATL (vehicle player);
	};
	
	_nearby = _searchPosition nearObjects LOOT_SPAWN_RADIUS;
	_nearly = _nearby call KK_fnc_arrayShuffle; // Spice it up :D
	
	{
		
		_building = _x;
		_distance = _building distance _unit;
		
		//if (_distance >= MIN_LOOT_SPAWN_DISTANCE) then {
			server_spawnLoot = [_building];
			publicVariableServer "server_spawnLoot";
		//};
		
		if (_distance >= MIN_ZOMBIE_SPAWN_DISTANCE) then {
			if (_building isKindOf "House") then {
				if (serverTime > _building getVariable ["zombieSpawnTimer", 0]) then {
					[_unit, _building] call player_spawnZombies;
				};
			};
		};
		
	} foreach _nearby;
};

if (_check == "zombie_spawn") then {

};

if (_check == "actions") then {
	[] execVM "addons\outbreak_code\functions\player_createActions.sqf";
	[] execVM "addons\outbreak_code\functions\player_interactWorld.sqf";
};

if (_check == "sync") then {
	[player] call player_hiveSync;
};

if (_check == "debugmenu") then {
	[] execVM "addons\outbreak_code\functions\player_debugMenu.sqf";
};

if (_check == "health") then {

	player setVariable ["last_position", (getPosATL player), true];
	_health = player getVariable ["health", 6000];
	
	if (_health < 0) then {
		player setDamage 1;
	};
	
	if (_health < 6000) then {
		_health = _health + 1;
	};
};

if (_check == "health_level") then {
	
	_unit getVariable ["health", MOD_FULL_HEALTH] call fnc_simulateHealthEffect;
	_health = player getVariable ["health", 6000];
	
	if (_health < 6000) then {
		_health = _health + 1;
		player setVariable ["health", _health, true];
	};
};

if (_check == "reset_fracture") then {
	if (player getVariable ["reset_fracture", false]) then {
		player setVariable ["reset_fracture", false, true];
		player setHit ["legs", 0];
	};
};

if (_check == "fracture") then {
	if (player getVariable ["update_legs", 0] > 0) then {
	
		_oldDamage = (player getHit "legs");
		_newDamage = _oldDamage + (player getVariable ["update_legs", 0]);
	
		player setHit ["legs", _newDamage];
		player setVariable ["update_legs", 0, true];
		
		if (_newDamage > 0.58) then {
			player switchMove "AmovPpneMstpSrasWrflDnon"; // prone
		};
	};
};

if (_check == "leg_damage") then {
	
	_damage = (player getHit "legs");
	
	if (_damage > 0.6) then {
		_state = format["%1", animationState player];
		
		if (_state in STANDING_STANCES) then {
			player switchMove "AmovPpneMstpSrasWrflDnon"; // prone
		};
	};
};
