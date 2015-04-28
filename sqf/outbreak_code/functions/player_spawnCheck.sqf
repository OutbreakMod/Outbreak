/*
	Spawning method check for both infected and loot
	@author: TheAmazingAussie
*/

private ["_nearby", "_nearbyRadius", "_positions", "_weapon_holder", "_lootPos", "_spawnItem", "_spawnItems", "_itemClass", "_itemType", "_lootPos", "_i"];

_unit = _this select 0;
_check = _this select 1; // "loot" or "zombie"

if (_check == "loot") then {

	_nearbyRadius = 100;
	_nearby = (getPos _unit) nearObjects ["building", _nearbyRadius];
		
	{
		if (_x getVariable ["lootcount", 0] == 0) then {
			_x call building_spawnLoot;
		};
		
	} forEach _nearby;
};

if (_check == "towngen") then {
	
	
	[player] spawn spawn_townWreckGenerator;
};