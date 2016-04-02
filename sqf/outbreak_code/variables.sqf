/*
	Player variables
	@author: TheAmazingAussie
*/

FULL_HEALTH = getNumber(configFile >> "CfgGame" >> "FULL_HEALTH");
CHOP_TREES = getArray(configFile >> "CfgGame" >> "CHOPPABLE_TREES");
CHOP_TREES_WOOD_YIELD = getArray(configFile >> "CfgGame" >> "TREES_WOOD_YIELD");

MAX_INFECTED_CITY = getNumber(configFile >> "CfgGame" >> "MAX_INFECTED_CITY");
LOOT_SPAWN_RADIUS = getNumber(configFile >> "CfgGame" >> "LOOT_SPAWN_RADIUS");

MIN_LOOT_SPAWN_DISTANCE = getNumber(configFile >> "CfgGame" >> "MIN_LOOT_SPAWN_DISTANCE");
MIN_ZOMBIE_SPAWN_DISTANCE = getNumber(configFile >> "CfgGame" >> "MIN_ZOMBIE_SPAWN_DISTANCE");

MIN_WILD_ZOMBIE_SPAWN_DISTANCE = 100;
MAX_WILD_ZOMBIE_SPAWN_DISTANCE = 150;

STANDING_POSES = getArray(configFile >> "CfgGame" >> "STANDING_POSES");
STORAGE_UNITS = getArray(configFile >> "CfgGame" >> "STORAGE_UNITS");
LOGGED_IN = false;

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