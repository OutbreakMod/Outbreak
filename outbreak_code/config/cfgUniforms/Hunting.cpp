class MOD_HuntingUniform1 : MOD_Uniform_Base {
    author = "$STR_A3_Bohemia_Interactive";
    scope = 2;
    displayName = "$STR_A3_Combat_fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "HuntingSoldier1";
        containerClass = "Supply40";
        mass = 40;
    };
};