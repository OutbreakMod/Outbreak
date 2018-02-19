/*
	Update screen colour of blood amount
	@author: TheAmazingAussie
*/

private ["_commit"];
_commit = _this;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 1.1, -0.02, [0.4,-0.2,-0.2, .04], [1,1,1,0],  [1,1,1, 0]];
"colorCorrections" ppEffectCommit 0;

"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [1]; 
"dynamicBlur" ppEffectCommit 0;

setCamShakeParams [0.05, 4, 1, 3, true];
addCamShake [5, 0.5, 25];

"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0], [1, 1, 1, 1],  [1, 1, 1, 1]]; 
"colorCorrections" ppEffectCommit _commit;

"dynamicBlur" ppEffectAdjust [0];
"dynamicBlur" ppEffectCommit _commit;