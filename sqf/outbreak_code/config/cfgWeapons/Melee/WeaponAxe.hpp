class WeaponAxe : Launcher_Base_F {
	
	scope = 2;
	displayName = "Splitting Axe";
	model = "a3\structures_f\Items\Tools\Axe_F";
	picture = "\outbreak_assets\textures\items\axe.paa";
	UiPicture = "\outbreak_assets\textures\items\axe.paa";
	handAnim[] = {"OFP2_ManSkeleton", "\outbreak_assets\anim\hatch_hold.rtm"};
	maxZeroing = 50;
	magazines[] = {"hatchet_swing"};
	
	class WeaponSlotsInfo : WeaponSlotsInfo {
		mass = 10;
	};
	
	cursor = "EmptyCursor";
	cursorAim = "throw";
	cursorSize = 1;
	
};