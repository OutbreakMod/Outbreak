/*
	Updates players side GUI status
*/

disableSerialization;

_healthComponents = FULL_HEALTH / 6;
_health = player getVariable ["health", FULL_HEALTH];

_full = FULL_HEALTH;

_almostFull = _full - _healthComponents; // 100
_medium = _full - _healthComponents - _healthComponents; // 75
_low = _full - _healthComponents - _healthComponents - _healthComponents; // 50
_veryLow = _full - _healthComponents - _healthComponents - _healthComponents - _healthComponents; // 25
_extremelyLow = _full - _healthComponents - _healthComponents - _healthComponents - _healthComponents - _healthComponents; // 0


diag_log format["status: %1, %2, %3, %4", _almostFull, _medium, _low, _veryLow];

_status = "0";

// almost full 5000;
// medium; 4000
// low; 3000
// very low; 2000

if (_health > _almostFull) then {
	_status = "100";
};

if ((_health > _medium) && (_health <= _almostFull)) then {
	_status = "75";
};

if ((_health > _low) && (_health <= _medium)) then {
	_status = "50";
};

if ((_health > _veryLow) && (_health <= _low)) then {
	_status = "25";
};

if (_health <= _extremelyLow) then {
	_status = "25";
};

if (isNull (uiNamespace getVariable ["playerHUD", displayNull])) then {
	5 cutRsc ["playerHUD", "PLAIN", 0];
};

_display = uiNamespace getVariable ["playerHUD", displayNull];

_healthControl = _display displayCtrl 18500;
_healthControl ctrlSetText format["\addons\outbreak_assets\textures\ui\icons\health\%1.paa", _status];
