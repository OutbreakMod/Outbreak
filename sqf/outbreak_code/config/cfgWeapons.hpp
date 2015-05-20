class CfgWeapons
{
	/*extern*/ class InventoryItem_Base_F;
	/*extern*/ class ItemCore;
	/*extern*/ class Pistol;
	class Pistol_Base_F: Pistol {
		/*extern*/ class WeaponSlotsInfo;
	};

	class Hatchet: Pistol_Base_F {
		scope = 2;
		model = "\outbreak_assets\models\hatchet.p3d";
		picture = "\outbreak_assets\textures\hatchet_icon.paa";
		magazines[] = {"hatchet_swing"};
		displayname = "Hatchet";
		descriptionShort = "Hatchet";
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		weaponInfoType = "RscWeaponEmpty";
		handanim[] ={"OFP2_ManSkeleton","\outbreak_assets\anim\hatch_hold.rtm"};

		class WeaponSlotsInfo {
			mass = 20;
		};
	};
};