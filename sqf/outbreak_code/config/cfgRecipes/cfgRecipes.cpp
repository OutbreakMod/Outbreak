class CfgRecipes {
	
	class DefaultRecipe {
		recipeName = "";
		recipeAction = "";
		recipe[] = {};
		consume[] = {};
	};
	
	recipes[] = {
		"SmallStorageTent",
		"SmallWoodenShack",
		"Fireplace"
	};
	
	#include "Crafting\SmallStorageTent.cpp"
	#include "Crafting\SmallWoodenShack.cpp"
	#include "Crafting\Fireplace.cpp"
};