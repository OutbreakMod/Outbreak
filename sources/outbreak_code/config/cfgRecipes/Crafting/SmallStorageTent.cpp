class SmallStorageTent : DefaultRecipe {
	
	recipeName = "Small Storage Tent";
	recipeAction = "['tent', 'MOD_StorageTent', true] call player_build;";
	
	recipeType = "vehicle";
	recipeCreate = "MOD_StorageTent";
	persistent = true;
	
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