class Launcher_Base_F; // game crashes when selecting the clone 15:02:37 CUP_PzF_skeleton: Invalid parent bone 'base' for 'magazine'
class CUP_launch_PzF_Base: Launcher_Base_F {
    class WeaponSlotsInfo;
};
class CUP_launch_PzF3_Loaded: CUP_launch_PzF_Base {};
class CUP_launch_PzF3: CUP_launch_PzF3_Loaded {};
class CUP_launch_PzF3_Used: CUP_launch_PzF3_Loaded {};
class CUP_launch_BF3_Loaded: CUP_launch_PzF_Base {};
class CUP_launch_BF3: CUP_launch_BF3_Loaded {};
class CUP_launch_BF3_Used: CUP_launch_BF3_Loaded {};
class tm_panzerfaust3_rhs_loaded: CUP_launch_PzF_Base {
    author = "1TAC_MISC, Community Upgrade Project";
    displayName = "Panzerfaust 3 (RHS compat.)";
    scope = 1;
    magazines[] = {"tm_panzerfaust3_rhs_dm22_it","tm_panzerfaust3_rhs_dm32_he"};
};
class tm_panzerfaust3_rhs: tm_panzerfaust3_rhs_loaded {
    author = "1TAC_MISC, Community Upgrade Project";
    baseWeapon = "tm_panzerfaust3_rhs";
    displayName = "Panzerfaust 3 (RHS compat.)";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 180;
    };
};
class tm_panzerfaust3_rhs_used: tm_panzerfaust3_rhs_loaded {
    author = "1TAC_MISC, Community Upgrade Project";
    baseWeapon = "tm_panzerfaust3_rhs_used";
    displayName = "Panzerfaust 3 (RHS compat.)";
    scope = 1;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 180;
    };
};
class tm_bunkerfaust3_rhs_loaded: CUP_launch_PzF_Base {
    author = "1TAC_MISC, Community Upgrade Project";
    displayName = "Bunkerfaust 3 (RHS compat.)";
    scope = 1;
    magazines[] = {"tm_panzerfaust3_rhs_dm32_he","tm_panzerfaust3_rhs_dm22_it"};
};
class tm_bunkerfaust3_rhs: tm_bunkerfaust3_rhs_loaded {
    author = "1TAC_MISC, Community Upgrade Project";
    baseWeapon = "tm_bunkerfaust3_rhs";
    displayName = "Bunkerfaust 3 (RHS compat.)";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 180;
    };
};
class tm_bunkerfaust3_rhs_used: tm_bunkerfaust3_rhs_loaded {
    author = "1TAC_MISC, Community Upgrade Project";
    baseWeapon = "tm_bunkerfaust3_rhs_used";
    displayName = "Bunkerfaust 3 (Used) (RHS compat.)";
    scope = 1;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 180;
    };
};