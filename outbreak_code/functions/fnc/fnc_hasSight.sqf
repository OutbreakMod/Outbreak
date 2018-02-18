/*
	Zombie detection, includes vision and if player gets too close
	@author: TheAmazingAussie
*/

_zombie = _this select 0;
_target = _this select 1;

if (!(alive _zombie)) exitWith {
	false;
};

if (!(alive _target)) exitWith {
	false;
};

_distance = _zombie distance _target;

_return = false;

if (_distance <= ZOMBIE_SEARCH_DISTANCE) then {
	_a = (getPos _target select 0) - (getPos _zombie select 0);
	_b = (getPos _target select 1) - (getPos _zombie select 1);
	_targetAngle = abs(_a atan2 _b);
	_eyeDir = eyeDirection _zombie;
	_eyeAngle = abs((_eyeDir select 0) atan2 (_eyeDir select 1));

	if (abs(_targetAngle - _eyeAngle) < 90) then { // slightly reduced vision from 180 because zombies
		if (!(terrainIntersectASL[eyePos _target, eyePos _zombie])) then {
			if (!(lineIntersects[eyePos _target, eyePos _zombie])) then {
				_fogc = 0 max (1 - fog);
				if (stance _target == "STAND") then {
					if (_distance <= ZOMBIE_SEARCH_DISTANCE) then {
						_return = true;
					};
				};
				if (stance _target == "CROUCH") then {
					if (_distance <= 10) then {
						_return = true;
					};
				} else {
					if (_distance <= 5) then {
						_return = true;
					};
				};
			};
		};
	} else {
		// If we can't see them, but we can detect them if they get too close
		if (speed player > 5) then { // ...by making noise
			if (stance _target == "STAND") then {
				if (_distance <= 10) then {
					_return = true;
				};
			};
			if (stance _target == "CROUCH") then {
				if (_distance <= 6) then {
					_return = true;
				};
			} else {
				if (_distance <= 3) then {
					_return = true;
				};
			};
		};
	};
};

_return;