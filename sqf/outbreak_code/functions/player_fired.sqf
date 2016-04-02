/*
	Removes magazine from player if they don't have any more bullets
	@author: TheAmazingAussie
*/

_magazines = primaryWeaponMagazine player;

if (count _magazines > 0) then {
	_ammoAmount = player ammo primaryWeapon player;
	if (_ammoAmount == 0) then {
		player removePrimaryWeaponItem (_magazines select 0);
	};
};

_magazines = secondaryWeaponMagazine player;

if (count _magazines > 0) then {
	_ammoAmount = player ammo secondaryWeapon player;
	if (_ammoAmount == 0) then {
		player removeSecondaryWeaponItem (_magazines select 0);
	};
};

_magazines = handgunMagazine player;

if (count _magazines > 0) then {
	_ammoAmount = player ammo handgunWeapon player;
	if (_ammoAmount == 0) then {
		player removeHandgunItem (_magazines select 0);
	};
};