class cereal: CA_Magazine
{
	displayName = "Cereal";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\cereal.paa";
	model="\A3\structures_f_epa\Items\Food\CerealsBox_F";
	descriptionShort = "";
	
	class Nutrition {
		energy = 700;
		water = -200;
	}
	
	class cfgItemActions {
		doubleClick = "['cereal'] call player_consume;";
	};
};
