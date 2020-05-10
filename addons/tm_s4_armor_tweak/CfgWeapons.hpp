class CfgWeapons {
    class ItemCore;
    class VestItem: ItemCore {
        class ItemInfo;
    };
    class Vest_Camo_Base;
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
};
