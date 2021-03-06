class blueprint_shack_v1: CA_Magazine
{
	displayName = "Blueprint (Small basic shack)";
	recipeName = "Small basic shack";
	count = 1;
	picture = "\addons\outbreak_assets\textures\items\blueprint.paa";
	descriptionShort = "A blueprint containing the details to build a small shack, with a hammer, wood, scrap metal and other materials!";

	class ItemInfo {
		mass = 1;
	};
	
	class cfgItemActions {
		doubleClick = "['tent', 'OutbreakShackV1', true] call player_build;";
	};
	
	class cfgCraft {
		recipe[] = {
			{"blueprint_shack_v1", 1},
			{"hammer", 1},
			{"scrap", 3},
			{"log", 10}
		};
		
		consume[] = {
			{"scrap", 3},
			{"log", 10}
		};
	};
};
