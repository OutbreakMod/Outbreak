class Fireplace : DefaultRecipe {
	
	recipeName = "Fireplace";
	recipeAction = "['matchbox', 'Land_Fireplace_F', false] call player_build;";
	
	recipeType = "vehicle";
	recipeCreate = "Land_Fireplace_F";
	persistent = false;
	
	recipe[] = {
		{"log", 3},
		{"rock", 3},
		{"matchbox", 1}
	};
	
	consume[] = {
		{"log", 3},
		{"rock", 3}
	};
};