/*
	Tries to throw a punch on a player
	@author: TheAmazingAussie
*/

_unit = _this select 0;
_target = _this select 1;

// zombie attack sound
_dir = round(direction player) + 180;
_unit setDir _dir;

[_unit, "zpunch" + str((floor random 3) + 1)] call object_speak;

// attack animation
_unit playMoveNow "AwopPercMstpSgthWnonDnon_end";

sleep 2;

// get targets last known location
_walkPath = _target getVariable ["last_position", []];

// if target didn't move between zombie trying to hit
// then we carry on the damage
if (_unit distance _walkPath <= 2 && alive _unit) then {
	
	_targetHealth = _target getVariable ["health", 0];
	_targetHealth = _targetHealth - 100;
	_target setVariable ["health", _targetHealth, true];
	
	if (isServer) then {
		[_target, ["camera_shake"]] call server_clientCommand;
	} else {
		1 call fnc_damageEffect;
	};
	
} else {
	// if target moved between zombie trying to hit, then we cancel
	_unit switchMove "";
};