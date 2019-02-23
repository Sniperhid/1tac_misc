class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag: CA_Magazine {
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_30rnd";
        modelSpecialIsProxy = 1;
    };
    class 200Rnd_556x45_Box_F: CA_Magazine {
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_cmag_100rnd";
        modelSpecialIsProxy = 1;
    };
    class 30Rnd_545x39_Mag_F: CA_Magazine {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class 30Rnd_762x39_Mag_F: CA_Magazine {
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_30rnd";
        modelSpecialIsProxy = 1;
    };
    
    class UK3CB_BAF_556_30Rnd: 30Rnd_556x45_Stanag {};
    class UK3CB_BAF_556_100Rnd: UK3CB_BAF_556_30Rnd {
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class UK3CB_BAF_556_30Rnd_Blank: UK3CB_BAF_556_30Rnd {};
    class UK3CB_BAF_556_100Rnd_Blank: UK3CB_BAF_556_30Rnd_Blank {
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
    class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag {};
    class UK3CB_BAF_556_30Rnd_T: 30Rnd_556x45_Stanag_Tracer_Red {};
    class UK3CB_BAF_556_100Rnd_T: UK3CB_BAF_556_30Rnd_T {
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
        modelSpecialIsProxy = 1;
    };
};