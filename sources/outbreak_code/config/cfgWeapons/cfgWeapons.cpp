class CfgWeapons {

	#include "Revolver\Revolver.cpp"
	#include "1911\1911.cpp"
	#include "DMR\DMR.cpp"
	#include "FNFAL\FNFAL.cpp"
	
	class CUP_arifle_AK_Base;

	#include "AK\AK74.cpp"
	#include "AK\AKM.cpp"
	#include "AK\AK74M.cpp"
	#include "AK\AKS74U.cpp"
	#include "AK\Sa58P.cpp"
	
	class InventoryItem_Base_F;	// External class reference
	class ItemCore;	// External class reference
	class UniformItem;

	class MOD_Uniform_Base : ItemCore {
		scope = 0;
		allowedSlots[] = {901};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	
	#include "..\cfgUniforms\Civillian.cpp"
	#include "..\cfgUniforms\Wild.cpp"
	#include "..\cfgUniforms\Industrial.cpp"
	
	// Uniforms
};