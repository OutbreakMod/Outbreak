_medical = _this select 0;
_health = _medical select 1;
_stomach = _medical select 2;
_thirst = _medical select 3;

diag_log format ["LOGIN FUNCTION: Found medical array (%1)", _medical];

if (_health < 1) then {
	[player] remoteExecCall ["remoteExec_player_delete", 2];
	deleteVehicle (player);
	[player] remoteExecCall ["remoteExec_player_login", 2];
};

player setHit ["legs", _medical select 0];
player setVariable ["health", _health, true];
player setVariable ["stomach", _stomach, true];
player setVariable ["thirst", _thirst, true];

if (!CAMERA_SHAKE_ACTIVE) then {
	player getVariable ["health", 0] call fnc_simulateHealthEffect;
};