class CfgBuildingType
{
	class Default {
		lootMax = 0;
	}
	
	// Military
	class Land_SS_hangar : Default {
		lootMin = 4;
		lootCategories[] = {"GeneralTools", "AssaultRifles", "MilitaryTools"};
		positions[] = {{-13.0562,-17.6318,-5.87253},{-12.9907,20.873,-5.87253},{12.7217,22.6377,-5.87253},{1.80469,3.94238,-5.87253},{13.1997,-18.3457,-5.87253}};
	};
	
	class Land_Mil_Barracks_i : Default {
		lootMin = 5;
		lootCategories[] = {"GeneralTools", "MilitaryTools", "AssaultRifles", "SniperRifles"};
		positions[] = {{4.56494,-2.67383,-1.14822},{0.312988,1.54492,-1.09824},{-2.95361,1.49414,-1.11823},{-3.39111,-1.99023,-0.708221},{-6.68604,-1,0.0917664},{-8.94238,-2.52441,-1.09824},{-0.59668,-1.49609,-1.10825},{3.03467,-1.00586,0.0917664},{-0.214355,-2.19531,0.0917664},{-8.93018,1.53906,-1.09824}};
	};
	
	// medical
	
	class Land_A_hospital : Default {
		lootMin = 5;
		lootCategories[] = {"Medical", "MedicalGeneral"};
		positions[] = {{0.79834,-1.16895,-7.33966},{-7.2334,-2.63574,-7.33966},{-16.3687,-2.4043,-7.33966},{-12.2847,-3.19434,-7.33966},{4.24268,-3.59375,-7.33966},{-3.2666,-0.925781,-7.33966},{6.85693,-2.75098,-7.33966},{11.0151,-3.9541,-7.33966},{16.8198,-4.71094,-7.33966},{-1.6875,5.47168,-7.4494},{12.7476,0.144531,3.29184},{10.2661,-1.21582,3.29184}};
	};
	
	// civillian
	
	class Land_A_GeneralStore_01a : Default {
		lootMin = 5;
		lootCategories[] = {"GeneralTools", "Food", "CivillianPistols"};
		positions[] = {{13.2969,4.94678,-1.20155},{2.97559,7.32373,-1.20155},{-8.35352,-0.0244141,-1.20155},{7.78223,4.45801,-1.20155},{6.59863,-0.292969,-1.20155},{-6.92285,-1.6709,-1.20155},{11.9189,-2.81885,-1.20155},{-1.85547,-2.16162,-1.20155},{12.4678,4.51172,-1.20155},{12.2119,6.25098,-0.301548},{12.1895,3.68262,0.0484505},{11.8174,6.31689,-0.65155},{-8.67676,-2.41064,-1.13155},{-4.2002,-3.14355,-0.351551},{-0.165039,-1.3457,-0.351551},{14.6006,-1.38281,-0.351551},{3.03809,-5.03418,-0.351551},{0.512695,3.40527,-0.31155},{4.77637,6.76172,-0.301548},{7.27539,0.938477,-0.621552},{3.96777,1.00488,-0.621552},{0.389648,0.95459,-0.621552},{5.04004,3.44287,-0.65155},{1.85254,6.4248,-0.65155},{-3.65723,6.61133,-0.20155},{-4.39746,4.46191,-0.691551},{6.9248,6.38574,-1.01155},{2.77637,3.38477,-1.01155},{-0.217773,6.68066,-1.01155},{4.49707,-4.98828,0.408451},{-2.33203,-1.35205,0.408451},{2.0127,-1.36572,0.408451},{6.39746,-3.04395,0.408451},{14.6045,-0.722168,0.408451},{-2.43164,-3.73682,0.02845},{-4.77539,-1.35986,0.02845},{-0.436523,-3.04297,0.02845},{14.6104,-2.17139,0.02845},{12.6592,0.830078,0.34845},{4.00684,-3.15039,-0.351551},{2.7334,-3.0415,-0.731548},{-2.67676,-1.36133,-0.731548},{-1.00488,-5.00537,-0.731548},{8.34863,-1.43018,-0.731548},{1.8291,3.77197,-0.661549}};
	};
	
