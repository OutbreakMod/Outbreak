/*
	Updates players side GUI status
*/

fnc_healthUI = {
	
	private ["_health", "_healthComponents", "_healthControl", "_almostFull", "_full", "_low", "_medium", "_status", "_veryLow"];
	
	_healthComponents = FULL_HEALTH / 5;
	_health = player getVariable ["health", FULL_HEALTH];

	_full = FULL_HEALTH;

	_almostFull = _full - _healthComponents; // 100
	_medium = _full - _healthComponents - _healthComponents; // 75
	_low = _full - _healthComponents - _healthComponents - _healthComponents; // 50
	_veryLow = _full - _healthComponents - _healthComponents - _healthComponents - _healthComponents; // 25

	_status = "0";

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

	_healthControl = _display displayCtrl 18500;
	_healthControl ctrlSetText format["\addons\outbreak_assets\textures\ui\icons\health\%1.paa", _status];
};

fnc_hungerUI = {
	
	private ["_health", "_healthComponents", "_healthControl", "_almostFull", "_full", "_low", "_medium", "_status", "_veryLow"];
	
	_healthComponents = FULL_STOMACH / 5;
	_health = player getVariable ["stomach", FULL_STOMACH];

	_full = FULL_STOMACH;

	_almostFull = _full - _healthComponents; // 100
	_medium = _full - _healthComponents - _healthComponents; // 75
	_low = _full - _healthComponents - _healthComponents - _healthComponents; // 50
	_veryLow = _full - _healthComponents - _healthComponents - _healthComponents - _healthComponents; // 25

	_status = "0";

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

	_healthControl = _display displayCtrl 18501;
	_healthControl ctrlSetText format["\addons\outbreak_assets\textures\ui\icons\food\%1.paa", _status];
};

fnc_thirstUI = {
	
	private ["_health", "_healthComponents", "_healthControl", "_almostFull", "_full", "_low", "_medium", "_status", "_veryLow"];
	
	_healthComponents = FULL_THIRST / 5;
	_health = player getVariable ["thirst", FULL_THIRST];

	_full = FULL_THIRST;

	_almostFull = _full - _healthComponents; // 100
	_medium = _full - _healthComponents - _healthComponents; // 75
	_low = _full - _healthComponents - _healthComponents - _healthComponents; // 50
	_veryLow = _full - _healthComponents - _healthComponents - _healthComponents - _healthComponents; // 25

	_status = "0";

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

	_healthControl = _display displayCtrl 18502;
	_healthControl ctrlSetText format["\addons\outbreak_assets\textures\ui\icons\thirst\%1.paa", _status];
};

/*if (isNull (uiNamespace getVariable ["playerHUD", displayNull])) then {
	5 cutRsc ["playerHUD", "PLAIN", 0];
};

disableSerialization;
_display = uiNamespace getVariable ["playerHUD", displayNull];

call fnc_healthUI;
call fnc_hungerUI;
call fnc_thirstUI;*/
