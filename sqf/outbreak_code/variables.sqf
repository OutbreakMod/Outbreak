/*
	Player variables
	@author: TheAmazingAussie
*/

MOD_FULL_BLOOD = getNumber(configFile >> "CfgGame" >> "MOD_FULL_BLOOD");
MOD_FULL_HEALTH = getNumber(configFile >> "CfgGame" >> "MOD_FULL_HEALTH");

// reset actions
action_gutAnimal = -1;
action_cookMeat = -1;
action_studyDeadBody = -1;
action_applyMorphine = -1;
action_build = -1;

player_performingAction = false;
player_noWeapon = nil;
player_primaryWeapon = nil;