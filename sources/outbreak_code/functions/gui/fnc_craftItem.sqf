/*
	The class for handling clicking the craft button
	@author: TheAmazingAussie
*/

_cfgClassName = _this select 0;
_canCraft = _this select 1;

if (!_canCraft) exitWith {
	cutText [format["I don't have enough items to craft this"], "PLAIN DOWN"];
};

_config = (configFile >> "CfgRecipes" >> _cfgClassName);
_recipeCreate = (_config >> "recipeCreate") call BIS_fnc_getCfgData;

[_config, _recipeCreate] spawn {
	
	_config = _this select 0;
	_recipeCreate = _this select 1;
	_loop = true;
		
	_vehicle = createVehicle [_recipeCreate, position player, [], 0, "CAN_COLLIDE"];
	_vehicle setVariable ["ObjectID", -1, true]; // don't save to hive
	[_vehicle] call fnc_updateObject;
	
	while {_loop} do {
		
		[_vehicle] call fnc_updateObject;
	
		
	};
};

fnc_updateObject = {
	
	_vehicle = _this select 0;
	
	_location = player modelToWorld [0,2.5,0];
	_location set [2, (position player) select 2];
	
	_dir = round(direction player);
	
	_vehicle setDir _dir;
	_vehicle setPos _location;
};