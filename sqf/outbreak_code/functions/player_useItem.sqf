/*
	Handle inventory items
	@author: TheAmazingAussie
*/

_idc = ctrlIDC (_this select 0);
_selectedIndex = _this select 1;

//_data = format ["%1", lbData [_idc, _selectedIndex]];
_text = format ["%1", lbText [_idc, _selectedIndex]];

if (player_performingAction) exitWith {};

if (_text == "Matchbook") then {
	 execVM "addons\outbreak_code\actions\create_fireplace.sqf";
};