class CfgWeapons {
    class rhs_weap_mg42;
    class ADDON: rhs_weap_mg42 {
        baseWeapon = QUOTE(ADDON);
        displayName = "MG3";
        author = "1Tac Misc, Red Hammer Studios";
        magazines[] = {QGVAR(100Rnd_762x51_m80), QGVAR(100Rnd_762x51_m61_ap), QGVAR(100Rnd_762x51_m62_tracer)};
        magazineWell[] = {};
    };
};