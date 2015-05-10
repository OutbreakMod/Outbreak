/*
	Clears a players inventory
	@author: TheAmazingAussie
*/

private ["_unit", "_corpse"];

_unit = _this select 0;
_corpse = _this select 1;

// kill tasks
//terminate _spawnThread;
//terminate _ambienceThread;
//terminate _keyPressThread;
//terminate _itemInteractThread;

// reset actions
player_performingAction = false;
action_searchWoodPile = -1;
player_noWeapon = nil;
player_primaryWeapon = nil;

// no more hive sync
_unit setVariable ["outbreaklogin", -1];

// respawn
[true] execVM "addons\outbreak_code\functions\player_login.sqf";