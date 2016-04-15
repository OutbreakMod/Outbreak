/*
	Sync character data with server
	@author: TheAmazingAussie
*/

(player getVariable ["playerSaveData", []]) remoteExecCall ["remoteExec_player_save", 2];