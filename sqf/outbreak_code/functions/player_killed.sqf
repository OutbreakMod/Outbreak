/*
	Player killed handler
	@author: TheAmazingAussie
*/

_unit = _this select 0;
_caused = _this select 1;

diag_log format["%1 killed from %2", name _unit, _caused];

// send kill to server
hive_playerDelete = [_unit];
publicVariableServer "hive_playerDelete";

[_unit] spawn {
	sleep 1;
	{	
		_killed = _this select 0;
		_dist = _x distance (_killed getVariable ["lastpos", getPosATL _killed]);
		
		if ((getPlayerUID _x) == (getPlayerUID _killed) && _dist < 8) then {
			_x setVariable ["keep_body", 1, true];
		};
	} foreach allDeadMen;
};