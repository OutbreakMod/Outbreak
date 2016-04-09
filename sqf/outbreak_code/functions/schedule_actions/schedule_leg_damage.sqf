/*
	Checks to see if a player is standing, if so, force them prone
	@author: TheAmazingAussie
*/


if (alive player) then {
	if ((player getHit "legs") > 0.6) then {
		if ((stance player) == "STAND") then {
			[player, "AmovPpneMstpSrasWrflDnon"] remoteExecCall ["fnc_anim_switchMove"];
		};					
	};
};