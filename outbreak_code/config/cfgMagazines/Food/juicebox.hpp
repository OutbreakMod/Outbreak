class juicebox: CA_Magazine
{
	displayName = "Juice Box";
	count = 1;
	class ItemInfo
		{
				mass = 1;
		}; 
	picture = "\addons\outbreak_assets\textures\items\juicebox.paa";
	model = "a3\structures_f\Items\Food\Can_V2_F";
	descriptionShort = "";
	
	class Nutrition {
		energy = 80;
		water = 120;
	}
	
	class cfgItemActions {
		doubleClick = "['juicebox'] call player_consume;";
	};
};