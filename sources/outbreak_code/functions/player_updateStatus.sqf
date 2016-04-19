/*
	Updates players side GUI status
*/

_healthComponents = FULL_HEALTH / 6;
_health = player getVariable ["health", FULL_HEALTH];

_full = FULL_HEALTH;

_almostFull = _full - _healthComponents; // 100
_medium = _full - _healthComponents - _healthComponents; // 75
_low = _full - _healthComponents - _healthComponents - _healthComponents; // 50
_veryLow = _full - _healthComponents - _healthComponents - _healthComponents - _healthComponents; // 25

_status = "0";

if (_health >= _almostFull) then {
	_status = "100";
};

if ((_health >= _medium) && (_health < _almostFull)) then {
	_status = "75";
};

if ((_health >= _low) && (_health < _medium)) then {
	_status = "50";
};

if ((_health >= _veryLow) && (_health < _low)) then {
	_status = "25";
};

disableSerialization;

_display = uiNamespace getVariable ['playerHUD', displayNull];
_healthControl = _display displayCtrl 18500;
_healthControl ctrlSetText format["\addons\outbreak_assets\textures\ui\icons\health\%1.paa", _status];
