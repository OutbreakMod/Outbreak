class CfgAmmo
{
	class BulletBase;
	class B_Hatchet : BulletBase
	{
		hit = 3;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		caliber = 2.6;
		deflecting = 45;
		visibleFire = 5;
		audibleFire = 9;
		cost = 100;
		typicalSpeed = 10;
		airFriction = -0.0018;
		muzzleEffect = "";
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 2;
		midRangeProbab = 1.5;
		maxRange = 3;
		maxRangeProbab = 2.5;
		explosive = 0;
		simulationStep = 0.001;
		timeToLive = 0.03;
		soundHit[] = { "", "db-90", 1 };
		soundEngine[] = { "", "db-80", 4 };
	};
};