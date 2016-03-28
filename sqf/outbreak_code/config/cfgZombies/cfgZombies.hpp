class CfgZombies {
	
	#include "cfgZombieClothes.hpp"
};

class CfgFaces {
	class Man_A3;	// External class reference
	class ZombieFace : Man_A3 {
		class Default {
			displayname = "Zombie Face";
			texture = "addons\outbreak_assets\textures\faces\zombie_face_01.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 0;
		};
	};
};