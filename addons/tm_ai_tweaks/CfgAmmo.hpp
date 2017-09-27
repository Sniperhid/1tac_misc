class CfgAmmo {
    class Sh_125mm_APFSDS;
	class Sh_125mm_HE;
	class rhs_ammo_br_base: Sh_125mm_APFSDS {
        cost = 250;
    };
	class rhs_ammo_bm_base: Sh_125mm_APFSDS {
        cost = 250;
    };
	class rhs_ammo_bk_base: rhs_ammo_bm_base {
        cost = 250;
    };
	class rhs_ammo_of_base: Sh_125mm_HE {
        cost = 250;
    };
};
