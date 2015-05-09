/*
	Speak for multiplayer support
	@author: TheAmazingAussie
*/

private ["_singleplayer"];

soundpos = _this select 0;
sfx = _this select 1;
dist = _this select 2;

// multiplayer sound only if others are around
_singleplayer = ({isPlayer _x} count (soundpos nearEntities ["AllVehicles", dist]) < 2);

if (_singleplayer) then {

	diag_log format["Local sound created"];
	playSound3D [format["addons\outbreak_sfx\sfx\%1.wss", sfx], objNull, false, soundpos, 1, 1, dist];

	} else {

	diag_log format["Multiplayer sound created"];
	[{playSound3D [format["addons\outbreak_sfx\sfx\%1.wss", sfx], objNull, false, soundpos, 1, 1, dist];}, "BIS_fnc_spawn", true, false] spawn BIS_fnc_MP; 
	
};