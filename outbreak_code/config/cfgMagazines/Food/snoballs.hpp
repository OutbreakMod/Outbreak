class snoballs: CA_Magazine
{
	displayName = "Snoballs";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\snoballs.paa";
	descriptionShort = "";
	
	class Nutrition {
		energy = 20;
		water = -10;
	}
	
	class cfgItemActions {
		doubleClick = "['snoballs'] call player_consume;";
	};
};
