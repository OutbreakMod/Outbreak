/*
	Player killed handler
	@author: TheAmazingAussie
*/

_unit = _this select 0;
_killer = _this select 1;

diag_log format["%1 killed", name _unit];