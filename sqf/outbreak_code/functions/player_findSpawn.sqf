/*
	Find safe spawn for player
	@author: TheAmazingAussie
*/

_position = [0,0,0];
_spawnMarkers = 0;

if (toLower(OUTBREAK_MAP) == "chernarus") then {
	_spawnMarkers = 6;
};

_mkr = "spawn" + str(floor(random _spawnMarkers));

_position = ([(getMarkerPos _mkr), 0, OUTBREAK_SPAWN_AREA, 10, 0, 400, OUTBREAK_SPAWN_SHORE_MODE] call BIS_fnc_findSafePos);
_position