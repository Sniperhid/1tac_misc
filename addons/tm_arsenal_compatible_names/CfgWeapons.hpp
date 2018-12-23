/* Prefix name with > to have it sort below the '<Empty>' entry in the arsenal accessory list. Classic BI */

class CfgWeapons {
	class rhs_acc_sniper_base;
	class rhs_acc_1p29: rhs_acc_sniper_base {
		displayName = ">1P29";
	};
	class rhs_acc_1p78: rhs_acc_1p29 {
		displayName = ">1P78";
	};
	class rhs_acc_pkas: rhs_acc_sniper_base {};
	class rhs_acc_1p63: rhs_acc_pkas {
		displayName = ">1P63";
	};
	class rhs_acc_rakursPM: rhs_acc_1p63 {
		displayName = ">1P76 Rakurs-PM";
	};
	class rhs_acc_1pn93_base: rhs_acc_sniper_base {};
	class rhs_acc_1pn93_1: rhs_acc_1pn93_base {
		displayName = ">1PN93-1";
	};
	class rhs_acc_pgo7v: rhs_acc_sniper_base {};
	class rhs_acc_1pn93_2: rhs_acc_pgo7v {
		displayName = ">1PN93-2";
	};
	
	class acc_flashlight;
	class rhs_acc_2dpZenit: acc_flashlight {
		displayName = ">2DP";
	};
};