class morphine: CA_Magazine {
	displayName = "Morphine";
	count = 1;
	
	class ItemInfo {
		mass = 1;
	};

	picture = "\addons\outbreak_assets\textures\items\morphine.paa";
	model = "a3\structures_f\Items\Stationery\PencilRed_F";
	descriptionShort = "Used for fixing broken legs";
	
	class cfgItemActions {
		doubleClick = "[objNull, objNull, objNull, player] call player_apply_morphine;";
	};
};