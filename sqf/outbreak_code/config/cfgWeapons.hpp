class Mode_SemiAuto;	// External class reference
class MuzzleSlot;	// External class reference

class CfgWeapons
{
	class ItemWatch;
	class outbreak_tent: ItemWatch
	{
		displayName = "Pitchable Tent";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\outbreak_images\outbreak_sleeping_bag.paa";
		model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F";
		descriptionShort = "";
	};
	
	class outbreak_fireaxe: ItemWatch
	{
		displayName = "Fire Axe";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\images\axe.paa";
		model = "a3\structures_f\Items\Tools\Axe_fire_F";
		descriptionShort = "";
	};
};