class tent: CA_Magazine
{
	displayName = "Pitchable Tent";
	count = 1;
	picture = "\outbreak_assets\textures\items\outbreak_sleeping_bag.paa";
	model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F";
	descriptionShort = "";
	
	class ItemInfo {
		mass = 8;
	}; 
	
	class cfgItemActions {
		doubleClick = "['tent', 'OutbreakTent', true] call player_build;";
	};
	
	class cfgCraft {
		recipe[] = {
			{"toolbox", 1},
			{"hammer", 1},
			{"tent", 1}
		};
		
		consume[] = {
			{"tent", 1}
		};
	};
};