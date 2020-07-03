class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
    class ItemInfo;
};
class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
    class ItemInfo: ItemInfo {};
};
class UK3CB_BAF_V_Osprey_Base: V_PlateCarrier2_rgr {
    class ItemInfo: ItemInfo {
        armor = 20;
        passThrough = 1;
        class HitpointsProtectionInfo {
            class Neck {
                armor = 12;
                passThrough = 0.4;
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
class UK3CB_BAF_V_Osprey_Light_Base: V_PlateCarrier1_rgr {
    class ItemInfo: ItemInfo {
        armor = 20;
        passThrough = 1;
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
class UK3CB_BAF_V_Osprey_Mk2_Base: V_PlateCarrier1_rgr {
    class ItemInfo: ItemInfo {
        armor = 20;
        passThrough = 1;
        class HitpointsProtectionInfo {
            class Chest {
                armor = 24;
                passThrough = 0.1;
            };
            class Diaphragm {
                armor = 24;
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