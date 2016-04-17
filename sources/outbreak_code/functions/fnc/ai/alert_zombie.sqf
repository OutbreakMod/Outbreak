_zombie = _this select 0;
_destination = _this select 1;

_hasTarget = _zombie call zombie_hasTarget;

if (!_hasTarget) then {

	_gunshotTimer = _zombie setVariable ["zombieTimerGunshot", -1];
	
	if (!(_gunshotTimer > 0)) then {
		[_x, "zalert" + str((floor random 5) + 1)] call object_speak;
	};

	_zombie setVariable ["zombieGunshotPosition", _destination, true];
	_zombie setVariable ["zombieTimerGunshot", ZOMBIE_TARGET_GUNSHOT_COOLDOWN, true];

};