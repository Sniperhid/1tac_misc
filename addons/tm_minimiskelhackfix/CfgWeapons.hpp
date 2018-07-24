class CfgWeapons {
    class Rifle_Long_Base_F;
    class UK3CB_BAF_L110_Base: Rifle_Long_Base_F {};
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {};
    class UK3CB_BAF_L110A1: UK3CB_BAF_L110_556_Base {
        model = "\CUP\Weapons\CUP_Weapons_M249\mesh\minimi_para\minimi.p3d";
        handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\handpose_standard.rtm"};
    };
    class UK3CB_BAF_L110A2: UK3CB_BAF_L110_556_Base {
        model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\SAF_minimi_para";
        handanim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_standard.rtm"};
    };
    class UK3CB_BAF_L110A2RIS: UK3CB_BAF_L110_556_Base {
        model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\SAF_minimi_para";
        handanim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_standard.rtm"};
    };
    class UK3CB_BAF_L110A3: UK3CB_BAF_L110_556_Base {
        model = "\CUP\Weapons\CUP_Weapons_M249\mesh\m249\m249e2_pip4.p3d";
        handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\handpose_VFG.rtm"};
    };
    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {};
    class UK3CB_BAF_L110_762: UK3CB_BAF_L110_762_Base {
        model = "\CUP\Weapons\CUP_Weapons_M249\mesh\m249\m249e2_pip4.p3d";
        handanim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\handpose_VFG.rtm"};
    };
};