/*
	Command handler from server
	@author: TheAmazingAussie
*/

_response = _this select 1;
_command = _response select 0;

if (_command == "findspawn") then { 
	_pos = [] call player_findSpawn;
	player setPos _pos;	
	player setVariable ["outbreaklogin", 1, true];
	
	[] call player_missionSpawn;
	[] call player_missionLogin;
};

if (_command == "tp") then {
	player setPosATL (_response select 1);
};

if (_command == "medical") then {

	_medicalArray = _response select 1;
	if ((_medicalArray select 0) == 1) then {
		player setHit ["legs", 1];
		player setVariable ["leg_break", true, true];
	};
	
	player setVariable ["health", (_medicalArray select 1), true];
	player setVariable ["blood", (_medicalArray select 2), true];
	
	[(_medicalArray select 1)] call fnc_bloodEffect;
};

if (_command == "login") then {
	[] call player_missionLogin;
	player setVariable ["outbreaklogin", 1, true];
};

if (_command == "gear") then {
	_invArray = _response select 1;
	[player, _invArray] call player_loadInventory;
};

if (_command == "hint") then {
	hint format[_response select 1];
};