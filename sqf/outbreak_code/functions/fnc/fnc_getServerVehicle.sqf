/*
	Get vehicle returned by server
	@author: TheAmazingAussie
*/

_uniqueID = _this select 0;
_player = _this select 1;

_gotVehicle = false;
_vehicle = objNull;

while {!_gotVehicle} do {
	
	if (_player getVariable [_uniqueID, 0] != 0) then {
		
		_gotVehicle = true;
		_vehicle = _player getVariable [_uniqueID, 0];
	};
};

_vehicle