/*
	Selects a random entry from an array
*/

private ["_array", "_count"];

_ret = nil;
if(count _this > 0) then
{
	_ret = (count _this) - 1;           //number of elements in the array
	//_ret = [0, _ret] call BIS_fnc_randomInt; //choose random index
	_ret = random _ret;
	_ret = _this select _ret;           //get the element, return it
};
_ret