/*
	Handles spawning of items
	@author: TheAmazingAussie
*/

_lootPos = _this select 0;
_itemClass = _this select 1;
_itemType = _this select 2;
_buildingClass = _this select 3;

_item = objNull;

if (_itemType == "gun") then {

	_weaponHolder = createVehicle ["GroundWeaponHolder", _lootPos, [], 0, "CAN_COLLIDE"];
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
	
	_weaponHolder addMagazineCargoGlobal [_magazine, floor (random 4)];
	_item = _weaponHolder;
};

if (_itemType == "supplybox") then {

	_supplyBox = createVehicle [_itemClass, _lootPos, [], 0, "CAN_COLLIDE"];
	_supplyBox setVariable ["isLoot", true];
	_supplyBox setDir (random 360);
	
	_item = _supplyBox;
};

if (_itemType == "backpack") then {

	_weaponHolder = createVehicle ["GroundWeaponHolder", _lootPos, [], 0, "CAN_COLLIDE"];
	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addBackpackCargoGlobal [_itemClass, 1];
	
	_item = _weaponHolder;
};

if (_itemType == "single") then {

	_weaponHolder = createVehicle ["GroundWeaponHolder", _lootPos, [], 0, "CAN_COLLIDE"];
	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addItemCargoGlobal [_itemClass, 1];
	//_weaponHolder setVectorUp [0.052336,-0.998629,0];
	//_weaponHolder setVectorDir [0,0,-1];
	
	_item = _weaponHolder;
};

if (_itemType == "item") then {

	_weaponHolder = createVehicle ["GroundWeaponHolder", _lootPos, [], 0, "CAN_COLLIDE"];
	_weaponHolder setVariable ["isLoot", true];
	_weaponHolder addItemCargoGlobal [_itemClass, 1];
	
	_current = 1;
	_maxItems = _current + floor (random 2); // number giving possibily of more items into this holder. max = three, min = 1
	
	_objItems = _buildingClass call building_items;
	for "_j" from 0 to count (_objItems) - 1 do { 
		if (_current <= _maxItems) then {
			_item = _objItems select _i;
			if ((random 1) < (_item select 2) && _itemType == (_item select 1)) then { 
				_weaponHolder addItemCargoGlobal [(_item select 0), 1];
				_current = _current + 1;
			};
		};
	};
	
	_item = _weaponHolder;
};

_item