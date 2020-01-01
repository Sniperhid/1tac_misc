
#include "\hlc_core\script_macros.hpp"
// https://github.com/toadie2k/NIArms/blob/master/hlc_core/script_macros.hpp#L38

// Override them using undef/def

#define __TM_556_ADDITIONAL "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "mbg_mag_20Rnd_556x45_M855A1_Stanag"
#define __TM_556_STANAG_ACE_MAGS "ACE_30Rnd_556x45_Stanag_M995_AP_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk318_mag", "ACE_30Rnd_556x45_Stanag_Tracer_Dim"
#define __TM_556_STANAG_3CB_MAGS "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_Blank", "UK3CB_BAF_556_30Rnd_T"
#define __556_MAGS __556STANAG_RHS_MAGS, __TM_556_ADDITIONAL, __TM_556_STANAG_ACE_MAGS, __556STANAG_BI_MAGS, __556STANAG_CUP_MAGS, __TM_556_STANAG_3CB_MAGS

#define __TM_556BELTS_ADDITIONAL "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_200Rnd_556x45_M855_soft_pouch", "rhsusf_200rnd_556x45_M855_box", "rhsusf_200rnd_556x45_M855_mixed_box"
#define __TM_556BELTS_3CB "UK3CB_BAF_556_100Rnd", "UK3CB_BAF_556_100Rnd_Blank", "UK3CB_BAF_556_100Rnd_T", "UK3CB_BAF_556_200Rnd", "UK3CB_BAF_556_200Rnd_Blank", "UK3CB_BAF_556_200Rnd_T"
#define __556_BELTS __556NATO_RHS_BELTS, __556NATO_BI_BELTS, __556NATO_CUP_BELTS, __TM_556BELTS_ADDITIONAL, __TM_556BELTS_3CB
//Don't use Toadie's AR15s - __556STANAG_MAGS
//Don't use Toadies SAW pack - __556NATO_BELTS

#define __545_ADDITIONAL "rhs_30Rnd_545x39_7N6_AK", "rhs_45Rnd_545X39_7N6_AK"
#define __545_MAGS __545x39_RHS_MAGS, __545_ADDITIONAL, __545x39_MAGS, __545x39_BI_MAGS

#define __762_MAGS __762x39_RHS_MAGS, __762x39_MAGS, __762x39_BI_MAGS
#define __762_RPK_MAGS __762_MAGS, "hlc_75Rnd_762x39_m_rpk"

#define __TM_762NATO_3CB_BELTS "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_200Rnd_T"
#define __762_NATO_MAGS __762NATO_RHS_BELTS, __762NATO_CUP_BELTS, __TM_762NATO_3CB_BELTS
// Exclude BI mags 150rnd boxes __762NATO_BI_BELTS 

#define __TM_762x51_20x_ACE_MAGS "ACE_20Rnd_762x51_Mag_Tracer", "ACE_20Rnd_762x51_Mag_Tracer_Dim", "ACE_20Rnd_762x51_Mk316_Mod_0_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_Mk319_Mod_0_Mag", "ACE_20Rnd_762x51_M993_AP_Mag", "ACE_20Rnd_762x51_Mag_SD"
#define __TM_762x51_20x_EXTRA_MAGS "tm_20Rnd_762x51_m80_Mag", "tm_20Rnd_762x51_m80a1epr_Mag"
#define __TM_762x51_20x_3CB_MAGS "UK3CB_BAF_762_20Rnd", "UK3CB_BAF_762_20Rnd_Blank", "UK3CB_BAF_762_20Rnd_T", "UK3CB_BAF_762_L42A1_20Rnd", "UK3CB_BAF_762_L42A1_20Rnd_Blank", "UK3CB_BAF_762_L42A1_20Rnd_T"
#define __762_NATO_20_MAGS __762M14_MAGS, __762M14_BI_MAGS, __762M14_RHS_MAGS, __762M14_CUP_MAGS, __TM_762x51_20x_ACE_MAGS, __TM_762x51_20x_EXTRA_MAGS, __TM_762x51_20x_3CB_MAGS

#define __40MM_M203_ADDITIONAL "ACE_HuntIR_M203", "rhs_mag_M781_Practice", "rhs_mag_M397_HET"
#define __TM_40MM_M203_3CB "UK3CB_BAF_1Rnd_HE_Grenade_Shell", "UK3CB_BAF_1Rnd_HEDP_Grenade_Shell", "UK3CB_BAF_1Rnd_Blank_Grenade_Shell", "UK3CB_BAF_UGL_FlareCIR_F", "UK3CB_BAF_UGL_FlareWhite_F", "UK3CB_BAF_UGL_FlareRed_F", "UK3CB_BAF_UGL_FlareGreen_F", "UK3CB_BAF_UGL_FlareYellow_F"
#define __40MM_M203_MAGS __40MM_M203_RHS_GRENADES, __40MM_M203_ADDITIONAL, __40MM_M203_BI_GRENADES, __40MM_M203_CUP_GRENADES, __TM_40MM_M203_3CB

#define __40MM_GP25_MAGS __40MM_GP_RHS_GRENADES, __40MM_GP_GRENADES

#define __RPG7_VANILLACOMPAT_GRENADES "RPG7_F", "CUP_PG7V_M", "CUP_PG7VM_M", "CUP_PG7VL_M", "CUP_PG7VR_M", "CUP_OG7_M", "CUP_TBG7V_M"

#define __TM_762x54R_PK_MAGS "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR_7N13", "rhs_100Rnd_762x54mmR_7N26", "rhs_100Rnd_762x54mmR_7BZ3", "rhssaf_250Rnd_762x54R"

class CfgWeapons {
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};
    
    class LMG_Zafir_F: Rifle_Long_Base_F {
        magazines[] = { "150Rnd_762x54_Box", "150Rnd_762x54_Box_Tracer", __762_NATO_MAGS };
    };

    // MBG
    class rhs_weap_m16a4;
    class mbg_m16a1: rhs_weap_m16a4 {
        magazines[] = { __556_MAGS };
    };
    class mbg_m16a2: rhs_weap_m16a4 {
        magazines[] = { __556_MAGS };
    };
    
    // 3CB
    class EBR_base_F: Rifle_Long_Base_F {};
    class srifle_EBR_F: EBR_base_F {};
    class UK3CB_BAF_L129A1: srifle_EBR_F {
        magazines[] = { __762_NATO_20_MAGS };
    };
    class UK3CB_BAF_L110_Base: Rifle_Long_Base_F {};
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
        magazines[] = { __556_BELTS, "UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd_Blank","UK3CB_BAF_556_30Rnd_T" };
        magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","M249_556x45","CBA_556x45_MINIMI"};
    };
    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
        magazines[] = { __762_NATO_MAGS };
        magazineWell[] = {"M240_762x51"};
    };
    class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
        magazines[] = { __762_NATO_MAGS };
        magazineWell[] = {"M240_762x51"};
    };
    
    class CUP_lmg_Mk48_Base: Rifle_Long_Base_F {
        magazineWell[] = {
            "CBA_762x51_LINKS",
            "M240_762x51"
        };
    };
};
