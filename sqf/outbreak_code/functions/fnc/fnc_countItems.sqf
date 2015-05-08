/*
	Counts the amount of items a player has
	@author: TheAmazingAussie
*/

private ["_player", "_item", "_items", "_amount", "_i"];

_player = _this select 0;
_item = _this select 1;
_amount = 1;

if (count _this > 2) then {
	_amount = _this select 2;
};

_items = (uniformItems _player) + (vestItems _player) + (backpackItems _player) + (primaryWeaponItems _player) + (secondaryWeaponItems _player) + (handgunItems _player);

_i = 0;

{
	if (_x == _item) then {
		_i = _i + 1;
	};
	
} foreach _items;

_i
