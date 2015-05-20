class CfgAmmo
{
	class BulletBase;
	class B_Hatchet: BulletBase {
		hit = 3;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		caliber = 2.600000;
		deflecting = 45;
		visibleFire = 5;
		audibleFire = 9;
		cost = 100;
		typicalSpeed = 10;
		airFriction = -0.001800;
		muzzleEffect = "";
		minRange = 1;
		minRangeProbab = 0.800000;
		midRange = 2;
		midRangeProbab = 1.500000;
		maxRange = 3;
		maxRangeProbab = 2.500000;
		explosive = 0;
		simulationStep = 0.001000;
		timeToLive = 0.030000;
		soundHit[] = {"", "db-90", 1};
		soundEngine[] = {"", "db-80", 4};
	};

	class B_Swing: BulletBase {
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		simulation = "shotRocket";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		model = "\outbreak_assets\models\swing_box.p3d";
		caliber = 0.260000;
		deflecting = 0;
		visibleFire = 0.100000;
		audibleFire = 1;
		cost = 100;
		typicalSpeed = 275;
		airFriction = -0.001800;
		minRange = 1;
		minRangeProbab = 0.800000;
		midRange = 2;
		midRangeProbab = 1.500000;
		maxRange = 3;
		maxRangeProbab = 2.500000;
		explosive = 0;
		simulationStep = 0.001000;
		timeToLive = 0.003000;
		soundHit[] = {"", "db-90", 1};
		soundEngine[] = {"", "db-80", 4};
	};
};