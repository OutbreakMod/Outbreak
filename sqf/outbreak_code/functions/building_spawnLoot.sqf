/*
	Spawn loot for building object
	@author: TheAmazingAussie
*/

_className = typeOf _this;
_config = configFile >> "CfgBuildingType" >> _className;
_positions = [] + getArray(_config >> "positions");
_lootMin = getNumber(_config >> "lootMin");
_lootMax = getNumber(_config >> "lootMax");
_lootNumber = round (random(_lootMax - _lootMin) + 1) + _lootMin;
_usedPos = [];

if (count(_positions) > 0) then {
	
	_spawnItems = _className call building_items;
	_items = 0;
	
	if (count (_spawnItems) > 0) then {
		while {_items < _lootNumber} do {
			for "_i" from 0 to count (_spawnItems) - 1 do {

				_loot = _spawnItems select _i;
			
				_itemClass 	= _loot select 0;
				_itemType 	= _loot select 1;
				_chance 	= _loot select 2;
				
				if ((random 1) < _chance) then {
					
					_lootPos = (_positions call BIS_fnc_selectRandom);

					_tries = 0;
					while {_lootPos in _usedPos && _tries < count _positions} do {
						_lootPos = (_positions call BIS_fnc_selectRandom);
						_tries = _tries + 1;
					};
					
					_usedPos = _usedPos + [_lootPos];			
					_lootPos = _x modelToWorld _lootPos;
	
					diag_log format ["Spawned item: %1 at building: %2", _itemClass, _className];
					
					_items = _items + 1;
					_x setVariable ["lootcount", _items, true];
				
					if (_itemType == "gun") then {
		
						_weaponHolder = createVehicle ["WeaponHolderSimulated", _lootPos, [], 0, "can_collide"];
						_weaponHolder setVariable ["isLoot", true];
						_weaponHolder addWeaponCargoGlobal [_itemClass, 1];
						_magazine = getArray (configFile >> "CfgWeapons" >> _itemClass >> "magazines") select 0;
						_weaponHolder addMagazineCargo [_magazine, floor (random 4)];
					};
					
					if (_itemType == "item") then {
		
						_weaponHolder = createVehicle ["WeaponHolderSimulated", _lootPos, [], 0, "can_collide"];
						_weaponHolder setVariable ["isLoot", true];
						_weaponHolder addItemCargoGlobal [_itemClass, 1];
						
						_current = 1;
						_maxItems = _current + floor (random 3); // number giving possibily of more items into this holder. max = three, min = 1
						
						_objItems = _className call building_items;
						for "_j" from 0 to count (_objItems) - 1 do { 
							if (_current <= _maxItems) then {
								_item = _objItems select _i;
								if ((random 1) < (_item select 2) && _type == (_item select 1)) then { 
									_weaponHolder addItemCargoGlobal [(_item select 0), 1];
									_current = _current + 1;
								};
							};
						};
					};
				};
			};
		};
	};
};
