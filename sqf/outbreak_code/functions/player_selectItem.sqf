/*
	Handle inventory items
	@author: TheAmazingAussie
*/

private ["_idc", "_selectedIndex", "_data", "_class", "_config"];

_idc = ctrlIDC (_this select 0);
_selectedIndex = _this select 1;

_data = format ["%1", lbData [_idc, _selectedIndex]];

if (player_performingAction) exitWith {};

_class = (configFile >> "CfgMagazines" >> _data);

if (!isClass(_class)) exitWith {};
if (!isClass(_class >> "ItemActions")) exitWith {};

_config = (_class >> "ItemActions");

call compile (getText(_config >> "doubleClick"));


