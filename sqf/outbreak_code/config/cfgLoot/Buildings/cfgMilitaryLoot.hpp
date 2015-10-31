class Land_SS_hangar : Default {
	zombieClothes = "military";
	lootMin = 1;
	lootCategories[] = 
	{
		"GeneralTools", 
		"AssaultRifles", 
		"MilitaryTools", 
		"CivillianBackpacks",
		"MilitaryPistols",
		"Industrial", 
		"Magazines", 
		"SubmachineGuns", 
		"Attachments"
	};
	positions[] = {{-13.0562,-17.6318,-5.87253},{-12.9907,20.873,-5.87253},{12.7217,22.6377,-5.87253},{1.80469,3.94238,-5.87253},{13.1997,-18.3457,-5.87253}};
	lootRespawnSeconds = 600;
};

class Land_Mil_Barracks_i : Default {
	zombieClothes = "military";
	lootMin = 4;
	lootCategories[] = {
		"GeneralTools", 
		"MilitaryTools", 
		"AssaultRifles", 
		"SniperRifles",
		"Magazines", 
		"SubmachineGuns", 
		"Barracks", 
		"Attachments"
	};
	positions[] = {{4.56494,-2.67383,-1.14822},{0.312988,1.54492,-1.09824},{-2.95361,1.49414,-1.11823},{-3.39111,-1.99023,-0.708221},{-6.68604,-1,0.0917664},{-8.94238,-2.52441,-1.09824},{-0.59668,-1.49609,-1.10825},{3.03467,-1.00586,0.0917664},{-0.214355,-2.19531,0.0917664},{-8.93018,1.53906,-1.09824}};
	lootRespawnSeconds = 1200; // 20 mins for high value loot
};

class Land_Mil_ControlTower : Default {
	zombieClothes = "military";
	lootMin = 2;
	lootCategories[] = {
		"GeneralTools", 
		"MilitaryTools", 
		"AssaultRifles", 
		"MilitaryPistols", 
		"Magazines", 
		"SubmachineGuns", 
		"Attachments"
	};
	positions[] = {{7.33203,-1.104,-1.0787},{2.00684,-0.88623,-1.0787},{6.10938,3.34473,-1.0787},{1.90332,3.67188,-5.51367},{8.71387,3.8042,-9.6387}};
	lootRespawnSeconds = 600;
};

class CampEast_EP1 : Default {
	zombieClothes = "military";
	lootMin = 0;
	lootCategories[] = 
	{
		"GeneralTools", 
		"MilitaryTools", 
		"AssaultRifles", 
		"MilitaryPistols", 
		"Medical", 
		"CivillianFoodStorage",
		"Magazines", 
		"SubmachineGuns", 
		"Attachments"
	};
	positions[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	lootRespawnSeconds = 600;
};

class CampEast : Default {
	zombieClothes = "military";
	lootMin = 0;
	lootCategories[] = 
	{
		"GeneralTools", 
		"MilitaryTools", 
		"AssaultRifles", 
		"MilitaryPistols",
		"Medical", 
		"CivillianFoodStorage",
		"Magazines", 
		"SubmachineGuns", 
		"Attachments"
	};
	positions[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	lootRespawnSeconds = 600;
};

class Land_tent_east : Default {
	zombieClothes = "military";
	lootMin = 0;
	lootCategories[] = 
	{
		"GeneralTools", 
		"MilitaryTools", 
		"AssaultRifles", 
		"MilitaryPistols",
		"Medical", 
		"CivillianFoodStorage",
		"Magazines", 
		"SubmachineGuns", 
		"Attachments"
	};
	positions[] = {{-0.670898,0.95459,-1.71049},{1.68506,-2.43384,-1.71049},{-1.76318,-1.62646,-1.71049}};
	lootRespawnSeconds = 600;
};

class Land_Mil_Guardhouse: Default {
	zombieClothes = "military";
	lootMin = 0;
	lootCategories[] = 
	{
		"GeneralTools", 
		"AssaultRifles", 
		"MilitaryPistols",
		"Medical", 
		"CivillianFoodStorage",
		"Magazines", 
		"Attachments"
	};
	positions[] = {{-2.44727,0.250977,-1.70563},{-2.44873,3.00293,-1.70285}};
	lootRespawnSeconds = 600;
};
