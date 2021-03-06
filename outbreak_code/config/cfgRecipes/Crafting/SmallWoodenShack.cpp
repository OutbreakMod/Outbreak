class SmallWoodenShack : DefaultRecipe {
	
	recipeName = "Small Wooden Storage Shack";
	recipeAction = "['tent', 'OutbreakShackV1', true] call player_build;";
	
	recipeType = "vehicle";
	recipeCreate = "MOD_Shack1";
	persistent = 1;
	buildDistance = 6;
	
	recipe[] = {
		{"blueprint_shack_v1", 1},
		{"log", 10},
		{"scrap", 3},
		{"hammer", 1},
		{"toolbox", 1}
	};
	
	consume[] = {
		{"scrap", 3},
		{"log", 10}
	};
};