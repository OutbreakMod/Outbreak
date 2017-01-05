class cannedfood: CA_Magazine
{
	displayName = "Baked Beans";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\bakedbeans.paa";
	model="\A3\structures_f_epa\Items\Food\BakedBeans_F";
	descriptionShort = "";
	
	class Nutrition {
		energy = 90;
		water = 50;
	}
	
	class cfgItemActions {
		doubleClick = "['cannedfood'] call player_consume;";
	};
};
