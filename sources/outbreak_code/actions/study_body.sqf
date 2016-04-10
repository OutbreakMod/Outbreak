/*
	Gut animal
	@author: TheAmazingAussie
*/

private ["_type", "_unit", "_message", "_animation", "_check", "_interrupt", "_animState", "_loop", "_started", "_finished", "_configMeat", "_rawMeat", "_amount", "_weaponHolder"];

_type = (_this select 3) select 0;
_unit = (_this select 3) select 1;

_loop = true;

player removeAction action_studyDeadBody;
action_studyDeadBody = -1;

cutText [format["%1", _unit getVariable ["deathmessage", "His name was unknown and died from unknown"]], "PLAIN DOWN"];