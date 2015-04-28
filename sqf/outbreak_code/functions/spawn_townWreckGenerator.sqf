/*
	Dynamic create wrecks in a town
	@author: TheAmazingAussie
*/

private ["_unit", "_unitPosition", "_nearestLoc", "_wrecks", "_townPos", "_dist", "_road", "_nearOtherWrecks", "_wreck"];

_survivor = _this select 0;
_pos = getPosATL (_survivor);
_nearestLoc = nearestLocations [_pos, ["NameCityCapital","NameCity","NameVillage"], 300];

_wrecks = [
	"SKODAWreck",
	"HMMWVWreck",
	"UralWreck",
	"datsun01Wreck",
	"hiluxWreck",
	"datsun02Wreck",
	"UAZWreck"
];

{
	_townsGenerated = _survivor getVariable ["townsGenerated", []];
	_townPos = locationPosition _x;
	
	if (!(_townPos in _townsGenerated)) then {

		_dist = _pos distance _townPos;
		
		// make sure the person doesn't see the wrecks being spawned
		//if ((_dist > 450)) then {
			
		_roads = _townPos nearRoads 400;
		
		for "_i" from 1 to count (_roads) do {
			
			// 80% chance
			if ((random 1) < 0.8) then {
				
				_nearOtherWrecks = true;
				_roadPos = objNull;
				
				while {_nearOtherWrecks} do {
					_roadPos = (_roads call BIS_fnc_selectRandom) modelToWorld [0,0,0];
					_nearOtherWrecks = count (_roadPos nearObjects ["All", 6]) > 0;
				};
				
				if (!isNil '_roadPos') then {
					_wreck = (_wrecks call BIS_fnc_selectRandom);
					_veh = createVehicle [_wreck, _roadPos, [], 0, "CAN_COLLIDE"];
					_veh enableSimulation false;
					_veh setDir round(random 360);
					
					if (_wreck == "HMMWVWreck") then {
						
					};
				};
			};
			
			// don't run the generator through the town more than once
			_townsGenerated = _survivor getVariable ["townsGenerated", []];
			_townsGenerated = _townsGenerated + [_townPos];
			_survivor setVariable ["townsGenerated", _townPos];
		};	
	};
} foreach _nearestLoc;