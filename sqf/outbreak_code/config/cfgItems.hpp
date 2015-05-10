class CfgItems {
	
	/*
		Get meat type from animal
	*/
	
	class GutAnimal {
		class Sheep_random_F {
			raw = "sc_rawmutton";
			yield = 4;
		};
	};
	
	/*
		Get cooked meat from raw meat
	*/
	class Meat {
		class sc_rawmutton {
			cooked = "sc_cookedmutton";
		};
	};
};