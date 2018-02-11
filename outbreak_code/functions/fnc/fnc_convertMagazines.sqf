/*
	Converts magazines to another type
	@author: TheAmazingAussie
*/

_from = _this select 0;
_to = _this select 1;

_ammoCount = 0;
_ammoCapacity = (configFile >> "CfgMagazines" >> _to >> "count") call BIS_fnc_getCfgData;

_magazinesAmmo = magazinesAmmo player;

{
	_magazine = _x;
	
	_type = _magazine select 0;
	_ammo = _magazine select 1;
	
	if (_type == _from) then {
		_ammoCount = _ammoCount + _ammo;
	};
} forEach _magazinesAmmo;

_magazines = floor (_ammoCount / _ammoCapacity);
_extraBullets = _ammoCount % _ammoCapacity;

player removeMagazines _from;
//hint format ["ammo capacity: %1, ammo count: %2, extra bullets: %3, magazines: %4", _ammoCapacity, _ammoCount, _extraBullets, _magazines];
player addMagazines [_to, _magazines];

if (_extraBullets > 0) then {
	player addMagazine [_to, _extraBullets];
};