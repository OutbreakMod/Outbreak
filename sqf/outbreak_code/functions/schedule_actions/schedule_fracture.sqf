if (player getVariable ["update_legs", 0] > 0) then {

	_oldDamage = (player getHit "legs");
	_newDamage = _oldDamage + (player getVariable ["update_legs", 0]);

	player setHit ["legs", _newDamage];
	player setVariable ["update_legs", 0, true];
	
	if (_newDamage > 0.58) then {
		
		// GO PRONE
		[player, "AmovPpneMstpSrasWrflDnon"] remoteExecCall ["fnc_anim_switchMove"];
	};
};