if (alive player) then {
	_damage = (player getHit "legs");
	
	if (_damage > 0.6) then {
		_state = format["%1", animationState player];
		
		if (_state in STANDING_POSES) then {
			
			// GO PRONE
			[player, "AmovPpneMstpSrasWrflDnon"] remoteExecCall ["fnc_anim_switchMove"];
		};
	};
};