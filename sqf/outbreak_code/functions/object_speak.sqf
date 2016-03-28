/*
	Speak for multiplayer support
	@author: TheAmazingAussie
*/

private ["_singleplayer"];

_unit = _this select 0;
_sfx = _this select 1;
_dist = 20;
_local = false;

if (count _this > 2) then {
	_local = _this select 2;
}; 

if (_local) then {
	_unit say (_sfx);
} else {
	if (isServer) then {
		
		_players = ([_unit, _dist, "isPlayer"] call player_findNearby);
		
		{
			[_x, ["say", _unit, _sfx]] call server_clientCommand;
		} foreach _players;
		
	};
};