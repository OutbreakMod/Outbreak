	class Land_Ss_hangar : House {
		scope = 2;
		scopeCurator = 2;
		displayName = "Hangar (Green)";
		animated = true;
		model = "\ca\buildings\ss_hangar.p3d";
		destrType = "DestructBuilding";
		armor = 800;
		accuracy = 0.5;	// accuracy needed to recognize type of this target
		cost = 0;
		mapSize = 7.5;
		icon = "iconObject_2x3";
		editorCategory = "EdCat_CUP_Structures_Misc";
		editorSubcategory = "EdSubcat_Airports";
        
        class EventHandlers {
            init = "diag_log str(_this)";
        };
		
		class DestructionEffects : DestructionEffects {
			class Ruin1 {
				simulation = "ruin";
				type = "\ca\buildings\ruins\ss_hangard_Ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		
		class HitPoints {
			class Glass_1_hitpoint {
				armor = 0.001;
				material = -1;
				name = "Glass_1";
				visual = "Glass_1_hide";
				passThrough = false;
				radius = 0.175;
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
				armor = 0.001;
				material = -1;
				name = "Glass_2";
				visual = "Glass_2_hide";
				passThrough = false;
				radius = 0.175;
				convexComponent = "Glass_2_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "Glass_2_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NB";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NB";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NB";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NB";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NB";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NB";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SB";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SB";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SB";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SB";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SB";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SB";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SB";
					};
				};
			};
			
			class Glass_3_hitpoint {
				armor = 0.001;
				material = -1;
				name = "Glass_3";
				visual = "Glass_3_hide";
				passThrough = false;
				radius = 0.175;
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
				armor = 0.001;
				material = -1;
				name = "Glass_4";
				visual = "Glass_4_hide";
				passThrough = false;
				radius = 0.175;
				convexComponent = "Glass_4_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "Glass_4_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NB";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NB";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NB";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NB";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NB";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NB";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SB";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SB";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SB";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SB";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SB";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SB";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SB";
					};
				};
			};
			
			class Glass_5_hitpoint {
				armor = 0.001;
				material = -1;
				name = "Glass_5";
				visual = "Glass_5_hide";
				passThrough = false;
				radius = 0.175;
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
				armor = 0.001;
				material = -1;
				name = "Glass_6";
				visual = "Glass_6_hide";
				passThrough = false;
				radius = 0.175;
				convexComponent = "Glass_6_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "Glass_6_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NB";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NB";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NB";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NB";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NB";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NB";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SB";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SB";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SB";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SB";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SB";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SB";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SB";
					};
				};
			};
			
			class Glass_7_hitpoint {
				armor = 0.001;
				material = -1;
				name = "Glass_7";
				visual = "Glass_7_hide";
				passThrough = false;
				radius = 0.175;
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
				armor = 0.001;
				material = -1;
				name = "Glass_8";
				visual = "Glass_8_hide";
				passThrough = false;
				radius = 0.175;
				convexComponent = "Glass_8_hide";
				
				class DestructionEffects {
					class BrokenGlass1 {
						simulation = "particles";
						type = "BrokenGlass1NB";
						position = "Glass_8_effects";
						intensity = 0.15;
						interval = 1;
						lifeTime = 0.05;
					};
					
					class BrokenGlass2 : BrokenGlass1 {
						type = "BrokenGlass2NB";
					};
					
					class BrokenGlass3 : BrokenGlass1 {
						type = "BrokenGlass3NB";
					};
					
					class BrokenGlass4 : BrokenGlass1 {
						type = "BrokenGlass4NB";
					};
					
					class BrokenGlass5 : BrokenGlass1 {
						type = "BrokenGlass5NB";
					};
					
					class BrokenGlass6 : BrokenGlass1 {
						type = "BrokenGlass6NB";
					};
					
					class BrokenGlass7 : BrokenGlass1 {
						type = "BrokenGlass7NB";
					};
					
					class BrokenGlass1S : BrokenGlass1 {
						type = "BrokenGlass1SB";
					};
					
					class BrokenGlass2S : BrokenGlass1 {
						type = "BrokenGlass2SB";
					};
					
					class BrokenGlass3S : BrokenGlass1 {
						type = "BrokenGlass3SB";
					};
					
					class BrokenGlass4S : BrokenGlass1 {
						type = "BrokenGlass4SB";
					};
					
					class BrokenGlass5S : BrokenGlass1 {
						type = "BrokenGlass5SB";
					};
					
					class BrokenGlass6S : BrokenGlass1 {
						type = "BrokenGlass6SB";
					};
					
					class BrokenGlass7S : BrokenGlass1 {
						type = "BrokenGlass7SB";
					};
				};
			};
		};
		
		class AnimationSources {
			class Door_7_sound_source {
				source = "user";
				initPhase = 0;
				animPeriod = 14;
				sound = "RollDoorsSound";
			};
			
			class Door_8_sound_source {
				source = "user";
				initPhase = 0;
				animPeriod = 1.2;
				sound = "MetalDoorsSound";
			};
			
			class Door_9_sound_source : Door_8_sound_source {};
			
			class Door_10_sound_source : Door_8_sound_source {};
			
			class Door_11_sound_source : Door_8_sound_source {};
			
			class glass_1_source {
				hitpoint = "Glass_1_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_2_source {
				hitpoint = "Glass_2_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_3_source {
				hitpoint = "Glass_3_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_4_source {
				hitpoint = "Glass_4_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_5_source {
				hitpoint = "Glass_5_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_6_source {
				hitpoint = "Glass_6_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_7_source {
				hitpoint = "Glass_7_hitpoint";
				source = "Hit";
				raw = 1;
			};
			
			class glass_8_source {
				hitpoint = "Glass_8_hitpoint";
				source = "Hit";
				raw = 1;
			};
		};
		
		class UserActions {
			class OpenDoor1 {
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "Open Hangar Door";
				position = "Door_7_trigger";
				actionNamedSel = "Door_7_button";
				radius = 2;
				aiMaxRange = 5.25;
				onlyForPlayer = 0;
				condition = "(this animationSourcePhase ""Door_7_sound_source"" <= 0.5)";
				statement = "([this, 7, 1] call BIS_fnc_Door);";
			};
			
			class CloseDoor1 : OpenDoor1 {
				displayName = "Close Hanger Door";
				condition = "(this animationSourcePhase ""Door_7_sound_source"" > 0.5)";
				statement = "([this, 7, 0] call BIS_fnc_Door);";
			};
			
			class OpenDoor2 : OpenDoor1 {
				position = "Door_8_trigger";
				actionNamedSel = "Door_8";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_8_sound_source"" <= 0.5)";
				statement = "([this, 8, 1] call BIS_fnc_Door);([this, 9, 1] call BIS_fnc_Door);";
				displayName = $STR_DN_OUT_O_DOOR;
			};
			
			class CloseDoor2 : CloseDoor1 {
				position = "Door_8_trigger";
				actionNamedSel = "Door_8";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_8_sound_source"" > 0.5)";
				statement = "([this, 8, 0] call BIS_fnc_Door);([this, 9, 0] call BIS_fnc_Door);";
				displayName = $STR_DN_OUT_C_DOOR;
			};
			
			class OpenDoor2a : OpenDoor1 {
				position = "Door_9_trigger";
				actionNamedSel = "Door_9";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_8_sound_source"" <= 0.5)";
				statement = "([this, 8, 1] call BIS_fnc_Door);([this, 9, 1] call BIS_fnc_Door);";
				displayName = $STR_DN_OUT_O_DOOR;
			};
			
			class CloseDoor2a : CloseDoor1 {
				position = "Door_9_trigger";
				actionNamedSel = "Door_9";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_8_sound_source"" > 0.5)";
				statement = "([this, 8, 0] call BIS_fnc_Door);([this, 9, 0] call BIS_fnc_Door);";
				displayName = $STR_DN_OUT_C_DOOR;
			};
			
			class OpenDoor3 : OpenDoor2 {
				position = "Door_10_trigger";
				actionNamedSel = "Door_10";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_10_sound_source"" <= 0.5)";
				statement = "([this, 10, 1] call BIS_fnc_Door);([this, 11, 1] call BIS_fnc_Door);";
			};
			
			class CloseDoor3 : CloseDoor2 {
				position = "Door_10_trigger";
				actionNamedSel = "Door_10";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_10_sound_source"" > 0.5)";
				statement = "([this, 10, 0] call BIS_fnc_Door);([this, 11, 0] call BIS_fnc_Door);";
			};
			
			class OpenDoor3a : OpenDoor2 {
				position = "Door_11_trigger";
				actionNamedSel = "Door_11";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_10_sound_source"" <= 0.5)";
				statement = "([this, 10, 1] call BIS_fnc_Door);([this, 11, 1] call BIS_fnc_Door);";
			};
			
			class CloseDoor3a : CloseDoor2 {
				position = "Door_11_trigger";
				actionNamedSel = "Door_11";
				radius = 1.5;
				aiMaxRange = 5.25;
				condition = "(this animationSourcePhase ""Door_10_sound_source"" > 0.5)";
				statement = "([this, 10, 0] call BIS_fnc_Door);([this, 11, 0] call BIS_fnc_Door);";
			};
		};
		actionBegin1 = "OpenDoor1";
		actionEnd1 = "OpenDoor1";
		actionBegin2 = "OpenDoor2";
		actionEnd2 = "OpenDoor2";
		actionBegin3 = "OpenDoor3";
		actionEnd3 = "OpenDoor3";
		numberOfDoors = 11;
		editorPreview = "cup\terrains\cup_terrains_editor_c\data\land_ss_hangar.jpg";
	};