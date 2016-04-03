/*
	Command handler from server
	@author: TheAmazingAussie
*/

_response = _this select 1;
_command = _response select 0;

if (_command == "say") then {
	
	_unit = _response select 1;
	_sfx = _response select 2;
	_dist = _response select 3;
	_unit say3D [_sfx, _dist];
};


if (_command == "findspawn") then { 
	
	_pos = call player_findSpawn;
	player setPos _pos;	
	call player_missionSpawn;
};

if (_command == "login") then {
	
	LOGGED_IN = true;
	call player_missionLogin;
	
	setAperture -1;
	1 fadeSound 1;
	1 fadeSpeech 1;
};


if (_command == "tp") then {
	player setPosATL (_response select 1);
};

if (_command == "medical") then {

	_medicalArray = _response select 1;
	_health = _medicalArray select 1;
	
	if (_health < 1) then {
		hive_playerDelete = [_unit];
		publicVariableServer "hive_playerDelete";

		deleteVehicle (player);

		hive_playerLogin = [player];
		publicVariableServer "hive_playerLogin";
	};
	
	player setHit ["legs", _medicalArray select 0];
	player setVariable ["health", _health, true];
	player getVariable ["health", 0] call fnc_simulateHealthEffect;
};

if (_command == "gear") then {
	_invArray = _response select 1;
	[player, _invArray] call player_loadInventory;
};

if (_command == "camera_shake") then {
	1 call fnc_damageEffect;
};

if (_command == "hint") then {
	hint format[_response select 1];
};