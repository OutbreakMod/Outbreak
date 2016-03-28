class matchbox: CA_Magazine
{
	displayName = "Matchbox";
	count = 1;
	picture = "\outbreak_assets\textures\items\matchbook.paa";
	descriptionShort = "A box that holds matches, used for creating starting fires";
		
	class ItemInfo {
		mass = 1;
	}; 
	
	class cfgItemActions {
		doubleClick = "['matchbox', 'Land_Fireplace_F', false] call player_build;";
	};
	
	class cfgCraft {
		recipe[] = {
			{"log", 3},
			{"matchbox", 1}
		};
		
		consume[] = {
			{"log", 3}
		};
	};
};
