/*
	Player damage handler
	@author: TheAmazingAussie
*/

private ["_unit", "_hit", "_damage", "_source", "_ammo", "_type", "_unit", "_scale", "_blood", "_health"];

_unit = _this select 0;
_hit = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_ammo = _this select 4;

_type = [_damage, _ammo] call fnc_damageType;
_unitIsPlayer = _unit == player;

_scale = 100;
_health = _unit getVariable ["health", 0];


if (_type == 7) then {
	_unit setDamage 1;
};

if (_damage > 0.4) then {
	
	if (_ammo != "zombie") then {
		_scale = _scale + 50;
	};
	
	if (_isHeadHit) then {
		_scale = _scale + 500;
	};
	
	if ((isPlayer _source) && !(player == _source)) then {
		_scale = _scale + 800;
		if (_isHeadHit) then {
			_scale = _scale + 500;
		};
	};
	
	switch (_type) do {
		case 1: {_scale = _scale + 200};
		case 2: {_scale = _scale + 250};
		case 3: {_scale = _scale + 300};
		case 4: {_scale = _scale + 350};
		case 5: {_scale = _scale + 380};
		case 6: {_scale = _scale + 390};
	};
	
	_health = _health - (_damage * _scale);
};

diag_log format["DEBUG: name: %1, health: %2, hit: %3", name _unit, _health, _hit];
_unit setVariable ["health", _health];

0;