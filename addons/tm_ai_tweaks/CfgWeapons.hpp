class CfgWeapons {
    class CannonCore;
	class cannon_120mm: CannonCore {};
    class rhs_weap_d81: cannon_120mm {
        aidispersioncoefx = "10*2";
        aidispersioncoefy = "10*2";
    };
    class rhs_weap_2a26: rhs_weap_d81 {
        aidispersioncoefx = "11*2";
		aidispersioncoefy = "11*2";
    };
    class rhs_weap_2a46_2: rhs_weap_d81 {
        aidispersioncoefx = "7*2";
		aidispersioncoefy = "7*2";
    };
    class rhs_weap_2a46m_2: rhs_weap_d81 {
        aidispersioncoefx = "4.2*2";
		aidispersioncoefy = "4.2*2";
    };
    class rhs_weap_2a46m: rhs_weap_2a46m_2 {
        aidispersioncoefx = "9.6*2";
		aidispersioncoefy = "9.6*2";
    };
    class rhs_weap_2a46m_4: rhs_weap_2a46m_2 {
        aidispersioncoefx = "4*2";
		aidispersioncoefy = "4*2";
    };
    class rhs_weap_2a46m_5: rhs_weap_2a46m_2 {
        aidispersioncoefx = "3.8*2";
		aidispersioncoefy = "3.8*2";
    };
    class rhs_weap_d10t2s_2: rhs_weap_d81 {};
    class rhs_weap_d10tg: rhs_weap_d10t2s_2 {};
    class rhs_weap_d10t2s: rhs_weap_d10t2s_2 {};
    class rhs_weap_u5ts: rhs_weap_d81 {};
    class autocannon_30mm_CTWS;
	class rhs_weap_2a42_base: autocannon_30mm_CTWS {
        aidispersioncoefx = "6*2";
		aidispersioncoefy = "6*2";
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
        class manual;
        class close: manual {
            burst = 10;
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
        aidispersioncoefx = "5*2";
		aidispersioncoefy = "8*2";
    };
};
