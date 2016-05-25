class Land_Ss_hangar : House {
	displayName = "Hanger";
	animated = 1;
	model = "\ca\buildings\ss_hangar.p3d";
	destrType = "DestructBuilding";
	armor = 800;
	accuracy = 0.5;
	cost = 0;
	mapSize = 7.5;
	
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
	
	class AnimationSources {
		class Door1 {
			source = "user";
			animPeriod = 14;
			initPhase = 0;
		};
		
		class Door2 {
			source = "user";
			animPeriod = 11;
			initPhase = 0;
		};
		
		class Door3 {
			source = "user";
			animPeriod = 10;
			initPhase = 0;
		};
		
		class Door4 {
			source = "user";
			animPeriod = 9;
			initPhase = 0;
		};
		
		class Door5 {
			source = "user";
			animPeriod = 7.5;
			initPhase = 0;
		};
		
		class Door6 {
			source = "user";
			animPeriod = 6;
			initPhase = 0;
		};
		
		class Door7 {
			source = "user";
			animPeriod = 0.5;
			initPhase = 0;
			sound = "GenericDoorsSound";
			soundPosition = "Door7_Button";
		};
		
		class Door8 {
			source = "user";
			animPeriod = 1.2;
			initPhase = 0;
			sound = "GenericDoorsSound";
			soundPosition = "Door8_Button";
		};
		
		class Door9 {
			source = "user";
			animPeriod = 1.2;
			initPhase = 0;
		};
		
		class Door10 {
			source = "user";
			animPeriod = 1.2;
			initPhase = 0;
			sound = "GenericDoorsSound";
			soundPosition = "Door10_Button";
		};
		
		class Door11 {
			source = "user";
			animPeriod = 1.2;
			initPhase = 0;
		};
	};
	
	class UserActions {
		class OpenDoor {
			displayName = "Open Hangar Door";
			position = "Door7_Button";
			radius = 1;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Door6"" > 0.01";
			statement = "0 = this spawn {_this animate [""Door7"", 1]; sleep 1.5; _this animate [""Door7"", 0]; _this animate [""Door6"", 0]; _this animate [""Door5"", 0]; _this animate [""Door4"", 0]; _this animate [""Door3"", 0]; _this animate [""Door2"", 0]; _this animate [""Door1"", 0]}; this say 'hangar_door_open';";
		};
		
		class CloseDoor : OpenDoor {
			displayName = "Close Hanger Door";
			condition = "this animationPhase ""Door6"" <= 0.01";
			statement = "0 = this spawn {_this animate [""Door7"", 1]; sleep 1.5; _this animate [""Door7"", 0]; _this animate [""Door1"", 1]; sleep 3; _this animate [""Door2"", 1]; sleep 1; _this animate [""Door3"", 1]; sleep 1; _this animate [""Door4"", 1]; sleep 1.5; _this animate [""Door5"", 1]; sleep 1.5; _this animate [""Door6"", 1]}; this say 'hangar_door_close';";
		};
		
		class OpenDoor2 {
			displayName = "Open Door";
			position = "Door8_Button";
			radius = 2;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Door8"" > 0.5";
			statement = "this animate [""Door8"", 0]; this animate [""Door9"", 0]";
		};
		
		class CloseDoor2 : OpenDoor2 {
			displayName = "Close Door";
			condition = "this animationPhase ""Door8"" <= 0.5";
			statement = "this animate [""Door8"", 1]; this animate [""Door9"", 1]";
		};
		
		class OpenDoor3 {
			displayName = "Open Door";
			position = "Door10_Button";
			radius = 2;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Door10"" > 0.5";
			statement = "this animate [""Door10"", 0]; this animate [""Door11"", 0]";
		};
		
		class CloseDoor3 : OpenDoor3 {
			displayName = "Close Door";
			condition = "this animationPhase ""Door10"" <= 0.5";
			statement = "this animate [""Door10"", 1]; this animate [""Door11"", 1]";
		};
	};
};