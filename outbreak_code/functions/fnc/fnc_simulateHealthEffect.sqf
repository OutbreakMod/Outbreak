/*
	Update screen colour of blood amount
	@author: TheAmazingAussie
*/

private ["_health"];

_health = _this;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, (_health/FULL_HEALTH)],  [1, 1, 1, 0.0]];
"colorCorrections" ppEffectCommit 0;