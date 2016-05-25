class Land_Hangar_2 : House {
	scope = 2;
	vehicleClass = "Military";
	armor = 800;
	model = "\ca\buildings\hangar_2.p3d";
	displayName = $STR_DN_HANGAR2;
	
	class AnimationSources {
		class dvere1 {
			animPeriod = 1;
		};
		
		class dvere2 : dvere1 {};
		
		class vrata1 : dvere1 {
			animPeriod = 3;
		};
		
		class vrata2 : vrata1 {};
		
		class vrata3 : vrata1 {};
		
		class vrata4 : vrata1 {};
	};
	
	class UserActions {
		class OpenDoors1 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "Open_vrata4";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""dvere1"" < 0.5)";
			statement = "this animate [""dvere1"", 1]";
		};
		
		class CloseDoors1 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "Open_vrata4";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""dvere1"" >= 0.5)";
			statement = "this animate [""dvere1"", 0]";
		};
		
		class OpenDoors2 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "Open_vrata4";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""dvere2"" >= 0.5)";
			statement = "this animate [""dvere2"", 0]";
		};
		
		class CloseDoors2 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "Open_vrata4";
			radius = 3;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""dvere2"" < 0.5)";
			statement = "this animate [""dvere2"", 1]";
		};
		
		class OpenDoors3 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "Open_vrata1";
			radius = 4;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""vrata1"" < 0.5)";
			statement = "this animate [""vrata1"", 1]";
		};
		
		class CloseDoors3 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "Open_vrata1";
			radius = 4;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""vrata1"" >= 0.5)";
			statement = "this animate [""vrata1"", 0]";
		};
		
		class OpenDoors4 {
			displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_O_DOOR;
			position = "Open_vrata2";
			radius = 4;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""vrata2"" < 0.5)";
			statement = "this animate [""vrata2"", 1]";
		};
		
		class CloseDoors4 {
			displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
			displayName = $STR_DN_OUT_C_DOOR;
			position = "Open_vrata2";
			radius = 4;
			onlyForPlayer = 1;
			condition = "(isnil ""BIS_Lock_Hangar"") and (this animationPhase ""vrata2"" >= 0.5)";
			statement = "this animate [""vrata2"", 0]";
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
	
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\ca\buildings\ruins\hangar_2_ruins.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};