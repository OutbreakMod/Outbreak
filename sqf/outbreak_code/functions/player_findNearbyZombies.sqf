/*
	Returns nearby zombies with variable "isZombie" > true
	@author: TheAmazingAussie
*/

private ["_unit", "_range", "_infected", "_isZombie", "_nearby"];

_unit = _this select 0;
_range = _this select 1;
_infected = [];

{
	_isZombie = (_x getVariable ["isZombie", false]);
	
	if (_isZombie) then {
		_infected = _infected + [_x];
	};
	
} forEach ((getPosATL _unit) nearEntities ["Man", _range]);

_infected;