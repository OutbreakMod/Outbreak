_position = _this select 0; // alert zombies to this position
_radius = _this select 1; // the radius that we should find zombies and alert them

_zombies = ([_position, _radius, "isZombie"] call player_findNearby);

{	
	_x setVariable ["zombieGunshotHeard", true, true];
	_x setVariable ["zombieGunshotPosition", _position, true];
	_x setVariable ["zombieTimerGunshot", ZOMBIE_TARGET_GUNSHOT_COOLDOWN, true];
	[_x, "zalert" + str((floor random 5) + 1)] call object_speak;
	
} foreach _zombies;

