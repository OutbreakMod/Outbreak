/*
	Returns entity if infected has target, will return self if there's no target
	@author: TheAmazingAussie
*/

_unit = _this;

_target = _unit getVariable ["zombieTarget", _unit];

_hasTarget = (_target != _unit);
_hasTarget;