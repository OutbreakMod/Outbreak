/*
	Init zombie AI
	@author: TheAmazingAussie
*/

private ["_unit"];

_agent = _this select 0;
_agent setVariable ["isZombie", true, true];
_agent call player_clearInventory; // remove everything
_agent disableAI "FSM";
_agent setBehaviour "CARELESS";	
_agent setCombatMode "RED";
_agent setSkill 0;
		

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