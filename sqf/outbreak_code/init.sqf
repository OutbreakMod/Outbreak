/*
	Init mod
	@author: TheAmazingAussie
*/

// create compiles
[] execVM "addons\outbreak_code\compiles.sqf";

// new player tick loop
[false] execVM "addons\outbreak_code\functions\player_login.sqf"; // true = start a loop for various things

// public variable client-server
"player_sendCommand" addPublicVariableEventHandler { _this call player_command; };