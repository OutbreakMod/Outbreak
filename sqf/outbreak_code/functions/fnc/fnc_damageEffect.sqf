/*
	Update screen colour of blood amount
	@author: TheAmazingAussie
*/

private ["_commit"];

_commit = _this;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.1],  [1, 1, 1, 0.0]];
"colorCorrections" ppEffectCommit 0;

"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [2]; 
"dynamicBlur" ppEffectCommit 0;

addCamShake [5, 0.5, 25];

"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 1],  [1, 1, 1, 0.0]];
"colorCorrections" ppEffectCommit _commit;

"dynamicBlur" ppEffectAdjust [0]; 
"dynamicBlur" ppEffectCommit _commit;