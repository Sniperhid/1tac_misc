class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class VestItem: InventoryItem_Base_F {};
    class Vest_Camo_Base: ItemCore {
        class ItemInfo: VestItem {};
    };
    class Vest_NoCamo_Base;
    class CUP_Vest_Camo_Base: ItemCore {
        class ItemInfo;
    };
    
    #include "3cb.hpp"
    #include "armatus.hpp"
    #include "ciras.hpp"
    #include "cpc.hpp"
    #include "jpc.hpp"
    #include "mbss.hpp"
    #include "spc.hpp"
    
    class rhsgref_6b23_khaki;
    class rhsgref_6b23_khaki_rifleman: rhsgref_6b23_khaki {
        class ItemInfo;
    };
    class rhsgref_otv_khaki: rhsgref_6b23_khaki_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo { // new values from rhsusf_spcs_ocp
                class Neck {
                    passThrough = 1;
                };
                class Chest {
                    armor = 28;
                    passThrough = 0.1;
                };
                class Diaphragm {
                    armor = 28;
                    passThrough = 0.1;
                };
                class Abdomen {
                    armor = 12;
                    passThrough = 0.4;
                };
                class Body {
                    passThrough = 0.4;
                };
            };
        };
    };
    
    class lbt_pouchless_coy: Vest_Camo_Base {
        class ItemInfo: VestItem {
            class HitpointsProtectionInfo { // new values from rhsusf_spcs_ocp
                class Chest {
                    armor = 28;
                    passThrough = 0.1;
                };
                class Diaphragm {
                    armor = 28;
                    passThrough = 0.1;
                };
                class Abdomen {
                    armor = 12;
                    passThrough = 0.4;
                };
                class Body {
                    passThrough = 0.4;
                };
            };
        };
    };
    class lbt_tl_mc: Vest_Camo_Base {
        class ItemInfo: VestItem {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = 28;
                    passThrough = 0.1;
                };
                class Diaphragm {
                    armor = 28;
                    passThrough = 0.1;
                };
                class Abdomen {
                    armor = 12;
                    passThrough = 0.4;
                };
                class Body {
                    passThrough = 0.4;
                };
            };
        };
    };
    
    class V_SmershVest_01_base_F: Vest_Camo_Base {
        descriptionShort = "Armor Level III";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo { // values from LDF modular vest
                class Chest {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    
    class HeadgearItem;
    class CUP_H_RUS_SSH68_base: ItemCore { // match rhs ssh68
        class ItemInfo: HeadgearItem {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 2; // 4 -> 2
                    passThrough = 0.5;
                };
            };
        };
    };
    
    class CUP_Vest_RUS_Camo_RatnikV2_Base: ItemCore { // match rhs spcs
        class ItemInfo: VestItem {
            armor = 20;
			passThrough = 1; // 0.5 -> 1
            class HitpointsProtectionInfo {
                class Chest {
					armor = 28;
					passThrough = 0.1;
				};
				class Diaphragm {
					armor = 28;
					passThrough = 0.1;
				};
				class Abdomen {
					armor = 12;
					passThrough = 0.4;
				};
				class Body {
					passThrough = 0.4;
				};
            };
        };
    };
    
    class CUP_H_RUS_6B47_v2_Summer: ItemCore { // match rhs ach
        class ItemInfo: HeadgearItem {
            armor = 6;
        };
    };
};
