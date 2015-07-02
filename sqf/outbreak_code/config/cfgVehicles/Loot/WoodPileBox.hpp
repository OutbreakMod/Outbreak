class WoodPileBox: GroundWeaponHolder
{
	scope = 2;
	displayName = "Wood Pile";
	model = "a3\structures_f\Civ\Accessories\WoodPile_F";

	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
	
	class Eventhandlers {
		init = " if (floor (random 2) == 1) then { (_this select 0) addMagazineCargoGlobal ['log', floor (random 8)]; (_this select 0) addMagazineCargoGlobal ['log_rotten', floor (random 8)]; } else { (_this select 0) addMagazineCargoGlobal ['log_rotten', floor (random 8)]; (_this select 0) addMagazineCargoGlobal ['log', floor (random 8)] };";
	};
};