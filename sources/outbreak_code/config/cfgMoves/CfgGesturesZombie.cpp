class CfgGesturesMale {
	skeletonName = "OFP2_ManSkeleton";
	
	class ManActions {};
	
	class Actions {
		class NoActions {
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
			stance = "ManStanceUndefined";
		};
	};
	
	class Default {
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		static = 0;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = 0;
		ragdoll = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 0;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		Walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	
	class States {
		class WeaponMagazineReloadStand_g : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\rld\rfl\AwopPercMstpSrldWrflDnon";
			looped = 0;
			speed = 0.4;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class LauncherMagazineReloadStand : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\rld\lnr\AwopPknlMstpSrldWlnrDnon";
			mask = "launcher";
			speed = 0.4;
			looped = 0;
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class LauncherMagazineReloadKneel : LauncherMagazineReloadStand {};
		
		class WeaponMagazineReloadKneel_g : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\rld\rfl\AwopPknlMstpSrldWrflDnon";
			looped = 0;
			speed = 0.4;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class PistolMagazineReloadStand_g : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\rld\pst\AwopPercMstpSrldWpstDnon";
			looped = 0;
			speed = 0.4;
			mask = "handsWeapon_pst";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class PistolMagazineReloadKneel_g : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\rld\pst\AwopPknlMstpSrldWpstDnon";
			looped = 0;
			speed = 0.32;
			mask = "handsWeapon_pst";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureAttackStand : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureAttack";
			looped = 0;
			speed = 0.85868;
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.055, 1, 0.14, 0, 0.73333, 0, 0.78, 1};
		};
		
		class GestureGoStand : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureGo";
			looped = 0;
			speed = 0.85868;
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.0414, 1, 0.15, 0, 0.85, 0, 0.95, 1};
		};
		
		class GestureGoStandPistol : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureGo";
			looped = 0;
			speed = 0.85868;
			mask = "leftHand";
			leftHandIKCurve[] = {0.0414, 1, 0.15, 0, 0.85, 0, 0.95, 1};
		};
		
		class GestureGoBStand : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureGoB";
			looped = 0;
			speed = 1.6;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureGoBProne : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureGoBProne";
			looped = 0;
			speed = 1.6;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureFreezeStand : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureFreeze";
			looped = 0;
			speed = 0.85868;
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.05, 1, 0.1133, 0, 0.71666, 0, 0.76667, 1};
		};
		
		class GestureFreezeStandPistol : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureFreeze";
			looped = 0;
			speed = 0.85868;
			mask = "leftHand";
			leftHandIKCurve[] = {0.05, 1, 0.1133, 0, 0.71666, 0, 0.76667, 1};
		};
		
		class GestureFreezeProne : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureFreezeProne";
			looped = 0;
			mask = "upperTorso";
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GesturePointStand : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GesturePoint";
			looped = 0;
			speed = 1.5;
			mask = "handsWeapon";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureCeaseFire : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureCeaseFire";
			looped = 0;
			speed = 0.4;
			mask = "handsWeapon";
			leftHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureCover : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureCover";
			looped = 0;
			speed = 1.5;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureUp : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureUp";
			looped = 0;
			speed = 1.5;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureNo : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureNo";
			looped = 0;
			speed = 1;
			mask = "head";
		};
		
		class GestureYes : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureYes";
			looped = 0;
			speed = 1;
			mask = "head";
		};
		
		class GestureFollow : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureFollow";
			looped = 0;
			speed = 1.3;
			mask = "handsWeapon";
			leftHandIKEnd = 1;
			leftHandIKBeg = 1;
			canPullTrigger = 0;
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureAttackProne : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureAttackProne";
			looped = 0;
			speed = 1;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureAdvance : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureAdvance";
			looped = 0;
			speed = 1.2;
			mask = "handsWeapon";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureAdvanceProne : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureAdvanceProne";
			looped = 0;
			speed = 1.1;
			mask = "handsWeapon";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureHi : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureHi";
			looped = 0;
			speed = 1.3;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureHiB : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureHiB";
			looped = 0;
			speed = 1.7;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureHiC : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureHiC";
			looped = 0;
			speed = 2.3;
			mask = "rightHand";
			rightHandIKCurve[] = {0, 1, 0.05, 0, 0.95, 0, 1, 1};
		};
		
		class GestureNod : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureNod";
			looped = 0;
			speed = 4;
			mask = "head";
		};
		
		class GestureAgonyCargo : Default {
			speed = 0.080863;
			file = "\A3\anims_f\Data\Anim\Sdr\inj\agony\agonyCargo";
			mask = "upperTorso";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		
		class GestureLegPush : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AinjPpneMrunSnonWnonDb_LegPush";
			mask = "Legs";
			looped = 0;
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {};
		};
		
		class GestureSpasm0 : Default {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm0";
			speed = 0.535;
			mask = "BodyFull";
			rightHandIKCurve[] = {};
			leftHandIKCurve[] = {};
		};
		
		class GestureSpasm0weak : GestureSpasm0 {
			mask = "BodyHalf";
		};
		
		class GestureSpasm1 : GestureSpasm0 {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm1";
			speed = 0.1456;
		};
		
		class GestureSpasm1weak : GestureSpasm1 {
			mask = "BodyHalf";
		};
		
		class GestureSpasm2 : GestureSpasm0 {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm2";
			speed = 0.098;
		};
		
		class GestureSpasm2weak : GestureSpasm2 {
			mask = "BodyHalf";
		};
		
		class GestureSpasm3 : GestureSpasm0 {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm3";
			speed = 0.238;
		};
		
		class GestureSpasm3weak : GestureSpasm3 {
			mask = "BodyHalf";
		};
		
		class GestureSpasm4 : GestureSpasm0 {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm4";
			speed = 0.2325;
		};
		
		class GestureSpasm4weak : GestureSpasm4 {
			mask = "BodyHalf";
		};
		
		class GestureSpasm5 : GestureSpasm0 {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm5";
			speed = 0.2069;
		};
		
		class GestureSpasm5weak : GestureSpasm5 {};
		
		class GestureSpasm6 : GestureSpasm0 {
			file = "\A3\anims_f\Data\Anim\Sdr\inj\AGONY\spasm6";
			speed = 0.1287;
		};
		
		class GestureSpasm6weak : GestureSpasm6 {
			mask = "BodyHalf";
		};
		
		class GestureReloadBase : Default {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMX";
			looped = 0;
			mask = "handsWeapon";
			canPullTrigger = 0;
		};
		
		class GestureReloadMk20 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMk20";
			speed = -3;
			leftHandIKCurve[] = {0, 1, 0.04321, 0, 0.9259, 0, 0.969136, 1};
		};
		
		class GestureReloadMk20Context : GestureReloadMk20 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMk20ContextAnimDrive : GestureReloadMk20Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMk20Prone : GestureReloadMk20 {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMk20Prone";
		};
		
		class GestureReloadMk20UGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMk20UGL";
			speed = -3;
			leftHandIKCurve[] = {0, 1, 0.04321, 0, 0.9259, 0, 0.969136, 1};
		};
		
		class GestureReloadMk20UGLContext : GestureReloadMk20UGL {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMk20UGLContextAnimDrive : GestureReloadMk20UGLContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMk20UGLProne : GestureReloadMk20UGL {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMk20UGLProne";
		};
		
		class GestureReloadMX : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMX";
			speed = 0.37;
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		};
		
		class GestureReloadMXContext : GestureReloadMX {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMXContextAnimDrive : GestureReloadMXContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMXProne : GestureReloadMX {
			mask = "BodyFull";
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXprone";
		};
		
		class GestureReloadMXUGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMXUGL";
			speed = 0.554796;
			leftHandIKCurve[] = {0, 1, 0.04321, 0, 0.9259, 0, 0.969136, 1};
		};
		
		class GestureReloadMXUGLContext : GestureReloadMXUGL {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMXUGLContextAnimDrive : GestureReloadMXUGLContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMXUGLProne : GestureReloadMXUGL {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMXUGLProne";
		};
		
		class GestureReloadMXCompact : GestureReloadMX {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXCompact";
		};
		
		class GestureReloadMXCompactContext : GestureReloadMXCompact {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMXCompactContextAnimDrive : GestureReloadMXCompactContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMXCompactProne : GestureReloadMXCompact {
			mask = "BodyFull";
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXCompactprone";
		};
		
		class GestureReloadMXSniper : GestureReloadMX {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXSniper";
		};
		
		class GestureReloadMXSniperContext : GestureReloadMXSniper {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMXSniperContextAnimDrive : GestureReloadMXSniperContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMXSniperProne : GestureReloadMXCompact {
			mask = "BodyFull";
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXSniperprone";
		};
		
		class GestureReloadTRG : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadTRG";
			speed = 0.3;
			leftHandIKCurve[] = {0.038, 1, 0.076, 0, 0.911, 0, 0.968, 1, 1, 1};
		};
		
		class GestureReloadTRGContext : GestureReloadTRG {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadTRGContextAnimDrive : GestureReloadTRGContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadTRGProne : GestureReloadTRG {
			mask = "BodyFull";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadTRGProne";
		};
		
		class GestureReloadKatiba : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatiba";
			speed = 0.278;
			leftHandIKCurve[] = {0.038, 1, 0.076, 0, 0.911, 0, 0.968, 1, 1, 1};
		};
		
		class GestureReloadKatibaContext : GestureReloadKatiba {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadKatibaContextAnimDrive : GestureReloadKatibaContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadKatibaProne : GestureReloadKatiba {
			mask = "BodyFull";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaprone";
		};
		
		class GestureReloadKatibaUGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGL";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		
		class GestureReloadKatibaUGLContext : GestureReloadKatibaUGL {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadKatibaUGLContextAnimDrive : GestureReloadKatibaUGLContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadKatibaUGLProne : GestureReloadKatibaUGL {
			mask = "BodyFull";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGLprone";
		};
		
		class GestureReloadTRGUGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadTRGUGL";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		
		class GestureReloadTRGUGLContext : GestureReloadTRGUGL {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadTRGUGLContextAnimDrive : GestureReloadTRGUGLContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadTRGUGLProne : GestureReloadTRGUGL {
			mask = "BodyFull";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadTRGUGLProne";
		};
		
		class GestureReloadM200 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadM200";
			speed = 0.189403;
			leftHandIKCurve[] = {0, 1, 0.0215, 0, 0.96129, 0, 1, 1};
		};
		
		class GestureReloadM200Context : GestureReloadM200 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadM200ContextAnimDrive : GestureReloadM200Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadM200Prone : GestureReloadM200 {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadM200Prone";
			mask = "BodyFull";
			speed = 0.189403;
		};
		
		class GestureReloadLRR : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadLRR";
			speed = -5;
			rightHandIKCurve[] = {0, 1, 0.067925, 0, 0.143396, 0, 0.177358, 1, 0.732075, 1, 0.754717, 0, 0.94717, 0, 0.988679, 1};
			leftHandIKCurve[] = {0.188679, 1, 0.218868, 0, 0.660377, 0, 0.698113, 1};
		};
		
		class GestureFireLRR : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureFireLRR";
			speed = -2.33;
			rightHandIKCurve[] = {0, 1, 0.08, 0, 0.92, 0, 1, 1};
		};
		
		class GestureReloadLRRContext : GestureReloadLRR {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadLRRContextAnimDrive : GestureReloadLRRContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadLRRProne : GestureReloadLRR {
			mask = "BodyFull";
		};
		
		class GestureReloadEBR : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadEBR";
			speed = 0.27195;
			leftHandIKCurve[] = {0.027, 1, 0.081, 0, 0.946, 0, 0.984, 1};
			rightHandIKCurve[] = {0.027, 1, 0.081, 0, 0.946, 0, 0.984, 1};
		};
		
		class GestureReloadEBRContext : GestureReloadEBR {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadEBRContextAnimDrive : GestureReloadEBRContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadEBRProne : GestureReloadEBR {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadEBRProne";
			mask = "BodyFull";
		};
		
		class GestureReloadSMG_02 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadSMG_02";
			speed = 0.38;
			leftHandIKCurve[] = {0.046, 1, 0.11, 0, 0.917, 0, 0.963, 1};
		};
		
		class GestureReloadSMG_02Context : GestureReloadSMG_02 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadSMG_02ContextAnimDrive : GestureReloadSMG_02Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadSMG_02Prone : GestureReloadSMG_02 {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadSMG_02Prone";
			mask = "BodyFull";
		};
		
		class GestureReloadSMG_03 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadSMG_03";
			speed = 0.26;
			leftHandIKCurve[] = {0.016, 1, 0.056, 0, 0.896, 0, 0.963, 1};
			rightHandIKCurve[] = {0.056, 1, 0.08, 0, 0.112, 0, 0.126, 1, 0.77, 1, 0.81, 0, 0.88, 0, 0.91, 1};
		};
		
		class GestureReloadSMG_03Context : GestureReloadSMG_03 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadSMG_03ContextAnimDrive : GestureReloadSMG_03Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadPistol : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadPistol";
			speed = -2.9;
			mask = "handsWeapon_pst";
			leftHandIKCurve[] = {0, 1, 0.103, 0, 0.8848, 0, 1, 1};
		};
		
		class GestureReloadPistolContext : GestureReloadPistol {
			mask = "handsWeapon_pst_context";
		};
		
		class GestureReloadPistolContextAnimDrive : GestureReloadPistolContext {
			mask = "handsWeapon_pst_contextAnimDrive";
		};
		
		class GestureReloadPistolProne : GestureReloadPistol {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadPistolProne";
		};
		
		class GestureReloadPistolHeavy02 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadPistolHeavy02";
			speed = 0.29;
			mask = "handsWeapon_pst";
		};
		
		class GestureReloadPistolHeavy02Context : GestureReloadPistolHeavy02 {
			mask = "handsWeapon_pst_context";
		};
		
		class GestureReloadPistolHeavy02ContextAnimDrive : GestureReloadPistolHeavy02Context {
			mask = "handsWeapon_pst_contextAnimDrive";
		};
		
		class GestureReloadPistolHeavy02Prone : GestureReloadPistolHeavy02 {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadPistolHeavy02Prone";
		};
		
		class GestureReloadFlaregun : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadFlaregun";
			speed = -2.9;
			mask = "handsWeapon_pst";
			leftHandIKCurve[] = {0, 1, 0.103, 0, 0.8848, 0, 1, 1};
		};
		
		class GestureReloadFlaregunContext : GestureReloadFlaregun {
			mask = "handsWeapon_pst_context";
		};
		
		class GestureReloadFlaregunContextAnimDrive : GestureReloadFlaregunContext {
			mask = "handsWeapon_pst_contextAnimDrive";
		};
		
		class GestureReloadFlaregunProne : GestureReloadFlaregun {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadFlaregunProne";
		};
		
		class GestureReloadSDAR : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadRFB";
			speed = 0.28;
			leftHandIKCurve[] = {0.016, 1, 0.09, 0, 0.947, 0, 0.983, 1};
		};
		
		class GestureReloadSDARContext : GestureReloadSDAR {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadSDARContextAnimDrive : GestureReloadSDARContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadDMR : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadDMR";
			speed = 0.25;
			leftHandIKCurve[] = {0.016, 1, 0.09, 0, 0.947, 0, 0.993, 1};
			rightHandIKCurve[] = {0.016, 1, 0.06, 0, 0.98, 0, 0.993, 1};
		};
		
		class GestureReloadDMR02 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadDMR02";
			speed = 0.322581;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.076, 1, 0.087, 0, 0.978, 0, 0.989, 1};
		};
		
		class GestureReloadDMR03 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadDMR03";
			speed = 0.32967;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.078, 1, 0.089, 0, 0.978, 0, 0.989, 1};
		};
		
		class GestureReloadDMR04 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadDMR04";
			speed = 0.3;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.04, 1, 0.051, 0, 0.979, 0, 0.989, 1};
		};
		
		class GestureReloadDMR05 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadDMR05";
			speed = 0.285714;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.048, 1, 0.058, 0, 0.981, 0, 0.99, 1};
		};
		
		class GestureReloadDMR06 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadDMR06";
			speed = 0.27027;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.036, 1, 0.045, 0, 0.982, 0, 0.991, 1};
		};
		
		class GestureReloadMMG01 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMMG01";
			speed = 0.107143;
			leftHandIKCurve[] = {0.004, 1, 0.007, 0, 0.992, 0, 0.996, 1};
			rightHandIKCurve[] = {0.827, 1, 0.831, 0, 0.991, 0, 0.996, 1};
		};
		
		class GestureReloadMMG02 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMMG02";
			speed = 0.132743;
			leftHandIKCurve[] = {0.013, 1, 0.017, 0, 0.992, 0, 0.996, 1};
			rightHandIKCurve[] = {0.011, 1, 0.014, 0, 0.989, 0, 0.992, 1};
		};
		
		class GestureReloadDMRContext : GestureReloadDMR {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadDMRContextAnimDrive : GestureReloadDMRContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadDMR02Context : GestureReloadDMR02 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadDMR02ContextAnimDrive : GestureReloadDMR02Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadDMR03Context : GestureReloadDMR03 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadDMR03ContextAnimDrive : GestureReloadDMR03Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadDMR04Context : GestureReloadDMR04 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadDMR04ContextAnimDrive : GestureReloadDMR04Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadDMR05Context : GestureReloadDMR05 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadDMR05ContextAnimDrive : GestureReloadDMR05Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadDMR06Context : GestureReloadDMR06 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadDMR06ContextAnimDrive : GestureReloadDMR06Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMMG01Context : GestureReloadMMG01 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMMG01ContextAnimDrive : GestureReloadMMG01Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadMMG02Context : GestureReloadMMG02 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadMMG02ContextAnimDrive : GestureReloadMMG02Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadSDARProne : GestureReloadSDAR {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadRFBProne";
			mask = "BodyFull";
		};
		
		class GestureReloadGM6 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadLynx";
			speed = 0.1721;
			rightHandIKCurve[] = {0.016, 1, 0.044, 0, 0.214, 0, 0.247, 1, 0.723, 1, 0.748, 0, 0.956, 0, 0.989, 1};
			leftHandIKCurve[] = {0, 1, 0.268, 1, 0.296, 0, 0.701, 0, 0.715, 1, 1, 1};
		};
		
		class GestureReloadGM6Context : GestureReloadGM6 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadGM6ContextAnimDrive : GestureReloadGM6Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadGM6Prone : GestureReloadGM6 {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadLynxProne";
			mask = "BodyFullReal";
		};
		
		class GestureReloadSMG_01 : GestureReloadGM6 {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadSMG_01";
			speed = 0.370786;
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {0.056497, 1, 0.084746, 0, 0.920904, 0, 0.966102, 1};
		};
		
		class GestureReloadSMG_01Context : GestureReloadSMG_01 {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadSMG_01ContextAnimDrive : GestureReloadSMG_01Context {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadSMG_01Prone : GestureReloadSMG_01 {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadSMG_01Prone";
		};
		
		class GestureReloadM4SSAS : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadM4SSAS";
			speed = 0.105079;
			leftHandIKCurve[] = {0, 1, 0.01754, 0, 0.97453, 0, 1, 1};
		};
		
		class GestureReloadM4SSASContext : GestureReloadM4SSAS {
			mask = "handsWeapon_context";
		};
		
		class GestureReloadM4SSASContextAnimDrive : GestureReloadM4SSASContext {
			mask = "handsWeapon_contextAnimDrive";
		};
		
		class GestureReloadM4SSASProne : GestureReloadM4SSAS {};
		
		class GestureMountMuzzle : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_SlcMntBull";
			speed = 0.495868;
			headBobStrength = -1;
			canReload = 0;
			rightHandIKCurve[] = {0, 1, 0.01754, 0, 0.97453, 0, 1, 1};
			leftHandIKCurve[] = {0, 1, 0.01754, 0, 0.97453, 0, 1, 1};
		};
		
		class GestureMountMuzzleProne : GestureMountMuzzle {};
		
		class GestureDismountMuzzle : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\inv\knl\stp\lay\rfl\AinvPknlMstpSlayWrflDnon_SlcDisBull";
			speed = 0.495868;
			headBobStrength = -1;
			canReload = 0;
			rightHandIKCurve[] = {0, 1, 0.01754, 0, 0.97453, 0, 1, 1};
			leftHandIKCurve[] = {0, 1, 0.01754, 0, 0.97453, 0, 1, 1};
		};
		
		class GestureDismountMuzzleProne : GestureDismountMuzzle {};
		
		class GestureThrowGrenade : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GrenadeThrowRflRasErc";
			speed = -0.55;
			mask = "Throwing";
			weaponIK = 1;
			soundEnabled = 1;
			soundOverride = "grenade_throw";
			rightHandIKCurve[] = {0, 1, 0.1, 0};
		};
		
		class GestureThrowGrenadeContext : GestureThrowGrenade {
			mask = "Throwing_context";
		};
		
		class GestureThrowGrenadeContextAnimDrive : GestureThrowGrenadeContext {
			mask = "Throwing_contextAnimDrive";
		};
		
		class GestureThrowGrenadePistol : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GrenadeThrowPstRasErc";
			speed = -0.55;
			mask = "Throwing";
		};
		
		class GestureThrowGrenadePistolContext : GestureThrowGrenadePistol {
			mask = "Throwing_context";
		};
		
		class GestureThrowGrenadePistolContextAnimDrive : GestureThrowGrenadePistolContext {
			mask = "Throwing_contextAnimDrive";
		};
		
		class GestureThrowGrenadeLauncher : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GrenadeThrowLnrRasErc";
			speed = -0.55;
			mask = "Throwing";
			weaponIK = 2;
			rightHandIKCurve[] = {0, 1, 0.1, 0};
		};
		
		class GestureThrowGrenadeUna : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GrenadeThrowUnaErc";
			speed = -0.65;
			mask = "Throwing";
		};
		
		class GestureThrowGrenadeUnaContext : GestureThrowGrenadeUna {
			mask = "Throwing_context";
		};
		
		class GestureThrowGrenadeUnaContextAnimDrive : GestureThrowGrenadeUnaContext {
			mask = "Throwing_contextAnimDrive";
		};
		
		class RifleReloadDeployedMk20 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMk20Prone";
			speed = -2.83333;
			leftHandIKCurve[] = {0, 1, 0.04321, 0, 0.9259, 0, 0.969136, 1};
		};
		
		class RifleReloadDeployedMk20UGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMk20Prone";
			speed = 0.34884;
			leftHandIKCurve[] = {0, 1, 0.04321, 0, 0.9259, 0, 0.969136, 1};
		};
		
		class RifleReloadDeployedMXUGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMXProne";
			speed = 0.34884;
			leftHandIKCurve[] = {0, 1, 0.04321, 0, 0.9259, 0, 0.969136, 1};
		};
		
		class RifleReloadDeployedMX : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadMXProne";
			speed = 0.37;
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		};
		
		class RifleReloadDeployedTRGUGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadTRGUglProne";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		
		class RifleReloadDeployedMXCompact : RifleReloadDeployedMX {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXCompactprone";
		};
		
		class RifleReloadDeployedMXSniper : RifleReloadDeployedMX {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMXSniperprone";
		};
		
		class RifleReloadDeployedTRG : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadTRGProne";
			speed = 0.3;
			leftHandIKCurve[] = {0.038, 1, 0.076, 0, 0.911, 0, 0.948, 1};
		};
		
		class RifleReloadDeployedKatiba : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaProne";
			speed = 0.278;
			leftHandIKCurve[] = {0.038, 1, 0.076, 0, 0.911, 0, 0.968, 1};
		};
		
		class RifleReloadDeployedKatibaUGL : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadKatibaUGLProne";
			speed = 0.3;
			leftHandIKCurve[] = {0.014, 1, 0.042, 0, 0.95, 0, 0.985, 1};
		};
		
		class RifleReloadDeployedM200 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadM200Prone";
			speed = 0.189403;
			leftHandIKCurve[] = {0, 1, 0.0215, 0, 0.96129, 0, 1, 1};
		};
		
		class RifleReloadDeployedLRR : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadLRRProne";
			speed = -5.2;
			rightHandIKCurve[] = {0, 1, 0.067925, 0, 0.143396, 0, 0.177358, 1, 0.732075, 1, 0.754717, 0, 0.94717, 0, 0.988679, 1};
			leftHandIKCurve[] = {0.188679, 1, 0.218868, 0, 0.660377, 0, 0.698113, 1};
		};
		
		class RifleReloadDeployedEBR : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadEBRProne";
			speed = 0.27195;
			leftHandIKCurve[] = {0.027, 1, 0.081, 0, 0.946, 0, 0.984, 1};
		};
		
		class RifleReloadDeployedSMG_02 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadSMG_02Prone";
			speed = 0.38;
			leftHandIKCurve[] = {0.046, 1, 0.11, 0, 0.917, 0, 0.963, 1};
		};
		
		class RifleReloadDeployedSMG_03 : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadSMG_03Prone";
			speed = 0.26;
			leftHandIKCurve[] = {0.065, 1, 0.11, 0, 0.917, 0, 0.963, 1};
			rightHandIKCurve[] = {0.056, 1, 0.08, 0, 0.112, 0, 0.126, 1, 0.77, 1, 0.81, 0, 0.88, 0, 0.91, 1};
		};
		
		class RifleReloadDeployedSDAR : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadRFBProne";
			speed = 0.28;
			leftHandIKCurve[] = {0.016, 1, 0.09, 0, 0.947, 0, 0.973, 1};
		};
		
		class RifleReloadDeployedDMR : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\gesturereloaddmrprone";
			speed = 0.25;
			leftHandIKCurve[] = {0.016, 1, 0.09, 0, 0.967, 0, 0.993, 1};
		};
		
		class RifleReloadDeployedDMR02 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\gesturereloaddmr02prone";
			speed = 0.322581;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.076, 1, 0.087, 0, 0.978, 0, 0.989, 1};
		};
		
		class RifleReloadDeployedDMR03 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\gesturereloaddmr03prone";
			speed = 0.32967;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.078, 1, 0.089, 0, 0.978, 0, 0.989, 1};
		};
		
		class RifleReloadDeployedDMR04 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\gesturereloaddmr04prone";
			speed = 0.3;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.04, 1, 0.051, 0, 0.979, 0, 0.989, 1};
		};
		
		class RifleReloadDeployedDMR05 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\gesturereloaddmr05prone";
			speed = 0.285714;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.048, 1, 0.058, 0, 0.981, 0, 0.99, 1};
		};
		
		class RifleReloadDeployedDMR06 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\gesturereloaddmr06prone";
			speed = 0.27027;
			leftHandIKCurve[] = {0.009, 1, 0.018, 0, 0.982, 0, 0.991, 1};
			rightHandIKCurve[] = {0.036, 1, 0.045, 0, 0.982, 0, 0.991, 1};
		};
		
		class RifleReloadDeployedMMG01 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMMG01Prone";
			speed = 0.132743;
			leftHandIKCurve[] = {0.004, 1, 0.007, 0, 0.992, 0, 0.996, 1};
			rightHandIKCurve[] = {0.827, 1, 0.831, 0, 0.991, 0, 0.996, 1};
		};
		
		class RifleReloadDeployedMMG02 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadMMG02Prone";
			speed = 0.12987;
			leftHandIKCurve[] = {0.013, 1, 0.017, 0, 0.992, 0, 0.996, 1};
			rightHandIKCurve[] = {0.011, 1, 0.014, 0, 0.989, 0, 0.992, 1};
		};
		
		class RifleReloadDeployedGM6 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadLynxProne";
			speed = 0.175;
			rightHandIKCurve[] = {0.016, 1, 0.044, 0, 0.214, 0, 0.247, 1, 0.723, 1, 0.748, 0, 0.956, 0, 0.989, 1};
			leftHandIKCurve[] = {0, 1, 0.268, 1, 0.296, 0, 0.701, 0, 0.715, 1, 1, 1};
		};
		
		class RifleReloadDeployedSMG_01 : GestureReloadBase {
			file = "\A3\anims_f\data\Anim\sdr\Gst\GestureReloadSMG_01Prone";
			speed = 0.370786;
			leftHandIKCurve[] = {0.056497, 1, 0.084746, 0, 0.920904, 0, 0.966102, 1};
		};
		
		class RifleReloadDeployedM4SSAS : GestureReloadBase {
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureReloadM4SSAS";
			speed = 0.105079;
			leftHandIKCurve[] = {0, 1, 0.01754, 0, 0.97453, 0, 1, 1};
		};
	};
	
	class BlendAnims {
		class MaskStart {
			weight = 0.85;
		};
		
		class MaskStartDecreased {
			weight = 0.35;
		};
		empty[] = {};
		leftHand[] = {"LeftShoulder", 0.3, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1};
		launcher[] = {"LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "launcher", 1, "Spine3", 1, "Spine2", 0.75, "Spine1", 0.5, "Spine", 0.25, "weapon", 1};
		rightHand[] = {"RightShoulder", 0.3, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1};
		handsWeapon_pst[] = {"head", 1, "neck1", 1, "neck", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0.2, "Spine1", 0.3, "Spine2", 1, "Spine3", 1, "pelvis", "MaskStart"};
		handsWeapon_pst_context[] = {"head", 1, "neck1", 1, "neck", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 0.7, "Spine2", 0.3, "Spine3", 0.2};
		handsWeapon[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1, "pelvis", "MaskStart"};
		handsWeapon_context[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 1, "Spine2", 0.9, "Spine3", 0.8};
		handsWeapon_contextAnimDrive[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 0.7, "Spine2", 0.3, "Spine3", 0.2, "pelvis", "MaskStartDecreased"};
		leftHandInfluence[] = {"head", 0.2, "neck1", 0.3, "neck", 0.3, "weapon", 0.3, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "Spine", 0.2, "Spine1", 0.3, "Spine2", 1, "Spine3", 1};
		head[] = {"head", 1, "neck1", 0.8, "neck", 0.5};
		upperTorso[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1};
		Legs[] = {"head", 0, "neck1", 0, "neck", 0, "weapon", 0, "LeftShoulder", 0, "LeftArm", 0, "LeftArmRoll", 0, "LeftForeArm", 0, "LeftForeArmRoll", 0, "LeftHand", 0, "LeftHandRing", 0, "LeftHandPinky1", 0, "LeftHandPinky2", 0, "LeftHandPinky3", 0, "LeftHandRing1", 0, "LeftHandRing2", 0, "LeftHandRing3", 0, "LeftHandMiddle1", 0, "LeftHandMiddle2", 0, "LeftHandMiddle3", 0, "LeftHandIndex1", 0, "LeftHandIndex2", 0, "LeftHandIndex3", 0, "LeftHandThumb1", 0, "LeftHandThumb2", 0, "LeftHandThumb3", 0, "Spine1", 0, "Spine2", 0, "Spine3", 0, "Spine", 0, "Pelvis", 0, "LeftLeg", 1, "LeftLegRoll", 1, "LeftUpLeg", 1, "LeftUpLegRoll", 1, "LeftFoot", 1, "LeftToeBase", 1, "RightLeg", 1, "RightLegRoll", 1, "RightUpLeg", 1, "RightUpLegRoll", 1, "RightFoot", 1, "RightToeBase", 1};
		LegRight[] = {"head", 0, "neck1", 0, "neck", 0, "weapon", 0, "LeftShoulder", 0, "LeftArm", 0, "LeftArmRoll", 0, "LeftForeArm", 0, "LeftForeArmRoll", 0, "LeftHand", 0, "LeftHandRing", 0, "LeftHandPinky1", 0, "LeftHandPinky2", 0, "LeftHandPinky3", 0, "LeftHandRing1", 0, "LeftHandRing2", 0, "LeftHandRing3", 0, "LeftHandMiddle1", 0, "LeftHandMiddle2", 0, "LeftHandMiddle3", 0, "LeftHandIndex1", 0, "LeftHandIndex2", 0, "LeftHandIndex3", 0, "LeftHandThumb1", 0, "LeftHandThumb2", 0, "LeftHandThumb3", 0, "Spine1", 0.3, "Spine2", 0, "Spine3", 0, "Spine", 0, "Pelvis", 0, "LeftLeg", 0, "LeftLegRoll", 0, "LeftUpLeg", 0, "LeftUpLegRoll", 0, "LeftFoot", 0, "LeftToeBase", 0, "RightLeg", 1, "RightLegRoll", 1, "RightUpLeg", 1, "RightUpLegRoll", 1, "RightFoot", 1, "RightToeBase", 1};
		LegLeft[] = {"head", 0, "neck1", 0, "neck", 0, "weapon", 0, "LeftShoulder", 0, "LeftArm", 0, "LeftArmRoll", 0, "LeftForeArm", 0, "LeftForeArmRoll", 0, "LeftHand", 0, "LeftHandRing", 0, "LeftHandPinky1", 0, "LeftHandPinky2", 0, "LeftHandPinky3", 0, "LeftHandRing1", 0, "LeftHandRing2", 0, "LeftHandRing3", 0, "LeftHandMiddle1", 0, "LeftHandMiddle2", 0, "LeftHandMiddle3", 0, "LeftHandIndex1", 0, "LeftHandIndex2", 0, "LeftHandIndex3", 0, "LeftHandThumb1", 0, "LeftHandThumb2", 0, "LeftHandThumb3", 0, "Spine1", 0, "Spine2", 0, "Spine3", 0, "Spine", 0, "Pelvis", 0, "LeftLeg", 1, "LeftLegRoll", 1, "LeftUpLeg", 1, "LeftUpLegRoll", 1, "LeftFoot", 1, "LeftToeBase", 1, "RightLeg", 0, "RightLegRoll", 0, "RightUpLeg", 0, "RightUpLegRoll", 0, "RightFoot", 0, "RightToeBase", 0};
		BodyFullReal[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1, "Spine", 1, "Pelvis", 1, "LeftLeg", 1, "LeftLegRoll", 1, "LeftUpLeg", 1, "LeftUpLegRoll", 1, "LeftFoot", 1, "LeftToeBase", 1, "RightLeg", 1, "RightLegRoll", 1, "RightUpLeg", 1, "RightUpLegRoll", 1, "RightFoot", 1, "RightToeBase", 1};
		BodyFull[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1, "Spine", 1, "Pelvis", 1, "LeftLeg", 1, "LeftLegRoll", 1, "LeftUpLeg", 1, "LeftUpLegRoll", 1, "LeftFoot", 1, "LeftToeBase", 1, "RightLeg", 1, "RightLegRoll", 1, "RightUpLeg", 1, "RightUpLegRoll", 1, "RightFoot", 1, "RightToeBase", 1};
		BodyHalf[] = {"head", 0.01, "neck1", 0.01, "neck", 0.01, "weapon", 0.01, "LeftShoulder", 0.01, "LeftArm", 0.01, "LeftArmRoll", 0.01, "LeftForeArm", 0.01, "LeftForeArmRoll", 0.01, "LeftHand", 0.01, "LeftHandRing", 0.01, "LeftHandPinky1", 0.01, "LeftHandPinky2", 0.01, "LeftHandPinky3", 0.01, "LeftHandRing1", 0.01, "LeftHandRing2", 0.01, "LeftHandRing3", 0.01, "LeftHandMiddle1", 0.01, "LeftHandMiddle2", 0.01, "LeftHandMiddle3", 0.01, "LeftHandIndex1", 0.01, "LeftHandIndex2", 0.01, "LeftHandIndex3", 0.01, "LeftHandThumb1", 0.01, "LeftHandThumb2", 0.01, "LeftHandThumb3", 0.01, "Spine1", 0.01, "Spine2", 0.01, "Spine3", 0.01, "Spine", 0.01, "Pelvis", 0.01, "LeftLeg", 0.01, "LeftLegRoll", 0.01, "LeftUpLeg", 0.01, "LeftUpLegRoll", 0.01, "LeftFoot", 0.01, "LeftToeBase", 0.01, "RightLeg", 0.01, "RightLegRoll", 0.01, "RightUpLeg", 0.01, "RightUpLegRoll", 0.01, "RightFoot", 0.01, "RightToeBase", 0.01};
		ReloadMask[] = {"LeftShoulder", 0.3, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "RightShoulder", 0.3, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "weapon", 1};
		Throwing[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 1, "Spine2", 1, "Spine3", 1, "pelvis", "MaskStart"};
		Throwing_context[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 1, "Spine1", 0.9, "Spine2", 0.7, "Spine3", 0.5};
	};
	
	class Interpolations {};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