	class Land_A_GeneralStore_01 : Default {
		lootMin = 5;
		lootCategories[] = {"GeneralTools", "Food", "CivillianPistols", "CivillianClothes", "CivillianBackpacks"};
		positions[] = {{11.8149,1.27979,-1.20155},{5.10449,1.61377,-1.20155},{1.70215,3.4292,-1.20155},{-0.771973,2.04102,-1.20155},{-3.59473,-6.04688,-1.20155},{-2.38428,-5.82202,-1.20155},{10.5171,-6.46729,-1.20155},{12.8472,-4.97754,-1.20155},{8.63623,-3.65381,-1.20155},{-3.22852,-10.0454,-1.21081},{11.0537,-0.321289,-0.661549},{11.0303,2.8833,0.0484514},{10.6646,1.86377,-0.651548},{6.66162,-2.69971,-0.611548},{6.02979,-2.6416,-0.611548},{2.16553,-2.68262,-0.611548},{-1.36963,-2.75684,-0.611548},{-0.919434,-0.283936,-0.301549},{0.583008,-0.308594,-1.01155},{0.804199,3.0752,-0.311549},{4.90234,3.04053,0.0484514},{-5.73779,0.694824,-0.20155},{0.796875,0.0898438,-0.301549},{2.73145,2.66406,-0.301549},{0.523926,2.81567,-1.01155},{-4.8208,2.87158,-0.701549},{-3.87061,-5.0415,-0.731549},{-4.73096,-5.00537,0.408451},{-2.1792,-5.02222,-0.351549},{-3.39795,-6.95508,-0.731549},{-3.58203,-7.24365,-0.731549},{-3.49756,-7.12695,0.408451},{-9.95215,-6.05859,0.348451},{13.4136,-5.93457,0.408451},{13.4463,-4.45898,0.028451},{13.4424,-6.20215,-0.351549},{2.93018,-8.67773,-0.351549},{1.53516,-6.79199,-0.351549},{7.16211,-5.12427,-0.351549},{6.79346,-5.11816,-0.73155},{2.87158,-6.91943,-0.73155},{0.0541992,-5.03271,-0.73155},{-1.979,-8.6875,-0.73155},{-5.84424,-5.04883,-0.73155},{-6.99268,-5.06836,-1.11155},{5.23535,-6.8335,-1.11155},{0.290039,-8.68701,-1.11155},{-0.649414,-8.68115,0.40845},{-0.983398,-9.56299,-1.21082}};
	};
	
	// school
	
	class Land_A_Office01 : Default {
		lootMin = 5;
		lootMax = 16;
		lootCategories[] = {"GeneralTools", "CivillianPistols", "CivillianClothes", "CivillianBackpacks"};
		positions[] = {{-7.84912,6.3855,-4.528},{3.84424,3.27051,-4.528},{-0.0383301,3.51733,-4.528},{5.37695,5.63379,-4.528},{15.5393,-1.90015,-4.528},{13.8057,-2.3811,-4.528},{10.114,3.44849,-4.528},{10.3008,6.32495,-4.528},{1.71021,1.66675,-4.528},{1.58032,5.87671,-2.028},{-0.599854,7.08984,-2.028},{3.87769,6.84229,-2.028},{-7.6709,6.72485,-2.038},{-4.729,4.19556,-2.028},{-7.93091,3.2041,-2.038},{10.2354,-1.9187,-2.018},{6.9812,-4.30933,-2.038},{15.4075,6.03198,-2.038},{13.9285,3.40649,-2.038},{0.163086,3.43286,0.472002},{7.13892,3.64844,0.471998},{1.71973,-1.40967,6.72491},{-0.443359,0.61499,-2.028},{-5.22144,-3.69971,-2.028},{3.50342,5.28027,-3.668},{5.68286,4.95898,-4.048},{0.895508,4.98511,-3.288},{2.42017,4.98291,-2.908},{15.8838,-2.62256,-2.908},{4.74072,6.75391,-0.938002},{7.69507,-0.465332,-1.618},{10.7341,-1.90918,-1.158},{6.34229,-2.73242,-0.398003},{-4.86572,7.16187,-0.988003},{-4.27173,4.2207,-0.778002},{-4.56543,5.48193,-1.348},{-8.21387,2.04932,-2.028},{12.6631,2.83398,-1.918},{12.8892,2.82178,-0.778002},{11.5281,7.08887,-1.338},{11.3428,5.02344,-1.158},{11.636,6.34937,-1.338},{-3.802,4.13525,1.71201},{0.720947,3.55957,0.952003},{-3.78076,4.44727,0.952003},{10.7363,3.28833,-3.668},{6.46191,5.13013,-2.908},{7.03906,6.25537,-4.098},{6.68823,5.81177,-3.818},{10.7056,4.13135,-3.288},{2.86792,-0.489014,6.72491}};
	};
	
	
	// food/supermarket
	
	
	
	// Industrial
	
	//Land_Ind_Workshop01_01
	//Land_Ind_Workshop01_02
	//Land_Ind_Workshop01_04
	//Land_Ind_Workshop01_L
	//Land_Hangar_2
	//Land_A_BuildingWIP
}