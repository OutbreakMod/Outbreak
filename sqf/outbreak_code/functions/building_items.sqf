/*
	Compiles all items for a building into one array
	@author: TheAmazingAussie
*/

_class = _this;

_lootCategories = [] + getArray(configFile >> "CfgBuildingType" >> _class >> "lootCategories");
_cfgLootCategories = configFile >> "CfgLootCategories";

_lootItems = [];

{
	_lootItems = _lootItems + getArray(_cfgLootCategories >> _x >> "loot");
} forEach _lootCategories;

_lootItems