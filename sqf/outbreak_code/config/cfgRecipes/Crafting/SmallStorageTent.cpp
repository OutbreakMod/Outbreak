class SmallStorageTent : DefaultRecipe {
	
	recipeName = "Small Storage Tent";
	recipeAction = "['tent', 'MOD_StorageTent', true] call player_build;";
	
	recipe[] = {
		{"toolbox", 1},
		{"hammer", 1},
		//{"nails", 1},
		{"tent", 1}
	};
	
	consume[] = {
		{"tent", 1}
	};
};