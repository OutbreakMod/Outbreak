/*
	Saves player data to hive
	@author: TheAmazingAussie
*/

private ["_position", "_inventory", "_pos"];

// fields
_pos = getPosATL player;

// set last position
player setVariable ["lastpos", _pos];

// only sync when alive
if (player getVariable ["alive", false]) then {

	// TODO: Check debug coord, if so, don't save, potential character loss
	if ((player getVariable ["outbreaklogin", -1]) == 1) then {

		// send request to server
		hive_playerSave = [player, _pos, player call player_serializeInventory];
		publicVariableServer "hive_playerSave";

		// log
		diag_log format ["Hive sync request"];

	};
};