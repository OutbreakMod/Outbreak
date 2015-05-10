/*
	Spawn loot for building object
	@author: TheAmazingAussie
*/

_className = typeOf _this;
_config = configFile >> "CfgBuildingType" >> _className;
_positions = [] + getArray(_config >> "positions");
_lootMin = 0 + getNumber(_config >> "lootMin");
_lootMax = 0 + getNumber(_config >> "lootMax");
_lootArray = [];

if (_lootMax == 0) then {
	_lootMax = (count _positions);
};

_lootNumber = round (random(_lootMax - _lootMin) + 1) + _lootMin;
_usedPos = [];

if (count(_positions) > 0) then {
	
	_buildingLoot = _className call building_items;

	if (count (_buildingLoot) > 0) then {
		
		while {count(_this getVariable ["lootarray", []]) < _lootNumber} do {
		
			for "_i" from 0 to count (_buildingLoot) - 1 do {

				_loot = _buildingLoot select _i;
			
				_itemClass = _loot select 0;
				_itemType = _loot select 1;
				_chance = _loot select 2;
				
				if ((random 1) < _chance) then {
					
					_lootPos = (_positions call BIS_fnc_selectRandom);

					_tries = 0;
					while {_lootPos in _usedPos && _tries < count _positions} do {
						_lootPos = (_positions call BIS_fnc_selectRandom);
						_tries = _tries + 1;
					};
					
					_usedPos = _usedPos + [_lootPos];			
					_lootPos = _this modelToWorld _lootPos;
	
					diag_log format ["Spawned item: %1 at building: %2", _itemClass, _className];
					
					// flush loot every 10 minutes
					_this setVariable ["loottimer", serverTime + (600), true];
					
					// handler for spawning loot
					_item = [_lootPos, _itemClass, _itemType, _className] call building_lootCreate;
					
					_lootArray = _lootArray + [_item];
					_this setVariable ["lootarray", _lootArray, true];
				};
			};
		};
	};
};
