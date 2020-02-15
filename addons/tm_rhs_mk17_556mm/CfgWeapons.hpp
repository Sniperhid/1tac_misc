class rhs_western_rifle_muzzle_slot;

class CfgWeapons {
    class rhs_weap_SCAR_Base;
    class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base {
        class WeaponSlotsInfo;
    };
    class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base {};
    class rhs_weap_mk17_CQC: rhs_weap_SCAR_H_CQC_Base {};
    class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base {};
    class rhs_weap_mk17_STD: rhs_weap_SCAR_H_STD_Base {};
    class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base {};
    class rhs_weap_mk17_LB: rhs_weap_SCAR_H_LB_Base {};
    
    class GVAR(cqc): rhs_weap_mk17_CQC {
        baseWeapon = QGVAR(cqc);
        displayName = "Mk 17 Mod 0 (CQC/5.56mm Conversion)";
        author = "1Tac Misc";
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        rhs_grip1_change = QGVAR(cqc_grip);
        rhs_grip2_change = QGVAR(cqc_grip3);
        rhs_grip3_change = QGVAR(cqc_grip2);
        rhs_fold = "";
        recoil = "rhs_recoil_m4";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
        reloadAction = "RHS_GestureReloadAR15";
        bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",0.1,1,15};
        bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",0.1,1,15};
        bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",0.177828,1,15};
        bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",0.177828,1,15};
        bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",0.1,1,15};
        bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",0.1,1,15};
        bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",0.1,1,15};
        bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",0.1,1,15};
        bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",0.01,1,15};
        bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",0.01,1,15};
        bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",0.01,1,15};
        bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",0.01,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR","rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M200_Stanag"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
        };
    };
    class GVAR(cqc_grip): GVAR(cqc) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class GVAR(cqc_grip2): GVAR(cqc) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class GVAR(cqc_grip3): GVAR(cqc) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
    };
    
    class GVAR(std): rhs_weap_mk17_STD {
        baseWeapon = QGVAR(std);
        displayName = "Mk 17 Mod 0 (STD/5.56mm Conversion)";
        author = "1Tac Misc";
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        rhs_grip1_change = QGVAR(std_grip);
        rhs_grip2_change = QGVAR(std_grip3);
        rhs_grip3_change = QGVAR(std_grip2);
        rhs_fold = "";
        recoil = "rhs_recoil_m4";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
        reloadAction = "RHS_GestureReloadAR15";
        bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",0.1,1,15};
        bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",0.1,1,15};
        bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",0.177828,1,15};
        bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",0.177828,1,15};
        bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",0.1,1,15};
        bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",0.1,1,15};
        bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",0.1,1,15};
        bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",0.1,1,15};
        bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",0.01,1,15};
        bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",0.01,1,15};
        bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",0.01,1,15};
        bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",0.01,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR","rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M200_Stanag"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
        };
    };
    class GVAR(std_grip): GVAR(std) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class GVAR(std_grip2): GVAR(std) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class GVAR(std_grip3): GVAR(std) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
    };
    
    class GVAR(lb): rhs_weap_mk17_LB {
        baseWeapon = QGVAR(lb);
        displayName = "Mk 17 Mod 0 (LB/5.56mm Conversion)";
        author = "1Tac Misc";
        magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        rhs_grip1_change = QGVAR(lb_grip);
        rhs_grip2_change = QGVAR(lb_grip3);
        rhs_grip3_change = QGVAR(lb_grip2);
        rhs_fold = "";
        recoil = "rhs_recoil_m4";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56x45mm NATO";
        reloadAction = "RHS_GestureReloadAR15";
        bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",0.1,1,15};
        bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",0.1,1,15};
        bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",0.177828,1,15};
        bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",0.177828,1,15};
        bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",0.1,1,15};
        bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",0.1,1,15};
        bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",0.1,1,15};
        bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",0.1,1,15};
        bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",0.01,1,15};
        bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",0.01,1,15};
        bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",0.01,1,15};
        bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",0.01,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR","rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M200_Stanag"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
        };
    };
    class GVAR(lb_grip): GVAR(lb) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class GVAR(lb_grip2): GVAR(lb) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class GVAR(lb_grip3): GVAR(lb) {
        author = "1Tac Misc";
        handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
    };
};