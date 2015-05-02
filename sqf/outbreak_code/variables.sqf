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
		[] call player_missionSpawn;
		
		player setVariable ["outbreaklogin", 1, true];
	};
	
	// compile db pos and teleport
	if (_command == "tp") then {
		player setPosATL (_response select 1);
	};
	
	if (_command == "login") then {
		[] call player_clientLogin;
		player setVariable ["outbreaklogin", 1, true];
	};
	
	// load gear
	if (_command == "gear") then {
		_invArray = _response select 1;
		diag_log format["Inventory request: %1, %2", _invArray];
		_load = [player, _invArray] call player_loadInventory;
		diag_log format["Inventory response: %1", _load];
	};
	
	// send hint
	if (_command == "hint") then {
		hint format[_response select 1];
	};
};

player_clientLogin = {

	// call login on mission file
	[] call player_missionLogin;
};