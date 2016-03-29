/*
	Init zombie AI
	@author: TheAmazingAussie
*/

private ["_agent", "_isZombieWild", "_clothes", "_cities", "_vests", "_zombieClothes", "_nearby", "_building", "_vests", "_helmets", "_uniform"];

_agent = _this select 0;

_agent setVariable ["isZombie", true, true];
_agent setVariable ["health", 6000, true];
_agent call player_clearInventory; // remove everything
_agent disableAI "FSM";
_agent setBehaviour "CARELESS";	
_agent setCombatMode "RED";
_agent setSkill 0;
_agent setFatigue 0;

_agent removeAllEventHandlers "Killed";
_agent removeAllEventHandlers "Hit";
_agent removeAllEventHandlers "Respawn";
_agent removeAllEventHandlers "HandleDamage";

_agent addEventHandler ["HandleDamage", { _this call zombie_handleDamage; }];

_agent setHit ["body", 0.9];
_agent setHit ["hands", 0.9];

//////////////////////
// Dress up zombie 
//////////////////////

_zombieClothes = "wild";
_nearby = nearestObjects [_agent, ["House", "Wreck_Base"], 20];
_className = "wild";

if (count _this > 1) then {
	
	_building = _this select 1;
	_className = typeOf _building;
	_buildingCfg = configFile >> "CfgBuildingType" >> _className;
	
	if (isClass(_buildingCfg)) then {
		_zombieClothes = getText (_buildingCfg >> "zombieClothes");
	};
	
	_agent setVariable ["zombieSpawned", position _building, true];

} else {
	
	if (count _nearby > 0) then {
		_nearestBuilding = _nearby select 0;
		_className = typeOf _nearestBuilding;
		_building = configFile >> "CfgBuildingType" >> _className;

		if ((_nearestBuilding getVariable ["helicrashSpawnZeds", true])) then {
			
			if (isClass(_building)) then {
				_zombieClothes = getText (_building >> "zombieClothes");
			};
			
			_agent setVariable ["zombieSpawned", position _nearestBuilding, true];
		};
		
	} else {
		_agent setVariable ["zombieSpawned", position _agent, true];
	};
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
_agent setVariable ["zombieClothes", _zombieClothes];

_this spawn {
	
	_unit = _this select 0;
	_zombieClothes = _unit getVariable ["zombieClothes", false];

	_target = _unit;
	_walking = false;
	_timer = 0;
	_walkPath = [];
	
	_nextIdleSpeak = 0;
	
	while {alive _unit} do {

		_unit call fnc_findTarget;
		
		_hasTarget = _unit call fnc_hasTarget;
		_target = _unit getVariable ["zombieTarget", _unit];
		
		if (_hasTarget) then { 
		
			_walkPath = _target getVariable ["last_position", []];
		
			// if the distance between the target and zombie is too great then we run after target
			if ((_unit distance _walkPath) >= 2) then {
				_unit moveTo _walkPath;
				_unit forceSpeed (_unit getSpeed "FAST");
			
			};
			
			// slow down to walking speed once close
			if (_unit distance _walkPath <= 2) then { 
				_unit forceSpeed 1;
				
				// try hitting every 2 seconds
				if ((_timer % 2) == 0) then {
					[_unit, _target] spawn fnc_zombiePunch;
				};
			};
		
		} else {
			
			// random wandering
			if ((_timer % 5) == 0) then {
			
				if (!_walking) then {
				
					_pos = _unit getVariable ["zombieSpawned", 0];
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
		};
		
		// handle idle talking
		if ((_timer % 1) == 0) then { 
			
			if (_nextIdleSpeak > 0) then {
				_nextIdleSpeak = _nextIdleSpeak - 1;
			} else {
				
				if (_hasTarget) then {
					[_unit, "zalert" + str((floor random 3) + 1)] call object_speak;
				} else {
					[_unit, "zidle" + str((floor random 5) + 1)] call object_speak;
				};
				
				_nextIdleSpeak = round (random 20);
			}
		};
		
		// check if players nearby, if no players then we terminate zombie
		if ((_timer % 60) == 0) then {
			
			_players = ([_unit, 100, "isPlayer"] call player_findNearby);
			
			if (!(count _players > 0)) exitWith {
				_unit setDamage 1;
				deleteVehicle (_unit);
			};
		};

		// leg breaking
		if (_unit getVariable ["update_legs", 0] > 0) then {

			_oldDamage = (_unit getHit "legs");
			_newDamage = _oldDamage + (_unit getVariable ["update_legs", 0]);

			_unit setHit ["legs", _newDamage];
			_unit setVariable ["update_legs", 0, true];
			
			if (_newDamage > 0.58) then {
				_unit switchMove "AmovPpneMstpSrasWrflDnon"; // prone
			};
		};
		
		// check health
		if (_unit getVariable ["health", 6000] < 0) then {
			_unit setDamage 1;
		};
		
		sleep 0.25; // loop timer every 250m
		_timer = _timer + 0.25;
	};
	
};