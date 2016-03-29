/*
	Player variables
	@author: TheAmazingAussie
*/

MOD_FULL_BLOOD = getNumber(configFile >> "CfgGame" >> "MOD_FULL_BLOOD");
MOD_FULL_HEALTH = getNumber(configFile >> "CfgGame" >> "MOD_FULL_HEALTH");

CHOP_TREES = getArray(configFile >> "CfgGame" >> "trees");
CHOP_TREES_WOOD_YIELD = getArray(configFile >> "CfgGame" >> "tree_wood_yield");

MAX_INFECTED_CITY = 10;
LOOT_SPAWN_RADIUS = 150;

MIN_LOOT_SPAWN_DISTANCE = 30;
MIN_ZOMBIE_SPAWN_DISTANCE = 40;

// reset actions
action_gutAnimal = -1;
action_cookMeat = -1;
action_studyDeadBody = -1;
action_applyMorphine = -1;
action_chopTree = -1;
action_build = -1;

player_performingAction = false;
player_noWeapon = nil;
player_primaryWeapon = nil;