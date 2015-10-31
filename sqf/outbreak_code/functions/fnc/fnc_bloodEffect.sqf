/*
	Update screen colour of blood amount
	@author: TheAmazingAussie
*/

private ["_blood"];

_blood = _this;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, (_blood/MOD_FULL_BLOOD)],  [1, 1, 1, 0.0]];
"colorCorrections" ppEffectCommit 0;