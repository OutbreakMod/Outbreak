/*
	Init mod
	@author: TheAmazingAussie
*/

// create variables
call compile preprocessFileLineNumbers "addons\outbreak_code\variables.sqf";

// create compiles
call compile preprocessFileLineNumbers "addons\outbreak_code\compiles.sqf";

// new player tick loop
[] execVM "addons\outbreak_code\functions\player_scheduler.sqf";
[] execVM "addons\outbreak_code\functions\player_login.sqf";

// public variable client-server
"player_sendCommand" addPublicVariableEventHandler { _this call player_command; };