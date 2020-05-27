class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class VestItem: InventoryItem_Base_F {};
    class Vest_Camo_Base: ItemCore {
        class ItemInfo: VestItem {};
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
};
