class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        class Single: Mode_SemiAuto {
            dispersion = 0.0015; // 0.0008727
        };
        /*class Burst: Mode_Burst {
            dispersion = 0.0022;
        };*/
        class FullAuto: Mode_FullAuto {
            dispersion = 0.003;
        };
    };
    
    class rhs_weap_saw_base: Rifle_Base_F {
        class FullAuto;
    };
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base {
        recoil = "tm_recoil_m249"; // recoil_SAW
        class FullAuto: FullAuto {
            dispersion = 0.004; // 0.00101
        };
    };
    
    class rhs_weap_M249_base;
    class rhs_weap_m240_base: rhs_weap_M249_base {
        recoil = "tm_recoil_m240"; // recoil_zafir
        class manual: Mode_FullAuto {
            dispersion = 0.00015; // 0.0008
        };
    };
    
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        recoil = "recoil_mxm"; // from recoil_mk20 to same as m4
    };
    
    class hlc_M60e4_base: Rifle_Base_F {
        recoil = "tm_recoil_m240"; // from recoil_default (!) to same as m240
        class FullAuto: Mode_FullAuto {
            dispersion = 0.005; // 0.000261799
        };
    };
    
    class hlc_ak_base: Rifle_Base_F {};
    class hlc_rifle_rpk: hlc_ak_base {
        recoil = "recoil_mxm"; // recoil_mk20
    };
    class hlc_rifle_rpk74n: hlc_ak_base {
        recoil = "recoil_mxm"; // recoil_mk20
    };
    
    class hlc_g3_base: Rifle_Base_F {
        recoil = "tm_recoil_battlerifle"; // recoil_dmr_03
    };
    
    class hlc_fal_base: Rifle_Base_F {
        recoil = "tm_recoil_battlerifle"; // recoil_ebr
    };
    class hlc_rifle_SLR: hlc_fal_base {
        recoil = "tm_recoil_battlerifle"; // recoil_ebr
    };
    
    class CUP_Vacannon_D10;
    class CUP_Vacannon_2A28: CUP_Vacannon_D10 {
        ace_overpressure_angle = 60;
        ace_overpressure_damage = 0.7;
        ace_overpressure_range = 10;
    };
    class CUP_Vacannon_SPG9_veh: CUP_Vacannon_2A28 {};
};