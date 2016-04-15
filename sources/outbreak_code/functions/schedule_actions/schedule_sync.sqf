/*
	Sync character data with server
	@author: TheAmazingAussie
*/

_saveData = (player getVariable ["playerSaveData", []]);

if (count _saveData > 0) then {
	_saveData remoteExecCall ["remoteExec_player_save", 2];
};