private ["_weapon", "_baseCfg", "_cfg", "_parent", "_name"];

_weapon = _this select 0;
_name = "";

if (count (toArray _name) > 0) then {
	
	_name = configName (inheritsFrom (configFile >> "cfgWeapons" >> _weapon));

};

_name;