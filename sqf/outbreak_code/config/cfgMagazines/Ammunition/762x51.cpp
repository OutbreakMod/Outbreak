class CUP_20Rnd_762x51_DMR;
class CUP_20Rnd_762x51_FNFAL_M;

class 20Rnd_762x51_DMR : CUP_20Rnd_762x51_DMR {
	class cfgItemActions {
		doubleClick = "['20Rnd_762x51_DMR', '20Rnd_762x51_FNFAL_M'] call convert_magazines;";
	};
};

class 20Rnd_762x51_FNFAL_M : CUP_20Rnd_762x51_FNFAL_M {
	class cfgItemActions {
		doubleClick = "['20Rnd_762x51_FNFAL_M', '20Rnd_762x51_DMR'] call convert_magazines;";
	};	
};