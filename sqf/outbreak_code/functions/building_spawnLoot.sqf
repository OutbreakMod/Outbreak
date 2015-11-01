/*
	Spawn loot for building object
	@author: TheAmazingAussie
*/

private ["_className", "_config", "_positions", "_posAmount", "_lootRespawn", "_lootMin", "_lootMax", "_buildingLoot"];

_className = typeOf _this;
_config = configFile >> "CfgBuildingType" >> _className;

_positions = [];
_posAmount = 0;

_lootRespawn = 300;
_lootMin = 0;
_lootMax = 4;

_positionConfg = true;

if (isClass(_config)) then {

	_positions = [] + getArray(_config >> "positions");
	_posAmount = count _positions;

	_lootRespawn = getNumber(_config >> "lootRespawnSeconds");
	_lootMin = 0 + getNumber(_config >> "lootMin");
	_lootMax = 0 + getNumber(_config >> "lootMax");

	if (_lootMax == 0) then {
		_lootMax = _posAmount;
	};
};

// generate positons from building model
if (count _positions == 0) then {

	_cnt = 0;

	while {format ["%1", _this buildingPos _cnt] != "[0,0,0]" } do {

		_pos = _this buildingPos _cnt;		//select building position _cnt
		_positions = _positions + [_pos];		//add the position to the list
		_cnt = _cnt + 1;
		sleep 0.01;
	};
	
	if (count _positions > 0) then { 
		hint format["%1 -- %2", _positions, _className];
	};
	
	_posAmount = count _positions;
	_positionConfg = false;

};

if (_lootMax == 0) then {
	_lootMax = _posAmount;
};

_lootNumber = (floor (random _lootMax) + _lootMin);

if (_lootNumber > _posAmount) then {
	_lootNumber = _lootNumber - 1;
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
					
					// model pos from world if there's positions from config file
					if (_positionConfg) then {
						_lootPos = _this modelToWorld _lootPos;
					};
	
					diag_log format ["Spawned item: %1 at building: %2 with items: %3", _itemClass, _className, _buildingLoot];
					
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
