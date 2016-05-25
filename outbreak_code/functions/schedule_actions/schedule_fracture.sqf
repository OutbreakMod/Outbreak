/*
	Updates the leg damage to local player
	@author: TheAmazingAussie
*/

if (player getVariable ["update_legs", 0] > 0) then {

	_oldDamage = (player getHit "legs");
	_newDamage = _oldDamage + (player getVariable ["update_legs", 0]);

	player setHit ["legs", _newDamage];
	player setVariable ["update_legs", 0, true];
	
	if ((player getHit "legs") >= LEG_BREAK_DAMAGE_CHECK) then {
		
		// GO PRONE
		[player, "AmovPpneMstpSrasWrflDnon"] remoteExecCall ["fnc_anim_switchMove"];
		
		// SCREAM
		[player, "scream" + str((floor random 2) + 1)] call object_speak;
	};
};