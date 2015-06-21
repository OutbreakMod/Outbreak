/*
	Spawn loot for building object
	@author: TheAmazingAussie
*/

_className = typeOf _this;
_config = configFile >> "CfgBuildingType" >> _className;

_positions = [] + getArray(_config >> "positions");
_posAmount = count _positions;

_lootRespawn = getNumber(_config >> "lootRespawnSeconds");
_lootMin = 0 + getNumber(_config >> "lootMin");
_lootMax = 0 + getNumber(_config >> "lootMax");

if (_lootMax == 0) then {
	_lootMax = _posAmount;
};

_lootNumber = floor (random (_lootMax + 1) - _lootMin) + _lootMin;

if (_lootNumber > _posAmount) then {
	_lootNumber = floor random _posAmount;
};

_usedPos = [];
_lootArray = [];

if (_posAmount > 0) then {
	
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
					while {_lootPos in _usedPos && _tries < 30} do {
						_lootPos = (_positions call BIS_fnc_selectRandom);
						_tries = _tries + 1;
					};
					
					_usedPos = _usedPos + [_lootPos];						
					_lootPos = _this modelToWorld _lootPos;
	
					diag_log format ["Spawned item: %1 at building: %2", _itemClass, _className];
					
					// flush loot every whatever respawn time is chosen
					_this setVariable ["loottimer", serverTime + (_lootRespawn), true];
					
					// handler for spawning loot
					_item = [_lootPos, _itemClass, _itemType, _className] call loot_holder;
					
					_lootArray = _lootArray + [_item];
					_this setVariable ["lootarray", _lootArray, true];
				};
			};
		};
	};
};
