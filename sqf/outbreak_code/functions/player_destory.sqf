/*
	Clears variables
	@author: TheAmazingAussie
*/

_unit = _this select 0;

// kill tasks
//terminate _spawnThread;
//terminate _ambienceThread;
//terminate _keyPressThread;
//terminate _itemInteractThread;

// reset actions

action_searchWoodPile = -1;
action_gutAnimal = -1;
action_cookMeat = -1;
player_performingAction = false;

player_noWeapon = nil;
player_primaryWeapon = nil;

// no more hive sync
_unit setVariable ["outbreaklogin", -1];