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
	
	_health = _medicalArray select 1;
	
	if (_health < 1) then {

		hive_playerDelete = [_unit];
		publicVariableServer "hive_playerDelete";
		
		deleteVehicle (player);
		
		hive_playerLogin = [player];
		publicVariableServer "hive_playerLogin";
	
	} else {
	
		player setVariable ["health", _health, true];
		player getVariable ["health", 0] call fnc_simulateHealthEffect;
	};
};

if (_command == "login") then {
	
	player addMagazineCargoGlobal ["knife", 1];

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