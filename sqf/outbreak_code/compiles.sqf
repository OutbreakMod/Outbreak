/*
	Compile all classes here
	@author: TheAmazingAussie
*/

// general player functions
player_respawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_respawn.sqf";
player_killed = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_killed.sqf";
player_findSpawn = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_findSpawn.sqf";
player_spawnCheck = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_spawnCheck.sqf";
player_hiveSync = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_hiveSync.sqf";
player_pressKey = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_pressKey.sqf";
player_spawnAnimal = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_spawnAnimal.sqf";
player_handleDamage = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_handleDamage.sqf";
player_command = compile preProcessFileLineNumbers "addons\outbreak_code\functions\player_command.sqf";

// building
building_items = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_items.sqf";
building_spawnLoot = compile preProcessFileLineNumbers "addons\outbreak_code\functions\building_spawnLoot.sqf";
loot_holder = compile preProcessFileLineNumbers "addons\outbreak_code\functions\loot_holder.sqf";

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
object_speak = compile preProcessFileLineNumbers "addons\outbreak_code\functions\object_speak.sqf";
fnc_damageType = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_damageType.sqf";
fnc_damageEffect = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_damageEffect.sqf";
fnc_bloodEffect = compile preProcessFileLineNumbers "addons\outbreak_code\functions\fnc\fnc_bloodEffect.sqf";

// actions
player_build = compile preProcessFileLineNumbers "addons\outbreak_code\actions\player_build.sqf";
player_chopWood = compile preProcessFileLineNumbers "addons\outbreak_code\actions\player_chopWood.sqf";

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
