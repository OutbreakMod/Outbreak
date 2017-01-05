class corn: CA_Magazine
{
	displayName = "Corn";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\corn.paa";
	descriptionShort = "";
	
	class Nutrition {
		energy = 700;
		water = -200;
	}
	
	class cfgItemActions {
		doubleClick = "['corn'] call player_consume;";
	};
};
