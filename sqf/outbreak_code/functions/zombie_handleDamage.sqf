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

diag_log format ["ammo: %1, type:%3, damage: %2", _ammo, _damage, _type];

_scale = 100;
_health = _unit getVariable ["health", 6000];

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
	}; // 4% bleed
	case 2: {
		_scale = _scale + 250;
	}; // 5% bleed
	case 3: {
		_scale = _scale + 390;
	}; // 6% bleed
	case 4: {
		_scale = _scale + 400;
	}; // 8% bleed
	case 5: {
		_scale = _scale + 460;
		
	}; // 9% bleed
	case 6: {
		_scale = _scale + 475;
		
	}; // 10% bleed
};

if (_type > 0) then {
	_effect = true;
};

if (_type > 2) then {
	_scale = _scale * 2;
} else {
	_scale = _scale * 4;
};

if (["leg", _hit] call fnc_inString) then {

	if (_damage > 0.3) then {
		_effect = true;
		if (_damage > 0.76) then {
			_unit setVariable ["leg_break", true, true];
			_unit setVariable ["fracture_update", true, true];
		};
	};
};

// notify player damage taken
if (_effect) then {
	_health = _health - (_damage * _scale);
	1 call fnc_damageEffect;
};

// set new health
_unit setVariable ["health", _health, true];

0;