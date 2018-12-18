
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

class CfgWeapons
{
	class UGL_F;
	class GP25_Base: UGL_F
	{
		magazines[] = { __40MM_GP25_MAGS };
	};
    class Pistol_Base_F;
	class rhs_weap_M320_Base_F: Pistol_Base_F
	{
		magazines[] = { __40MM_M203_MAGS };
	};
    class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F{};
	
	// RHS USF
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
        magazines[] = { __556_MAGS };
		class M203_GL: UGL_F
		{
			magazines[] = { __40MM_M203_MAGS };
		};
		class M320_GL: M203_GL
		{
			magazines[] = { __40MM_M203_MAGS };
		};
	};
	class rhs_weap_m4: rhs_weap_m4_Base{};
	class rhs_weap_m4_m320: rhs_weap_m4{};
	class rhs_weap_m4_m203: rhs_weap_m4_m320{};
	class rhs_weap_m4a1: rhs_weap_m4_Base{};
	class rhs_weap_m4a1_m203: rhs_weap_m4a1{};
	class rhs_weap_m4a1_m320: rhs_weap_m4a1{};
	class rhs_weap_m4a1_blockII: rhs_weap_m4a1{};
	class rhs_weap_m4a1_blockII_M203: rhs_weap_m4a1_blockII{};
	class rhs_weap_mk18: rhs_weap_m4a1_blockII{};
	class rhs_weap_mk18_m320: rhs_weap_mk18{};
	class rhs_weap_m16a4: rhs_weap_m4_Base{};
	class rhs_weap_m16a4_carryhandle_M203: rhs_weap_m16a4{};
	class rhs_weap_hk416d10: rhs_weap_m4a1{};
	class rhs_weap_hk416d10_m320: rhs_weap_hk416d10{};
	class rhs_weap_hk416d145: rhs_weap_hk416d10{};
	class rhs_weap_hk416d145_m320: rhs_weap_hk416d145{};
	class rhs_weap_m27iar: rhs_weap_m4a1
	{
		magazines[] = { __556_MAGS, "delta_rhs_mag_60Rnd_556x45_M855A1_Stanag","delta_rhs_mag_60Rnd_556x45_M855A1_Stanag_Tracer_Red"};
	};
	class LMG_Mk200_F;
	class rhs_weap_M249_base: LMG_Mk200_F
	{
		magazines[] = { __556_BELTS , __556_MAGS };
	};
	class rhs_weap_saw_base: Rifle_Base_F{};
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base
	{
		magazines[] = { __556_BELTS , __556_MAGS };
	};
	class rhs_weap_m32_Base_F: Rifle_Base_F
	{
		magazines[] =
		{
			"rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M433_HEDP","rhsusf_mag_6Rnd_M397_HET",
			"rhsusf_mag_6Rnd_M576_Buckshot","rhsusf_mag_6Rnd_M781_Practice","rhsusf_mag_6Rnd_m4009",
			"rhsusf_mag_6Rnd_M585_white","rhsusf_mag_6Rnd_m661_green","rhsusf_mag_6Rnd_m662_red",
			"rhsusf_mag_6Rnd_M713_red","rhsusf_mag_6Rnd_M714_white","rhsusf_mag_6Rnd_M715_green",
			"rhsusf_mag_6Rnd_M716_yellow", __40MM_M203_MAGS
		};
	};
	
	// RHS AFRF
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		magazines[] = { __545_MAGS };
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F{};
	class rhs_weap_akm: rhs_weap_ak74m
	{
		magazines[] = { __762_MAGS };
	};
	class rhs_weap_akm_gp25: rhs_weap_akm{};
	class rhs_weap_akms_gp25: rhs_weap_akm{};
	class rhs_weap_ak103_base: rhs_weap_akm
	{
		magazines[] = { __762_MAGS };
	};
	class rhs_weap_ak103_gp25: rhs_weap_ak103_base {};
	class rhs_weap_ak103_gp25_npz: rhs_weap_ak103_base {};
	class rhs_weap_ak74m_folded: rhs_weap_ak74m {};
	class rhs_weap_ak74m_gp25_folded: rhs_weap_ak74m_folded {};
	class rhs_weap_ak74m_gp25: rhs_weap_ak74m {};
	class Rifle_Long_Base_F: Rifle_Base_F {};
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		magazines[] = { __TM_762x54R_PK_MAGS };
	};
	class rhs_weap_pkp: rhs_pkp_base {};
	class rhs_weap_pkm: rhs_weap_pkp {};
	
	// RHS GREF
	class rhs_weap_m70_base: Rifle_Base_F 
	{
		magazines[] = { __762_MAGS };
	};
	class rhs_weap_m70ab2: rhs_weap_m70_base {};
	class rhs_weap_m70ab2_fold: rhs_weap_m70ab2 {};
	class rhs_weap_m70b1: rhs_weap_m70ab2 {};
	class rhs_weap_m92: rhs_weap_m70_base {};
	class rhs_weap_m92_fold: rhs_weap_m92 {};
	
	// RHS SAF
	class PBG40_Base: GP25_Base {
		magazines[] = { __40MM_GP25_MAGS };
	};
	class rhs_weap_ag36_base: UGL_F {
		magazines[] = { __40MM_M203_MAGS };
	};
	class rhs_weap_m84: Rifle_Long_Base_F
	{
		magazines[] = { __TM_762x54R_PK_MAGS };
	};
	
	// HLC
	class hlc_ak_base;
	class hlc_rifle_ak12: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_ak12GL: hlc_rifle_ak12
	{
		class hlc_GP30: UGL_F
		{
			magazines[] = { __40MM_GP25_MAGS };
		};
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_ak74m: hlc_rifle_ak74 {};
	class hlc_rifle_aks74: hlc_rifle_ak74 {};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		class hlc_GP30: UGL_F
		{
			magazines[] = { __40MM_GP25_MAGS };
		};
	};
	class hlc_rifle_ak47: hlc_ak_base
	{
		magazines[] = { __762_MAGS };
	};
	class hlc_rifle_akm: hlc_rifle_ak47{};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		class hlc_GP25: UGL_F
		{
			magazines[] = { __40MM_GP25_MAGS };
		};
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		magazines[] = { __762_RPK_MAGS };
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_RK62: hlc_ak_base
	{
		magazines[] = { __762_MAGS };
	};
	class hlc_rifle_slr107u: hlc_ak_base
	{
		magazines[] = { __762_MAGS };
	};
	class hlc_rifle_slr107u_MTK: hlc_rifle_slr107u
	{
		magazines[] = { __762_MAGS };
	};
	class hlc_rifle_ak74_MTK: hlc_rifle_ak74
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_ak74m_MTK: hlc_rifle_ak74m
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_aks74u_MTK: hlc_rifle_aks74u
	{
		magazines[] = { __545_MAGS };
	};
	
	// CUP
	class CUP_l85a2_base: Rifle_Base_F
	{
		magazines[] = { __556_MAGS };
	};
	class CUP_l85a2_ugl: CUP_l85a2_base
	{
		class L85_UGL: UGL_F
		{
			magazines[] = { __40MM_M203_MAGS };
		};
	};
	class CUP_saw_base;
	class CUP_lmg_minimipara: CUP_saw_base
	{
		magazines[] = { __556_BELTS , __556_MAGS };
	};
	class CUP_glaunch_Base: Rifle_Base_F
	{
		magazines[] = { __40MM_M203_MAGS };
	};
	class CUP_glaunch_M32: CUP_glaunch_Base
	{
		magazines[] = { __40MM_M203_MAGS };
	};
	class CUP_glaunch_6G30: CUP_glaunch_M32
	{
		magazines[] = { __40MM_GP25_MAGS };
	};
	class CUP_lmg_Mk48_Base: Rifle_Long_Base_F
	{
		magazines[] = { __762_NATO_MAGS };
	};
	class CUP_arifle_SCAR_Base: Rifle_Base_F
	{
		magazines[] = { __556_MAGS };
		class EGLMMuzzle: UGL_F
		{
			magazines[] = { __40MM_M203_MAGS };
		};
	};
	class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base
	{
		magazines[] = 
		{
			__762_NATO_20_MAGS, "CUP_20Rnd_762x51_B_SCAR",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"
		};
	};
	class CUP_arifle_XM8_Base: Rifle_Base_F
	{
		magazines[] = { __556_MAGS };
		class XM320Muzzle: UGL_F
		{
			magazines[] = { __40MM_M203_MAGS };
		};
	};
	
    // Vanilla
    class mk20_base_F: Rifle_Base_F
    {
        magazines[] = { __556_MAGS };
    };
    class arifle_Mk20_F: mk20_base_F
    {
        magazines[] = { __556_MAGS };
    };
    class arifle_Mk20_GL_F: mk20_base_F
    {
        magazines[] = { __556_MAGS };
        class EGLM: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
    };
    class arifle_Mk20C_F: mk20_base_F
    {
        magazines[] = { __556_MAGS };
    };
    class Tavor_Base_F: Rifle_Base_F
    {
        magazines[] = { __556_MAGS };
    };
    class arifle_TRG20_F: Tavor_Base_F
    {
        magazines[] = { __556_MAGS };
    };
    class arifle_TRG21_F: Tavor_Base_F
    {
        magazines[] = { __556_MAGS };
    };
    class arifle_TRG21_GL_F: arifle_TRG21_F
    {
        magazines[] = { __556_MAGS };
        class EGLM: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
    };
    class LMG_Zafir_F: Rifle_Long_Base_F
    {
        magazines[] = { "150Rnd_762x54_Box", "150Rnd_762x54_Box_Tracer", __762_NATO_MAGS };
    };
    
	// Apex
	class arifle_AK12_base_F: Rifle_Base_F 
	{
		magazines[] = { __762_MAGS };
	};
	class arifle_AK12_F: arifle_AK12_base_F {};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F 
	{
		class EGLM: UGL_F 
		{
			magazines[] = { __40MM_GP25_MAGS };
		};
	};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F {};
	class arifle_AKM_base_F: Rifle_Base_F 
	{
		magazines[] = { __762_MAGS };
	};
	class arifle_AKM_F: arifle_AKM_base_F {};
	class arifle_AKS_base_F: Rifle_Base_F 
	{
		magazines[] = { __545_MAGS };
	};
	class arifle_AKS_F: arifle_AKS_base_F {};
	
	class arifle_SPAR_01_base_F: Rifle_Base_F 
	{
		magazines[] = { __556_MAGS };
	};
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F 
	{
		class EGLM: UGL_F 
		{
			magazines[] = { __40MM_M203_MAGS };
		};
	};
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {};
	class arifle_SPAR_03_base_F: Rifle_Base_F 
	{
		magazines[] = { __762_NATO_20_MAGS };
	};
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F {};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F {};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F {};
	class LMG_03_base_F: Rifle_Long_Base_F 
	{
		magazines[] = { __556_BELTS };
	};
	class LMG_03_F: LMG_03_base_F {};
	
	class Launcher_Base_F;
	class launch_RPG7_F: Launcher_Base_F 
	{
		magazines[] = { __RPG7_VANILLACOMPAT_GRENADES };
	};

    // MBG
    class mbg_m16a1: rhs_weap_m16a4
    {
        magazines[] = { __556_MAGS };
    };
    class mbg_m16a2: rhs_weap_m16a4
    {
        magazines[] = { __556_MAGS };
    };
    
    // 3CB
    class arifle_Mk20_plain_F: arifle_Mk20_F {};
    class UK3CB_BAF_L85A2: arifle_Mk20_plain_F
    {
        magazines[] = { __556_MAGS };
    };
    class UK3CB_BAF_L85A2_UGL: UK3CB_BAF_L85A2
    {
        class UK3CB_BAF_L123A2: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
        class UK3CB_BAF_L123A3_V2: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
    };
    class UK3CB_BAF_L85A2_UGL_HWS: UK3CB_BAF_L85A2
    {
        class UK3CB_BAF_L123A2: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
        class UK3CB_BAF_L123A3_V2: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
    };
    class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F
    {
        magazines[] = { __556_MAGS };
    };
    class UK3CB_BAF_L119A1_UKUGL: UK3CB_BAF_L119_Base
    {
        class UK3CB_BAF_L123A2: UGL_F
        {
            magazines[] = { __40MM_M203_MAGS };
        };
    };
    /*class UK3CB_BAF_L1A1: Rifle_Base_F
    {
        
    };*/
    class EBR_base_F: Rifle_Long_Base_F {};
    class srifle_EBR_F: EBR_base_F {};
    class UK3CB_BAF_L129A1: srifle_EBR_F
    {
        magazines[] = { __762_NATO_20_MAGS };
    };
    class UK3CB_BAF_L110_Base: Rifle_Long_Base_F {};
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
    {
        magazines[] = { __556_BELTS, "UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd_Blank","UK3CB_BAF_556_30Rnd_T" };
    };
    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base
    {
        magazines[] = { __762_NATO_MAGS };
    };
    class UK3CB_BAF_L7A2: Rifle_Long_Base_F
    {
        magazines[] = { __762_NATO_MAGS };
    };
    class LMG_RCWS;
    class UK3CB_BAF_L7A2_veh: LMG_RCWS
    {
        magazines[] = { __762_NATO_MAGS };
    };
    class LMG_coax: LMG_RCWS {};
    class UK3CB_BAF_L37A1_veh: LMG_coax
    {
        magazines[] = { __762_NATO_MAGS };
    };
    
    class idf_x95: Rifle_Base_F {
        magazines[] = { __556_MAGS };
    };
};
