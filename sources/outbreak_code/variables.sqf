/*
	Player variables
	@author: TheAmazingAussie
*/

ZOMBIE_GROUP = createGroup east;

FULL_HEALTH = (configFile >> "CfgGame" >> "FULL_HEALTH") call BIS_fnc_getCfgData;
CHOP_TREES = (configFile >> "CfgGame" >> "CHOPPABLE_TREES") call BIS_fnc_getCfgData;
CHOP_TREES_WOOD_YIELD = (configFile >> "CfgGame" >> "TREES_WOOD_YIELD") call BIS_fnc_getCfgData;

MAX_INFECTED_CITY = (configFile >> "CfgGame" >> "MAX_INFECTED_CITY") call BIS_fnc_getCfgData;
LOOT_SPAWN_RADIUS = (configFile >> "CfgGame" >> "LOOT_SPAWN_RADIUS") call BIS_fnc_getCfgData;

MIN_LOOT_SPAWN_DISTANCE = (configFile >> "CfgGame" >> "MIN_LOOT_SPAWN_DISTANCE") call BIS_fnc_getCfgData;
MIN_ZOMBIE_SPAWN_DISTANCE = (configFile >> "CfgGame" >> "MIN_ZOMBIE_SPAWN_DISTANCE") call BIS_fnc_getCfgData;

MIN_ANIMAL_SPAWN_DISTANCE = 100;
MAX_ANIMAL_SPAWN_DISTANCE = 200;

MIN_WILD_ZOMBIE_SPAWN_DISTANCE = 150;
MAX_WILD_ZOMBIE_SPAWN_DISTANCE = 200;

STANDING_POSES = (configFile >> "CfgGame" >> "STANDING_POSES") call BIS_fnc_getCfgData;
STORAGE_UNITS = (configFile >> "CfgGame" >> "STORAGE_UNITS") call BIS_fnc_getCfgData;

DEAD_ZOMBIE_DESPAWN_TIME = (configFile >> "CfgGame" >> "DEAD_ZOMBIE_DESPAWN_TIME") call BIS_fnc_getCfgData;
DEAD_PLAYER_DESPAWN_TIME = (configFile >> "CfgGame" >> "DEAD_PLAYER_DESPAWN_TIME") call BIS_fnc_getCfgData;

LOSE_ZOMBIE_TIMER = 120; // If a timer spots a zombie, this is in how many seconds a zombie will continue to chase until they get bored
LOSE_ZOMBIE_DISTANCE = 45; // How far away the player has to run before the zombie grows bored
ZOMBIE_TARGET_COOLDOWN = 30; // After a zombie stops following someone, how many seconds until they decide to target again
ZOMBIE_TARGET_GUNSHOT_COOLDOWN = 40; 

LEG_BREAK_STAND_COOLDOWN = 10;
LEG_BREAK_STAND_TIMER = 0;

LOGGED_IN = false;
INTERRUPT_ACTION = false;
CAMERA_SHAKE_ACTIVE = false;

BUILDING = false;
BUILDING_OBJECT = objNull;
BUILDING_WORLDSPACE = [];
BUILDING_RECIPE = "";

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