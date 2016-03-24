/*
	Converts magazines to another type
	@author: TheAmazingAussie
*/

_from = _this select 0;
_to = _this select 1;
_ammoCount = 0;

_magazinesAmmo = magazinesAmmo player;

{
	
	_magazine = _x;
	
	_type = _magazine select 0;
	_ammo = _magazine select 1;
	
	if (_type == _from) then {
		player addMagazine [_to, _ammo];
	};


} forEach _magazinesAmmo;

player removeMagazines _from;