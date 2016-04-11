/*
	The class for handling clicking the craft button
	@author: TheAmazingAussie
*/

disableSerialization;
_dialog = uiNamespace getVariable ["rscCraftingMenu", displayNull];

if (isNull _dialog) exitWith {
	closeDialog 0;
	BUILDING = false;
};
	

_cfgClassName = _this select 0;
_canCraft = _this select 1;

if (!_canCraft) exitWith {
	cutText [format["I don't have enough items to craft this"], "PLAIN DOWN"];
};

_config = (configFile >> "CfgRecipes" >> _cfgClassName);
_recipeCreate = (_config >> "recipeCreate") call BIS_fnc_getCfgData;
_buildDistance = (_config >> "buildDistance") call BIS_fnc_getCfgData;

cutText [format["Pressing SPACEBAR will place object. Moving away will cancel building."], "PLAIN DOWN"];

BUILDING = true;
BUILDING_RECIPE = _cfgClassName;

[_config, _recipeCreate, _buildDistance] spawn {
	
	_config = _this select 0;
	_recipeCreate = _this select 1;
	_buildDistance = _this select 2;
	
	_loop = true;
	
	_originalPos = getPosATL player;
	
	_vehicle = _recipeCreate createVehicle _originalPos; //createVehicleLocal [_recipeCreate, _originalPos, [], 0, "CAN_COLLIDE"];
	_vehicle setVariable ["ObjectID", -1, true]; // don't save to hive
	
	[_vehicle, _buildDistance] call fnc_updateObject;
	BUILDING_OBJECT = _vehicle;
	
	while {BUILDING} do {
		
		[_vehicle, _buildDistance] call fnc_updateObject;
		
		if ((_originalPos distance player) >= 10) then {
			
			cutText [format["Cancelled building"], "PLAIN DOWN"];
			deleteVehicle (_vehicle);
			
			BUILDING = false;
			BUILDING_OBJECT = objNull;
			BUILDING_RECIPE = "";
			BUILDING_WORLDSPACE = [];
		}
	};
};

fnc_updateObject = {
	
	_vehicle = _this select 0;
	_buildDistance = _this select 1;
	
	_location = player modelToWorld [0, _buildDistance, 0];
	_location set [2, ((getPosATL player) select 2)];
	
	_dir = round(direction player);
	
	_vehicle setDir _dir;
	_vehicle setPos _location;
	
	BUILDING_WORLDSPACE = [_location, vectorDir _vehicle, vectorUp _vehicle];
};