/*
	Loads a players inventory from an array to the character
	@author: TheAmazingAussie
*/

private ["_unit", "_array", "_headgear", "_goggles", "_uniform", "_uniformitems", "_vest", "_vestitems", "_backpack", "_backpackitems", "_primaryweapon", "_primaryweaponitems", "_primaryweaponmagazine", "_secondaryweapon", "_secondaryweaponitems", "_secondaryweaponmagazine", "_handgunweapon", "_handgunweaponitems", "_handgunweaponmagazine", "_assigneditems", "_setBinoc"];

_unit = _this select 0;
_array = _this select 1;

if((count _array) > 0) then {

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

	_setBinoc = false;
	
	{
		if(_x != "") then {
		
			if ((_x == "Rangefinder") or (_x == "Binocular") and (!_setBinoc)) then {
				_unit addWeapon _x;
				_setBinoc = true;	
			} else {
				_unit additem _x;
				_unit assignItem _x;
			};		
		};
	} foreach _assigneditems;

	if (needReload _unit == 1) then {reload _unit};

	true;
} else {
	false;
};

//[91,34,34,44,34,71,95,84,97,99,116,105,99,97,108,95,67,108,101,97,114,34,44,34,85,95,67,95,80,111,108,111,115,104,105,114,116,95,116,114,105,99,111,108,111,117,114,34,44,91,34,115,99,95,119,111,111,100,34,93,44,34,86,95,66,97,110,100,111,108,108,105,101,114,66,95,98,108,107,34,44,91,34,115,99,95,99,111,102,102,101,101,34,44,34,115,99,95,99,104,105,112,115,34,44,34,115,99,95,107,110,105,102,101,34,44,34,115,99,95,109,97,116,99,104,98,111,111,107,34,44,34,115,99,95,106,117,105,99,101,98,111,120,34,44,34,115,99,95,106,117,105,99,101,98,111,120,34,44,34,49,49,82,110,100,95,52,53,65,67,80,95,77,97,103,34,93,44,34,66,95,75,105,116,98,97,103,95,109,99,97,109,111,34,44,91,93,44,34,34,44,91,34,34,44,34,34,44,34,34,44,34,34,93,44,91,93,44,34,34,44,91,34,34,44,34,34,44,34,34,44,34,34,93,44,91,93,44,34,104,103,117,110,95,80,105,115,116,111,108,95,104,101,97,118,121,95,48,49,95,70,34,44,91,34,34,44,34,34,44,34,34,44,34,34,93,44,91,34,49,49,82,110,100,95,52,53,65,67,80,95,77,97,103,34,93,44,91,34,73,116,101,109,77,97,112,34,44,34,66,105,110,111,99,117,108,97,114,34,93,93]