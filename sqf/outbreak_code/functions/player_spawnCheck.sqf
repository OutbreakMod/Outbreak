/*
	Spawning method check for both infected and loot
	@author: TheAmazingAussie
*/

private ["_nearby", "_nearbyRadius", "_positions", "_weapon_holder", "_lootPos", "_spawnItem", "_spawnItems", "_itemClass", "_itemType", "_lootPos", "_i", "_x", "_lootArray"];

_unit = _this select 0;
_check = _this select 1; // "loot" or "zombie"

if (_check == "loot") then {

	_nearbyRadius = 100;
	_nearby = (getPos _unit) nearObjects ["building", _nearbyRadius];
		
	{
		if (serverTime > _x getVariable ["loottimer", 0]) then {

			// clear previous loot
			_lootArray = _x getVariable ["lootarray", []];
			
			for "_i" from 0 to count (_lootArray) - 1 do {
				deleteVehicle (_lootArray select _i);
			};
			
			sleep 0.01;
			
			_x setVariable ["lootarray", []];
			_x call building_spawnLoot;
		};
		
	} forEach _nearby;
};

if (_check == "towngen") then {
	
	
	[player] spawn spawn_townWreckGenerator;
};