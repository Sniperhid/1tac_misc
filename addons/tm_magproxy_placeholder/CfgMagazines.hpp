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
    
    class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_S_AK: 30Rnd_556x45_Stanag {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK {};
    class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_m_rpk: hlc_30Rnd_545x39_T_ak {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_762x39_b_ak: 30Rnd_556x45_Stanag {
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_762x39_AP_rpk: 30Rnd_556x45_Stanag {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_762x39_t_rpk: 30Rnd_556x45_Stanag {
        modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
        modelSpecialIsProxy = 1;
    };
    class hlc_75Rnd_762x39_AP_rpk: hlc_45Rnd_762x39_AP_rpk {
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_762x39_m_rpk: hlc_45Rnd_762x39_t_rpk {};
    class hlc_75Rnd_762x39_m_rpk: hlc_45Rnd_762x39_m_rpk {
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
        modelSpecialIsProxy = 1;
    };
};