/*
	Clears a players inventory
	@author: TheAmazingAussie
*/

// create variables
[] execVM "addons\outbreak_code\variables.sqf";

// general player functions
player_respawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_respawn.sqf";
player_murdered = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_murdered.sqf";
player_killed = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_killed.sqf";
player_findSpawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_findSpawn.sqf";
player_spawnCheck = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_spawnCheck.sqf";
player_hiveSync = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_hiveSync.sqf";

// building
building_items = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_items.sqf";
building_spawnLoot = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_spawnLoot.sqf";
spawn_townWreckGenerator = compile preProcessFileLineNumbers "addons\outbreak_code\functions\spawn_townWreckGenerator.sqf";

// inventory
player_clearInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_clearInventory.sqf";
player_loadInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_loadInventory.sqf";
player_serializeInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_serializeInventory.sqf";

// new player tick loop
[] execVM "addons\outbreak_code\functions\player_tick.sqf"; // true = start a loop for various things