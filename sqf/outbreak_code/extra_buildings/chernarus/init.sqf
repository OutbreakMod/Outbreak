/*
	Adds extra buildings to Chernarus
	@author: TheAmazingAussie
*/

private ["_towns", "_x"];

_towns = [
	"balota",
	"starysobor",
	"chernogorsk",
	"elektro",
	"nwaf",
	"zelenogorsk"
];

{
	[] execVM format["addons\outbreak_code\extra_buildings\chernarus\%1.sqf", _x];
} forEach _towns;