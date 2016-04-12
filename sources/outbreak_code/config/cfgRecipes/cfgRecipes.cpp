class CfgRecipes {
	
	class DefaultRecipe {
		recipeName = "";
		recipeAction = "";
		recipe[] = {};
		consume[] = {};
		recipeType = "vehicle"; // "vehicle" or "item", vehicle being object placed or item as in magazine/backpack/storage item
		recipeCreate = "";
		persistent = 0;
		buildDistance = 0;
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