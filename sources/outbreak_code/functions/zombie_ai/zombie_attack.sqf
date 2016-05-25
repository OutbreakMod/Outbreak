/*
	Tries to throw a punch on a player
	@author: TheAmazingAussie
*/

private ["_unit", "_target", "_dir", "_walkPath", "_targetHealth"];

_unit = _this select 0;
_target = _this select 1;

_dir = round(direction _target) + 180;
_unit setDir _dir;

// zombie attack sound
[_unit, "zpunch" + str((floor random 3) + 1)] call object_speak;
[_unit, "AwopPercMstpSgthWnonDnon_end"] remoteExecCall ["fnc_anim_playMoveNow"];

sleep 1;

// get targets last known location
_walkPath = _target getVariable ["last_position", []];

// if target didn't move between zombie trying to hit
// then we carry on the damage

if (count _walkPath > 0) then {
	if (_unit distance _walkPath <= ZOMBIE_REACH_DISTANCE && alive _unit) then {
		
		_targetHealth = _target getVariable ["health", 0];
		_targetHealth = _targetHealth - 100;
		_target setVariable ["health", _targetHealth, true];
		
		[] remoteExecCall ["remoteExec_camera_shake", (owner _target)];
		
	} else {
		// if target moved between zombie trying to hit, then we cancel
		[_unit, ""] remoteExecCall ["fnc_anim_switchMove"];
	};
};