/*
	Player variables
	@author: TheAmazingAussie
*/

/*
    PLAYER OPTIONS
*/
SHOW_DEBUG_MENU = false;
SHOW_PLAYER_ICONS = true;
SHOW_PLAYER_ICONS_CHECK = true;

ZOMBIE_GROUP = createGroup east;

FULL_HEALTH = 6000;
FULL_STOMACH = 5000;
FULL_THIRST = 5000;

CHOP_TREES = (configFile >> "CfgGame" >> "CHOPPABLE_TREES") call BIS_fnc_getCfgData;
CHOP_TREES_WOOD_YIELD = (configFile >> "CfgGame" >> "TREES_WOOD_YIELD") call BIS_fnc_getCfgData;

MAX_INFECTED_CITY = 8; // increases with more players 
LOOT_SPAWN_RADIUS = 100;

MIN_ZOMBIE_SPAWN_DISTANCE = 50;
MIN_ANIMAL_SPAWN_DISTANCE = 50;
MIN_WILD_ZOMBIE_SPAWN_DISTANCE = 70;

MAX_ANIMAL_SPAWN_DISTANCE = 200;
MAX_WILD_ZOMBIE_SPAWN_DISTANCE = 200;

STORAGE_UNITS = (configFile >> "CfgGame" >> "STORAGE_UNITS") call BIS_fnc_getCfgData;

DEAD_ZOMBIE_DESPAWN_TIME = (configFile >> "CfgGame" >> "DEAD_ZOMBIE_DESPAWN_TIME") call BIS_fnc_getCfgData;
DEAD_PLAYER_DESPAWN_TIME = (configFile >> "CfgGame" >> "DEAD_PLAYER_DESPAWN_TIME") call BIS_fnc_getCfgData;

LOSE_ZOMBIE_TIMER = 60; // If a timer spots a zombie, this is in how many seconds a zombie will continue to chase until they get bored
LOSE_ZOMBIE_DISTANCE = 60; // How far away the player has to run before the zombie grows bored

ZOMBIE_TARGET_COOLDOWN = 15; // After a zombie stops following someone, how many seconds until they decide to target again
ZOMBIE_TARGET_GUNSHOT_COOLDOWN = 40; // When zombie pursuits gunshot, long until they get bored and wander off
ZOMBIE_SEARCH_DISTANCE = 40; // How far zombies have sight, in metres
ZOMBIE_REACH_DISTANCE = 3; // Arm length hit distance
ZOMBIE_SPAWN_RADIUS = 300; // How far around a city in metres can zombies spawn at

ZOMBIE_DESPAWN_DISTANCE = 400; // How far away must a player be away from a zombie for it to despawn
ZOMBIE_RESPAWN_COOLDOWN = 600; // (in seconds, how long you can clear a city before zombies respawn again)

LEG_BREAK_DAMAGE_CHECK = 0.50;

LOGGED_IN = false;
IN_GAME = false;
INTERRUPT_ACTION = false;
CAMERA_SHAKE_ACTIVE = false;
DISABLE_ZOMBIES = false;

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
action_consumeItem = -1;
action_drinkWater = -1;

HIGH_NUMBER = 9999999;

player_performingAction = false;
player_noWeapon = nil;
player_primaryWeapon = nil;