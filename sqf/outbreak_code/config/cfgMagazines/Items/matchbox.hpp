class matchbox: CA_Magazine
{
	displayName = "Matchbox";
	count = 1;
	picture = "\outbreak_assets\textures\items\matchbook.paa";
	descriptionShort = "";
		
	class ItemInfo {
		mass = 1;
	}; 
	
	class ItemActions {
		doubleClick = "_this call create_fireplace;";
	};
};
