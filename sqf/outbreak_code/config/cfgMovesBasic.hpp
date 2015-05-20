class CfgMovesBasic
{
	class Default
	{
		GetOutPara = "";
		weaponLowered = 0;
		canBlendStep = 0;
		idle = "idleDefault";
		access = 3;
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 0;
		enableOptics = 0;
		disableWeaponsLong = 0;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		canReload = 1;
		duty = -0.5;
		visibleSize = 0.75012;
		aimPrecision = 1;
		camShakeFire = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		ragdoll = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		ignoreMinPlayTime[] = {"Unconscious"};
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		leaning = "leaningDefault";
		legs = "legsDefault";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		enableDirectControl = 1;
		headBobMode = 0;
		headBobStrength = 0;
		collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1.0;
		enableAutoActions = 0;
		leftHandIKEnd = 0;
		leftHandIKBeg = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {};
		rightHandIKCurve[] = {};
		weaponIK = 0;
		preload = 0;
		Walkcycles = 1;
		forceAim = 0;
		adjstance = "m";
	};
	class ManActions
	{

		GestureSwing0 = "";
		GestureSwing1 = "";
		GestureSwing2 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureSwing0[] = {"GestureSwing0","Gesture"};
			GestureSwing1[] = { "GestureSwing1", "Gesture" };
			GestureSwing2[] = { "GestureSwing2", "Gesture" };
		};
		
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		aimingKneelUnarmedDefault = "";
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
		empty[] = {};
	};
};
