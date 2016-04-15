class Land_Barn_Metal : House {
	armor = 200;
	scope = 1;
	animated = 1;
	model = "\ca\buildings2\Barn_Metal\Barn_Metal.p3d";
	ladders[] = {{"start1", "end1"}, {"start2", "end2"}};
	
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\Ca\Buildings2\Barn_Metal\Barn_Metal_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	
	class HitPoints {
		class Hit1 {
			armor = 0.15;
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
			armor = 0.15;
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
			armor = 0.15;
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
			armor = 0.15;
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
			armor = 0.15;
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
			armor = 0.15;
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
		
		class Hit7 {
			armor = 0.15;
			material = -1;
			name = "dam 7";
			visual = "damT7";
			passThrough = 1;
			convexComponent = "dam 7";
			
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
	};
	replaceDamaged = "Land_Barn_Metal_dam";
	replaceDamagedHitpoints[] = {"Hit1", "Hit2", "Hit3", "Hit4", "Hit5", "Hit6", "Hit7"};
	
	class AnimationSources {
		class dvere1 {
			animPeriod = 1;
			sound = "GenericDoorsSound";
			soundPosition = "akce_dvere1";
		};
		
		class dvere2 : dvere1 {
			initPhase = 0;
			sound = "GenericDoorsSound";
			soundPosition = "akce_dvere2";
		};
		
		class dvere3 : dvere1 {
			sound = "GenericDoorsSound";
			soundPosition = "akce_dvere3";
		};
		
		class dvere4 : dvere1 {
			sound = "GenericDoorsSound";
			soundPosition = "akce_dvere4";
		};
	};
	
	class UserActions {
		class OpenDoors1 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "akce_dvere1";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""dvere1"" < 0.5";
			statement = "this animate [""dvere1"", 1]";
		};
		
		class CloseDoors1 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "akce_dvere1";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""dvere1"" >= 0.5";
			statement = "this animate [""dvere1"", 0]";
		};
		
		class OpenDoors2 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "akce_dvere2";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Dvere2"" >= 0.5";
			statement = "this animate [""Dvere2"", 0]";
		};
		
		class CloseDoors2 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "akce_dvere2";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Dvere2"" < 0.5";
			statement = "this animate [""Dvere2"", 1]";
		};
		
		class OpenDoors3 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "akce_dvere3";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Dvere3"" >= 0.5";
			statement = "this animate [""Dvere3"", 0]";
		};
		
		class CloseDoors3 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "akce_dvere3";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Dvere3"" < 0.5";
			statement = "this animate [""Dvere3"", 1]";
		};
		
		class OpenDoors4 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "akce_dvere4";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Dvere4"" < 0.5";
			statement = "this animate [""Dvere4"", 1]";
		};
		
		class CloseDoors4 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "akce_dvere4";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Dvere4"" >= 0.5";
			statement = "this animate [""Dvere4"", 0]";
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
};
