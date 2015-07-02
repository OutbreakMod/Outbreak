class WoodPileBox: GroundWeaponHolder
{
	scope = 2;
	displayName = "Wood Pile";
	model = "a3\structures_f\Civ\Accessories\WoodPile_F";

	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
	
	// add random amounts of log
	class Eventhandlers {
		init = "(_this select 0) addMagazineCargoGlobal ['log', floor (random 8)];";
	};
};