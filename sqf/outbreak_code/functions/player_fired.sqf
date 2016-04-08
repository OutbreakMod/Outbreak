/*
	Removes magazine from player if they don't have any more bullets
	@author: TheAmazingAussie
*/


_unit = _this select 0;
_muzzle = _this select 2;
_ammo = _this select 4;
_projectile = _this select 6;

_audible = getNumber (configFile >> "CfgAmmo" >> _ammo >> "audibleFire");
_caliber = getNumber (configFile >> "CfgAmmo" >> _ammo >> "caliber");
_distance = round(_audible * 10 * _caliber);

// If weapon is supressed, distance is halved
if (((player weaponAccessories _muzzle) select 0) != "") then {
	_distance = 0;
};

hint format ["GUN FIRE DISTANCE: %1", _distance];

if (_distance > 0) then {
	
	
};

_magazines = primaryWeaponMagazine _unit;

if (count _magazines > 0) then {
	_ammoAmount = _unit ammo primaryWeapon _unit;
	if (_ammoAmount == 0) then {
		_unit removePrimaryWeaponItem (_magazines select 0);
	};
};

_magazines = secondaryWeaponMagazine _unit;

if (count _magazines > 0) then {
	_ammoAmount = _unit ammo secondaryWeapon _unit;
	if (_ammoAmount == 0) then {
		_unit removeSecondaryWeaponItem (_magazines select 0);
	};
};

_magazines = handgunMagazine _unit;

if (count _magazines > 0) then {
	_ammoAmount = _unit ammo handgunWeapon _unit;
	if (_ammoAmount == 0) then {
		_unit removeHandgunItem (_magazines select 0);
	};
};