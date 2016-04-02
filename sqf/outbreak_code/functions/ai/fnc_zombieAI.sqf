_unit = _this;

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
				[_unit, _target] spawn fnc_targetAttack;
			};
		};
	
	} else {
		
		// random wandering
		if ((_timer % 5) == 0) then {
		
			if (!_walking) then {
			
				_pos = _unit getVariable ["zombieSpawned", 0];
				_walkPath = [_pos, 5, 30, 3] call fnc_selectRandomLocation;
				
				_unit moveTo _walkPath;
				//_unit forceSpeed (_unit getSpeed "FAST");
				
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
				[_unit, "zalert" + str((floor random 5) + 1)] call object_speak;
			} else {
				[_unit, "zidle" + str((floor random 5) + 1)] call object_speak;
			};
			
			_nextIdleSpeak = round (random 20);
		}
	};
	
	// check if players nearby, if no players then we terminate zombie
	if ((_timer % 60) == 0) then {
		
		_players = ([_unit, 300, "isPlayer"] call player_findNearby);
		
		if (!(count _players > 0)) exitWith {
			_unit setDamage 1;
			deleteVehicle (_unit);
		};
	};
	
	// update the zombie wandering position every 30 secs
	if ((_timer % 30) == 0) then {
		_newPosition = [(getPosATL _unit), 5, 30, 3] call fnc_selectRandomLocation;
		_unit setVariable ["zombieSpawned", _newPosition];
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