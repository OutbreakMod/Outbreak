/*
	Clears a players inventory
	@author: TheAmazingAussie
*/

private ["_unit", "_corpse"];

_unit = _this select 0;
_corpse = _this select 1;

[true] execVM "addons\outbreak_code\functions\player_login.sqf";