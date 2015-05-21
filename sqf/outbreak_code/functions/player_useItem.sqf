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
	 [] execVM "addons\outbreak_code\actions\create_fireplace.sqf";
};

if (_text == "Pitchable Tent") then {
	 ["", "", "", "OutbreakTent"] execVM "addons\outbreak_code\actions\makeshift_base.sqf";
};

if (_text == "Morphine") then {
	 ["", "", "", player] execVM "addons\outbreak_code\actions\apply_morphine.sqf";
};
