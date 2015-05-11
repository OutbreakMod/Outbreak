/*
	Player variables
	@author: TheAmazingAussie
*/

"player_sendCommand" addPublicVariableEventHandler {
	
	_response = _this select 1;
	_command = _response select 0;
	
	// force player to find a spawn
	if (_command == "findspawn") then { 
		_pos = [] call player_findSpawn;
		player setPos _pos;	
		player setVariable ["outbreaklogin", 1, true];
		
		[] call player_missionSpawn;
		[] call player_clientLogin;
	};
	
	// compile db pos and teleport
	if (_command == "tp") then {
		player setPosATL (_response select 1);
	};
	
	if (_command == "login") then {
		[] call player_clientLogin;
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

player_clientLogin = {

	player_noWeapon = player addAction ["Select No Weapon", {
		player action ["SwitchWeapon", player, player, 100];
		player switchcamera cameraView;
	}];

	player_primaryWeapon = player addAction ["Select Primary Weapon", {
		player action ["SwitchWeapon", player, player, 1];
		player switchcamera cameraView;
	}];

	// call login on mission file
	[] call player_missionLogin;
};