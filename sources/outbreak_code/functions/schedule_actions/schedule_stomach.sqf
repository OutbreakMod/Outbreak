_stomach = player getVariable ["stomach", FULL_STOMACH];
_stomach = _stomach - (speed player / 3);
player setVariable ["stomach", _stomach, true];