/*
	Clear players inventory to array
	@author: TheAmazingAussie
*/

_unit = _this;

_this unlinkItem "NVGoggles_INDEP"; 
removeUniform _this; 
removeVest _this; 
removeBackpack _this; 
removeHeadgear _this; 
removeAllWeapons _this;