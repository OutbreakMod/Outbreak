
/*
	Function created by Killzone Kid
	@source: http://killzonekid.com/arma-scripting-tutorials-arrays-part-4-arrayshuffle/
*/

private ["_cnt"];

_array = _this;
_cnt = count _array;

for "_i" from 1 to _cnt do {
	_array pushBack (_array deleteAt floor random _cnt);
};

_array