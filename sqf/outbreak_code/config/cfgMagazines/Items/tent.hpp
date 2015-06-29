class tent: CA_Magazine
{
	displayName = "Pitchable Tent";
	count = 1;
	picture = "\outbreak_assets\textures\items\outbreak_sleeping_bag.paa";
	model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F";
	descriptionShort = "";
	
	class ItemInfo {
		mass = 10;
	}; 
	
	class ItemActions {
		doubleClick = "['OutbreakTent'] call create_fireplace;";
	};
};