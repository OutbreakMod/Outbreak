class CfgVehicles
{
	class GroundWeaponHolder;	
	class MedicalBox: GroundWeaponHolder
	{
		scope = 2;
		vehicleClass = "Medical";
		displayName = "Medical Supplies";
		model = "a3\structures_f\Civ\Market\CratesShabby_F";

		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_sc_bandage
			{
				name = "sc_bandage";
				count = 5;
			};
			class _xx_sc_elasticbandage
			{
				name = "sc_elasticbandage";
				count = 4;
			};
			class _xx_sc_morphine
			{
				name = "sc_morphine";
				count = 2;
			};
			class _xx_sc_blood
			{
				name = "sc_blood";
				count = 3;
			};
			class _xx_sc_epinephrine
			{
				name = "sc_epinephrine";
				count = 2;
			};
			class _xx_sc_ibuprofen
			{
				name = "sc_epinephrine";
				count = 2;
			};
		};
	};

	class OutbreakBasket: GroundWeaponHolder
	{
		scope = 2;
		vehicleClass = "Market";
		displayName = "Basket";
		model = "a3\structures_f\Civ\Market\Basket_F";
		
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
	
	//http://www.sirlondon.net/arma3/library.php?startpage=3&startpage=1
	
	class Land_TentA_F;
	class OutbreakTent: Land_TentA_F {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_OutbreakTent";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};
	
	class Land_TentDome_F;
	class OutbreakTentDome: Land_TentDome_F {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_OutbreakTent";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};

	class Land_cargo_house_slum_F;
	class OutbreakShackV4: Land_cargo_house_slum_F {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_OutbreakTent";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};

	class Land_Slum_House01_F;
	class OutbreakShackV3: Land_Slum_House01_F {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_OutbreakTent";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};

	class Land_Slum_House03_F;
	class OutbreakShackV2: Land_Slum_House03_F {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_OutbreakTent";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};

	class Land_Slum_House02_F;
	class OutbreakShackV1: Land_Slum_House02_F {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
		create = "WeaponHolder_OutbreakTent";
		constructioncount = 1;
		offset[] = {0,2.5,0};
	};

	class WeaponHolder_OutbreakTent: GroundWeaponHolder {
		
		scope = 2;
		displayName = "Tent";
		
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_ItemTentOld {
				item = "outbreak_tent";
				count = 1;
			};
		};
	};
};