/*
	Player variables
	@author: TheAmazingAussie
*/

MOD_FULL_BLOOD = getNumber(configFile >> "CfgGame" >> "MOD_FULL_BLOOD");
MOD_FULL_HEALTH = getNumber(configFile >> "CfgGame" >> "MOD_FULL_HEALTH");

CHOP_TREES = getArray(configFile >> "CfgGame" >> "trees");
CHOP_TREES_WOOD_YIELD = getArray(configFile >> "CfgGame" >> "tree_wood_yield");

ZOMBIE_SPAWN_RANGE_WILD_MAX = 120;
ZOMBIE_SPAWN_RANGE_WILD_MIN = 35;
ZOMBIE_SPAWN_WILD = 3;

ZOMBIE_SPAWN_RANGE_CITY_MAX = 80;
ZOMBIE_SPAWN_RANGE_CITY_MIN = 20;
ZOMBIE_SPAWN_CITY = 8;

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