class CfgWeapons
{
	class Rifle_Base_F;
	class rhs_weap_saw_base: Rifle_Base_F
	{
		recoil = "tm_recoil_m249";
	};
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base 
	{
		recoil = "tm_recoil_m249";
	};
	class rhs_weap_lmg_minimi_railed: rhs_weap_lmg_minimipara {};
	class rhs_weap_m249_pip_S: rhs_weap_lmg_minimi_railed {};
	class rhs_weap_m249_pip_S_para: rhs_weap_m249_pip_S {};
	class rhs_weap_m249_pip_S_vfg: rhs_weap_m249_pip_S {};
	class rhs_weap_m249_pip: rhs_weap_m249_pip_S_vfg {};
	class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed {};
	class rhs_weap_m249_pip_L_para: rhs_weap_m249_pip_L {};
	class rhs_weap_m249_pip_L_vfg: rhs_weap_m249_pip_L {};
};
