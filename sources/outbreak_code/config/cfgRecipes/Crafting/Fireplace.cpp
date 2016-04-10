class Fireplace : DefaultRecipe {
	
	recipeName = "Fireplace";
	recipeAction = "['matchbox', 'Land_Fireplace_F', false] call player_build;";
	
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