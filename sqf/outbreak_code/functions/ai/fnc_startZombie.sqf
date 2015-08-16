/*
	Init zombie AI
	@author: TheAmazingAussie
*/

private ["_agent", "_isZombieWild", "_clothes", "_cities"];

_agent = _this select 0;
_agent setVariable ["isZombie", true, true];
_agent call player_clearInventory; // remove everything
_agent disableAI "FSM";
_agent setBehaviour "CARELESS";	
_agent setCombatMode "RED";
_agent setSkill 0;

//////////////////////
// Dress up zombie 
//////////////////////

_isZombieWild = true;
_cities = nearestLocations [getPosATL _agent, ["NameCityCapital", "NameCity", "NameVillage"], 130];
_clothes = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> "wild");
_nearby = (getPosATL _agent) nearObjects ["building", 50];

{
	
	_className = typeOf _x;
	_building = configFile >> "CfgBuildingType" >> _className;
	
	if (isClass(_building)) then {
	
		_zombieClothes = getText (_building >> "zombieClothes");
		_clothes = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> _zombieClothes);
	};

} forEach _nearby;

_agent addUniform (_clothes call BIS_fnc_selectRandom);

//////////////////////
// End dress up zombie 
//////////////////////

_this spawn {
	
	_unit = _this select 0;
	_hasTarget = false;
	_timer = 0;
	
	while {alive _unit} do {
		
		if ((_timer % 30) == 0 && !(_hasTarget)) then {
			
			_walkTo = [(position _unit), 20, 50, 1, 0, 50, 0] call BIS_fnc_findSafePos;
			
			_unit forceSpeed 1;
			_unit moveTo _walkTo;
		};
		
		sleep 1; // loop timer every second
		_timer = _timer + 1;
	};
	
};