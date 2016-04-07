/*
	Player variables
	@author: TheAmazingAussie
*/

FULL_HEALTH = (configFile >> "CfgGame" >> "FULL_HEALTH") call BIS_fnc_getCfgData;
CHOP_TREES = (configFile >> "CfgGame" >> "CHOPPABLE_TREES") call BIS_fnc_getCfgData;
CHOP_TREES_WOOD_YIELD = (configFile >> "CfgGame" >> "TREES_WOOD_YIELD") call BIS_fnc_getCfgData;

MAX_INFECTED_CITY = (configFile >> "CfgGame" >> "MAX_INFECTED_CITY") call BIS_fnc_getCfgData;
LOOT_SPAWN_RADIUS = (configFile >> "CfgGame" >> "LOOT_SPAWN_RADIUS") call BIS_fnc_getCfgData;

MIN_LOOT_SPAWN_DISTANCE = (configFile >> "CfgGame" >> "MIN_LOOT_SPAWN_DISTANCE") call BIS_fnc_getCfgData;
MIN_ZOMBIE_SPAWN_DISTANCE = (configFile >> "CfgGame" >> "MIN_ZOMBIE_SPAWN_DISTANCE") call BIS_fnc_getCfgData;

MIN_WILD_ZOMBIE_SPAWN_DISTANCE = 150;
MAX_WILD_ZOMBIE_SPAWN_DISTANCE = 200;

STANDING_POSES = (configFile >> "CfgGame" >> "STANDING_POSES") call BIS_fnc_getCfgData;
STORAGE_UNITS = (configFile >> "CfgGame" >> "STORAGE_UNITS") call BIS_fnc_getCfgData;

DEAD_ZOMBIE_DESPAWN_TIME = (configFile >> "CfgGame" >> "DEAD_ZOMBIE_DESPAWN_TIME") call BIS_fnc_getCfgData;
DEAD_PLAYER_DESPAWN_TIME = (configFile >> "CfgGame" >> "DEAD_PLAYER_DESPAWN_TIME") call BIS_fnc_getCfgData;

LOGGED_IN = false;
INTERRUPT_ACTION = false;

// reset actions
action_gutAnimal = -1;
action_cookMeat = -1;
action_studyDeadBody = -1;
action_applyMorphine = -1;
action_chopTree = -1;
action_build = -1;
action_searchLogs = -1;

player_performingAction = false;
player_noWeapon = nil;
player_primaryWeapon = nil;