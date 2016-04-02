/*
	Returns nearby entities with bool variable check
	@author: TheAmazingAussie
*/

private ["_position", "_range", "_variable", "_units", "_unit", "_isUnit"];

_position = _this select 0;
_range = _this select 1;
_variable = _this select 2;

_units = [];
_nearby = _position nearEntities ["Man", _range];

{
	_unit = _x;
	_isUnit = (_unit getVariable [_variable, false]);
	
	if (_isUnit) then {
		if (alive _unit) then {
			_units = _units + [_unit];
		};
	};
	
} forEach _nearby;

_units;