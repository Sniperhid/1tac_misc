class Mode_SemiAuto;
class Mode_FullAuto;
class baseSoundModeType;

class CfgWeapons {
    class arifle_MX_Base_F;
    class rhs_weap_SCAR_Base: arifle_MX_Base_F {
        class Single: Mode_SemiAuto {};
        class Single_AI: Single {};
        class FullAuto: Mode_FullAuto {};
        class single_medium_optics1: Single {};
        class single_far_optics2: single_medium_optics1 {};
        class fullauto_medium: FullAuto {};
    };
    class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base {
        class Single: Single {};
        class FullAuto: FullAuto {};
    };
    
    class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base {
        class Single: Single {};
        class FullAuto: FullAuto {};
    };
    class rhs_weap_mk17_CQC: rhs_weap_SCAR_H_CQC_Base {};
    class tac1_tm_rhs_mk17_556mm_cqc: rhs_weap_mk17_CQC {
        class Single: Single {
            reloadTime = 0.08;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
        class Single_AI: Single_AI {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
		class FullAuto: FullAuto {
            reloadTime = 0.08;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
        class single_medium_optics1: single_medium_optics1 {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
        class single_far_optics2: single_far_optics2 {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
        class fullauto_medium: fullauto_medium {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
    };
    
    class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base {
        class Single: Single {};
        class FullAuto: FullAuto {};
    };
    class rhs_weap_mk17_STD: rhs_weap_SCAR_H_STD_Base {};
    class tac1_tm_rhs_mk17_556mm_std: rhs_weap_mk17_STD {
        class Single: Single {
            reloadTime = 0.08;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
        class Single_AI: Single_AI {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
		class FullAuto: FullAuto {
            reloadTime = 0.08;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
        class single_medium_optics1: single_medium_optics1 {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
        class single_far_optics2: single_far_optics2 {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
        class fullauto_medium: fullauto_medium {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
    };
    
    class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base {
        class Single: Single {};
        class FullAuto: FullAuto {};
    };
    class rhs_weap_mk17_LB: rhs_weap_SCAR_H_LB_Base {};
    class tac1_tm_rhs_mk17_556mm_lb: rhs_weap_mk17_LB {
        class Single: Single {
            reloadTime = 0.08;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
        class Single_AI: Single_AI {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
		class FullAuto: FullAuto {
            reloadTime = 0.08;
			class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
        class single_medium_optics1: single_medium_optics1 {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
        class single_far_optics2: single_far_optics2 {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
        class fullauto_medium: fullauto_medium {
            class StandardSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
        };
    };
};