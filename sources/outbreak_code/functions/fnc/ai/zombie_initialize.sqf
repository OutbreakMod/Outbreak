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

_agent removeAllEventHandlers "Killed";
_agent removeAllEventHandlers "Hit";
_agent removeAllEventHandlers "Respawn";
_agent removeAllEventHandlers "HandleDamage";

_agent addEventHandler ["HandleDamage", 
{
	_this call zombie_handleDamage; 
}];

_agent addEventHandler ["Killed",
 { 
	_unit = _this select 0;
	_unit removeAllEventHandlers "HandleDamage";
	
	_vars = [
		"zombieSpawned",
		"last_position",
		"update_legs",
		"attackingZombies",
		"zombieTarget",
		"zombieTargetCooldown",
		"loseZombieTimer",
		"zombieGunshotPosition",
		"zombieTimerGunshot",
		"isZombie"
	];
	
	{ _unit setVariable [_x, nil, true]; } foreach _vars; // Important these variables are removed.
	[_unit, DEAD_ZOMBIE_DESPAWN_TIME] remoteExecCall ["remoteExec_add_cleanup", 2]; // Tell server to clean up the zombie body
 }];

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
	_buildingCfg = configFile >> "cfgBuildingClothes" >> _className;
	
	if (isClass(_buildingCfg)) then {
		_zombieClothes = getText (_buildingCfg >> "zombieClothes");
	};
	
	_agent setVariable ["zombieSpawned", position _building, true];

} else {
	
	if (count _nearby > 0) then {
		_nearestBuilding = _nearby select 0;
		_className = typeOf _nearestBuilding;
		_building = configFile >> "cfgBuildingClothes" >> _className;

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

_clothes = (configFile >> "CfgZombies" >> "CfgClothes" >> _zombieClothes) call BIS_fnc_getCfgData;
_uniform = selectRandom _clothes;

_agent addUniform _uniform;

if (_zombieClothes == "military") then {
	
	//_vests = getArray (configFile >> "CfgZombies" >> "CfgClothes" >> "military_vests");
	//_agent addVest (_vests call BIS_fnc_selectRandom);
	
	if (30 > random 100) then {
		_helmets = (configFile >> "CfgZombies" >> "CfgClothes" >> "military_helmets") call BIS_fnc_getCfgData;
		_agent addHeadgear (_helmets call BIS_fnc_selectRandom);
	}; 
};

if (_zombieClothes == "helicopter") then {
	
	if (50 > random 100) then {
		_vests = (configFile >> "CfgZombies" >> "CfgClothes" >> "military_vests") call BIS_fnc_getCfgData;
		_agent addVest (_vests call BIS_fnc_selectRandom);
	};
	
	if (30 > random 100) then {
		_helmets = (configFile >> "CfgZombies" >> "CfgClothes" >> "military_helmets") call BIS_fnc_getCfgData;
		_agent addHeadgear (_helmets call BIS_fnc_selectRandom);
	}; 
};

diag_log format ["Spawning zombie at %1 near %2 with clothes %3 : %4", getPos _agent, _className, _zombieClothes, _uniform];
_agent spawn zombie_intelligence; // Give zombie the brains :)
