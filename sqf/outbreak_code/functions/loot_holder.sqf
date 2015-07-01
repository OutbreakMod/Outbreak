/*
	Handles spawning of items
	@author: TheAmazingAussie
*/

private ["_lootPos", "_itemClass", "_itemType", "_buildingClass", "_magazine"];

_lootPos = _this select 0;
_itemClass = _this select 1;
_itemType = _this select 2;
_buildingClass = _this select 3;

_nearByPile = nearestObjects [_lootPos, ["WeaponHolderSimulated", "GroundWeaponHolder"], 1];
_weaponHolder = objNull;

 if (count _nearByPile == 0) then {
	_weaponHolder = createVehicle ["GroundWeaponHolder", _lootPos, [], 1, "CAN_COLLIDE"];
} else {
	_weaponHolder = _nearByPile select 0;
};

if (_itemType == "gun") then {

	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addWeaponCargoGlobal [_itemClass, 1];
	
	_magazine = getArray (configFile >> "CfgWeapons" >> _itemClass >> "magazines") select 0;
	
	if (_itemClass == "LMG_Zafir_F") then {
		_magazine = "150Rnd_762x54_Box";
	};
	
	if (_itemClass == "srifle_LRR_LRPS_F") then {
		_magazine = "7Rnd_408_Mag";	
	};

	if (_itemClass == "srifle_GM6_LRPS_F") then {
		_magazine = "5Rnd_127x108_Mag";
	};
	
	if (_itemClass == "hgun_mas_grach_F") then {
		_magazine = "15Rnd_mas_9x21_Mag";
	};
	
	_weaponHolder addMagazineCargoGlobal [_magazine, floor (random 4)];
	_item = _weaponHolder;
};

if (_itemType == "supplybox") then {

	_supplyBox = createVehicle [_itemClass, _lootPos, [], 0, "CAN_COLLIDE"];
	_supplyBox setVariable ["isLoot", true];
	_supplyBox setDir (random 360);
	
	_weaponHolder = _supplyBox;
};

if (_itemType == "backpack") then {

	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addBackpackCargoGlobal [_itemClass, 1];
};

if (_itemType == "single") then {

	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addItemCargoGlobal [_itemClass, 1];
};

if (_itemType == "magazine") then {

	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addMagazineCargoGlobal [_itemClass, floor (random 3)];
};

if (_itemType == "item") then {

	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addItemCargoGlobal [_itemClass, 1];
	
	_current = 1;
	_maxItems = _current + floor (random 2); // number giving possibily of more items into this holder. max = three, min = 1
	
	_objItems = _buildingClass call building_items;
	for "_j" from 0 to count (_objItems) - 1 do { 
		if (_current <= _maxItems) then {
			_item = _objItems select _i;
			
			if ((random 1) < (_item select 2) && ((_item select 1) == _itemType)) then { 
				_weaponHolder addItemCargoGlobal [(_item select 0), 1];
				diag_log format ["Spawned item: %1 at building: %2", (_item select 0), _buildingClass];
				_current = _current + 1;
			};
			
			if ((random 1) < (_item select 2) && ((_item select 1) == "magazine")) then { 
				_weaponHolder addMagazineCargoGlobal [(_item select 0), 1];
				diag_log format ["Spawned item: %1 at building: %2", (_item select 0), _buildingClass];
				_current = _current + 1;
			};
		};
	};
};

_weaponHolder