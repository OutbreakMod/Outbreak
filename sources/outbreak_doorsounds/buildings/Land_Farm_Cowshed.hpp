class Land_Farm_Cowshed_a : House {
	scope = 1;
	armor = 600;
	model = "\ca\buildings2\Farm_Cowshed\Farm_Cowshed_a.p3d";
	
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\Ca\Buildings2\Farm_Cowshed\Farm_Cowshed_a_ruins.p3d";
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
	};
	
	class AnimationSources {
		class door01_a {
			animPeriod = 1;
			initPhase = 1;
			sound = "GenericDoorsSound";
			soundPosition = "door01_a_axis";
		};
		
		class door01_b {
			animPeriod = 1;
			initPhase = 1;
		};
		
		class door02_a {
			animPeriod = 1;
			initPhase = 1;
			sound = "GenericDoorsSound";
			soundPosition = "door02_a_axis";
		};
		
		class door02_b {
			animPeriod = 1;
			initPhase = 0;
		};
		
		class door03 {
			animPeriod = 1;
			initPhase = 0;
			sound = "GenericDoorsSound";
			soundPosition = "door03_axis";
		};
	};
	
	class UserActions {
		class OpenDoors1 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "door01_a_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door01_a"" < 0.5";
			statement = "this animate [""door01_a"", 1];this animate [""door01_b"", 1]";
		};
		
		class CloseDoors1 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "door01_a_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door01_a"" >= 0.5";
			statement = "this animate [""door01_a"", 0];this animate [""door01_b"", 0]";
		};
		
		class OpenDoors3 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "door02_a_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door02_a"" < 0.5";
			statement = "this animate [""door02_a"", 1];this animate [""door02_b"", 1]";
		};
		
		class CloseDoors3 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "door02_a_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door02_a"" >= 0.5";
			statement = "this animate [""door02_a"", 0];this animate [""door02_b"", 0]";
		};
		
		class OpenDoors5 {
			displayName = $STR_DN_OUT_O_DOOR;
			position = "door03_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door03"" < 0.5";
			statement = "this animate [""door03"", 1]";
		};
		
		class CloseDoors5 {
			displayName = $STR_DN_OUT_C_DOOR;
			position = "door03_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door03"" >= 0.5";
			statement = "this animate [""door03"", 0]";
		};
	};
	actionBegin1 = "OpenDoors1";
	actionEnd1 = "OpenDoors1";
	actionBegin3 = "OpenDoors3";
	actionEnd3 = "OpenDoors3";
	actionBegin5 = "OpenDoors5";
	actionEnd5 = "OpenDoors5";
	replaceDamaged = "Land_Farm_Cowshed_a_dam";
	replaceDamagedHitpoints[] = {"Hit1", "Hit2", "Hit3", "Hit4", "Hit5", "Hit6"};
};

class Land_Farm_Cowshed_b : House {
	scope = 1;
	armor = 500;
	model = "\ca\buildings2\Farm_Cowshed\Farm_Cowshed_b.p3d";
	
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\Ca\Buildings2\Farm_Cowshed\Farm_Cowshed_b_ruins.p3d";
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
	};
	replaceDamagedHitpoints[] = {"Hit1", "Hit2", "Hit3", "Hit4", "Hit5"};
	replaceDamaged = "Land_Farm_Cowshed_b_dam";
};

class Land_Farm_Cowshed_c : House {
	scope = 1;
	armor = 700;
	model = "\ca\buildings2\Farm_Cowshed\Farm_Cowshed_c.p3d";
	
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\Ca\Buildings2\Farm_Cowshed\Farm_Cowshed_c_ruins.p3d";
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
			passThrough = 0;
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
	};
	replaceDamagedHitpoints[] = {"Hit1", "Hit2", "Hit3", "Hit4"};
	
	class AnimationSources {
		class door_a {
			animPeriod = 1;
			initPhase = 1;
			sound = "GenericDoorsSound";
			soundPosition = "door_a_axis";
		};
		
		class door_b {
			animPeriod = 1;
			initPhase = 1;
			sound = "GenericDoorsSound";
			soundPosition = "door_a_axis";
		};
	};
	
	class UserActions {
		class OpenDoors1 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "door_a_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door_a"" < 0.5";
			statement = "this animate [""door_a"", 1];this animate [""door_b"", 1];hint format[""%1 -- %2 -- %3"", this, _this, player]";
		};
		
		class CloseDoors1 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "door_a_axis";
			radius = 3;
			onlyForPlayer = 0;
			condition = "this animationPhase ""door_a"" >= 0.5";
			statement = "this animate [""door_a"", 0];this animate [""door_b"", 0]";
		};
	};
	actionBegin1 = "OpenDoors1";
	actionEnd1 = "OpenDoors1";
	replaceDamaged = "Land_Farm_Cowshed_c_dam";
};
