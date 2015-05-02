/*
	Loads a players inventory from an array to the character
	@author: TheAmazingAussie
*/

_unit = _this select 0;
_array = _this select 1;

if(count _array != 0) then {

	_headgear = _array select 0;
	_goggles = _array select 1;
	_uniform = _array select 2;
	_uniformitems = _array select 3;
	_vest = _array select 4;
	_vestitems = _array select 5;
	_backpack = _array select 6;
	_backpackitems = _array select 7;
	_primaryweapon = _array select 8;
	_primaryweaponitems = _array select 9;
	_primaryweaponmagazine = _array select 10;
	_secondaryweapon = _array select 11;
	_secondaryweaponitems = _array select 12;
	_secondaryweaponmagazine = _array select 13;
	_handgunweapon = _array select 14;
	_handgunweaponitems = _array select 15;
	_handgunweaponmagazine = _array select 16;
	_assigneditems = _array select 17;

	_unit addHeadgear _headgear;
	_unit forceAddUniform _uniform;
	_unit addGoggles _goggles;
	_unit addVest _vest;


	{
		if(_x != "") then {
			_unit addItemToUniform _x;
		};
	}foreach _uniformitems;

	{
		if(_x != "") then {
			_unit addItemToVest _x;
		};
	}foreach _vestitems;

	if(format["%1", _backpack] != "") then {
		_unit addbackpack _backpack;
		{
			if(_x != "") then {
				_unit addItemToBackpack _x;
			};
		} foreach _backpackitems;
	};

	{
		if(_x != "") then {
			_unit addMagazine _x;
		};
	} foreach _primaryweaponmagazine;

	//must be after assign items to secure loading mags
	_unit addweapon _primaryweapon;
	removeAllPrimaryWeaponItems _unit;

	{
		if(_x != "") then {
			_unit addPrimaryWeaponItem _x;
		};
	} foreach _primaryweaponitems;

	{
		if(_x != "") then {
			_unit addMagazine _x;
		};
	} foreach _secondaryweaponmagazine;

	_unit addweapon _secondaryweapon;

	{
		if(_x != "") then {
			_unit addSecondaryWeaponItem _x;
		};
	} foreach _secondaryweaponitems;


	{
		if(_x != "") then {
			_unit addMagazine _x;
		};
	} foreach _handgunweaponmagazine;

	_unit addweapon _handgunweapon;

	{
		if(_x != "") then {
			_unit addHandgunItem _x;
		};
	} foreach _handgunweaponitems;

	{
		if(_x != "") then {
			_unit additem _x;
			_unit assignItem _x;
		};
	} foreach _assigneditems;

	if (needReload _unit == 1) then {reload _unit};

	true;
} else {
	false;
};