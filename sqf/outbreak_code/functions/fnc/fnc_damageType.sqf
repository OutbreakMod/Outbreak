/*
	Damage type for damage handling
	@author: TheAmazingAussie
*/

private["_damage","_ammo","_type"];

_damage = _this select 0;
_ammo = _this select 1;
_type = 0;

if ((_ammo isKindof "B_9x21_Ball")) then {
	_type = 1;
};

if ((_ammo isKindof "B_45ACP_Ball")) then {
	_type = 2;
};

if ((_ammo isKindof "BB_556x45_Ball")) then {
	_type = 3;
};

if ((_ammo isKindof "B_65x39_Caseless")) then {
	_type = 4;
};

if (_ammo isKindof "B_762x51_Ball") then {
	_type = 5;
};

if (_ammo isKindof "B_762x54_Ball") then {
	_type = 6;
};

if ((_ammo isKindof "B_127x108_Ball") or (_ammo isKindof "B_408_Ball")) then {
	_type = 7;
};



_type;