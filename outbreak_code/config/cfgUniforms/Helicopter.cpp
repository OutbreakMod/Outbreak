/*

class O_Pilot_F;
class O_helicrew_F;
class O_Soldier_unarmed_F;

*/
class MOD_HelicopterPilotUniform : MOD_Uniform_Base {
    author = "$STR_A3_Bohemia_Interactive";
    scope = 2;
    displayName = "$STR_A3_Pilot_coveralls_Iran";
    picture = "\A3\characters_f\data\ui\icon_U_OI_PilotCoveralls_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_iran_co.paa"};
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "SoldierHelicopter1";
        containerClass = "Supply60";
        mass = 100;
    };
};

class MOD_HelicopterCrewUniform : MOD_Uniform_Base {
    author = "$STR_A3_Bohemia_Interactive";
    scope = 2;
    displayName = "$STR_A3_Pilot_coveralls_Iran";
    picture = "\A3\characters_f\data\ui\icon_U_OI_PilotCoveralls_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_iran_co.paa"};
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "SoldierHelicopter2";
        containerClass = "Supply60";
        mass = 100;
    };
};

class MOD_HelicopterUnarmedUniform : MOD_Uniform_Base {
    author = "$STR_A3_Bohemia_Interactive";
    scope = 2;
    displayName = "$STR_A3_Iran_Fatigues_hex";
    picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "SoldierHelicopter3";
        containerClass = "Supply40";
        mass = 80;
    };
};