/*
	Spawning wild zombies around player
	@author: TheAmazingAussie
*/

private ["_range", "_amount", "_infected", "_count", "_toSpawn", "_zombiePosition", "_zombieRange"];

_unit = _this select 0;
_range = _this select 1;

_amount = 6;

diag_log format ["Spawn zombie request %1", _this];

_infected = _this call player_findNearbyZombies;
_count = count _infected;

_toSpawn = _amount - _count;
diag_log format ["There needs to be (%1) more zombies to spawn!", _toSpawn];
	
// if the amount of current zeds is less than amount threshold, we spawn more infected
if (_count < _amount) then {

	for [{_i = 0}, {_i < _toSpawn}, {_i = _i + 1}] do {
		
		_zombieRange = round ((random _range) + 20;
		_zombiePosition = [getPos _unit, 10, _zombieRange, 1, 0, 50, 0] call BIS_fnc_findSafePos;
		
		diag_log format ["Spawning zombie at %1 with range %2", _zombiePosition, _zombieRange];
		
		_agent = createAgent ["b_survivor_F", _zombiePosition, [], 40, "NONE"];
		_agent setVariable ["isZombie", true, true];
		
		_agent call player_clearInventory; // remove everything
		_agent disableAI "FSM";
		_agent setBehaviour "CARELESS";	
		_agent setCombatMode "RED";
		_agent setSkill 0;
	};
};