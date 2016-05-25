/*
	Create unique object ID
	@author: TheAmazingAussie
*/

_position = _this;

_x = _position select 0;
_y = _position select 1;
_z = _position select 2;

if (_x < 1) then {
	_x = _x * -10;
};

if (_y < 1) then {
	_y = _y * -10;
};

if (_z < 1) then {
	_z = _z * -10;
};

_objectID = format["%1%2", (_x * 10), (_y * 10) + (_z * 10)];
_objectID;