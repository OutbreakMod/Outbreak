class soda: CA_Magazine
{
	displayName = "Soda Can";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\soda.paa";
	model = "a3\structures_f\Items\Food\Can_V1_F";
	descriptionShort = "";
	
	class Nutrition {
		energy = 20;
		water = 150;
	}
	
	class cfgItemActions {
		doubleClick = "['soda'] call player_consume;";
	};
};