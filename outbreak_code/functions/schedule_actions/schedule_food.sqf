_stomach = player getVariable ["stomach", FULL_STOMACH];
_stomach = _stomach - (speed player / 1.5);

if (_stomach >= 0) then {
	player setVariable ["stomach", _stomach, true];
};

_thirst = player getVariable ["thirst", FULL_THIRST];
_thirst = _thirst - (speed player / 2);

if (_thirst >= 0) then {
	player setVariable ["thirst", _thirst, true];
};