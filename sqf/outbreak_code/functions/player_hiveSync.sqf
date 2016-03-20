/*
	Saves player data to hive
	@author: TheAmazingAussie
*/

private ["_position", "_inventory", "_pos", "_unit", "_legFracture"];

_unit = _this select 0;

_pos = getPosATL _unit;
_unit setVariable ["lastpos", _pos];

if (_unit getVariable ["alive", false]) then {
	if ((_unit getVariable ["outbreaklogin", -1]) == 1) then {

		_legFracture = 0;
		
		if (_unit getVariable ["leg_break", false]) then {
			_legFracture = 1;
		};
	
		hive_playerSave = [_unit, name _unit, _pos, _unit call player_serializeInventory, _legFracture, _unit getVariable ["health", 6000], _unit getVariable ["blood", 6000], format["%1", goggles player]];
		publicVariableServer "hive_playerSave";
	};
};