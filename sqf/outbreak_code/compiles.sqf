/*
	Compile all classes here
	@author: TheAmazingAussie
*/

// general player functions
player_respawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_respawn.sqf";
player_killed = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_killed.sqf";
player_findSpawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_findSpawn.sqf";
player_scheduler_actions = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_scheduler_actions.sqf";
player_hiveSync = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_hiveSync.sqf";
player_pressKey = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_pressKey.sqf";
player_handleDamage = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_handleDamage.sqf";
player_command = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_command.sqf";
player_findNearby = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_findNearby.sqf";
player_fired = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_fired.sqf";

// objects
object_speak = compile preProcessFileLineNumbers "addons\outbreak_code\functions\object_speak.sqf";

// inventory
player_clearInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_clearInventory.sqf";
player_loadInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_loadInventory.sqf";
player_serializeInventory = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_serializeInventory.sqf";
player_selectItem = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_selectItem.sqf";

// fnc functions
fnc_inString = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_inString.sqf";
fnc_getServerVehicle = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_getServerVehicle.sqf";
fnc_hasItem = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_hasItem.sqf";
fnc_countItems = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_countItems.sqf";
fnc_damageType = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_damageType.sqf";
fnc_damageEffect = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_damageEffect.sqf";
fnc_simulateHealthEffect = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_simulateHealthEffect.sqf";
fnc_selectRandomLocation = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_selectRandomLocation.sqf";
fnc_convertMagazines = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_convertMagazines.sqf";
create_uid = compile preProcessFileLineNumbers "addons\outbreak_code\functions\create_uid.sqf";
KK_fnc_arrayShuffle = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\KK_fnc_arrayShuffle.sqf";

// actions
player_build = compile preProcessFileLineNumbers "addons\outbreak_code\actions\player_build.sqf";
player_apply_morphine = compile preProcessFileLineNumbers "addons\outbreak_code\actions\apply_morphine.sqf";

// infected
zombies_spawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombies_spawn.sqf";
zombie_attack = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_attack.sqf";
zombie_findTarget = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_findTarget.sqf";
zombie_hasTarget = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_hasTarget.sqf";
zombie_initialize = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_initialize.sqf";
zombie_intelligence = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_intelligence.sqf";
zombie_handleDamage = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_handleDamage.sqf";
zombie_create = compile preProcessFileLineNumbers "addons\outbreak_code\functions\ai\zombie_create.sqf";

obj_getModelName = {
	_objInfo = toArray(str(_this));
	_lenInfo = count _objInfo - 1;
	_objName = [];
	_i = 0;
	// determine where the object name starts
	{
		if (58 == _objInfo select _i) exitWith {};
		_i = _i + 1;
	} count _objInfo;
	_i = _i + 2; // skip the ": " part
	for "_k" from _i to _lenInfo do {
		_objName set [(count _objName), (_objInfo select _k)];
	};
	_objName = toLower(toString(_objName));
	_objName
};
