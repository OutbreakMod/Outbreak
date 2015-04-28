/*
	Saves player data to hive
	@author: TheAmazingAussie
*/

private ["_position", "_inventory"];

// fields
_position = format["%1", getPosATL player];
_inventory = format["%1", player call player_serializeInventory];

// send request to server
hive_playerSave = [player, _position, _inventory];
publicVariableServer "hive_playerSave";

// log
diag_log format ["Hive sync request"];