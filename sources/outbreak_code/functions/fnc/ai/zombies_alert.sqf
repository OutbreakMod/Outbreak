_position = _this select 0; // alert zombies to this position
_radius = _this select 1; // the radius that we should find zombies and alert them 
_zombies = ([_position, _radius, "isZombie"] call player_findNearby);

{
	[_x, _position] call alert_zombie;
} foreach _zombies;

