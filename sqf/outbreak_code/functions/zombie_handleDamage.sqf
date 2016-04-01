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

_type = [_damage, _ammo] call fnc_damageType;

_scale = 100;
_health = _unit getVariable ["health", 0];

_effect = false;

if (_type == 7) then {
	_unit setDamage 1;
	_effect = true;
};

if (_ammo == "infected") then {
	_scale = _scale + 50;
};

switch (_type) do {
	case 1: {
		_scale = _scale + 200;
	};
	case 2: {
		_scale = _scale + 300;
	};
	case 3: {
		_scale = _scale + 390;
	};
	case 4: {
		_scale = _scale + 400;
	};
	case 5: {
		_scale = _scale + 460;
	};
	case 6: {
		_scale = _scale + 475;
	};
};

if (_type > 0) then {
	_effect = true;
};


if (_type > 2) then {
	_scale = _scale * 2;
} else {
	_scale = _scale * 4;
};

if (_hit == "legs") then {
	if (_ammo == "") then {
		_effect = true;
		_scale = _scale + 3500;
	};
	
	_unit setVariable ["update_legs", _damage];
};

if (_effect) then {
	_health = _health - (_damage * _scale);
};

_unit setVariable ["health", _health];

0;