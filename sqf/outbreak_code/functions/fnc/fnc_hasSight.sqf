
_zombie = _this select 0;
_target = _this select 1;

_return = false;

if (!(_zombie distance _target > 40)) then {
	
	_a = (getPos _target select 0) - (getPos _zombie select 0);
	_b = (getPos _target select 1) - (getPos _zombie select 1);
	_targetAngle = abs(_a atan2 _b);
	_eyeDir = eyeDirection _zombie;
	_eyeAngle = abs((_eyeDir select 0) atan2 (_eyeDir select 1));

	if (abs(_targetAngle - _eyeAngle) < 140) then { // slightly reduced vision from 180 because zombies

		if (!(terrainIntersectASL[eyePos _target, eyePos _zombie])) then {
			if (!(lineIntersects[eyePos _target, eyePos _zombie])) then {
				_fogc = 0 max (1 - fog);
				if (stance _target == "STAND") then {
					if (_target distance _zombie < 30) then {
						_return = true;
					};
				};
				if (stance _target == "CROUCH") then {
					if (_target distance _zombie < 15) then {
						_return = true;
					};
				} else {
					if (_target distance _zombie < 5) then {
						_return = true;
					};
				};
			};
		};
	};
};

_return;