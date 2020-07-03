class CfgMagazines {
    class UK3CB_BAF_556_30Rnd;
    class UK3CB_BAF_556_100Rnd: UK3CB_BAF_556_30Rnd {
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_556_30Rnd_T;
    class UK3CB_BAF_556_100Rnd_T: UK3CB_BAF_556_30Rnd_T {
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_100rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_556_200Rnd: UK3CB_BAF_556_100Rnd {
        hiddenSelections[] = {};
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_556_200Rnd_T: UK3CB_BAF_556_100Rnd_T {
        hiddenSelections[] = {};
        model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
};