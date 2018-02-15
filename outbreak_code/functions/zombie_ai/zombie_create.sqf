/*
	Creates a new zombie with AI from given position and returns the zombie created
	@author: TheAmazingAussie
*/

_data = _this select 0;
_position = _data select 0;

_building = objNull;
if (count _data > 1) then {
	_building = _data select 1;
};

_local = true;
if (count _this > 1) then {
	_local = _this select 1;
};

_zombie = createAgent ["Zombie", _position, [], 0, "NONE"];

if (!(_building == objNull)) then {
	[_zombie, _building] call zombie_initialize;
} else {
	[_zombie] call zombie_initialize;
};

// If zombie is local, add it to players list of spawned zombies
if (_local) then {
	_spawnedZombies = player getVariable ["spawnedZombies", []];
	_spawnedZombies pushBack _zombie;
	
	 // add zombie to players spawned zombie list
	player setVariable ["spawnedZombies", _spawnedZombies, true];
};

_zombie;

				