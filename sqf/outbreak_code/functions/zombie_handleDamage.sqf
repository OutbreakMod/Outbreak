/*
	_unit damage handler
	@author: TheAmazingAussie
*/

private ["_unit", "_hit", "_damage", "_source", "_ammo", "_type", "_unit", "_scale", "_blood", "_health"];

_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_ammo = _this select 4;

if (_hit == "legs") then {
	if (_ammo == "") then {
		_effect = true;
		_scale = _scale + 3500;
	};
	
	_unit setVariable ["update_legs", _damage];
};

_damage;