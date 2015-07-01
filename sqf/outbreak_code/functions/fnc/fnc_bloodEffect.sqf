/*
	Update screen colour of blood amount
	@author: TheAmazingAussie
*/

private ["_health"];

_health = _this select 0;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, (_health/MOD_FULL_HEALTH)],  [1, 1, 1, 0.0]];
"colorCorrections" ppEffectCommit 0;