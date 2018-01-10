class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class CfgWeapons {
    class CannonCore;
    class MGun;
    class cannon_120mm: CannonCore {};
    class rhs_weap_d81: cannon_120mm {
        aidispersioncoefx = "10*4";
        aidispersioncoefy = "10*4";
    };
    class rhs_weap_2a26: rhs_weap_d81 {
        aidispersioncoefx = "11*3";
        aidispersioncoefy = "11*3";
    };
    class rhs_weap_2a46_2: rhs_weap_d81 {
        aidispersioncoefx = "7*2";
        aidispersioncoefy = "7*2";
    };
    class rhs_weap_2a46m_2: rhs_weap_d81 {
        aidispersioncoefx = "4.2*3";
        aidispersioncoefy = "4.2*3";
    };
    class rhs_weap_2a46m: rhs_weap_2a46m_2 {
        aidispersioncoefx = "9.6*2";
        aidispersioncoefy = "9.6*2";
    };
    class rhs_weap_2a46m_4: rhs_weap_2a46m_2 {
        aidispersioncoefx = "4*3";
        aidispersioncoefy = "4*3";
    };
    class rhs_weap_2a46m_5: rhs_weap_2a46m_2 {
        aidispersioncoefx = "3.8*3";
        aidispersioncoefy = "3.8*3";
    };
    class rhs_weap_d10t2s_2: rhs_weap_d81 {};
    class rhs_weap_d10tg: rhs_weap_d10t2s_2 {};
    class rhs_weap_d10t2s: rhs_weap_d10t2s_2 {};
    class rhs_weap_u5ts: rhs_weap_d81 {};
    class autocannon_30mm_CTWS;
    class rhs_weap_2a42_base: autocannon_30mm_CTWS {
        aidispersioncoefx = "6*3";
        aidispersioncoefy = "6*3";
    };
    class rhs_weap_2a42: rhs_weap_2a42_base {};
    class rhs_weap_2a72_base: rhs_weap_2a42 {};
    class rhs_weap_2a72: rhs_weap_2a72_base {};
    class rhs_weap_2a70: rhs_weap_d81 {};
    class rhs_weap_2a75: rhs_weap_d81 {};
    class rhs_weap_2a28_base: cannon_120mm {};
    class rhs_weap_2a28: rhs_weap_2a28_base {};
    class rhs_weap_2a41_base: rhs_weap_2a28_base {};
    class rhs_weap_2a41: rhs_weap_2a41_base {};
    class RHS_weap_AZP23: CannonCore {
        aidispersioncoefx = "3*3";
        aidispersioncoefy = "10*3";
        class manual;
        class close: manual {
            burst = 15;
        };
        class short: close {
            burst = 10;
        };
        class medium: close {
            burst = 10;
        };
        class far: close {
            burst = 10;
        };
    };
    class RHS_weap_2a14: RHS_weap_AZP23 {};
    class RocketPods;
    class rhs_weap_SPG9: RocketPods {
        aidispersioncoefx = "5*5";
        aidispersioncoefy = "8*5";
    };
    class PKT: MGun {};
    class rhs_weap_pkt: PKT {
		aiDispersionCoefX = (20 * 2.5);
        aiDispersionCoefY = (15 * 2.5);
    };
    class LMG_RCWS: MGun {};
    class rhs_weap_DSHKM: LMG_RCWS {
		aiDispersionCoefX = (7.0 * 2.5);
        aiDispersionCoefY = (7.0 * 2.5);
    };
    class rhs_weap_nsvt: rhs_weap_DSHKM {
		aiDispersionCoefX = (7.0 * 2.5);
        aiDispersionCoefY = (7.0 * 2.5);
    };
    class rhs_weap_kpvt: MGun {
		aiDispersionCoefX = (20 * 2);
        aiDispersionCoefY = (15 * 2);
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
		aiDispersionCoefX = (20 * 2);
        aiDispersionCoefY = (15 * 2);
    };
    class HMG_M2;
    class RHS_M2: HMG_M2 {
        aiDispersionCoefX = (7 * 3);
        aiDispersionCoefY = (5 * 3);
    };

    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {};
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (2 * 1.6);
            aiDispersionCoefY = (3 * 1.6);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 1.6);
            aiDispersionCoefY = (3 * 1.6);
        };
        class fullauto_medium: FullAuto {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 1.6);
            aiDispersionCoefY = (3 * 1.6);
        };
        class single_medium_optics1: Single { // optics1 = requires non-magnifying optic
            aiRateOfFire = 5; // 6
            aiDispersionCoefX = (1.4 * 1.6);
            aiDispersionCoefY = (1.7 * 1.6);
        };
        class single_far_optics2: single_medium_optics1 { // optics2 = requires high power optic
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        aiDispersionCoefY = (10 * 2.5);
        aiDispersionCoefX = (8 * 2.5);
    };
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {};
    class rhs_weap_akm: rhs_weap_ak74m {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class fullauto_medium: FullAuto {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class single_medium_optics1: Single {
            aiRateOfFire = 5; // 6
            aiDispersionCoefX = (1.4 * 1.8);
            aiDispersionCoefY = (1.7 * 1.8);
        };
        class single_far_optics2: single_medium_optics1 {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
    };
    class rhs_weap_ak103_base: rhs_weap_akm {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (2 * 1.6);
            aiDispersionCoefY = (3 * 1.6);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 1.8);
            aiDispersionCoefY = (3 * 1.8);
        };
        class fullauto_medium: FullAuto {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 1.6);
            aiDispersionCoefY = (3 * 1.6);
        };
        class single_medium_optics1: Single {
            aiRateOfFire = 5; // 6
            aiDispersionCoefX = (1.4 * 1.8);
            aiDispersionCoefY = (1.7 * 1.8);
        };
        class single_far_optics2: single_medium_optics1 {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
    };
    class rhs_weap_ak74: rhs_weap_ak74m {};
    class rhs_weap_aks74: rhs_weap_ak74 {};
    class rhs_weap_aks74u: rhs_weap_aks74 {
        class Single: Single {
            aiDispersionCoefX = (2 * 2.5);
            aiDispersionCoefY = (3 * 2.5);
        };
        class FullAuto: FullAuto {
            aiDispersionCoefX = (2 * 2.5);
            aiDispersionCoefY = (3 * 2.5);
        };
        class fullauto_medium: FullAuto {
            burst = 8; // 3
            aiDispersionCoefX = (2 * 2.5);
            aiDispersionCoefY = (3 * 2.5);
        };
        class single_medium_optics1: Single {
            aiRateOfFire = 5; // 6
            aiDispersionCoefX = (1.4 * 2.5);
            aiDispersionCoefY = (1.7 * 2.5);
        };
        class single_far_optics2: single_medium_optics1 {
            aiDispersionCoefX = (1.4 * 3);
            aiDispersionCoefY = (1.7 * 3);
        };
        aiDispersionCoefY = (10 * 2);
        aiDispersionCoefX = (8 * 2);
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class close: FullAuto {
            burst = 15; // 10
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class short: close {
            burst = 12; // 8
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class medium: close {
            burst = 7; // 5
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class far_optic1: close {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class far_optic2: far_optic1 {
            burst = 2; // 1
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        aiDispersionCoefY = (23 * 2);
        aiDispersionCoefX = (19 * 2);
    };
    class rhs_weap_pkp: rhs_pkp_base {};
    class rhs_weap_pkm: rhs_weap_pkp {
        class manual: FullAuto {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class close: manual {
            burst = 15; // 10
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class short: close {
            burst = 12; // 8
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class medium: close {
            burst = 10; // 7
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class far_optic1: medium {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class far_optic2: far_optic1 {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
    };

    class arifle_MX_Base_F: Rifle_Base_F {};
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        class Burst: Mode_Burst {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class single_medium_optics1: Single {
            aiDispersionCoefX = (1.4 * 4);
            aiDispersionCoefY = (1.7 * 4);
        };
        class single_far_optics2: single_medium_optics1 {
            aiDispersionCoefX = (1.4 * 4);
            aiDispersionCoefY = (1.7 * 4);
        };
        class fullauto_medium: FullAuto {
            burst = 7;
            aiDispersionCoefX = (2 * 4);
            aiDispersionCoefY = (3 * 4);
        };
		aiDispersionCoefX = (4.0 * 3);
        aiDispersionCoefY = (6.0 * 2.5);
    };
    class LMG_Mk200_F;
    class rhs_weap_M249_base: LMG_Mk200_F {};
    class rhs_weap_saw_base: Rifle_Base_F {
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 4);
            aiDispersionCoefY = (3 * 4);
        };
        class close: FullAuto {};
        class short: close {};
        class medium: close {};
        class far_optic1: close {};
        class far_optic2: far_optic1 {};
    };
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base {
		aiDispersionCoefX = (21 * 1.5);
        aiDispersionCoefY = (24 * 1.5);
    };
    class rhs_weap_m240_base: rhs_weap_M249_base {
        class manual: Mode_FullAuto {
            aiDispersionCoefX = (2 * 5);
            aiDispersionCoefY = (3 * 5);
        };
        class close: manual {
            burst = 15;
            aiDispersionCoefX = (2 * 4);
            aiDispersionCoefY = (3 * 4);
        };
        class short: close {
            aiDispersionCoefX = (2 * 3);
            aiDispersionCoefY = (3 * 3);
        };
        class medium: close {
            aiDispersionCoefX = (2 * 3);
            aiDispersionCoefY = (3 * 3);
        };
        class far: close {
            aiDispersionCoefX = (2 * 3);
            aiDispersionCoefY = (3 * 3);
        };
        aiDispersionCoefX = (21 * 1.5);
        aiDispersionCoefY = (21 * 1.5);
    };

    class rhs_weap_m70_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class fullauto_medium: FullAuto {
            burst = 5; // 3
            aiDispersionCoefX = (2 * 2);
            aiDispersionCoefY = (3 * 2);
        };
        class single_medium_optics1: Single {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        class single_far_optics2: single_medium_optics1 {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        aiDispersionCoefY = (10 * 2);
        aiDispersionCoefX = (8 * 2);
    };
    class rhs_weap_m92: rhs_weap_m70_base {
        class Single: Single {
            aiDispersionCoefX = (1.4 * 2);
            aiDispersionCoefY = (1.7 * 2);
        };
        class FullAuto: FullAuto {
            aiDispersionCoefX = (2 * 2.5);
            aiDispersionCoefY = (3 * 2.5);
        };
        class fullauto_medium: FullAuto {
            burst = 8; // 3
            aiDispersionCoefX = (2 * 2.5);
            aiDispersionCoefY = (3 * 2.5);
        };
        class single_medium_optics1: Single {
            aiDispersionCoefX = (1.4 * 2.5);
            aiDispersionCoefY = (1.7 * 2.5);
        };
        class single_far_optics2: single_medium_optics1 {
            aiDispersionCoefX = (1.4 * 2.5);
            aiDispersionCoefY = (1.7 * 2.5);
        };
    };
    class rhs_weap_kar98k_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        class far_optic1: Single {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        class medium_optic2: Single {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        class far_optic2: far_optic1 {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        aiDispersionCoefY = (10 * 2);
        aiDispersionCoefX = (8 * 2);
    };
    class rhs_weap_m38_Base_F: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        class far_optic1: Single {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        class medium_optic2: Single {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        class far_optic2: far_optic1 {
            aiDispersionCoefX = (1.4 * 1.67);
            aiDispersionCoefY = (1.7 * 1.67);
        };
        aiDispersionCoefY = (10 * 2);
        aiDispersionCoefX = (8 * 2);
    };

    class Launcher_Base_F;
    class rhs_weap_rpg26: Launcher_Base_F {
        aiDispersionCoefX = (1 * 2);
        aiDispersionCoefY = (1 * 2);
    };
    class rhs_weap_rpg7: Launcher_Base_F {
        aiDispersionCoefX = (1 * 3);
        aiDispersionCoefY = (1 * 3);
    };

    class hlc_ak_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 3);
            aiDispersionCoefY = (1.7 * 3);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 3.5);
            aiDispersionCoefY = (3 * 3.5);
        };
        aiDispersionCoefY = (4 * 4);
        aiDispersionCoefX = (6 * 4);
    };
    class hlc_fal_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 3);
            aiDispersionCoefY = (1.7 * 3);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 4);
            aiDispersionCoefY = (3 * 4);
        };
        class fullauto_medium: FullAuto {
            burst = 20; // 4
        };
        aiDispersionCoefX = (6 * 3);
		aiDispersionCoefY = (8 * 3);
    };
    class hlc_g3_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            aiDispersionCoefX = (1.4 * 3);
            aiDispersionCoefY = (1.7 * 3);
        };
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 4);
            aiDispersionCoefY = (3 * 4);
        };
        class fullauto_medium: FullAuto {
            burst = 20; // 4
        };
        aiDispersionCoefX = (6 * 3);
    	aiDispersionCoefY = (8 * 3);
    };
    class hlc_M60e4_base: Rifle_Base_F {
        class FullAuto: Mode_FullAuto {
            aiDispersionCoefX = (2 * 4);
            aiDispersionCoefY = (3 * 4);
        };
        class close: FullAuto {
            burst = 25; // 10
        };
        class short: close {
            burst = 15; // 8
        };
        class medium: close {
            burst = 10; // 5
        };
        class medium_burst: close {
            burst = 10; // 4
        };
        class far: close {
            burst = 10; // 4
        };
        class veryfar: close {
            burst = 8; // 5
        };
        aiDispersionCoefX = (10 * 3);
    	aiDispersionCoefY = (12 * 3);
    };
};
