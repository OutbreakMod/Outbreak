/*
	Init zombie AI
	@author: TheAmazingAussie
*/

private ["_agent", "_isZombieWild", "_clothes", "_cities", "_vests", "_zombieClothes", "_nearby", "_building", "_vests", "_helmets", "_uniform"];

_agent = _this select 0;
_agent setVariable ["isZombie", true, true];
_agent call player_clearInventory; // remove everything
_agent disableAI "FSM";
_agent setBehaviour "CARELESS";	
_agent setCombatMode "RED";
_agent setSkill 0;
_agent setFatigue 0;

_agent setHit ["body", 0.9];
_agent setHit ["hands", 0.9];

//////////////////////
// Dress up zombie 
//////////////////////

_zombieClothes = "wild";
_nearby = nearestObjects [_agent, ["House", "Wreck_Base"], 20];
_className = "wild";

if (count _nearby > 0) then {
	_nearestBuilding = _nearby select 0;
	_className = typeOf _nearestBuilding;
	_building = configFile >> "CfgBuildingType" >> _className;

	if ((_nearestBuilding getVariable ["helicrashSpawnZeds", true])) then {
		
		if (isClass(_building)) then {
			_zombieClothes = getText (_building >> "zombieClothes");
		};
		
		_agent setVariable ["ZombieSpawned", position _nearestBuilding, true];
	};
	
} else {
	_agent setVariable ["ZombieSpawned", position _agent, true];
};

_clothes = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> _zombieClothes);
_uniform = _clothes call BIS_fnc_selectRandom;
_agent addUniform _uniform;

if (_zombieClothes == "military") then {
	
	_vests = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> "military_vests");
	_agent addVest (_vests call BIS_fnc_selectRandom);
	
	if (30 > random 100) then {
		_helmets = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> "military_helmets");
		_agent addHeadgear (_helmets call BIS_fnc_selectRandom);
	}; 
};

if (_zombieClothes == "pilot") then {
	
	_vests = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> "military_vests");
	_agent addVest (_vests call BIS_fnc_selectRandom);
	
	if (30 > random 100) then {
		_helmets = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> "military_helmets");
		_agent addHeadgear (_helmets call BIS_fnc_selectRandom);
	}; 
};

diag_log format ["Spawning zombie at %1 near %2 with clothes %3 : %4", getPos _agent, _className, _zombieClothes, _uniform];
_agent setVariable ["ZombieClothes", _zombieClothes];

_this spawn {
	
	_unit = _this select 0;
	_zombieClothes = _unit getVariable ["ZombieClothes", false];
	
	_hasTarget = false;
	_walking = false;
	_timer = 0;
	_walkPath = [];
	
	while {alive _unit} do {
		
		if (!(_hasTarget)) then { 
			
			// sprint test
			if (!_walking) then {
			
				_pos = _unit getVariable ["ZombieSpawned", 0];
				_walkPath = [_pos, 5, 30, 1, 0, 50, 0] call BIS_fnc_findSafePos;
				
				_unit moveTo _walkPath;
				_unit forceSpeed (_unit getSpeed "FAST");
				_walking = true;
			};
			
			if ((_unit distance _walkPath) < 1) then { 
				_unit forceSpeed 1;
				_walking = false;
			};
			
		};
		
		/*/if ((speed _unit) < 1 && !(_hasTarget)) then {
		
			_pos = _unit getVariable ["ZombieSpawned", 0];
			_walkTo = [_pos, 5, 10, 1, 0, 50, 0] call BIS_fnc_findSafePos;
			_unit moveTo _walkTo;
			_unit forceSpeed 6;
			_unit playMove "AmovPercMevaSnonWnonDf";
		};
		
		if ((speed _unit) > 5) then {
			_unit playMove "AmovPercMevaSnonWnonDf";
		} else {
			if (["AmovPercMstpSnonWnonDnon", animationState _unit] call fnc_inString) then {
				_unit playMoveNow "";
				_unit forceSpeed 0;
			};
		};*/
		
		if ((_timer % 60) == 0) then {
			
			_players = ([_unit, 200, "isPlayer"] call player_findNearby);
			
			if (!(count _players > 0)) exitWith {
				deleteVehicle (_unit);
			};
		};
		
		sleep 0.25; // loop timer every 250m
		_timer = _timer + 0.25;
	};
	
};