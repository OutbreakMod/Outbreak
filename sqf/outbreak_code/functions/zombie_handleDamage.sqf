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
	_unit setVariable ["deathmessage", format["His name was %1 and died from from a high caliber bullet", name _unit], true];
	_unit setDamage 1;
	_effect = true;
};

if (_ammo == "infected") then {
	_scale = _scale + 50;
	_unit setVariable ["deathmessage", format["His name was %1 and died from a zombie scratch", name _unit], true];
};

switch (_type) do {
	case 1: {
		_scale = _scale + 200;
		_unit setVariable ["deathmessage", format["His name was %1 and died from a weak caliber", name _unit], true];
		
	}; // 4% bleed
	case 2: {
		_scale = _scale + 250;
		_unit setVariable ["deathmessage", format["His name was %1 and died from a pistol", name _unit], true];
	}; // 5% bleed
	case 3: {
		_scale = _scale + 390;
		_unit setVariable ["deathmessage", format["His name was %1 and died from an assault rifle", name _unit], true];
	}; // 6% bleed
	case 4: {
		_scale = _scale + 400;
		_unit setVariable ["deathmessage", format["His name was %1 and died from a slightly higher assault rifle round", name _unit], true];
	}; // 8% bleed
	case 5: {
		_scale = _scale + 460;
		_unit setVariable ["deathmessage", format["His name was %1 and died from a sniper round", name _unit], true];
		
	}; // 9% bleed
	case 6: {
		_scale = _scale + 475;
		_unit setVariable ["deathmessage", format["His name was %1 and died from a type of sniper round", name _unit], true];
		
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

if (_hit == "legs") then {
	if (_ammo == "") then {
	
		_effect = true;
		_scale = _scale + 3500;
		_unit setVariable ["deathmessage", format["His name was %1 and died from a fall", name _unit], true];
	};
	
	_unit setVariable ["update_legs", _damage];
};

// notify player damage taken
if (_effect) then {
	_health = _health - (_damage * _scale);
};

// set new health
_unit setVariable ["health", _health, true];