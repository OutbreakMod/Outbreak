class CfgPatches
{
	class outbreak_items
	{
		units[] = {"outbreak_items"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};

class CfgWeapons
{
	class ItemWatch;
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
		model = "a3\structures_f\Items\Stationery\PencilRed_F";
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
		model = "a3\structures_f\Items\Stationery\PencilGreen_F";
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
		model = "a3\structures_f\Items\Electronics\Land_SatellitePhone_F";
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
		model = "a3\structures_f\Items\Tools\Screwdriver_V1_F";
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
		model = "a3\structures_f\Items\Food\BottlePlastic_V1_F";
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
	class sc_cookedmutton: ItemWatch
	{
		displayName = "Cooked Mutton";
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
		model = "a3\structures_f\Items\Vessels\CanisterFuel_F.p3d"
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
		model = "a3\structures_f\Items\Food\Can_V2_F";
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
	
	class sc_rawmutton: ItemWatch
	{
		displayName = "Raw Mutton";
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
		model = "a3\structures_f\Items\Food\Can_V1_F";
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
		model = "a3\structures_f\Items\Food\Can_Dented_F";
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
		displayName = "Log";
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
		model = "a3\structures_f\Items\Tools\Axe_fire_F";
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
		model = "a3\structures_f\Items\Tools\Pliers_F";
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
		model = "a3\structures_f\Items\Food\Can_V3_F";
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
		model = "a3\structures_f\Items\Tools\Hammer_F";
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