/*
	Clears a players inventory
	@author: TheAmazingAussie
*/

// create variables
[] execVM "addons\outbreak_code\variables.sqf";

// general player functions
player_respawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_respawn.sqf";
player_killed = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_killed.sqf";
player_findSpawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_findSpawn.sqf";
player_spawnCheck = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_spawnCheck.sqf";
player_hiveSync = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_hiveSync.sqf";
player_pressKey = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_pressKey.sqf";

// building
building_items = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_items.sqf";
building_spawnLoot = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_spawnLoot.sqf";
building_lootCreate = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_lootCreate.sqf";
spawn_townWreckGenerator = compile preProcessFileLineNumbers "addons\outbreak_code\functions\spawn_townWreckGenerator.sqf";

// inventory
player_clearInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_clearInventory.sqf";
player_loadInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_loadInventory.sqf";
player_serializeInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_serializeInventory.sqf";
player_useItem = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_useItem.sqf";

// KK functions
fnc_inString = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc_inString.sqf";

// actions

// new player tick loop
[false] execVM "addons\outbreak_code\functions\player_login.sqf"; // true = start a loop for various things