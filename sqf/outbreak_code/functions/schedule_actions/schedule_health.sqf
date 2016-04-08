_health = player getVariable ["health", 6000];
_health call fnc_simulateHealthEffect;

if (_health < 0) then {
	player setDamage 1;
};
