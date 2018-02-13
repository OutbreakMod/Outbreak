class energy_drink: CA_Magazine
{
	displayName = "Energy Drink";
	count = 1;
	class ItemInfo
		{
				mass = 2;
		}; 
	picture = "\addons\outbreak_assets\textures\items\energydrink.paa"; 
	model = "a3\structures_f\Items\Food\Can_V3_F";
	descriptionShort = "";
	
	class Nutrition {
		energy = 100;
		water = 300;
	}
	
	class cfgItemActions {
		doubleClick = "['energy_drink'] call player_consume;";
	};
};