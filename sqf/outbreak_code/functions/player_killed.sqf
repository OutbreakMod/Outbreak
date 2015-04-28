/*
	Player killed handler
	@author: TheAmazingAussie
*/

_unit = _this select 0;
_caused = _this select 1;

diag_log format["%1 killed from %2", name _unit, _caused];