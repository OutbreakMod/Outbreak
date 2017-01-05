class rice: CA_Magazine
{
	displayName = "Rice";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\rice.paa"
	model="\A3\structures_f_epa\Items\Food\RiceBox_F";
	descriptionShort = "";
	
	class Nutrition {
		energy = 450;
		water = -300;
	}
	
	class cfgItemActions {
		doubleClick = "['rice'] call player_consume;";
	};
};
