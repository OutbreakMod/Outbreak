/*
	Init mod
	@author: TheAmazingAussie
*/


// new player tick loop
[] execVM "addons\outbreak_code\functions\player_scheduler.sqf";
[] execVM "addons\outbreak_code\functions\player_login.sqf";

// public variable client-server
"player_sendCommand" addPublicVariableEventHandler { _this call player_command; };