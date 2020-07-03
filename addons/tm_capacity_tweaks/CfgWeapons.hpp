#define VEST_SUPPLY1(CL, CR, SUPPLY) class CL: CR\
{\
	class ItemInfo: ItemInfo\
	{\
		containerClass = SUPPLY;\
	};\
};

#define VEST_SUPPLY2(CL, CR, SUPPLY) class CL: CR\
{\
	class ItemInfo: VestItem\
	{\
		containerClass = SUPPLY;\
	};\
};
	
class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore 
	{
		class ItemInfo;
	};
	class VestItem;
	class Vest_NoCamo_Base: ItemCore 
	{
		class ItemInfo;
	};
	
	VEST_SUPPLY1(V_TacVest_khk, Vest_Camo_Base, "Supply140")
	VEST_SUPPLY1(V_TacVest_camo, Vest_Camo_Base, "Supply140")
	VEST_SUPPLY1(V_TacVest_blk_POLICE, Vest_Camo_Base, "Supply140")
    
	VEST_SUPPLY2(V_TacVestIR_blk, Vest_NoCamo_Base, "Supply140")
	VEST_SUPPLY2(V_TacVestCamo_khk, Vest_Camo_Base, "Supply140")
	
	VEST_SUPPLY1(V_TacChestrig_grn_F, Vest_Camo_Base, "Supply160")
	VEST_SUPPLY1(V_TacChestrig_oli_F, V_TacChestrig_grn_F, "Supply160")
	VEST_SUPPLY1(V_TacChestrig_cbr_F, V_TacChestrig_grn_F, "Supply160")
	
	// RHS AFRF
	VEST_SUPPLY1(rhs_6b23, Vest_Camo_Base, "Supply80")
	VEST_SUPPLY1(rhs_6b23_crew, rhs_6b23, "Supply130")
	VEST_SUPPLY1(rhs_6b23_engineer, rhs_6b23, "Supply130")
	VEST_SUPPLY1(rhs_6b23_medic, rhs_6b23, "Supply160")
	VEST_SUPPLY1(rhs_6b23_rifleman, rhs_6b23, "Supply130")
	VEST_SUPPLY1(rhs_6b23_crewofficer, rhs_6b23, "Supply100")
	VEST_SUPPLY1(rhs_6b23_sniper, rhs_6b23, "Supply120")
	
	VEST_SUPPLY1(rhs_6b23_6sh92, rhs_6b23, "Supply130")
	VEST_SUPPLY1(rhs_6b23_6sh92_vog, rhs_6b23_6sh92, "Supply140")
	VEST_SUPPLY1(rhs_6b23_6sh92_headset_mapcase, rhs_6b23_6sh92, "Supply140")
	class rhs_6b23_6sh92_radio: rhs_6b23_6sh92 
	{
		class ItemInfo: ItemInfo {};
	};
	VEST_SUPPLY1(rhs_6b23_digi_6sh92_Spetsnaz, rhs_6b23_6sh92_radio, "Supply140")
	VEST_SUPPLY1(rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz, rhs_6b23_6sh92_radio, "Supply150")
	VEST_SUPPLY1(rhs_6b23_digi_6sh92_Vog_Spetsnaz, rhs_6b23_6sh92_radio, "Supply150")
	VEST_SUPPLY1(rhs_6b23_vydra_3m, rhs_6b23_6sh92, "Supply140")
	
	VEST_SUPPLY1(rhs_6sh46, Vest_Camo_Base, "Supply80")
	VEST_SUPPLY1(rhs_vest_commander, Vest_Camo_Base, "Supply80")
	VEST_SUPPLY1(rhs_vest_pistol_holster, rhs_vest_commander, "Supply80")
	
	VEST_SUPPLY1(rhs_vydra_3m, Vest_Camo_Base, "Supply110")
	
	VEST_SUPPLY1(rhs_6b13, rhs_6b23, "Supply60")
	VEST_SUPPLY1(rhs_6b13_crewofficer, rhs_6b13, "Supply100")
	VEST_SUPPLY1(rhs_6b13_6sh92, rhs_6b13, "Supply130")
	VEST_SUPPLY1(rhs_6b13_6sh92_vog, rhs_6b13_6sh92, "Supply150")
	VEST_SUPPLY1(rhs_6b13_6sh92_headset_mapcase, rhs_6b13_6sh92, "Supply140")
	
	VEST_SUPPLY1(rhs_6sh92, Vest_Camo_Base, "Supply120")
	VEST_SUPPLY1(rhs_6sh92_vog, rhs_6sh92, "Supply130")
	
	// RHS GREF
	VEST_SUPPLY1(rhsgref_6b23_khaki, rhs_6b23, "Supply100")
	VEST_SUPPLY1(rhsgref_6b23_khaki_rifleman, rhsgref_6b23_khaki, "Supply120")
	VEST_SUPPLY1(rhsgref_6b23_khaki_sniper, rhsgref_6b23_khaki, "Supply100")
	VEST_SUPPLY1(rhsgref_6b23_khaki_officer, rhsgref_6b23_khaki, "Supply100")
	VEST_SUPPLY1(rhsgref_6b23_khaki_nco, rhsgref_6b23_khaki, "Supply100")
	VEST_SUPPLY1(rhsgref_6b23_khaki_medic, rhsgref_6b23_khaki, "Supply160")
    
	VEST_SUPPLY1(rhs_6b5, rhs_6b23, "Supply100")
    
	VEST_SUPPLY1(rhsgref_otv_khaki, rhsgref_6b23_khaki_rifleman, "Supply140")
    
	VEST_SUPPLY1(rhsgref_TacVest_ERDL, rhsgref_6b23_khaki_rifleman, "Supply140")
    
	VEST_SUPPLY1(rhsgref_chestrig, rhs_6b23, "Supply180")
    
	VEST_SUPPLY1(rhsgref_chicom, rhsgref_chestrig, "Supply180")
	
	// RHS USF
	VEST_SUPPLY1(rhsusf_iotv_ocp_base, Vest_Camo_Base, "Supply100")
	VEST_SUPPLY1(rhsusf_spcs_ocp, rhsusf_iotv_ocp_base, "Supply180")
	VEST_SUPPLY1(rhsusf_plateframe_sapi, rhsusf_iotv_ocp_base, "Supply100")
	VEST_SUPPLY1(rhsusf_plateframe_light, rhsusf_plateframe_sapi, "Supply120")
	VEST_SUPPLY1(rhsusf_plateframe_rifleman, rhsusf_plateframe_sapi, "Supply180")
	
	// CUP
	class CUP_Vest_TK_Camo_Base: ItemCore {
		class ItemInfo;
	};
	VEST_SUPPLY1(CUP_V_O_TK_Vest_1, CUP_Vest_TK_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_O_TK_Vest_2, CUP_Vest_TK_Camo_Base, "Supply200")
    
	VEST_SUPPLY2(CUP_Vest_RUS_Camo_RatnikV2_Base, ItemCore, "Supply200")
	VEST_SUPPLY1(CUP_Vest_RUS_6B45_Sh117_PKP, CUP_Vest_RUS_Camo_RatnikV2_Base, "Supply220")
	VEST_SUPPLY1(CUP_Vest_RUS_6B45_Sh117_PKP_Desert, CUP_Vest_RUS_Camo_RatnikV2_Base, "Supply220")
	VEST_SUPPLY1(CUP_Vest_RUS_6B45_Sh117_VOG, CUP_Vest_RUS_Camo_RatnikV2_Base, "Supply210")
	VEST_SUPPLY1(CUP_Vest_RUS_6B45_Sh117_VOG_Desert, CUP_Vest_RUS_Camo_RatnikV2_Base, "Supply210")
    
    class CUP_Vest_Camo_Base: ItemCore {
        class ItemInfo;
    };
    class CUP_V_B_CIRAS_Base: CUP_Vest_Camo_Base {
        class ItemInfo: ItemInfo {};
    };
	//VEST_SUPPLY1(CUP_V_B_Ciras_Olive, CUP_V_B_CIRAS_Base, "Supply220") // abc and abc2 variants already at 220. 3 and 4 variants 180 -> 220
	VEST_SUPPLY1(CUP_V_B_Ciras_Olive3, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Olive4, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Khaki3, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Khaki4, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Mcam3, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Mcam4, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Black3, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Black4, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Coyote3, CUP_V_B_CIRAS_Base, "Supply220")
	VEST_SUPPLY1(CUP_V_B_Ciras_Coyote4, CUP_V_B_CIRAS_Base, "Supply220")
    
	VEST_SUPPLY2(CUP_V_CPC_Fast_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_Fastbelt_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_light_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_lightbelt_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_lightbelt_rngr, CUP_V_CPC_lightbelt_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_lightbelt_mc, CUP_V_CPC_lightbelt_coy, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_weapons_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_weaponsbelt_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_communications_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_communications_mc, CUP_V_CPC_communications_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_communications_rngr, CUP_V_CPC_communications_coy, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_communicationsbelt_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_communicationsbelt_mc, CUP_V_CPC_communicationsbelt_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_communicationsbelt_rngr, CUP_V_CPC_communicationsbelt_coy, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_tl_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_tl_mc, CUP_V_CPC_tl_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_tl_rngr, CUP_V_CPC_tl_coy, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_tlbelt_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_tlbelt_rngr, CUP_V_CPC_tlbelt_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_tlbelt_mc, CUP_V_CPC_tlbelt_coy, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_medical_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_medical_mc, CUP_V_CPC_medical_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_medical_rngr, CUP_V_CPC_medical_coy, "Supply200")
	VEST_SUPPLY2(CUP_V_CPC_medicalbelt_coy, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_medicalbelt_rngr, CUP_V_CPC_medicalbelt_coy, "Supply200")
	VEST_SUPPLY1(CUP_V_CPC_medicalbelt_mc, CUP_V_CPC_medicalbelt_coy, "Supply200")
    
	VEST_SUPPLY1(CUP_V_B_PilotVest, CUP_Vest_Camo_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_B_USArmy_PilotVest, CUP_Vest_Camo_Base, "Supply200")
	
    class CUP_V_PMC_CIRAS_Base: ItemCore {
        class ItemInfo;
    };
	VEST_SUPPLY1(CUP_V_IDF_Vest, CUP_V_PMC_CIRAS_Base, "Supply200")
    
	VEST_SUPPLY1(CUP_V_MBSS_PACA_Green, CUP_V_PMC_CIRAS_Base, "Supply240")
	VEST_SUPPLY1(CUP_V_MBSS_PACA2_Green, CUP_V_PMC_CIRAS_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_MBSS_PACA_Black, CUP_V_PMC_CIRAS_Base, "Supply240")
	VEST_SUPPLY1(CUP_V_MBSS_PACA2_Black, CUP_V_PMC_CIRAS_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_MBSS_PACA_CB, CUP_V_PMC_CIRAS_Base, "Supply240")
	VEST_SUPPLY1(CUP_V_MBSS_PACA2_CB, CUP_V_PMC_CIRAS_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_MBSS_PACA_Tan, CUP_V_PMC_CIRAS_Base, "Supply240")
	VEST_SUPPLY1(CUP_V_MBSS_PACA2_Tan, CUP_V_PMC_CIRAS_Base, "Supply200")
	VEST_SUPPLY1(CUP_V_MBSS_PACA_RGR, CUP_V_PMC_CIRAS_Base, "Supply240")
	VEST_SUPPLY1(CUP_V_MBSS_PACA2_RGR, CUP_V_PMC_CIRAS_Base, "Supply200")
    
	// SPEC4 // what is even going on here
	VEST_SUPPLY2(lbt_pouchless_coy, Vest_Camo_Base, "Supply160") 
	VEST_SUPPLY2(lbt_tl_mc, Vest_Camo_Base, "Supply160")
	VEST_SUPPLY1(lbt_weapons_coy, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_weapons_od, lbt_weapons_coy, "Supply160")
	VEST_SUPPLY1(lbt_weapons_aor1, lbt_weapons_coy, "Supply160")
	VEST_SUPPLY1(lbt_comms_coy, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_comms_od, lbt_comms_coy, "Supply160")
	VEST_SUPPLY1(lbt_comms_aor2, lbt_comms_coy, "Supply160")
	VEST_SUPPLY1(lbt_light_od, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_light_mc, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_light_aor1, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_light_aor2, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_light_coy, lbt_pouchless_coy, "Supply160")
	VEST_SUPPLY1(lbt_fast_coy, lbt_pouchless_coy, "Supply160")
};
