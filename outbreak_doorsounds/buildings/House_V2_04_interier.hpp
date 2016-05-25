class Land_HouseV2_04;

class Land_HouseV2_04_interier : Land_HouseV2_04 {
	model = "\CA\Structures\House\HouseV2\HouseV2_04_interier.p3d";
	armor = 500;
	replaceDamaged = "Land_HouseV2_04_interier_dam";
	
	class AnimationSources {
		class Door_1_source {
			source = "user";
			initPhase = 0;
			animPeriod = 1;
			sound = "GenericDoorsSound";
			soundPosition = "Door_1_trigger";
		};
		
		class Door_2_source : Door_1_source {
			sound = "GenericDoorsSound";
			soundPosition = "Door_2_trigger";
		};
		
		class Door_3_source : Door_1_source {
			sound = "GenericDoorsSound";
			soundPosition = "Door_3_trigger";
		};
		
		class Door_4_source : Door_1_source {
			sound = "GenericDoorsSound";
			soundPosition = "Door_4_trigger";
		};
	};
	
	class UserActions {
		class OpenDoor_1 {
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = "Door_1_trigger";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase ""Door_1_rot"" < 0.5";
			statement = "this animate [""Door_1_rot"", 1]";
		};
		
		class CloseDoor_1 : OpenDoor_1 {
			displayName = "Close Door";
			priority = 0.2;
			condition = "this animationPhase ""Door_1_rot"" >= 0.5";
			statement = "this animate [""Door_1_rot"", 0]";
		};
		
		class OpenDoor_2 : OpenDoor_1 {
			position = "Door_2_trigger";
			condition = "this animationPhase ""Door_2_rot"" < 0.5";
			statement = "this animate [""Door_2_rot"", 1]";
		};
		
		class CloseDoor_2 : CloseDoor_1 {
			position = "Door_2_trigger";
			condition = "this animationPhase ""Door_2_rot"" >= 0.5";
			statement = "this animate [""Door_2_rot"", 0]";
		};
		
		class OpenDoor_3 : OpenDoor_1 {
			position = "Door_3_trigger";
			condition = "this animationPhase ""Door_3_rot"" < 0.5";
			statement = "this animate [""Door_3_rot"", 1]";
		};
		
		class CloseDoor_3 : CloseDoor_1 {
			position = "Door_3_trigger";
			condition = "this animationPhase ""Door_3_rot"" >= 0.5";
			statement = "this animate [""Door_3_rot"", 0]";
		};
		
		class OpenDoor_4 : OpenDoor_1 {
			position = "Door_4_trigger";
			condition = "this animationPhase ""Door_4_rot"" < 0.5";
			statement = "this animate [""Door_4_rot"", 1]";
		};
		
		class CloseDoor_4 : CloseDoor_1 {
			position = "Door_4_trigger";
			condition = "this animationPhase ""Door_4_rot"" >= 0.5";
			statement = "this animate [""Door_4_rot"", 0]";
		};
	};
	actionBegin1 = "OpenDoor_1";
	actionEnd1 = "OpenDoor_1";
	actionBegin2 = "OpenDoor_2";
	actionEnd2 = "OpenDoor_2";
	actionBegin3 = "OpenDoor_3";
	actionEnd3 = "OpenDoor_3";
	actionBegin4 = "OpenDoor_4";
	actionEnd4 = "OpenDoor_4";
	numberOfDoors = 4;
};
