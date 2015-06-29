class CfgBuildingType
{
	class Default {
		lootMax = 0;
		lootMin = 0;
		lootCategories[] = {};
		positions[] = {};
		lootRespawnSeconds = 300; // default 5 minute respawn timer
		
	}
	
	// Military
	class Land_SS_hangar : Default {
		lootMin = 1;
		lootCategories[] = 
		{
			"GeneralTools", 
			"AssaultRifles", 
			"MilitaryTools", 
			"CivillianBackpacks", 
			"Industrial", 
			"Magazines", 
			"SubmachineGuns", 
			"Attachments"
		};
		positions[] = {{-13.0562,-17.6318,-5.87253},{-12.9907,20.873,-5.87253},{12.7217,22.6377,-5.87253},{1.80469,3.94238,-5.87253},{13.1997,-18.3457,-5.87253}};
		lootRespawnSeconds = 600;
	};
	
	class Land_Mil_Barracks_i : Default {
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
		lootMin = 2;
		lootCategories[] = {
			"GeneralTools", 
			"MilitaryTools", 
			"AssaultRifles", 
			"CivillianPistols", 
			"Magazines", 
			"SubmachineGuns", 
			"Attachments"
		};
		positions[] = {{7.33203,-1.104,-1.0787},{2.00684,-0.88623,-1.0787},{6.10938,3.34473,-1.0787},{1.90332,3.67188,-5.51367},{8.71387,3.8042,-9.6387}};
		lootRespawnSeconds = 600;
	};
	
	class CampEast_EP1 : Default {
		lootMin = 0;
		lootCategories[] = 
		{
			"GeneralTools", 
			"MilitaryTools", 
			"AssaultRifles", 
			"CivillianPistols", 
			"Medical", 
			"MedicalGeneral", 
			"CivillianFoodStorage",
			"Magazines", 
			"SubmachineGuns", 
			"Attachments"
		};
		positions[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
		lootRespawnSeconds = 600;
	};
	
	class CampEast : Default {
		lootMin = 0;
		lootCategories[] = 
		{
			"GeneralTools", 
			"MilitaryTools", 
			"AssaultRifles", 
			"CivillianPistols", 
			"Medical", 
			"MedicalGeneral", 
			"CivillianFoodStorage",
			"Magazines", 
			"SubmachineGuns", 
			"Attachments"
		};
		positions[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
		lootRespawnSeconds = 600;
	};
	
	class Land_tent_east : Default {
		lootMin = 0;
		lootCategories[] = 
		{
			"GeneralTools", 
			"MilitaryTools", 
			"AssaultRifles", 
			"CivillianPistols", 
			"Medical", 
			"MedicalGeneral", 
			"CivillianFoodStorage",
			"Magazines", 
			"SubmachineGuns", 
			"Attachments"
		};
		positions[] = {{-0.670898,0.95459,-1.71049},{1.68506,-2.43384,-1.71049},{-1.76318,-1.62646,-1.71049}};
		lootRespawnSeconds = 600;
	};
	
	class Land_Mil_Guardhouse: Default {
		lootMin = 0;
		lootCategories[] = 
		{
			"GeneralTools", 
			"AssaultRifles", 
			"CivillianPistols", 
			"MedicalGeneral", 
			"CivillianFoodStorage",
			"Magazines", 
			"Attachments"
		};
		positions[] = {{-2.44727,0.250977,-1.70563},{-2.44873,3.00293,-1.70285}};
	};
	
	// heli crash 
	
	//NATO
	class Land_Wreck_Heli_Attack_02_F : Default {
		lootMin = 0;
		lootCategories[] = {
			"GeneralTools", 
			"MilitaryTools", 
			"USHelicrash", 
			"HighCaliberRifles", 
			"Medical"
		};
		positions[] = {};
	};

	class MOD_UH1YWreck : Default {
		lootMin = 0;
		lootCategories[] = {
			"GeneralTools", 
			"MilitaryTools", 
			"USHelicrash", 
			"HighCaliberRifles", 
			"Medical"
		};
		positions[] = {};
	};	
	
	//RUSSIAN
	class MOD_Mi8Wreck : Default {
		lootMin = 0;
		lootCategories[] = {
			"GeneralTools", 
			"MilitaryTools", 
			"RUHelicrash", 
			"SniperRifles", 
			"Medical"
		};
		positions[] = {};
	};

	class Mi8Wreck : Default {
		lootMin = 0;
		lootCategories[] = {
			"GeneralTools", 
			"MilitaryTools", 
			"RUHelicrash", 
			"SniperRifles", 
			"Medical"
		};
		positions[] = {};
	};
	
	// Medical
	
	class Land_A_hospital : Default {
		lootMin = 3;
		lootCategories[] = 
		{
			"GeneralTools", 
			"Medical", 
			"MedicalGeneral", 
		};
		positions[] = {{0.79834,-1.16895,-7.33966},{-7.2334,-2.63574,-7.33966},{-16.3687,-2.4043,-7.33966},{-12.2847,-3.19434,-7.33966},{4.24268,-3.59375,-7.33966},{-3.2666,-0.925781,-7.33966},{6.85693,-2.75098,-7.33966},{11.0151,-3.9541,-7.33966},{16.8198,-4.71094,-7.33966},{-1.6875,5.47168,-7.4494},{12.7476,0.144531,3.29184},{10.2661,-1.21582,3.29184}};
	};
	
	// civillian
	
	class Land_A_GeneralStore_01a : Default {
		lootMin = 5;
		lootCategories[] = {
			"GeneralTools", 
			"Supermarket", 
			"CivillianPistols", 
			"CivillianBackpacks", 
			"CookingUtilities", 
			"CivillianMagazines"
		};
		positions[] = {{13.2969,4.94678,-1.20155},{2.97559,7.32373,-1.20155},{-8.35352,-0.0244141,-1.20155},{7.78223,4.45801,-1.20155},{6.59863,-0.292969,-1.20155},{-6.92285,-1.6709,-1.20155},{11.9189,-2.81885,-1.20155},{-1.85547,-2.16162,-1.20155},{12.4678,4.51172,-1.20155},{12.2119,6.25098,-0.301548},{12.1895,3.68262,0.0484505},{11.8174,6.31689,-0.65155},{-8.67676,-2.41064,-1.13155},{-4.2002,-3.14355,-0.351551},{-0.165039,-1.3457,-0.351551},{14.6006,-1.38281,-0.351551},{3.03809,-5.03418,-0.351551},{0.512695,3.40527,-0.31155},{4.77637,6.76172,-0.301548},{7.27539,0.938477,-0.621552},{3.96777,1.00488,-0.621552},{0.389648,0.95459,-0.621552},{5.04004,3.44287,-0.65155},{1.85254,6.4248,-0.65155},{-3.65723,6.61133,-0.20155},{-4.39746,4.46191,-0.691551},{6.9248,6.38574,-1.01155},{2.77637,3.38477,-1.01155},{-0.217773,6.68066,-1.01155},{4.49707,-4.98828,0.408451},{-2.33203,-1.35205,0.408451},{2.0127,-1.36572,0.408451},{6.39746,-3.04395,0.408451},{14.6045,-0.722168,0.408451},{-2.43164,-3.73682,0.02845},{-4.77539,-1.35986,0.02845},{-0.436523,-3.04297,0.02845},{14.6104,-2.17139,0.02845},{12.6592,0.830078,0.34845},{4.00684,-3.15039,-0.351551},{2.7334,-3.0415,-0.731548},{-2.67676,-1.36133,-0.731548},{-1.00488,-5.00537,-0.731548},{8.34863,-1.43018,-0.731548},{1.8291,3.77197,-0.661549}};
	};
	
	class Land_A_GeneralStore_01 : Default {
		lootMin = 5;
		lootCategories[] = {
			"GeneralTools", 
			"Supermarket", 
			"CivillianPistols", 
			"CivillianBackpacks", 
			"CookingUtilities", 
			"CivillianMagazines"
		};
		positions[] = {{11.8149,1.27979,-1.20155},{5.10449,1.61377,-1.20155},{1.70215,3.4292,-1.20155},{-0.771973,2.04102,-1.20155},{-3.59473,-6.04688,-1.20155},{-2.38428,-5.82202,-1.20155},{10.5171,-6.46729,-1.20155},{12.8472,-4.97754,-1.20155},{8.63623,-3.65381,-1.20155},{-3.22852,-10.0454,-1.21081},{11.0537,-0.321289,-0.661549},{11.0303,2.8833,0.0484514},{10.6646,1.86377,-0.651548},{6.66162,-2.69971,-0.611548},{6.02979,-2.6416,-0.611548},{2.16553,-2.68262,-0.611548},{-1.36963,-2.75684,-0.611548},{-0.919434,-0.283936,-0.301549},{0.583008,-0.308594,-1.01155},{0.804199,3.0752,-0.311549},{4.90234,3.04053,0.0484514},{-5.73779,0.694824,-0.20155},{0.796875,0.0898438,-0.301549},{2.73145,2.66406,-0.301549},{0.523926,2.81567,-1.01155},{-4.8208,2.87158,-0.701549},{-3.87061,-5.0415,-0.731549},{-4.73096,-5.00537,0.408451},{-2.1792,-5.02222,-0.351549},{-3.39795,-6.95508,-0.731549},{-3.58203,-7.24365,-0.731549},{-3.49756,-7.12695,0.408451},{-9.95215,-6.05859,0.348451},{13.4136,-5.93457,0.408451},{13.4463,-4.45898,0.028451},{13.4424,-6.20215,-0.351549},{2.93018,-8.67773,-0.351549},{1.53516,-6.79199,-0.351549},{7.16211,-5.12427,-0.351549},{6.79346,-5.11816,-0.73155},{2.87158,-6.91943,-0.73155},{0.0541992,-5.03271,-0.73155},{-1.979,-8.6875,-0.73155},{-5.84424,-5.04883,-0.73155},{-6.99268,-5.06836,-1.11155},{5.23535,-6.8335,-1.11155},{0.290039,-8.68701,-1.11155},{-0.649414,-8.68115,0.40845},{-0.983398,-9.56299,-1.21082}};
	};
	
	class Land_A_Pub_01 : Default {
		lootMin = 5;
		lootCategories[] = {
			"GeneralTools", 
			"CivillianPistols", 
			"CivillianBackpacks", 
			"CookingUtilities", 
			"CivillianFoodStorage", 
			"MiscMedical", 
			"CivillianMagazines"
		};
		positions[] =  {{1.17188,5.7522,-5.75623},{6.46191,-1.73706,-5.01623},{6.46777,1.47949,-5.75623},{0.975098,-5.80859,-5.75621},{-5.79736,-2.57813,-1.79123},{-7.35303,-3.7627,-1.79123},{4.56885,0.998291,-1.79123},{3.45947,0.236328,-1.79123},{1.91504,6.302,-1.79123},{0.114258,2.17432,-1.79123},{6.52832,6.10889,-1.79123},{0.555176,0.169189,-1.79123},{-4.37793,-2.64038,-5.75623},{-7.1709,-1.76855,-5.75623}};
	};
	
	class Land_HouseV2_02_Interier : Default {
		lootMin = 2;
		lootCategories[] = {
			"GeneralTools", 
			"CivillianPistols", 
			"CivillianBackpacks", 
			"CookingUtilities", 
			"CivillianFoodStorage", 
			"MiscMedical", 
			"CivillianMagazines"
		};
		positions[] = {{6.97412,1.26904,-5.53068},{4.21631,6.56396,-5.53068},{-5.94922,-1.28955,-5.53068},{-3.31494,6.44287,-5.53068}};
	};
	
	class Land_HouseV2_04_interier : Default {
		lootMin = 0;
		lootCategories[] = {
			"GeneralTools", 
			"CivillianPistols", 
			"CivillianBackpacks", 
			"CookingUtilities", 
			"CivillianFoodStorage", 
			"MiscMedical", 
			"CivillianMagazines"
		};
		positions[] = {{-5.08826,3.13818,-5.73971},{7.37061,6.52881,-5.73873},{1.75281,3.70752,-5.73953},{-3.75183,7.1626,-5.73842},{0.292725,1.27441,-2.93809}};
	};
	
	// school
	
	class Land_A_Office01 : Default {
		lootMin = 5;
		lootCategories[] = {"GeneralTools", "CivillianPistols", "CivillianClothes", "CivillianBackpacks", "CivillianMagazines"};
		positions[] = {{-7.84912,6.3855,-4.528},{3.84424,3.27051,-4.528},{-0.0383301,3.51733,-4.528},{5.37695,5.63379,-4.528},{15.5393,-1.90015,-4.528},{13.8057,-2.3811,-4.528},{10.114,3.44849,-4.528},{10.3008,6.32495,-4.528},{1.71021,1.66675,-4.528},{1.58032,5.87671,-2.028},{-0.599854,7.08984,-2.028},{3.87769,6.84229,-2.028},{-7.6709,6.72485,-2.038},{-4.729,4.19556,-2.028},{-7.93091,3.2041,-2.038},{10.2354,-1.9187,-2.018},{6.9812,-4.30933,-2.038},{15.4075,6.03198,-2.038},{13.9285,3.40649,-2.038},{0.163086,3.43286,0.472002},{7.13892,3.64844,0.471998},{1.71973,-1.40967,6.72491},{-0.443359,0.61499,-2.028},{-5.22144,-3.69971,-2.028},{3.50342,5.28027,-3.668},{5.68286,4.95898,-4.048},{0.895508,4.98511,-3.288},{2.42017,4.98291,-2.908},{15.8838,-2.62256,-2.908},{4.74072,6.75391,-0.938002},{7.69507,-0.465332,-1.618},{10.7341,-1.90918,-1.158},{6.34229,-2.73242,-0.398003},{-4.86572,7.16187,-0.988003},{-4.27173,4.2207,-0.778002},{-4.56543,5.48193,-1.348},{-8.21387,2.04932,-2.028},{12.6631,2.83398,-1.918},{12.8892,2.82178,-0.778002},{11.5281,7.08887,-1.338},{11.3428,5.02344,-1.158},{11.636,6.34937,-1.338},{-3.802,4.13525,1.71201},{0.720947,3.55957,0.952003},{-3.78076,4.44727,0.952003},{10.7363,3.28833,-3.668},{6.46191,5.13013,-2.908},{7.03906,6.25537,-4.098},{6.68823,5.81177,-3.818},{10.7056,4.13135,-3.288},{2.86792,-0.489014,6.72491}};
	};

	
	// Industrial
	
	class Land_A_BuildingWIP : Default {
		lootMin = 6;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{-15.4871,-9.755,-6.53698},{-10.4043,-9.76697,-6.53213},{-12.0098,-5.50208,-6.53936},{-21.5681,-9.69409,-6.54067},{-23.7563,8.18347,-6.45811},{2.82544,11.3822,-6.47826},{-7.49634,-9.24609,-6.52115},{6.21216,7.7356,-6.41615},{-9.29541,0.683716,-6.53778},{16.8376,2.03186,-2.54291},{4.77661,-9.35681,-1.50389},{-20.3762,-2.86389,-2.53182},{-14.3564,-9.68604,-2.5341},{-24.1724,7.65405,-2.53182},{1.15796,8.03552,-2.53182},{-24.0901,11.4227,1.47364},{-22.1218,11.8442,1.47786},{-22.7849,10.4189,1.47402},{-8.66797,5.81238,1.47396},{-11.4856,-2.29419,2.50674},{-15.6948,-13.5236,5.46682},{-8.00171,-1.07678,5.31147},{8.66626,-8.14514,5.344},{11.5269,2.50977,-6.52237},{-15.926,-17.5713,-6.53193},{-23.8391,0.109863,-6.47638},{-24.2957,2.29199,-2.53182},{-7.6853,11.9902,-2.53182},{-17.7314,1.81299,-2.53182},{2.94116,6.97754,1.47579},{-9.39014,-9.62451,1.47428},{-24.1311,9.47656,5.46242}};
	};

	class Land_Hangar_2 : Default {
		lootMin = 2;
		lootCategories[] = {"GeneralTools", "Industrial", "CivillianPistols", "Magazines"};
		positions[] = {{-13.1816,10.4204,-2.56318},{-0.127441,-2.88794,-2.56318},{0.291992,3.94775,-2.56318},{8.94482,6.87793,-2.56318},{-13.688,-4.67871,-2.56318},{3.4248,-8.1499,-2.56318}};
	};

	class Land_Ind_Workshop01_L : Default {
		lootMin = 1;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{3.89063,-4.09888,-1.31299},{1.80273,-1.88599,-1.31412},{-0.928223,4.50635,-1.31364}};
	};

	class Land_Ind_Workshop01_04 : Default {
		lootMin = 1;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{-1.62207,-6.37305,-1.52724},{-0.118408,-3.88281,-1.52788},{-1.01611,2.13428,-1.53099}};
	};

	class Land_Ind_Workshop01_02 : Default {
		lootMin = 0;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{1.47144,-0.825195,-1.42987},{-1.29663,-0.373047,-1.42896}};
	};
	
	class Land_Ind_Workshop01_01 : Default {
		lootMin = 0;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{1.31201,-2.71387,-1.29234},{-0.819336,0.449219,-1.29946}};
	};
	
	class Land_Barn_W_01 : Default {
		lootMin = 0;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{-4.45776,14.2153,-2.71607},{4.34277,-6.15088,-2.57279}};
	};
	
	class Land_Barn_Metal : Default {
		lootMin = 1;
		lootCategories[] = {"GeneralTools", "Industrial", "Magazines"};
		positions[] = {{-8.18506,19.9023,-5.44214},{4.70117,17.2849,-5.44214},{1.31738,-7.94946,-5.44214},{-7.74316,-20.5955,-5.44214}};
	};
	
	// hunting
	
	class Land_Farm_Cowshed_a: Default {
		lootMin = 2;
		lootCategories[] = {"GeneralTools", "CivillianFoodStorage", "CivillianMagazines", "Farm"};
		positions[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	
	class Land_Farm_Cowshed_b: Default {
		lootMin = 0;
		lootCategories[] = {"GeneralTools", "CivillianFoodStorage", "Farm", "CivillianMagazines"};
		positions[] = {{-3.26782,2.71875,-3.0311},{5.41699,-2.57813,-3.04111}};
	};
	
	class Land_Farm_Cowshed_c: Default {
		lootMin = 0;
		lootCategories[] = {"GeneralTools", "CivillianFoodStorage", "Farm", "CivillianMagazines"};
		positions[] = {{0.625,-2.61133,-3.06583}};
	};
	
	class Land_stodola_old_open: Default {
		lootMin = 2;
		lootCategories[] = {"GeneralTools", "CivillianFoodStorage", "Farm", "CivillianMagazines"};
		positions[] = {{2.5437,-10.6599,2.96444},{-0.4021,-10.6228,2.96444},{-2.56641,-10.8538,-0.995487},{4.6665,3.45386,-5.08055},{-2.24414,10.396,-5.08055},{3.08691,9.24976,-5.08055},{-1.12744,10.5359,-0.993513},{-1.27563,10.6184,2.96444},{2.99268,10.7668,2.96444},{4.35425,-10.5923,-5.08055},{-2.47363,-5.49194,-5.08055}};
	};
	
	class Land_stodola_open: Default {
		lootMin = 1;
		lootCategories[] = {"GeneralTools", "CivillianFoodStorage", "Farm", "CivillianMagazines"};
		positions[] = {{-3.77881,6.2478,-4.11348},{1.59106,6.31494,-4.10928},{-3.94727,-1.95605,-4.15359},{-0.440918,-3.91187,-4.1938}};
	};
	
	class Land_Misc_deerstand: Default {
		lootMin = 0;
		lootCategories[] = {"GeneralTools", "CivillianFoodStorage", "MiscMedical", "Hunting", "Magazines", "CivillianMagazines"};
		positions[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
		lootRespawnSeconds = 600; // ten minutes
	};
	//Land_Ind_Workshop01_01
	//Land_Ind_Workshop01_02
	//Land_Ind_Workshop01_04
	//Land_Ind_Workshop01_L
	//Land_Hangar_2
	//Land_A_BuildingWIP
}