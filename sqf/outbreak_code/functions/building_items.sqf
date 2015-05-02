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
} count _lootCategories;

/*
	Function created by Killzone Kid
	@source: http://killzonekid.com/arma-scripting-tutorials-arrays-part-4-arrayshuffle/
*/
KK_fnc_arrayShuffle = {
    private ["_cnt","_el1","_indx","_el2"];
    _cnt = count _this - 1;
    _el1 = _this select _cnt;
    _this resize _cnt;
    for "_i" from 0 to _cnt + random 1 do {
        _indx = floor random _cnt;
        _el2 = _this select _indx;
        _this set [_indx, _el1];
        _el1 = _el2;
    };
    _this set [_cnt, _el1];
    _this
};

_lootItems = (_lootItems call KK_fnc_arrayShuffle);
_lootItems