class CfgPatches
{
	class outbreak_items
	{
		units[] = {"outbreak_items"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class sc_all_box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[SC] All Items";
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateWpns";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_sc_bandage
			{
				name = "sc_bandage";
				count = 10;
			};
			class _xx_sc_elasticbandage
			{
				name = "sc_elasticbandage";
				count = 10;
			};
			class _xx_sc_morphine
			{
				name = "sc_morphine";
				count = 10;
			};
			class _xx_sc_epinephrine
			{
				name = "sc_epinephrine";
				count = 10;
			};
			class _xx_sc_tourniquet
			{
				name = "sc_tourniquet";
				count = 10;
			};
			class _xx_sc_cloth
			{
				name = "sc_cloth";
				count = 10;
			};
			class _xx_sc_tape
			{
				name = "sc_tape";
				count = 10;
			};
			class _xx_sc_wires
			{
				name = "sc_wires";
				count = 10;
			};
			class _xx_sc_toolbox
			{
				name = "sc_toolbox";
				count = 10;
			};
			class _xx_sc_scrap
			{
				name = "sc_scrap";
				count = 10;
			};
			class _xx_sc_note
			{
				name = "sc_note";
				count = 10;
			};
			class _xx_sc_mortarshell
			{
				name = "sc_mortarshell";
				count = 10;
			};
			class _xx_sc_money
			{
				name = "sc_money";
				count = 10;
			};
			class _xx_sc_knife
			{
				name = "sc_knife";
				count = 10;
			};
			class _xx_sc_clacker
			{
				name = "sc_clacker";
				count = 10;
			};
			class _xx_sc_cellphone
			{
				name = "sc_cellphone";
				count = 10;
			};
			class _xx_sc_waterbottle
			{
				name = "sc_waterbottle";
				count = 10;
			};
			class _xx_sc_cannedfood
			{
				name = "sc_cannedfood";
				count = 10;
			};
			class _xx_sc_c4
			{
				name = "sc_c4";
				count = 10;
			};
			class _xx_sc_anarchistcookbook
			{
				name = "sc_anarchistcookbook";
				count = 10;
			};
			class _xx_sc_baseball
			{
				name = "sc_baseball";
				count = 10;
			};
			class _xx_sc_basketball
			{
				name = "sc_basketball";
				count = 10;
			};
			class _xx_sc_battery
			{
				name = "sc_battery";
				count = 10;
			};
			class _xx_sc_bedroll
			{
				name = "sc_bedroll";
				count = 10;
			};
			class _xx_sc_bible
			{
				name = "sc_bible";
				count = 10;
			};
			class _xx_sc_book
			{
				name = "sc_book";
				count = 10;
			};
			class _xx_sc_carbattery
			{
				name = "sc_carbattery";
				count = 10;
			};
			class _xx_sc_chips
			{
				name = "sc_chips";
				count = 10;
			};
			class _xx_sc_cigarbox
			{
				name = "sc_cigarbox";
				count = 10;
			};
			class _xx_sc_cigarette
			{
				name = "sc_cigarette";
				count = 10;
			};
			class _xx_sc_cigarettepack
			{
				name = "sc_cigarettepack";
				count = 10;
			};
			class _xx_sc_clipboard
			{
				name = "sc_clipboard";
				count = 10;
			};
			class _xx_sc_cookedmeat
			{
				name = "sc_cookedmeat";
				count = 10;
			};
			class _xx_sc_disinfectant
			{
				name = "sc_disinfectant";
				count = 10;
			};
			class _xx_sc_dogtag
			{
				name = "sc_dogtag";
				count = 10;
			};
			class _xx_sc_files
			{
				name = "sc_files";
				count = 10;
			};
			class _xx_sc_foldedmap
			{
				name = "sc_foldedmap";
				count = 10;
			};
			class _xx_sc_fuelcan
			{
				name = "sc_fuelcan";
				count = 10;
			};
			class _xx_sc_harddrive
			{
				name = "sc_harddrive";
				count = 10;
			};
			class _xx_sc_harmonica
			{
				name = "sc_harmonica";
				count = 10;
			};
			class _xx_sc_iphone
			{
				name = "sc_iphone";
				count = 10;
			};
			class _xx_sc_juicebox
			{
				name = "sc_juicebox";
				count = 10;
			};
			class _xx_sc_lighter
			{
				name = "sc_lighter";
				count = 10;
			};
			class _xx_sc_matchbook
			{
				name = "sc_matchbook";
				count = 10;
			};
			class _xx_sc_mre
			{
				name = "sc_mre";
				count = 10;
			};
			class _xx_sc_penicillin
			{
				name = "sc_penicillin";
				count = 10;
			};
			class _xx_sc_rawmeat
			{
				name = "sc_rawmeat";
				count = 10;
			};
			class _xx_sc_rock
			{
				name = "sc_rock";
				count = 10;
			};
			class _xx_sc_schematic
			{
				name = "sc_schematic";
				count = 10;
			};
			class _xx_sc_sdcard
			{
				name = "sc_sdcard";
				count = 10;
			};
			class _xx_sc_soccerball
			{
				name = "sc_soccerball";
				count = 10;
			};
			class _xx_sc_soda
			{
				name = "sc_soda";
				count = 10;
			};
			class _xx_sc_teddybear
			{
				name = "sc_teddybear";
				count = 10;
			};
			class _xx_sc_tincan
			{
				name = "sc_tincan";
				count = 10;
			};
			class _xx_sc_usbdrive
			{
				name = "sc_usbdrive";
				count = 10;
			};
			class _xx_sc_wallet
			{
				name = "sc_wallet";
				count = 10;
			};
			class _xx_sc_whiskey
			{
				name = "sc_whiskey";
				count = 10;
			};
			class _xx_sc_wood
			{
				name = "sc_wood";
				count = 10;
			};
			class _xx_sc_paintcan
			{
				name = "sc_paintcan";
				count = 10;
			};
			class _xx_sc_snickers
			{
				name = "sc_snickers";
				count = 10;
			};
			class _xx_sc_charms
			{
				name = "sc_charms";
				count = 10;
			};
			class _xx_sc_combat_boots
			{
				name = "sc_combat_boots";
				count = 10;
			};
			class _xx_sc_combat_pants
			{
				name = "sc_combat_pants";
				count = 10;
			};
			class _xx_sc_combat_shirt
			{
				name = "sc_combat_shirt";
				count = 10;
			};
			class _xx_sc_8ball
			{
				name = "sc_8ball";
				count = 10;
			};
			class _xx_sc_ace
			{
				name = "sc_ace";
				count = 10;
			};
			class _xx_sc_axe
			{
				name = "sc_axe";
				count = 10;
			};
			class _xx_sc_barbedwire
			{
				name = "sc_barbedwire";
				count = 10;
			};
			class _xx_sc_beer
			{
				name = "sc_beer";
				count = 10;
			};
			class _xx_sc_boltcutters
			{
				name = "sc_boltcutters";
				count = 10;
			};
			class _xx_sc_carrot
			{
				name = "sc_carrot";
				count = 10;
			};
			class _xx_sc_cereal
			{
				name = "sc_cereal";
				count = 10;
			};
			class _xx_sc_coffee
			{
				name = "sc_coffee";
				count = 10;
			};
			class _xx_sc_corn
			{
				name = "sc_corn";
				count = 10;
			};
			class _xx_sc_dino
			{
				name = "sc_dino";
				count = 10;
			};
			class _xx_sc_dirty_water
			{
				name = "sc_dirty_water";
				count = 10;
			};
			class _xx_sc_energy_drink
			{
				name = "sc_energy_drink";
				count = 10;
			};
			class _xx_sc_gold
			{
				name = "sc_gold";
				count = 10;
			};
			class _xx_sc_green_goo
			{
				name = "sc_green_goo";
				count = 10;
			};
			class _xx_sc_guitar
			{
				name = "sc_guitar";
				count = 10;
			};
			class _xx_sc_gum
			{
				name = "sc_gum";
				count = 10;
			};
			class _xx_sc_hammer
			{
				name = "sc_hammer";
				count = 10;
			};
			class _xx_sc_human_flesh
			{
				name = "sc_human_flesh";
				count = 10;
			};
			class _xx_sc_keycard
			{
				name = "sc_keycard";
				count = 10;
			};
			class _xx_sc_marijuana
			{
				name = "sc_marijuana";
				count = 10;
			};
			class _xx_sc_pipe
			{
				name = "sc_pipe";
				count = 10;
			};
			class _xx_sc_meth
			{
				name = "sc_meth";
				count = 10;
			};
			class _xx_sc_moonshine
			{
				name = "sc_moonshine";
				count = 10;
			};
			class _xx_sc_nails
			{
				name = "sc_nails";
				count = 10;
			};
			class _xx_sc_potassium
			{
				name = "sc_potassium";
				count = 10;
			};
			class _xx_sc_potato
			{
				name = "sc_potato";
				count = 10;
			};
			class _xx_sc_pressure_cooker
			{
				name = "sc_pressure_cooker";
				count = 10;
			};
			class _xx_sc_razor
			{
				name = "sc_razor";
				count = 10;
			};
			class _xx_sc_receiver
			{
				name = "sc_receiver";
				count = 10;
			};
			class _xx_sc_red_goo
			{
				name = "sc_red_goo";
				count = 10;
			};
			class _xx_sc_salisbury_steak
			{
				name = "sc_salisbury_steak";
				count = 10;
			};
			class _xx_sc_sandbag
			{
				name = "sc_sandbag";
				count = 10;
			};
			class _xx_sc_scalpel
			{
				name = "sc_scalpel";
				count = 10;
			};
			class _xx_sc_shiv
			{
				name = "sc_shiv";
				count = 10;
			};
			class _xx_sc_shovel
			{
				name = "sc_shovel";
				count = 10;
			};
			class _xx_sc_snack_cakes
			{
				name = "sc_snack_cakes";
				count = 10;
			};
			class _xx_sc_sugar
			{
				name = "sc_sugar";
				count = 10;
			};
			class _xx_sc_surgical_tubing
			{
				name = "sc_surgical_tubing";
				count = 10;
			};
			class _xx_sc_switchblade
			{
				name = "sc_switchblade";
				count = 10;
			};
			class _xx_sc_syringe
			{
				name = "sc_syringe";
				count = 10;
			};
			class _xx_sc_tire_iron
			{
				name = "sc_tire_iron";
				count = 10;
			};
			class _xx_sc_toaster
			{
				name = "sc_toaster";
				count = 10;
			};
			class _xx_sc_transmitter
			{
				name = "sc_transmitter";
				count = 10;
			};
			class _xx_sc_wrench
			{
				name = "sc_wrench";
				count = 10;
			};
			class _xx_sc_tire
			{
				name = "sc_tire";
				count = 10;
			};
			class _xx_sc_brace
			{
				name = "sc_brace";
				count = 10;
			};
			class _xx_sc_blood
			{
				name = "sc_blood";
				count = 10;
			};
			class _xx_sc_3ds
			{
				name = "sc_3ds";
				count = 10;
			};
			class _xx_sc_bulletcasings
			{
				name = "sc_bulletcasings";
				count = 10;
			};
			class _xx_sc_cardboardbox
			{
				name = "sc_cardboardbox";
				count = 10;
			};
			class _xx_sc_defib
			{
				name = "sc_defib";
				count = 10;
			};
			class _xx_sc_donut
			{
				name = "sc_donut";
				count = 10;
			};
			class _xx_sc_empty_bottle
			{
				name = "sc_emptybottle";
				count = 10;
			};
			class _xx_sc_fire_extinguisher
			{
				name = "sc_fire_extinguisher";
				count = 10;
			};
			class _xx_sc_frying_pan
			{
				name = "sc_frying_pan";
				count = 10;
			};
			class _xx_sc_gameboy
			{
				name = "sc_gameboy";
				count = 10;
			};
			class _xx_sc_gasmask
			{
				name = "sc_gasmask";
				count = 10;
			};
			class _xx_sc_gopro
			{
				name = "sc_gopro";
				count = 10;
			};
			class _xx_sc_headset
			{
				name = "sc_headset";
				count = 10;
			};
			class _xx_sc_ibuprofen
			{
				name = "sc_ibuprofen";
				count = 10;
			};
			class _xx_sc_jumpercables
			{
				name = "sc_jumpercables";
				count = 10;
			};
			class _xx_sc_laptop
			{
				name = "sc_laptop";
				count = 10;
			};
			class _xx_sc_microphone
			{
				name = "sc_microphone";
				count = 10;
			};
			class _xx_sc_nvidiashield
			{
				name = "sc_nvidiashield";
				count = 10;
			};
			class _xx_sc_o2tank
			{
				name = "sc_o2tank";
				count = 10;
			};
			class _xx_sc_passport
			{
				name = "sc_passport";
				count = 10;
			};
			class _xx_sc_pbj
			{
				name = "sc_pbj";
				count = 10;
			};
			class _xx_sc_pcpart1
			{
				name = "sc_pcpart1";
				count = 10;
			};
			class _xx_sc_pcpart2
			{
				name = "sc_pcpart2";
				count = 10;
			};
			class _xx_sc_pet_treats
			{
				name = "sc_pet_treats";
				count = 10;
			};
			class _xx_sc_plate_vest
			{
				name = "sc_plate_vest";
				count = 10;
			};
			class _xx_sc_psvita
			{
				name = "sc_psvita";
				count = 10;
			};
			class _xx_sc_rope
			{
				name = "sc_rope";
				count = 10;
			};
			class _xx_sc_skull
			{
				name = "sc_skull";
				count = 10;
			};
			class _xx_sc_snoballs
			{
				name = "sc_snoballs";
				count = 10;
			};
			class _xx_sc_suitcase
			{
				name = "sc_suitcase";
				count = 10;
			};
			class _xx_sc_tablet
			{
				name = "sc_tablet";
				count = 10;
			};
			class _xx_sc_twinkies
			{
				name = "sc_twinkies";
				count = 10;
			};
			class _xx_sc_weapon_modkit
			{
				name = "sc_weapon_modkit";
				count = 10;
			};
		};
	};
	class sc_medic_box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[SC] Medical Items";
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateWpns";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_sc_bandage
			{
				name = "sc_bandage";
				count = 10;
			};
			class _xx_sc_elasticbandage
			{
				name = "sc_elasticbandage";
				count = 10;
			};
			class _xx_sc_morphine
			{
				name = "sc_morphine";
				count = 10;
			};
			class _xx_sc_epinephrine
			{
				name = "sc_epinephrine";
				count = 10;
			};
			class _xx_sc_tourniquet
			{
				name = "sc_tourniquet";
				count = 10;
			};
			class _xx_sc_disinfectant
			{
				name = "sc_disinfectant";
				count = 10;
			};
			class _xx_sc_penicillin
			{
				name = "sc_penicillin";
				count = 10;
			};
			class _xx_sc_surgical_tubing
			{
				name = "sc_surgical_tubing";
				count = 10;
			};
			class _xx_sc_syringe
			{
				name = "sc_syringe";
				count = 10;
			};
			class _xx_sc_brace
			{
				name = "sc_brace";
				count = 10;
			};
			class _xx_sc_blood
			{
				name = "sc_blood";
				count = 10;
			};
			class _xx_sc_defib
			{
				name = "sc_defib";
				count = 10;
			};
			class _xx_sc_ibuprofen
			{
				name = "sc_ibuprofen";
				count = 10;
			};
		};
	};	
	class sc_obj_box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[SC] Objective Items";
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateWpns";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_sc_note
			{
				name = "sc_note";
				count = 10;
			};
			class _xx_sc_money
			{
				name = "sc_money";
				count = 10;
			};
			class _xx_sc_cellphone
			{
				name = "sc_cellphone";
				count = 10;
			};
			class _xx_sc_clipboard
			{
				name = "sc_clipboard";
				count = 10;
			};
			class _xx_sc_dogtag
			{
				name = "sc_dogtag";
				count = 10;
			};
			class _xx_sc_files
			{
				name = "sc_files";
				count = 10;
			};
			class _xx_sc_foldedmap
			{
				name = "sc_foldedmap";
				count = 10;
			};
			class _xx_sc_harddrive
			{
				name = "sc_harddrive";
				count = 10;
			};
			class _xx_sc_iphone
			{
				name = "sc_iphone";
				count = 10;
			};
			class _xx_sc_schematic
			{
				name = "sc_schematic";
				count = 10;
			};
			class _xx_sc_sdcard
			{
				name = "sc_sdcard";
				count = 10;
			};
			class _xx_sc_usbdrive
			{
				name = "sc_usbdrive";
				count = 10;
			};
			class _xx_sc_wallet
			{
				name = "sc_wallet";
				count = 10;
			};
			class _xx_sc_transmitter
			{
				name = "sc_transmitter";
				count = 10;
			};
			class _xx_sc_receiver
			{
				name = "sc_receiver";
				count = 10;
			};
			class _xx_sc_red_goo
			{
				name = "sc_red_goo";
				count = 10;
			};
			class _xx_sc_green_goo
			{
				name = "sc_green_goo";
				count = 10;
			};
			class _xx_sc_meth
			{
				name = "sc_meth";
				count = 10;
			};
			class _xx_sc_marijuana
			{
				name = "sc_marijuana";
				count = 10;
			};
			class _xx_sc_keycard
			{
				name = "sc_keycard";
				count = 10;
			};
			class _xx_sc_gold
			{
				name = "sc_gold";
				count = 10;
			};
			class _xx_sc_gopro
			{
				name = "sc_gopro";
				count = 10;
			};
			class _xx_sc_laptop
			{
				name = "sc_laptop";
				count = 10;
			};
			class _xx_sc_passport
			{
				name = "sc_passport";
				count = 10;
			};
			class _xx_sc_suitcase
			{
				name = "sc_suitcase";
				count = 10;
			};
			class _xx_sc_tablet
			{
				name = "sc_tablet";
				count = 10;
			};
		};
	};
};
class CfgWeapons
{
	class ItemWatch;
	class outbreak_tent: ItemWatch
	{
		displayName = "Pitchable Tent";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\outbreak_images\outbreak_sleeping_bag.paa";
		model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F";
		descriptionShort = "";
	};
	class sc_bandage: ItemWatch
	{
		displayName = "Bandage";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\bandage.paa";
		descriptionShort = "";
	};
	class sc_elasticbandage: ItemWatch
	{
		displayName = "Elastic Bandage";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\elasticbandage.paa";
		descriptionShort = "";
	};
	class sc_morphine: ItemWatch
	{
		displayName = "Morphine";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\morphine.paa";
		descriptionShort = "";
	};
	class sc_epinephrine: ItemWatch
	{
		displayName = "Epinephrine";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\epinephrine.paa";
		descriptionShort = "";
	};
	class sc_tourniquet: ItemWatch
	{
		displayName = "Tourniquet";
		count = 1;
		class ItemInfo
        	{
            		mass = 3;
        	}; 
		picture = "\outbreak_items\images\tourniquet.paa";
		descriptionShort = "";
	};
	class sc_cloth: ItemWatch
	{
		displayName = "Cloth";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\cloth.paa";
		descriptionShort = "";
	};
	class sc_tape: ItemWatch
	{
		displayName = "Duct Tape";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\tape.paa";
		descriptionShort = "";
	};
	class sc_wires: ItemWatch
	{
		displayName = "Wires";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\wires.paa";
		descriptionShort = "";
	};
	class sc_toolbox: ItemWatch
	{
		displayName = "Toolbox";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\images\toolbox.paa";
		descriptionShort = "";
	};
	class sc_scrap: ItemWatch
	{
		displayName = "Scrap Metal";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\scrap.paa";
		descriptionShort = "";
	};
	class sc_note: ItemWatch
	{
		displayName = "Note";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\note.paa";
		descriptionShort = "";
	};
	class sc_mortarshell: ItemWatch
	{
		displayName = "Mortar Shell";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\mortarshell.paa";
		descriptionShort = "";
	};
	class sc_money: ItemWatch
	{
		displayName = "Money";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\money.paa";
		descriptionShort = "";
	};
	class sc_knife: ItemWatch
	{
		displayName = "Knife";
		count = 1;
		class ItemInfo
        	{
            		mass = 3;
        	}; 
		picture = "\outbreak_items\images\knife.paa";
		descriptionShort = "";
	};
	class sc_clacker: ItemWatch
	{
		displayName = "Clacker";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\clacker.paa";
		descriptionShort = "";
	};
	class sc_cellphone: ItemWatch
	{
		displayName = "Cellphone";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\cellphone.paa";
		descriptionShort = "";
	};
	class sc_cannedfood: ItemWatch
	{
		displayName = "Canned Food";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\cannedfood.paa";
		descriptionShort = "";
	};
	class sc_waterbottle: ItemWatch
	{
		displayName = "Water Bottle";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\waterbottle.paa";
		descriptionShort = "";
	};
	class sc_c4: ItemWatch
	{
		displayName = "C4 Explosive";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\c4.paa";
		descriptionShort = "";
	};
	class sc_anarchistcookbook: ItemWatch
	{
		displayName = "The Anarchist Cookbook";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\anarchistcookbook.paa";
		descriptionShort = "";
	};
	class sc_baseball: ItemWatch
	{
		displayName = "Baseball";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\baseball.paa";
		descriptionShort = "";
	};
	class sc_basketball: ItemWatch
	{
		displayName = "Basketball";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\basketball.paa";
		descriptionShort = "";
	};
	class sc_battery: ItemWatch
	{
		displayName = "Battery";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\battery.paa";
		descriptionShort = "";
	};
	class sc_bedroll: ItemWatch
	{
		displayName = "Bedroll";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\bedroll.paa";
		descriptionShort = "";
	};
	class sc_bible: ItemWatch
	{
		displayName = "Bible";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\bible.paa";
		descriptionShort = "";
	};
	class sc_book: ItemWatch
	{
		displayName = "Book";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\book.paa";
		descriptionShort = "";
	};
	class sc_carbattery: ItemWatch
	{
		displayName = "Car Battery";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\carbattery.paa";
		descriptionShort = "";
	};
	class sc_chips: ItemWatch
	{
		displayName = "Potato Chips";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\chips.paa";
		descriptionShort = "";
	};
	class sc_cigarbox: ItemWatch
	{
		displayName = "Box of Cigars";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\cigarbox.paa";
		descriptionShort = "";
	};
	class sc_cigarette: ItemWatch
	{
		displayName = "Cigarette";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\cigarette.paa";
		descriptionShort = "";
	};
	class sc_cigarettepack: ItemWatch
	{
		displayName = "Pack of Cigarettes";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\cigarettepack.paa";
		descriptionShort = "";
	};
	class sc_clipboard: ItemWatch
	{
		displayName = "Clipboard";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\clipboard.paa";
		descriptionShort = "";
	};
	class sc_cookedmeat: ItemWatch
	{
		displayName = "Cooked Meat";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\cookedmeat.paa";
		descriptionShort = "";
	};
	class sc_disinfectant: ItemWatch
	{
		displayName = "Disinfectant";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\disinfectant.paa";
		descriptionShort = "";
	};
	class sc_dogtag: ItemWatch
	{
		displayName = "Dogtag";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\dogtag.paa";
		descriptionShort = "";
	};
	class sc_files: ItemWatch
	{
		displayName = "Files";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\files.paa";
		descriptionShort = "";
	};
	class sc_foldedmap: ItemWatch
	{
		displayName = "Folded Map";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\foldedmap.paa";
		descriptionShort = "";
	};
	class sc_fuelcan: ItemWatch
	{
		displayName = "Fuel Can";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\images\fuelcan.paa";
		descriptionShort = "";
	};
	class sc_harddrive: ItemWatch
	{
		displayName = "Hard Drive";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\harddrive.paa";
		descriptionShort = "";
	};
	class sc_harmonica: ItemWatch
	{
		displayName = "Harmonica";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\harmonica.paa";
		descriptionShort = "";
	};
	class sc_iphone: ItemWatch
	{
		displayName = "Iphone";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\iphone.paa";
		descriptionShort = "";
	};
	class sc_juicebox: ItemWatch
	{
		displayName = "Juice Box";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\juicebox.paa";
		descriptionShort = "";
	};
	class sc_lighter: ItemWatch
	{
		displayName = "Lighter";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\lighter.paa";
		descriptionShort = "";
	};
	class sc_matchbook: ItemWatch
	{
		displayName = "Matchbook";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\matchbook.paa";
		descriptionShort = "";
	};
	class sc_mre: ItemWatch
	{
		displayName = "MRE";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\mre.paa";
		descriptionShort = "";
	};
	class sc_penicillin: ItemWatch
	{
		displayName = "Penicillin";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\penicillin.paa";
		descriptionShort = "";
	};
	class sc_rawmeat: ItemWatch
	{
		displayName = "Raw Meat";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\rawmeat.paa";
		descriptionShort = "";
	};
	class sc_rock: ItemWatch
	{
		displayName = "Rock";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\rock.paa";
		descriptionShort = "";
	};
	class sc_schematic: ItemWatch
	{
		displayName = "Schematic";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\schematic.paa";
		descriptionShort = "";
	};
	class sc_sdcard: ItemWatch
	{
		displayName = "SD Card";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\sdcard.paa";
		descriptionShort = "";
	};
	class sc_soccerball: ItemWatch
	{
		displayName = "Soccer Ball";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\soccerball.paa";
		descriptionShort = "";
	};
	class sc_soda: ItemWatch
	{
		displayName = "Soda Can";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\soda.paa";
		descriptionShort = "";
	};
	class sc_teddybear: ItemWatch
	{
		displayName = "Teddy Bear";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\teddybear.paa";
		descriptionShort = "";
	};
	class sc_tincan: ItemWatch
	{
		displayName = "Tin Can";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\tincan.paa";
		descriptionShort = "";
	};
	class sc_usbdrive: ItemWatch
	{
		displayName = "USB Drive";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\usbdrive.paa";
		descriptionShort = "";
	};
	class sc_wallet: ItemWatch
	{
		displayName = "Wallet";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\wallet.paa";
		descriptionShort = "";
	};
	class sc_whiskey: ItemWatch
	{
		displayName = "Whiskey";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\whiskey.paa";
		descriptionShort = "";
	};
	class sc_wood: ItemWatch
	{
		displayName = "Wood";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\wood.paa";
		descriptionShort = "";
	};
	class sc_paintcan: ItemWatch
	{
		displayName = "Can of Paint";
		count = 1;
		class ItemInfo
        	{
            		mass = 5;
        	}; 
		picture = "\outbreak_items\images\paintcan.paa";
		descriptionShort = "";
	};
	class sc_candybar: ItemWatch
	{
		displayName = "Candy Bar";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\snickers.paa";
		descriptionShort = "";
	};
	class sc_charms: ItemWatch
	{
		displayName = "Charms";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\charms.paa";
		descriptionShort = "";
	};
	class sc_combat_boots: ItemWatch
	{
		displayName = "Combat Boots";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\combatboots.paa";
		descriptionShort = "";
	};
	class sc_combat_shirt: ItemWatch
	{
		displayName = "Combat Shirt";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\combatshirt.paa";
		descriptionShort = "";
	};
	class sc_combat_pants: ItemWatch
	{
		displayName = "Combat Pants";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\combatpants.paa";
		descriptionShort = "";
	};
	class sc_8ball: ItemWatch
	{
		displayName = "8-Ball";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\8ball.paa";
		descriptionShort = "";
	};
	class sc_ace: ItemWatch
	{
		displayName = "Ace of Spades";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\ace.paa";
		descriptionShort = "";
	};
	class sc_axe: ItemWatch
	{
		displayName = "Fire Axe";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\axe.paa";
		descriptionShort = "";
	};
	class sc_barbedwire: ItemWatch
	{
		displayName = "Barbed Wire Coil";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\barbedwire.paa";
		descriptionShort = "";
	};
	class sc_beer: ItemWatch
	{
		displayName = "Beer";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\beer.paa";
		descriptionShort = "";
	};
	class sc_boltcutters: ItemWatch
	{
		displayName = "Boltcutters";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\boltcutters.paa";
		descriptionShort = "";
	};
	class sc_carrot: ItemWatch
	{
		displayName = "Carrot";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\carrot.paa";
		descriptionShort = "";
	};
	class sc_cereal: ItemWatch
	{
		displayName = "Cereal";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\cereal.paa";
		descriptionShort = "";
	};
	class sc_coffee: ItemWatch
	{
		displayName = "Coffee";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\coffee.paa";
		descriptionShort = "";
	};
	class sc_corn: ItemWatch
	{
		displayName = "Corn";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\corn.paa";
		descriptionShort = "";
	};
	class sc_dino: ItemWatch
	{
		displayName = "Dinosaur Toy";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\dino.paa";
		descriptionShort = "";
	};
	class sc_dirty_water: ItemWatch
	{
		displayName = "Dirty Water";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\dirtywater.paa";
		descriptionShort = "";
	};
	class sc_energy_drink: ItemWatch
	{
		displayName = "Energy Drink";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\energydrink.paa";
		descriptionShort = "";
	};
	class sc_gold: ItemWatch
	{
		displayName = "Gold Bar";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\gold.paa";
		descriptionShort = "";
	};
	class sc_green_goo: ItemWatch
	{
		displayName = "Green Substance";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\greengoo.paa";
		descriptionShort = "";
	};
	class sc_guitar: ItemWatch
	{
		displayName = "Acoustic Guitar";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\guitar.paa";
		descriptionShort = "";
	};
	class sc_gum: ItemWatch
	{
		displayName = "Gum";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\gum.paa";
		descriptionShort = "";
	};
	class sc_hammer: ItemWatch
	{
		displayName = "Hammer";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\hammer.paa";
		descriptionShort = "";
	};
	class sc_human_flesh: ItemWatch
	{
		displayName = "Human Flesh";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\humanflesh.paa";
		descriptionShort = "";
	};
	class sc_keycard: ItemWatch
	{
		displayName = "Keycard";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\keycard.paa";
		descriptionShort = "";
	};
	class sc_marijuana: ItemWatch
	{
		displayName = "Marijuana";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\marijuana.paa";
		descriptionShort = "";
	};
	class sc_pipe: ItemWatch
	{
		displayName = "Metal Pipe";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\pipe.paa";
		descriptionShort = "";
	};
	class sc_meth: ItemWatch
	{
		displayName = "Methamphetamines";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\meth.paa";
		descriptionShort = "";
	};
	class sc_moonshine: ItemWatch
	{
		displayName = "Moonshine";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\moonshine.paa";
		descriptionShort = "";
	};
	class sc_nails: ItemWatch
	{
		displayName = "Nails";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\nails.paa";
		descriptionShort = "";
	};
	class sc_potassium: ItemWatch
	{
		displayName = "Potassium Pills";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\potassium.paa";
		descriptionShort = "";
	};
	class sc_potato: ItemWatch
	{
		displayName = "Potato";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\potato.paa";
		descriptionShort = "";
	};
	class sc_pressure_cooker: ItemWatch
	{
		displayName = "Pressure Cooker";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\pressurecooker.paa";
		descriptionShort = "";
	};
	class sc_razor: ItemWatch
	{
		displayName = "Razor";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\razor.paa";
		descriptionShort = "";
	};
	class sc_receiver: ItemWatch
	{
		displayName = "Signal Receiver";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\receiver.paa";
		descriptionShort = "";
	};
	class sc_red_goo: ItemWatch
	{
		displayName = "Red Substance";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\redgoo.paa";
		descriptionShort = "";
	};
	class sc_salisbury_steak: ItemWatch
	{
		displayName = "Salisbury Steak";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\salisburysteak.paa";
		descriptionShort = "";
	};
	class sc_sandbag: ItemWatch
	{
		displayName = "Sandbag";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\sandbag.paa";
		descriptionShort = "";
	};
	class sc_scalpel: ItemWatch
	{
		displayName = "Scalpel";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\scalpel.paa";
		descriptionShort = "";
	};
	class sc_shiv: ItemWatch
	{
		displayName = "Shiv";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\shiv.paa";
		descriptionShort = "";
	};
	class sc_shovel: ItemWatch
	{
		displayName = "Shovel";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\shovel.paa";
		descriptionShort = "";
	};
	class sc_snack_cakes: ItemWatch
	{
		displayName = "Snack Cakes";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\snackcakes.paa";
		descriptionShort = "";
	};
	class sc_sugar: ItemWatch
	{
		displayName = "Sugar";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\sugar.paa";
		descriptionShort = "";
	};
	class sc_surgical_tubing: ItemWatch
	{
		displayName = "Surgical Tubing";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\surgicaltubing.paa";
		descriptionShort = "";
	};
	class sc_switchblade: ItemWatch
	{
		displayName = "Switchblade";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\switchblade.paa";
		descriptionShort = "";
	};
	class sc_syringe: ItemWatch
	{
		displayName = "Syringe";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\syringe.paa";
		descriptionShort = "";
	};
	class sc_tire_iron: ItemWatch
	{
		displayName = "Tire Iron";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\tireiron.paa";
		descriptionShort = "";
	};
	class sc_toaster: ItemWatch
	{
		displayName = "Toaster";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\toaster.paa";
		descriptionShort = "";
	};
	class sc_transmitter: ItemWatch
	{
		displayName = "Signal Transmitter";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\transmitter.paa";
		descriptionShort = "";
	};
	class sc_wrench: ItemWatch
	{
		displayName = "Wrench";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\wrench.paa";
		descriptionShort = "";
	};
	class sc_tire: ItemWatch
	{
		displayName = "Tire";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\images\tire.paa";
		descriptionShort = "";
	};
	class sc_brace: ItemWatch
	{
		displayName = "Medical Brace";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\brace.paa";
		descriptionShort = "";
	};
	class sc_blood: ItemWatch
	{
		displayName = "Blood Bag";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\blood.paa";
		descriptionShort = "";
	};
	class sc_3ds: ItemWatch
	{
		displayName = "Nintendo 3DS";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\3ds.paa";
		descriptionShort = "";
	};
	class sc_bulletcasings: ItemWatch
	{
		displayName = "Bullet Casings";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\bulletcasings.paa";
		descriptionShort = "";
	};
	class sc_cardboardbox: ItemWatch
	{
		displayName = "Cardboard Box";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\cardboardbox.paa";
		descriptionShort = "";
	};
	class sc_defib: ItemWatch
	{
		displayName = "Defibrillator";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\defib.paa";
		descriptionShort = "";
	};
	class sc_donut: ItemWatch
	{
		displayName = "Donut";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\donut.paa";
		descriptionShort = "";
	};
	class sc_empty_bottle: ItemWatch
	{
		displayName = "Empty Bottle";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\emptybottle.paa";
		descriptionShort = "";
	};
	class sc_fire_extinguisher: ItemWatch
	{
		displayName = "Fire Extinguisher";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\fireextinguisher.paa";
		descriptionShort = "";
	};
	class sc_frying_pan: ItemWatch
	{
		displayName = "Frying Pan";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\fryingpan.paa";
		descriptionShort = "";
	};
	class sc_gameboy: ItemWatch
	{
		displayName = "Gameboy Color";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\gameboy.paa";
		descriptionShort = "";
	};
	class sc_gasmask: ItemWatch
	{
		displayName = "Gas Mask";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\gasmask.paa";
		descriptionShort = "";
	};
	class sc_gopro: ItemWatch
	{
		displayName = "GoPro Camera";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\gopro.paa";
		descriptionShort = "";
	};
	class sc_headset: ItemWatch
	{
		displayName = "Military Headset";
		count = 1;
		class ItemInfo
        	{
            		mass = 3;
        	}; 
		picture = "\outbreak_items\images\headset.paa";
		descriptionShort = "";
	};
	class sc_ibuprofen: ItemWatch
	{
		displayName = "Ibuprofen";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\ibuprofen.paa";
		descriptionShort = "";
	};
	class sc_jumpercables: ItemWatch
	{
		displayName = "Jumper Cables";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\jumpercables.paa";
		descriptionShort = "";
	};
	class sc_laptop: ItemWatch
	{
		displayName = "Laptop";
		count = 1;
		class ItemInfo
        	{
            		mass = 10;
        	}; 
		picture = "\outbreak_items\images\laptop.paa";
		descriptionShort = "";
	};
	class sc_microphone: ItemWatch
	{
		displayName = "Microphone";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\microphone.paa";
		descriptionShort = "";
	};
	class sc_nvidiashield: ItemWatch
	{
		displayName = "Nvidia Shield";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\nvidiashield.paa";
		descriptionShort = "";
	};
	class sc_o2tank: ItemWatch
	{
		displayName = "Oxygen Tank";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\o2tank.paa";
		descriptionShort = "";
	};
	class sc_passport: ItemWatch
	{
		displayName = "Passport";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\passport.paa";
		descriptionShort = "";
	};
	class sc_pbj: ItemWatch
	{
		displayName = "PB & J Sandwich";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\pbj.paa";
		descriptionShort = "";
	};
	class sc_pcpart1: ItemWatch
	{
		displayName = "Computer Part";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\pcpart1.paa";
		descriptionShort = "";
	};
	class sc_pcpart2: ItemWatch
	{
		displayName = "Computer Part";
		count = 1;
		class ItemInfo
        	{
            		mass = 1;
        	}; 
		picture = "\outbreak_items\images\pcpart2.paa";
		descriptionShort = "";
	};
	class sc_pet_treats: ItemWatch
	{
		displayName = "Pet Treats";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\pettreats.paa";
		descriptionShort = "";
	};
	class sc_plate_vest: ItemWatch
	{
		displayName = "Plate (Vest)";
		count = 1;
		class ItemInfo
        	{
            		mass = 6;
        	}; 
		picture = "\outbreak_items\images\platevest.paa";
		descriptionShort = "";
	};
	class sc_psvita: ItemWatch
	{
		displayName = "PS Vita";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\psvita.paa";
		descriptionShort = "";
	};
	class sc_rope: ItemWatch
	{
		displayName = "Rope";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\rope.paa";
		descriptionShort = "";
	};
	class sc_skull: ItemWatch
	{
		displayName = "Human Skull";
		count = 1;
		class ItemInfo
        	{
            		mass = 3;
        	}; 
		picture = "\outbreak_items\images\skull.paa";
		descriptionShort = "";
	};
	class sc_snoballs: ItemWatch
	{
		displayName = "Snoballs";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\snoballs.paa";
		descriptionShort = "";
	};
	class sc_suitcase: ItemWatch
	{
		displayName = "Suitcase";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\suitcase.paa";
		descriptionShort = "";
	};
	class sc_tablet: ItemWatch
	{
		displayName = "Tablet";
		count = 1;
		class ItemInfo
        	{
            		mass = 4;
        	}; 
		picture = "\outbreak_items\images\tablet.paa";
		descriptionShort = "";
	};
	class sc_twinkies: ItemWatch
	{
		displayName = "Twinkies";
		count = 1;
		class ItemInfo
        	{
            		mass = 2;
        	}; 
		picture = "\outbreak_items\images\twinkies.paa";
		descriptionShort = "";
	};
	class sc_weapon_modkit: ItemWatch
	{
		displayName = "Weapon Mod Kit";
		count = 1;
		class ItemInfo
        	{
            		mass = 8;
        	}; 
		picture = "\outbreak_items\images\weaponmodkit.paa";
		descriptionShort = "Used to modify firearms and attachments";
	};
};