class CfgWeapons
{
	class Rifle_Base_F;
	class CUP_arifle_AK_Base: Rifle_Base_F {};
	class CUP_arifle_AK74: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK74M: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK47: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AKM: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AKS: CUP_arifle_AKM { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AKS_Gold: CUP_arifle_AKS { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; }; //?!?!? wot
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK107_Base: CUP_arifle_AK_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK107: CUP_arifle_AK107_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_RPK74: CUP_arifle_AK74 { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_RPK74_45: CUP_arifle_RPK74 { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_RPK74M: CUP_arifle_RPK74_45 { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	/*class CUP_arifle_G36_Base: Rifle_Base_F {};
	class CUP_arifle_G36A: CUP_arifle_G36_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_G36A_camo: CUP_arifle_G36A { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_G36K: CUP_arifle_G36A { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_G36K_camo: CUP_arifle_G36K { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_G36C: Rifle_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_G36C_camo: CUP_arifle_G36C { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_MG36: CUP_arifle_G36C { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_MG36_camo: CUP_arifle_MG36 { scope = 1; scopeArsenal = 1; scopeCurator = 1; };*/
	
	class CUP_arifle_L85A2_Base: Rifle_Base_F {};
	class CUP_arifle_L85A2: CUP_arifle_L85A2_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_L85A2_GL: CUP_arifle_L85A2_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_L86A2_Base: Rifle_Base_F {};
	class CUP_arifle_L86A2: CUP_arifle_L86A2_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_arifle_M16_Base: Rifle_Base_F {};
	class CUP_arifle_M16A4_Base: CUP_arifle_M16_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_M16A4_GL: CUP_arifle_M16_Base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_M60E4_base: Rifle_Base_F {};
	class CUP_lmg_M60E4: CUP_M60E4_base { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_srifle_VSSVintorez: Rifle_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class Rifle_Long_Base_F: Rifle_Base_F {};
	
	class CUP_lmg_PKM: Rifle_Long_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_lmg_Pecheneg: CUP_lmg_PKM { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_lmg_L110A1: Rifle_Long_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_lmg_M240: Rifle_Long_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_lmg_L7A2: CUP_lmg_M240 { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_srifle_M107_Base: Rifle_Long_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_sgun_Saiga12K: Rifle_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class Pistol_Base_F;
	class CUP_hgun_Glock17: Pistol_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class Launcher_Base_F;
	class CUP_launch_M136: Launcher_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_launch_Mk153Mod0: Launcher_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_launch_NLAW: Launcher_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	
	class CUP_arifle_FNFAL: Rifle_Base_F { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_FNFAL5061: CUP_arifle_FNFAL { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_FNFAL5062: CUP_arifle_FNFAL { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_FNFAL_OSW: CUP_arifle_FNFAL { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
	class CUP_arifle_FNFAL_railed: CUP_arifle_FNFAL { scope = 1; scopeArsenal = 1; scopeCurator = 1; };
};