class Fireplace : DefaultRecipe {
	recipeName = "Fireplace";
	recipeCreate = "Land_Fireplace_F";
	persistent = 0;
	buildDistance = 2.5;
	
	recipe[] = {
		{"log", 3},
		{"rock", 3},
		{"matches", 1}
	};
	
	consume[] = {
		{"log", 3},
		{"rock", 3}
	};
};