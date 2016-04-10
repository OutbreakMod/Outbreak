/*
	This task is ticked every second to see if any sounds need to be played
	@author: TheAmazingAussie
*/

_health = player getVariable ["health", 6000];

//
// Constant heartbeat if low health
//
if (_health < 1500) then {
	playSound "heartpounding";
};