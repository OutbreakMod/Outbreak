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

// sound function
fnc_createSound = {
	// unit, sound, distance
	(_this select 0) say [(_this select 1), (_this select 2)];
};

if (_multiplayer) then {
	[{[_player, _sfx, _distance] call fnc_createSound;}, "BIS_fnc_spawn", true, false] spawn BIS_fnc_MP;  
} else {
	[_player, _sfx, _distance] call fnc_createSound;
};