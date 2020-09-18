// match rhs spcs

#define JPC(SUPER) class SUPER: CUP_Vest_Camo_Base {\
    class ItemInfo: VestItem {\
        armor = 20;\
        passThrough = 1;\
        class HitpointsProtectionInfo {\
            class Chest {\
                armor = 28;\
                passThrough = 0.1;\
            };\
            class Diaphragm {\
                armor = 28;\
                passThrough = 0.1;\
            };\
            class Abdomen {\
                armor = 12;\
                passThrough = 0.4;\
            };\
            class Body {\
                passThrough = 0.4;\
            };\
        };\
    };\
};

#define JPC_SUB(VARIANT, SUPER) class VARIANT: SUPER {\
    class ItemInfo: ItemInfo {\
        armor = 20;\
        passThrough = 1;\
    };\
};

#define JPC_SET(SUPER, VARIANT1, VARIANT2) JPC(SUPER)\
JPC_SUB(VARIANT1,SUPER)\
JPC_SUB(VARIANT2,SUPER)

JPC_SET(CUP_V_JPC_tlbelt_coy,CUP_V_JPC_tlbelt_rngr,CUP_V_JPC_tlbelt_mc)

JPC_SET(CUP_V_JPC_communicationsbelt_coy,CUP_V_JPC_communicationsbelt_rngr,CUP_V_JPC_communicationsbelt_mc)

JPC_SET(CUP_V_JPC_medicalbelt_coy,CUP_V_JPC_medicalbelt_rngr,CUP_V_JPC_medicalbelt_mc)

JPC_SET(CUP_V_JPC_weaponsbelt_coy,CUP_V_JPC_weaponsbelt_rngr,CUP_V_JPC_weaponsbelt_mc)

JPC_SET(CUP_V_JPC_Fastbelt_coy,CUP_V_JPC_Fastbelt_rngr,CUP_V_JPC_Fastbelt_mc)

JPC_SET(CUP_V_JPC_lightbelt_coy,CUP_V_JPC_lightbelt_rngr,CUP_V_JPC_lightbelt_mc)

JPC_SET(CUP_V_JPC_Fast_coy,CUP_V_JPC_Fast_rngr,CUP_V_JPC_Fast_mc)

JPC_SET(CUP_V_JPC_weapons_coy,CUP_V_JPC_weapons_rngr,CUP_V_JPC_weapons_mc)

JPC_SET(CUP_V_JPC_communications_coy,CUP_V_JPC_communications_rngr,CUP_V_JPC_communications_mc)

JPC_SET(CUP_V_JPC_tl_coy,CUP_V_JPC_tl_rngr,CUP_V_JPC_tl_mc)

JPC_SET(CUP_V_JPC_medical_coy,CUP_V_JPC_medical_rngr,CUP_V_JPC_medical_mc)