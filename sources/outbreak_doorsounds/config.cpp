class CfgPatches {
	class outbreak_doorsounds {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures_Mil", "CUP_CAStructures_Mil"};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgVehicles {
	class HouseBase;	// External class reference
	
	class House : HouseBase {
		class DestructionEffects;	// External class reference
	};
	
	class Ruins;	// External class reference
	
	class Land_Mil_ControlTower : House {
		scope = 1;
		displayName = "ATC Tower";
		armor = 400;
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\Ca\Structures\Mil\Mil_ControlTower_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		
		class HitPoints {
			class Hit1 {
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
				convexComponent = "dam 1";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
			
			class Hit2 {
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
				convexComponent = "dam 2";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
			
			class Hit3 {
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
				convexComponent = "dam 3";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
			
			class Hit4 {
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
				convexComponent = "dam 4";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
			
			class Hit5 {
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
				convexComponent = "dam 5";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
			
			class Hit6 {
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
				convexComponent = "dam 6";
				
				class DestructionEffects {
					class Dust {
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					
					class Dust2 : Dust {
						type = "HousePartDustLong";
					};
					
					class Walls : Dust {
						type = "HousePartWall";
					};
				};
			};
			
			class Hitglass {
				armor = 0.0005;
				material = -1;
				name = "dam glass";
				visual = "damTglass";
				passThrough = 0;
				convexComponent = "dam glass";
			};
			
			class Hittower {
				armor = 0.0005;
				material = -1;
				name = "dam tower";
				visual = "damTtower";
				passThrough = 0;
				convexComponent = "dam tower";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1", "Hit2", "Hit3", "Hit4", "Hit5", "Hit6"};
		
		class Damage {
			tex[] = {};
			mat[] = {"CA\Structures\Mil\Data\Mil_ControlTower_windows1.rvmat", "CA\Structures\Mil\Data\destruct_half_Mil_ControlTower_windows1.rvmat", "CA\Structures\Mil\Data\destruct_full_Mil_ControlTower_windows1.rvmat"};
		};
		model = "\CA\Structures\Mil\Mil_ControlTower.p3d";
		ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
		
		class AnimationSources {
			class dvere_spodni_R {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Dvere_spodni_R_osa";
			};
			
			class dvere_spodni_L {
				animPeriod = 1;
				initPhase = 1;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Dvere_spodni_R_osa";
			};
			
			class dvere_vrchni {
				animPeriod = 1;
				initPhase = 1;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Dvere_Vrchni_osa";
			};
			
			class HitTower {
				source = "Hit";
				hitpoint = "HitTower";
				raw = 1;
			};
		};
		
		class UserActions {
			class OpenDoors1 {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = "Dvere_spodni_R_osa";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere_spodni_R"" < 0.5";
				statement = "this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
			};
			
			class CloseDoors1 : OpenDoors1 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Dvere_spodni_R"" >= 0.5";
				statement = "this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
			};
			
			class OpenDoors3 {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = "Dvere_Vrchni_osa";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_vrchni"" < 0.5";
				statement = "this animate [""dvere_vrchni"", 1]";
			};
			
			class CloseDoors3 : OpenDoors3 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""dvere_vrchni"" >= 0.5";
				statement = "this animate [""dvere_vrchni"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors3";
		actionEnd2 = "OpenDoors3";
		
		class MarkerLights {
			class RedBlinking {
				name = "cerveny pozicni";
				color[] = {1, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.02;
				blinking = 1;
			};
		};
		replaceDamaged = "Land_Mil_ControlTower_dam";
	};

	class Land_Mil_Barracks_i : House {
		displayName = "Barracks";
		scope = 1;
		armor = 400;
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\ca\buildings\ruins\budova4_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		model = "\CA\Structures\Mil\Mil_Barracks_i.p3d";
		
		class HitPoints {
			class Glass_1_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_1";
				visual = "Glass_1_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_1_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_1_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_2_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_2";
				visual = "Glass_2_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_2_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_3_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_3";
				visual = "Glass_3_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_3_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_3_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_4_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_4";
				visual = "Glass_4_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_4_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_5_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_5";
				visual = "Glass_5_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_5_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_5_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_6_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_6";
				visual = "Glass_6_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_6_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_7_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_7";
				visual = "Glass_7_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_7_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_7_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_8_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_8";
				visual = "Glass_8_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_8_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_9_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_9";
				visual = "Glass_9_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_9_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_9_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_10_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_10";
				visual = "Glass_10_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_10_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_10_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_11_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_11";
				visual = "Glass_11_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_11_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_11_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_12_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_12";
				visual = "Glass_12_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_12_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_12_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_13_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_13";
				visual = "Glass_13_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_13_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_13_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_14_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_14";
				visual = "Glass_14_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_14_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_14_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_15_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_15";
				visual = "Glass_15_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_15_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_15_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_16_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_16";
				visual = "Glass_16_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_16_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_16_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_17_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_17";
				visual = "Glass_17_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_17_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_17_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_18_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_18";
				visual = "Glass_18_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_18_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NN";
						position = "Glass_18_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NN";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NN";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NN";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NN";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NN";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NN";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SN";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SN";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SN";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SN";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SN";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SN";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SN";
					};
				};
			};
			
			class Glass_19_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_19";
				visual = "Glass_19_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_19_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1ND";
						position = "Glass_19_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2ND";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3ND";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4ND";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5ND";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6ND";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7ND";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SD";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SD";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SD";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SD";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SD";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SD";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SD";
					};
				};
			};
			
			class Glass_20_hitpoint {
				armor = 0.01;
				material = -1;
				name = "Glass_20";
				visual = "Glass_20_hide";
				passThrough = 0;
				radius = 0.2;
				convexComponent = "Glass_20_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1ND";
						position = "Glass_20_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2ND";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3ND";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4ND";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5ND";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6ND";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7ND";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SD";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SD";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SD";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SD";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SD";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SD";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SD";
					};
				};
			};
		};
		
		class AnimationSources {
			class Door_01 {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Door_01_klika";
			};
			
			class Door_02 {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Door_02_klika";
			};
			
			class Door_03 {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Door_03_klika";
			};
			
			class Door_04 {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Door_04_klika";
			};
			
			class Door_05 {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Door_05_klika";
			};
			
			class Door_06 {
				animPeriod = 1;
				initPhase = 0;
				source = "user";
				sound = "GenericDoorsSound";
				soundPosition = "Door_06_klika";
			};
			
			class Glass_1_source {
				source = "Hit";
				hitpoint = "Glass_1_hitpoint";
				raw = 1;
			};
			
			class Glass_2_source {
				source = "Hit";
				hitpoint = "Glass_2_hitpoint";
				raw = 1;
			};
			
			class Glass_3_source {
				source = "Hit";
				hitpoint = "Glass_3_hitpoint";
				raw = 1;
			};
			
			class Glass_4_source {
				source = "Hit";
				hitpoint = "Glass_4_hitpoint";
				raw = 1;
			};
			
			class Glass_5_source {
				source = "Hit";
				hitpoint = "Glass_5_hitpoint";
				raw = 1;
			};
			
			class Glass_6_source {
				source = "Hit";
				hitpoint = "Glass_6_hitpoint";
				raw = 1;
			};
			
			class Glass_7_source {
				source = "Hit";
				hitpoint = "Glass_7_hitpoint";
				raw = 1;
			};
			
			class Glass_8_source {
				source = "Hit";
				hitpoint = "Glass_8_hitpoint";
				raw = 1;
			};
			
			class Glass_9_source {
				source = "Hit";
				hitpoint = "Glass_9_hitpoint";
				raw = 1;
			};
			
			class Glass_10_source {
				source = "Hit";
				hitpoint = "Glass_10_hitpoint";
				raw = 1;
			};
			
			class Glass_11_source {
				source = "Hit";
				hitpoint = "Glass_11_hitpoint";
				raw = 1;
			};
			
			class Glass_12_source {
				source = "Hit";
				hitpoint = "Glass_12_hitpoint";
				raw = 1;
			};
			
			class Glass_13_source {
				source = "Hit";
				hitpoint = "Glass_13_hitpoint";
				raw = 1;
			};
			
			class Glass_14_source {
				source = "Hit";
				hitpoint = "Glass_14_hitpoint";
				raw = 1;
			};
			
			class Glass_15_source {
				source = "Hit";
				hitpoint = "Glass_15_hitpoint";
				raw = 1;
			};
			
			class Glass_16_source {
				source = "Hit";
				hitpoint = "Glass_16_hitpoint";
				raw = 1;
			};
			
			class Glass_17_source {
				source = "Hit";
				hitpoint = "Glass_17_hitpoint";
				raw = 1;
			};
			
			class Glass_18_source {
				source = "Hit";
				hitpoint = "Glass_18_hitpoint";
				raw = 1;
			};
			
			class Glass_19_source {
				source = "Hit";
				hitpoint = "Glass_19_hitpoint";
				raw = 1;
			};
			
			class Glass_20_source {
				source = "Hit";
				hitpoint = "Glass_20_hitpoint";
				raw = 1;
			};
		};
		
		class UserActions {
			class OpenDoors1 {
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = "Door_01_klika";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Door_01"" < 0.5";
				statement = "this animate [""Door_01"", 1]";
			};
			
			class CloseDoors1 : OpenDoors1 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Door_01"" >= 0.5";
				statement = "this animate [""Door_01"", 0]";
			};
			
			class OpenDoors2 : OpenDoors1 {
				position = "Door_02_klika";
				condition = "this animationPhase ""Door_02"" < 0.5";
				statement = "this animate [""Door_02"", 1]";
			};
			
			class CloseDoors2 : OpenDoors2 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Door_02"" >= 0.5";
				statement = "this animate [""Door_02"", 0]";
			};
			
			class OpenDoors3 : OpenDoors1 {
				position = "Door_03_klika";
				condition = "this animationPhase ""Door_03"" < 0.5";
				statement = "this animate [""Door_03"", 1]";
			};
			
			class CloseDoors3 : OpenDoors3 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Door_03"" >= 0.5";
				statement = "this animate [""Door_03"", 0]";
			};
			
			class OpenDoors4 : OpenDoors1 {
				position = "Door_04_klika";
				condition = "this animationPhase ""Door_04"" < 0.5";
				statement = "this animate [""Door_04"", 1]";
			};
			
			class CloseDoors4 : OpenDoors4 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Door_04"" >= 0.5";
				statement = "this animate [""Door_04"", 0]";
			};
			
			class OpenDoors5 : OpenDoors1 {
				position = "Door_05_klika";
				condition = "this animationPhase ""Door_05"" < 0.5";
				statement = "this animate [""Door_05"", 1]";
			};
			
			class CloseDoors5 : OpenDoors5 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Door_05"" >= 0.5";
				statement = "this animate [""Door_05"", 0]";
			};
			
			class OpenDoors6 : OpenDoors1 {
				position = "Door_06_klika";
				condition = "this animationPhase ""Door_06"" < 0.5";
				statement = "this animate [""Door_06"", 1]";
			};
			
			class CloseDoors6 : OpenDoors6 {
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				condition = "this animationPhase ""Door_06"" >= 0.5";
				statement = "this animate [""Door_06"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		actionBegin3 = "OpenDoors3";
		actionEnd3 = "OpenDoors3";
		actionBegin4 = "OpenDoors4";
		actionEnd4 = "OpenDoors4";
		actionBegin5 = "OpenDoors5";
		actionEnd5 = "OpenDoors5";
		actionBegin6 = "OpenDoors6";
		actionEnd6 = "OpenDoors6";
		
		class Damage {
			tex[] = {};
			mat[] = {"ca\Structures\Mil\Data\Mil_Barracks_i_exter_multi.rvmat", "ca\Structures\Mil\Data\destruct_half_Mil_Barracks_i_exter_multi.rvmat", "ca\Structures\Mil\Data\destruct_full_Mil_Barracks_i_exter_multi.rvmat", "ca\Structures\Mil\Data\Mil_Barracks_i_Glass.rvmat", "ca\Structures\Mil\Data\destruct_half_Mil_Barracks_i_Glass.rvmat", "ca\Structures\Mil\Data\destruct_full_Mil_Barracks_i_Glass.rvmat", "ca\Structures\Mil\Data\Mil_Barracks_i_inter_multi.rvmat", "ca\Structures\Mil\Data\destruct_half_Mil_Barracks_i_inter_multi.rvmat", "ca\Structures\Mil\Data\destruct_full_Mil_Barracks_i_inter_multi.rvmat", "ca\Structures\Mil\Data\Mil_Barracks_i_super.rvmat", "ca\Structures\Mil\Data\destruct_half_Mil_Barracks_i_super.rvmat", "ca\Structures\Mil\Data\destruct_full_Mil_Barracks_i_super.rvmat"};
		};
	};
};