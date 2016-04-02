/*
	Saves player data to hive
	@author: TheAmazingAussie
*/

private ["_position", "_inventory", "_pos", "_unit", "_legFracture"];

_unit = _this select 0;

_pos = getPosATL _unit;
_unit setVariable ["lastpos", _pos];

if (_unit getVariable ["alive", false]) then {
	if (LOGGED_IN) then {
		hive_playerSave = [_unit, name _unit, _pos, _unit call player_serializeInventory, (player getHit "legs"), _unit getVariable ["health", 6000]];
		publicVariableServer "hive_playerSave";
	};
};