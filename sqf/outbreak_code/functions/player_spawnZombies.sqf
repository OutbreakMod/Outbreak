/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange", "_infected", "_isZombie"];

diag_log format ["Spawn zombie request %1", _this];

_unit = _this select 0;
_amount = ZOMBIE_SPAWN_WILD;

_infected = ([_unit, ZOMBIE_SPAWN_RANGE_WILD_MAX] call player_findNearbyZombies);
_count = (count _infected);
	
// if the amount of current zeds is less than amount threshold, we spawn more infected
if (_count < _amount) then {

	_toSpawn = _amount - _count;
	diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];

	for "_i" from 0 to _toSpawn - 1 do { 
		
		_zombiePosition = [(position _unit), ZOMBIE_SPAWN_RANGE_WILD_MAX / 2, ZOMBIE_SPAWN_RANGE_WILD_MAX, 1, 0, 50, 0] call BIS_fnc_findSafePos;
		
		diag_log format ["Spawning zombie at %1", _zombiePosition];
		
		_agent = createAgent ["b_survivor_F", _zombiePosition, [], 0, "NONE"];
		_agent setVariable ["isZombie", true, true];
		
		_agent call player_clearInventory; // remove everything
		_agent disableAI "FSM";
		_agent setBehaviour "CARELESS";	
		_agent setCombatMode "RED";
		_agent setSkill 0;
	};
};