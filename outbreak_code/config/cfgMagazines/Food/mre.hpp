class mre: CA_Magazine
{
	displayName = "MRE";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\mre.paa";
	descriptionShort = "";
	
	class Nutrition {
		energy = 300;
		water = -50;
	}
	
	class cfgItemActions {
		doubleClick = "['mre'] call player_consume;";
	};
};
