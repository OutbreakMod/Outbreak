/*
	Damage type for damage handling
	@author: TheAmazingAussie
*/

private["_damage","_ammo","_type"];

_damage = _this select 0;
_ammo = _this select 1;
_type = 0;

if (["9x18", _ammo] call fnc_inString) then {
	_type = 1;
};


if (["9x21", _ammo] call fnc_inString) then {
	_type = 1;
};

if (["9x19", _ammo] call fnc_inString) then {
	_type = 1;
};

if (["45ACP", _ammo] call fnc_inString) then {
	_type = 2;
};

if (["556x45", _ammo] call fnc_inString) then {
	_type = 3;
};

if (["545x39", _ammo] call fnc_inString) then {
	_type = 3;
};

if (["65x39", _ammo] call fnc_inString) then {
	_type = 4;
};

if (["762x39", _ammo] call fnc_inString) then {
	_type = 4;
};

if (["12Gauge", _ammo] call fnc_inString) then {
	_type = 4;
};

if (["762x51", _ammo] call fnc_inString) then {
	_type = 5;
};

if (["762x54", _ammo] call fnc_inString) then {
	_type = 5;
};

if (["9x39", _ammo] call fnc_inString) then {
	_type = 5;
};

if (["303", _ammo] call fnc_inString) then {
	_type = 6;
};

if (["762x67", _ammo] call fnc_inString) then {
	_type = 6;
};

if (["127x99", _ammo] call fnc_inString) then {
	_type = 7;
};

if (["127x108", _ammo] call fnc_inString) then {
	_type = 7;
};

if (_ammo == "B_408_Ball") then {
	_type = 7;
};

_type;