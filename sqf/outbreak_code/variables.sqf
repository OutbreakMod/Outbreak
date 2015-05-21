/*
	Player variables
	@author: TheAmazingAussie
*/

// vars
outbreak_full_blood = 6000;
outbreak_full_health = 6000;

// public vars
"player_sendCommand" addPublicVariableEventHandler {
	
	_response = _this select 1;
	_command = _response select 0;
	
	// force player to find a spawn
	if (_command == "findspawn") then { 
		_pos = [] call player_findSpawn;
		player setPos _pos;	
		player setVariable ["outbreaklogin", 1, true];
		
		[] call player_missionSpawn;
		[] call player_missionLogin;
	};
	
	// compile db pos and teleport
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
		_blood = _medicalArray select 2;
	
		player setVariable ["health", _health, true];
		player setVariable ["blood", _blood, true];
		
		[_blood] call fnc_bloodEffect;
	};
	
	if (_command == "login") then {
		[] call player_missionLogin;
		player setVariable ["outbreaklogin", 1, true];
	};
	
	if (_command == "gear") then {
		_invArray = _response select 1;
		diag_log format["Inventory request: %1", _invArray];
		_load = [player, _invArray] call player_loadInventory;
		diag_log format["Inventory response: %1", _load];
	};
	
	// send hint
	if (_command == "hint") then {
		hint format[_response select 1];
	};
};

"player_updateDate" addPublicVariableEventHandler {

	_response = _this select 1;
	_date = _response select 0;
	
	setDate _date;
};