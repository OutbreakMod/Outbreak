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
		class _xx_bandage
		{
			name = "bandage";
			count = 5;
		};
		class _xx_elasticbandage
		{
			name = "elasticbandage";
			count = 4;
		};
		class _xx_morphine
		{
			name = "morphine";
			count = 2;
		};
		class _xx_blood
		{
			name = "blood";
			count = 3;
		};
		class _xx_epinephrine
		{
			name = "epinephrine";
			count = 2;
		};
		class _xx_ibuprofen
		{
			name = "epinephrine";
			count = 2;
		};
	};
};