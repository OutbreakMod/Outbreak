_unit = _this;

_target = _unit;
_walking = false;
_timer = 0;
_walkPath = [];

_nextIdleSpeak = 0;
_nextWalkTime = 0;

while {alive _unit} do {

	// Search for alive targets
	_unit call zombie_findTarget;
	
	_hasTarget = _unit call zombie_hasTarget;
	_target = _unit getVariable ["zombieTarget", _unit];
	
	if (_hasTarget) then { 
	
		_destination = _target getVariable ["last_position", []];
		
		if (count _destination > 0) then {

			if ((_unit distance _destination) >= 2) then {
				_unit moveTo _destination;
				_unit forceSpeed (_unit getSpeed "FAST");
			
			};

			if (_unit distance _destination <= 2) then { 
				_unit forceSpeed 1;

				if ((_timer % 2) == 0) then {
					[_unit, _target] spawn zombie_attack;
				};
			};
		} else {
			_unit setVariable ["zombieTarget", _unit];
		}
	
	};
	
	// ticking
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
		};
			
		if (!_hasTarget) then {
			if (_nextWalkTime > 0) then {
				_nextWalkTime = _nextWalkTime - 1;
			} else {
				
				_pos = _unit getVariable ["zombieSpawned", 0];
				_destination = [_pos, 5, 30, 3] call fnc_selectRandomLocation;
				
				_unit moveTo _destination;
				_unit forceSpeed (_unit getSpeed "SLOW");
				
				_nextWalkTime = round (random 15);				
			};
		};
	};
	
	// check if players nearby, if no players then we terminate zombie
	if ((_timer % 60) == 0) then {
		
		_players = ([_unit, 300, "isPlayer"] call player_findNearby);
		
		if (!(count _players > 0)) exitWith {
			_unit setDamage 1;
			deleteVehicle (_unit);
		};
	};
	
	// Check if zombie is stuck
	if ((_timer % 60) == 0) then {
		if (!_hasTarget) then {
			
			_currentPosition = getPosATL _unit;
			_position = _unit getVariable ["last_position", (getPosATL _unit)];
			
			// if true then zombie is stuck
			if (_unit distance _position <= 2) then { 
				_newPosition = [_currentPosition, 5, 50, 10] call fnc_selectRandomLocation;
				
				_unit setPos _newPosition;
				_unit setVariable ["zombieSpawned", _newPosition];
			};
		};
	};
	
	// update the zombie wandering position every 30 secs
	/*if ((_timer % 30) == 0) then {
		_newPosition = [(getPosATL _unit), 5, 30, 3] call fnc_selectRandomLocation;
		_unit setVariable ["zombieSpawned", _newPosition];
	};*/
	

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
	
	_unit setVariable ["last_position", (getPosATL _unit)];
	
	sleep 0.25; // loop timer every 250m
	_timer = _timer + 0.25;
};