/*
	Speak for multiplayer support
	@author: TheAmazingAussie
*/

private ["_player", "_sfx", "_distance", "_multiplayer"];

_player = _this select 0;
_sfx = _this select 1;
_distance = _this select 2;

// multiplayer sound only if others are around
_multiplayer = ({isPlayer _x} count (_player nearEntities ["AllVehicles", _distance]) < 2);

if (_multiplayer) then {

	diag_log format["Multiplayer sound created"];
	[{player say [_sfx, _distance];}, "BIS_fnc_spawn", true, false] spawn BIS_fnc_MP; 
	
} else {

	diag_log format["Local sound created"];
	player say [_sfx, _distance];
};

// sound function
fnc_createSound = {
	// unit, sound, distance
	(_this select 0) say [(_this select 1), (_this select 2)];
};