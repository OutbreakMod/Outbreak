/*
	Clear players inventory to array
	player_serializeInventory.sqf
	@author: TheAmazingAussie
*/

private ["_array"];

_array = [
	(headgear _this), 
	(goggles _this), 
	(uniform _this), 
	(uniformItems _this), 
	(vest _this), 
	(vestItems _this), 
	(backpack _this), 
	(backpackItems _this), 
	(primaryWeapon _this), 
	(primaryWeaponItems _this),
	(primaryWeaponMagazine _this),
	(secondaryWeapon _this),
	(secondaryWeaponItems _this),
	(secondaryWeaponMagazine _this),
	(handgunWeapon _this),
	(handgunItems _this),
	(handgunMagazine _this),
	(assignedItems _this)
];

_array