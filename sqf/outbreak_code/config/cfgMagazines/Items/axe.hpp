class axe: CA_Magazine
{
	displayName = "Wooden Axe";
	count = 1;
	picture = "\outbreak_assets\textures\items\axe.paa";
	model = "a3\structures_f\Items\Tools\Axe_F";
	descriptionShort = "A handy tool good for splitting wood and chopping down trees";
	
	class ItemInfo {
		mass = 5;
	};
	
	class cfgItemActions {
		doubleClick = "_this call player_chopWood;";
	};
};