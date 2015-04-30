/*
	Saves player data to hive
	@author: TheAmazingAussie
*/

private ["_position", "_inventory"];

// fields
_pos = getPosATL player;

// TODO: Check debug coord, if so, don't save, potential character loss
if (_pos select 0 == -7245) exitWith {};

_position = format["%1", _pos];
_inventory = format["%1", player call player_serializeInventory];

// send request to server
hive_playerSave = [player, _position, _inventory];
publicVariableServer "hive_playerSave";

// log
diag_log format ["Hive sync request"];