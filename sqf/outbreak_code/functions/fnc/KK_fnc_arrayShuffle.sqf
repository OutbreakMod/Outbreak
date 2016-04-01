
/*
	Function created by Killzone Kid
	@source: http://killzonekid.com/arma-scripting-tutorials-arrays-part-4-arrayshuffle/
*/

private ["_el","_rnd"];

_array = _this;

for "_i" from count _array - 1 to 0 step -1 do {
	_el = _array select _i;
	_rnd = floor random (_i + 1);
	_array set [_i, _array select _rnd];
	_array set [_rnd, _el];
}; 

_array