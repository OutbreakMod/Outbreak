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

_agent setHit ["body", 0.9];
_agent setHit ["hands", 0.9];

_agent playmove "walking_anim";

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
	_timer = 0;
	
	
	while {alive _unit} do {
		
		if (_zombieClothes == "wild") then {
			if ((speed _unit) < 1 && !(_hasTarget)) then {
			
				_pos = _unit getVariable ["ZombieSpawned", 0];
				_walkTo = [_pos, 10, 20, 1, 0, 50, 0] call BIS_fnc_findSafePos;
				_unit forceSpeed 1;
				_unit moveTo _walkTo;
				
			};
		} else {
			if ((speed _unit) < 1 && !(_hasTarget)) then {
			
				_pos = _unit getVariable ["ZombieSpawned", 0];
				_walkTo = [_pos, 5, 10, 1, 0, 50, 0] call BIS_fnc_findSafePos;
				_unit forceSpeed 1;
				_unit moveTo _walkTo;
			};
		};
		
		if ((_timer % 60) == 0) then {
			
			_players = ([_unit, 200, "isPlayer"] call player_findNearby);
			
			if (!(count _players > 0)) exitWith {
				deleteVehicle (_unit);
			};
		};
		
		sleep 1; // loop timer every second
		_timer = _timer + 1;
	};
	
};