_medical = _this select 0;
_health = _medical select 1;

if (_health < 1) then {
	[player] remoteExecCall ["remoteExec_player_delete", 2];
	deleteVehicle (player);
	[player] remoteExecCall ["remoteExec_player_login", 2];
};

player setHit ["legs", _medical select 0];
player setVariable ["health", _health, true];
player getVariable ["health", 0] call fnc_simulateHealthEffect;