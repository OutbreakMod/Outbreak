/*
	Sync character data with server
	@author: TheAmazingAussie
*/

_name = name player;
_uid = getPlayerUID player;
_pos = getPosATL player;
_inventory = (player call player_serializeInventory);
_hit = player getHit "legs";
_health = player getVariable ["health", 6000];

hive_playerSave = [player, _name, _uid, _pos, _inventory, _hit, _health];
publicVariableServer "hive_playerSave";