class CfgMagazines {
    class rhsusf_50Rnd_762x51;
    class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51 {};
    class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51 {};
    class rhsusf_100Rnd_762x51: rhsusf_50Rnd_762x51 {};
    class rhsusf_100Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap {};
    class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer {};
    
    class GVAR(100Rnd_762x51_m80): rhsusf_100Rnd_762x51 {
        displayname = "100rnd MG3 belt (M80)";
        model = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_loose_belt";
        modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
    };
    class GVAR(100Rnd_762x51_m61_ap): rhsusf_100Rnd_762x51_m61_ap {
        displayname = "100rnd MG3 belt (M61 AP)";
        model = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_loose_belt";
        modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
    };
    class GVAR(100Rnd_762x51_m62_tracer): rhsusf_100Rnd_762x51_m62_tracer {
        displayname = "100rnd MG3 belt (M62 Tracer)";
        model = "\rhsgref\addons\rhsgref_weapons2\magazines\rhs_mg42_loose_belt";
        modelSpecial = "rhsgref\addons\rhsgref_weapons\mag_proxies\rhs_mag_792x57_belt_296rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhsgref\addons\rhsgref_weapons2\icons\rhs_inv_mg42_drum_mag_ca.paa";
    };
};