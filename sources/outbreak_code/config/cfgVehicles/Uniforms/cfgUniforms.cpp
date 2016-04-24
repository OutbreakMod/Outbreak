/*
	Override uniform factions from
	Original code by Haleks: https://forums.bistudio.com/topic/166657-unlocked-uniforms/

	Model sides:
	3 blufor, 2 opfor, 1 independent, 0 civillian
	
*/
class B_Soldier_base_F : SoldierWB {
	modelsides[] = {3, 2, 1, 0};
};

class O_Soldier_base_F : SoldierEB {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Soldier_base_F : SoldierGB {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Soldier_LAT_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_G_Soldier_LAT_F : I_G_Soldier_LAT_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_Soldier_base_F : SoldierGB {
	modelsides[] = {3, 2, 1, 0};
};

class Civilian_F : Civilian {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_1_1_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_polo_1_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_Orestes : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_p_fugitive_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_w_worker_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_hunter_1_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_p_shorts_1_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_pilot_F : C_man_1 {
	modelsides[] = {3, 2, 1, 0};
};

class B_diver_F : B_Soldier_diver_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_diver_F : I_Soldier_diver_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class O_diver_F : O_Soldier_diver_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Soldier_02_f : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Soldier_03_f : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Soldier_04_f : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Soldier_05_f : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class O_Soldier_02_F : O_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_Soldier_03_F : I_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_Soldier_04_F : I_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Soldier_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_G_Soldier_F : I_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Soldier_AR_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_medic_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_engineer_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Soldier_GL_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Soldier_M_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_officer_F : I_G_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class O_G_Soldier_F : I_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class o_g_soldier_unarmed_f : O_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class o_g_survivor_F : O_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class i_g_soldier_unarmed_f : I_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class i_g_survivor_F : I_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Helipilot_F : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Pilot_F : B_Helipilot_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_helicrew_F : B_Helipilot_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_RangeMaster_F : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Competitor_F : B_RangeMaster_F {
	modelsides[] = {3, 2, 1, 0};
};

class O_officer_F : O_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_officer_F : I_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Story_SF_Captain_F : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class B_Story_Protagonist_F : B_Soldier_base_F {
	modelsides[] = {3, 2, 1, 0};
};

class C_man_p_beggar_F : C_man_p_fugitive_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Story_SF_Captain_F : B_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class I_G_Story_Protagonist_F : B_G_Soldier_F {
	modelsides[] = {3, 2, 1, 0};
};

class C_scientist_F : C_man_w_worker_F {
	modelsides[] = {3, 2, 1, 0};
};