/*
	Spawning method check for both infected and loot
	@author: TheAmazingAussie
*/

private ["_nearby", "_nearbyRadius", "_positions", "_lootPos", "_spawnItem", "_spawnItems", "_itemClass", "_itemType", "_lootPos", "_i", "_x", "_lootArray"];

_unit = _this select 0;
_check = _this select 1;

if (_check == "zombie") then {
	[_unit] call player_spawnZombies;
};

if (_check == "bones") then {
	if (player getVariable ["leg_break", false] && player getVariable ["fracture_update", false]) then {
		player setHit ["legs", 1];
		player setVariable ["fracture_update", false, true];
		player switchMove "AmovPpneMstpSrasWrflDnon"; // prone
	};
	
	if (!(player getVariable ["leg_break", false]) && player getVariable ["fracture_update", false]) then {
		player setHit ["legs", 0];
		player setVariable ["fracture_update", false, true];
	};
	
	[player] call player_hiveSync; // force save
};

if (_check == "health") then {
	if (player getVariable ["health", 6000] < 0) then {
		player setDamage 1;
	};
};

if (_check == "blood") then {
	if (player getVariable ["blood", 6000] < 0) then {
		player setDamage 1;
	};
};

if (_check == "loot") then {

	_nearbyRadius = 120;
	_nearby = (getPosATL _unit) nearObjects ["building", _nearbyRadius];
		
	{
		if (serverTime > _x getVariable ["loottimer", 0]) then {
			_lootArray = _x getVariable ["lootarray", []];
		
			for "_i" from 0 to count (_lootArray) - 1 do {
				deleteVehicle (_lootArray select _i);
			};

			_x setVariable ["lootarray", []];
			_x call building_spawnLoot;
		};
		
	} foreach _nearby;
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

if (_check == "blood_level") then {
	if (_unit setVariable ["blood_level", false]) then {
		_unit setVariable ["blood_level", false];
		_unit getVariable ["blood", MOD_FULL_BLOOD] call fnc_bloodEffect;
	
	};
};