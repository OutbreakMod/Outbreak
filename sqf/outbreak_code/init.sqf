/*
	Init mod
	@author: TheAmazingAussie
*/

// create compiles
[] execVM "addons\outbreak_code\compiles.sqf";

// create variables
[] execVM "addons\outbreak_code\variables.sqf";

// new player tick loop
[false] execVM "addons\outbreak_code\functions\player_login.sqf"; // true = start a loop for various things