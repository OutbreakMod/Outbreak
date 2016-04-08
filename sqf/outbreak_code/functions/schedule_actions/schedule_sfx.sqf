_health = player getVariable ["health", 6000];

if (_health < 1500) then {
	playSound "heartpounding";
};