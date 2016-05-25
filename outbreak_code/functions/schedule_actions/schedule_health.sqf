/*
	Constantly checks health every 250ms and updates health effect
	@author: TheAmazingAussie
*/


_health = player getVariable ["health", 6000];
_health call fnc_simulateHealthEffect;

if (_health < 0) then {
	player setDamage 1;
};
