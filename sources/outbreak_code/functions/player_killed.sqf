/*
	Player killed handler
	@author: TheAmazingAussie
*/

_unit = _this select 0;
_caused = _this select 1;

diag_log format["%1 killed from %2", name _unit, _caused];

// send kill to server
[_unit] remoteExecCall ["remoteExec_player_delete", 2];

// custom alive/dead function for outbreak
player setVariable ["alive", false];

// clean up body timer
[_unit, DEAD_PLAYER_DESPAWN_TIME] remoteExecCall ["remoteExec_add_cleanup", 2];