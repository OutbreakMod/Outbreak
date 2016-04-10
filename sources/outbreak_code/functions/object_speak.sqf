/*
	Speak for multiplayer support
	@author: TheAmazingAussie
*/

private ["_singleplayer"];

_unit = _this select 0;
_sfx = _this select 1;
_distance = 100;

if (count _this > 2) then {
	_distance = _this select 2;
};

[_unit, _sfx, _distance] remoteExecCall ["fnc_object_speak"];


