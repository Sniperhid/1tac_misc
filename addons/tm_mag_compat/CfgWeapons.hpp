
#include "\hlc_core\script_macros.hpp"
// https://github.com/toadie2k/NIArms/blob/master/hlc_core/script_macros.hpp#L38

// Override them using undef/def

#define __556_MAGS __556STANAG_BI_MAGS, __556STANAG_RHS_MAGS, __556STANAG_CUP_MAGS 
#define __556_BELTS __556NATO_BI_BELTS, __556NATO_RHS_BELTS, __556NATO_CUP_BELTS
//Don't use Toadie's AR15s - __556STANAG_MAGS
//Don't use Toadies SAW pack - __556NATO_BELTS

#define __545_MAGS __545x39_MAGS, __545x39_BI_MAGS, __545x39_RHS_MAGS 
#define __762_MAGS __762x39_MAGS, __762x39_BI_MAGS, __762x39_RHS_MAGS 

#define __762_NATO_MAGS __762NATO_RHS_BELTS, __762NATO_CUP_BELTS 
// Exclude BI mags 150rnd boxes __762NATO_BI_BELTS 

#define __40MM_M203_MAGS __40MM_M203_BI_GRENADES, __40MM_M203_RHS_GRENADES, __40MM_M203_CUP_GRENADES, "ACE_HuntIR_M203"

#define __40MM_GP25_MAGS __40MM_GP_GRENADES, __40MM_GP_RHS_GRENADES 

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
	class rhs_weap_m240_base: rhs_weap_M249_base{};
	class GM6_base_F;
	class rhs_weap_M107_Base_F: GM6_base_F{};
	class hgun_ACPC2_F;
	class hgun_P07_F;
	class rhsusf_weap_m1911a1: hgun_ACPC2_F{};
	class rhsusf_weap_glock17g4: hgun_P07_F{};
	class rhsusf_weap_m9: rhsusf_weap_glock17g4{};
	class rhs_weap_m32_Base_F: Rifle_Base_F
	{
		magazines[] = { __40MM_M203_MAGS };
	};
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
	class rhs_weap_ak103_gp25: rhs_weap_ak103_base{};
	class rhs_weap_ak103_gp25_npz: rhs_weap_ak103_base{};
	class rhs_weap_ak74m_folded: rhs_weap_ak74m{};
	class rhs_weap_ak74m_gp25_folded: rhs_weap_ak74m_folded{};
	class rhs_weap_ak74m_gp25: rhs_weap_ak74m{};
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
	class hlc_rifle_aks74: hlc_rifle_ak74{};
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
		magazines[] = { __762_MAGS };
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
	class hlc_rifle_slr107u_MTK: hlc_ak_base
	{
		magazines[] = { __762_MAGS };
	};
	class hlc_rifle_ak74_MTK: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_ak74m_MTK: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
	class hlc_rifle_aks74u_MTK: hlc_ak_base
	{
		magazines[] = { __545_MAGS };
	};
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
    class Rifle_Long_Base_F;
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
	class CUP_arifle_XM8_Base: Rifle_Base_F
	{
		magazines[] = { __556_MAGS };
		class XM320Muzzle: UGL_F
		{
			magazines[] = { __40MM_M203_MAGS };
		};
	};
};
