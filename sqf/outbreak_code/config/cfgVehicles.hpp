class CfgVehicles
{
	class GroundWeaponHolder;
	
	class Sack0: GroundWeaponHolder
	{
		scope = 2;
		vehicleClass = "Medical";
		displayName = "Medical Supplies";
		model = "a3\structures_f\Civ\Market\Sack_F";

		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
		
	
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
};