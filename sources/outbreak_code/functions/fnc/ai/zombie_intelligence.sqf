_unit = _this;
_target = _unit;

_loop = true;
_walking = false;

_walkPath = [];

_timer = floor (random 6);
_nextIdleSpeak = 0;
_nextWalkTime = 0;

while {_loop} do {
	
	if (!(alive _unit)) then {
		_loop = false;
	} else {
		
		_hasTarget = _unit call zombie_hasTarget;
		_target = _unit getVariable ["zombieTarget", _unit];
		_heardGunshot = (_unit getVariable ["zombieTimerGunshot", -1]) > 0;
		
		if ((_timer % 30) == 0) then {
			_unit setVariable ["last_position", (getPosATL _unit), true];
		};
		
		///
		/// Chase target
		///
		if (_hasTarget or _heardGunshot) then { 
		
			_destination = [];
			
			if (_hasTarget) then {
				_destination = _target getVariable ["last_position", []];
			} else {
				_destination = _unit getVariable ["zombieGunshotPosition", []];
			};
			
			if (count _destination > 0) then {

				if ((_unit distance _destination) >= 2) then {
					_unit moveTo _destination;
					_unit forceSpeed (_unit getSpeed "FAST");
				
				};
				
				if (_hasTarget) then {
					
					if (_unit distance _destination <= ZOMBIE_REACH_DISTANCE) then { 
						_unit forceSpeed 1;

						if ((_timer % 2) == 0) then {
							[_unit, _target] spawn zombie_attack;
						};
					};
				};
				
				if (_unit distance _destination <= 2) then { 
					if (_heardGunshot) then {
						_unit forceSpeed 1;
						_unit setVariable ["zombieTimerGunshot", 0, true]; 
					};
				};
			} else {
				_unit setVariable ["zombieTarget", _unit, true];
			}
		
		};
		
		if ((_timer % 1) == 0) then { 
			_unit spawn zombie_findTarget;
		};	
		
		///
		/// Do tasks every x random amount of seconds
		///
		if ((_timer % 1) == 0) then { 
			
			_cooldown = _unit getVariable ["zombieTargetCooldown", 0];
					
			if (_cooldown > 0) then {
				_unit setVariable ["zombieTargetCooldown", _cooldown - 1, true];
			};
				
		
			///
			/// Idle talking
			///
			if (_nextIdleSpeak > 0) then {
				_nextIdleSpeak = _nextIdleSpeak - 1;
			} else {
				
				if (_hasTarget or _heardGunshot) then {
					[_unit, "zalert" + str((floor random 5) + 1)] call object_speak;
					_nextIdleSpeak = round (random 8);
				} else {
					[_unit, "zidle" + str((floor random 4) + 1)] call object_speak;
					_nextIdleSpeak = round (random 20);
				};
			};
				
			///
			/// Idle walking
			///
			if (!_hasTarget) then {
				if (_nextWalkTime > 0) then {
					_nextWalkTime = _nextWalkTime - 1;
				} else {
					
					_pos = _unit getVariable ["zombieSpawned", []];
					_destination = [_pos, 5, 30, 3] call fnc_selectRandomLocation;
					
					_unit moveTo _destination;
					_unit forceSpeed (_unit getSpeed "SLOW");
					
					_nextWalkTime = round (random 15);				
				};
			};
			
			///
			/// Gunshot timer cooldown
			///
			_timerGunshot = _unit getVariable ["zombieTimerGunshot", -1];
					
			if (_timerGunshot > 0) then {
				_timerGunshot = _timerGunshot - 1;
				_unit setVariable ["zombieTimerGunshot", _timerGunshot, true];
			};
			
			if (_timerGunshot == 0) then {
				_unit setVariable ["zombieGunshotPosition", [], true];
				_unit setVariable ["zombieTimerGunshot", -1, true];
				diag_log format ["ZOMBIE: gunshot alert reset"];
			};
			
			///
			/// LOSE ZOMBIE TIMER
			///
			
			if (_hasTarget) then {
				
				_timerLose = _unit getVariable ["loseZombieTimer", 0];
						
				if (_timerLose > 0) then {
					_timerLose = _timerLose - 1;
					_unit setVariable ["loseZombieTimer", _timerLose, true];
				};
							
				if ((_unit distance _target >= LOSE_ZOMBIE_DISTANCE) or (!(_timer > 0))) then {	
				
					_zombies = _target getVariable ["attackingZombies", []];
					_zombies = _zombies - [_unit];
					_target setVariable ["attackingZombies", _zombies, true];

					_unit setVariable ["zombieTarget", _unit, true];
					_unit setVariable ["zombieTargetCooldown", ZOMBIE_TARGET_COOLDOWN, true];
					_unit setVariable ["zombieSpawned", getPos _target, true];
				};
			};
		};

		///
		/// Despawn zombie if players aren't nearby
		///
		if (alive _unit) then {
			if ((_timer % 30) == 0) then {
				
				_players = ([_unit, MAX_WILD_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby);
				
				if (count _players == 0) then {
					_unit setDamage 1;
					deleteVehicle (_unit);
					_loop = false;
				};
			};
		};
		
		///
		/// Zombie unstuck checking
		///
		if ((_timer % 10) == 0) then {
			if (!(_hasTarget or _heardGunshot)) then {
				
				_currentPosition = getPosATL _unit;
				_position = _unit getVariable ["last_position", _currentPosition];
				
				if ((_currentPosition distance _position <= 1)) then { 
					
					_zombiePosition = [];
					_needsRelocated = true;
					_counter = 0;

					while {_needsRelocated} do {
						
						_zombiePosition = [_currentPosition, 3, 30, 3] call fnc_selectRandomLocation;
						_players = [_zombiePosition, MIN_ZOMBIE_SPAWN_DISTANCE, "isPlayer"] call player_findNearby;
						
						if ((count _players) == 0) then {
							_needsRelocated = false;
						};
						
						_counter = _counter + 1;
						
						if (_counter > 10) then {
							_zombiePosition = [];
							_needsRelocated = false;
						};
					};

					if (count _zombiePosition > 0) then {	
						_unit setPos _zombiePosition;
						_unit setVariable ["zombieSpawned", _zombiePosition, true];
					};
				};
			};
		};
		
		///
		/// Send leg updates
		///
		if (_unit getVariable ["update_legs", 0] > 0) then {

			_oldDamage = (_unit getHit "legs");
			_newDamage = _oldDamage + (_unit getVariable ["update_legs", 0]);

			_unit setHit ["legs", _newDamage];
			_unit setVariable ["update_legs", 0, true];
			
			if (_newDamage > 0.58) then {
				_unit switchMove "AmovPpneMstpSrasWrflDnon"; // prone
			};
		};
		
		sleep 1; // loop timer every 250m
		_timer = _timer + 1;
	};
};

if (!_loop) exitWith {
	if (!isNull _thisScript) then {
		terminate _thisScript;
	};
};
