class bandage: CA_Magazine
{
	displayName = "Bandage";
	count = 1;
	class ItemInfo
		{
				mass = 1;
		}; 
	picture = "\addons\outbreak_assets\textures\items\bandage.paa";
	descriptionShort = "Stops bleeding open wounds and potential infection";
	model="\A3\structures_f_epa\Items\medical\bandage_F";
	
	class cfgItemActions {
		doubleClick = "[objNull, objNull, player] call player_apply_morphine;";
	};
};
