class CfgAmmo {
    class ShellBase;
    
    class Sh_125mm_APFSDS;
	class Sh_125mm_HE;
	class rhs_ammo_bm_base: Sh_125mm_APFSDS {
        cost = 50;
    };
	class rhs_ammo_bk_base: rhs_ammo_bm_base {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        allowAgainstInfantry = 1;
        cost = 50;
    };
	class rhs_ammo_of_base: Sh_125mm_HE {
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 50;
    };
    
    class B_30mm_HE;
    class rhs_ammo_3uor6: B_30mm_HE {
        cost = 1;
    };
    class B_30mm_AP;
    class rhs_ammo_30x165mm_base: B_30mm_AP {
        cost = 5;
    };
    
    class rhs_ammo_rpg15Shell_base: ShellBase {
        cost = 20;
    };
    class rhs_ammo_og15v: rhs_ammo_rpg15Shell_base {
        aiAmmoUsageFlags = "64 + 128";
    };
    class rhs_ammo_pg15v: rhs_ammo_rpg15Shell_base {
        aiAmmoUsageFlags = "64 + 128 + 512";
    };
    
    class R_80mm_HE;
    class rhs_ammo_s8: R_80mm_HE {
        cost = 5;
    };
    class rhs_ammo_s8DF: rhs_ammo_s8 {
        cost = 5;
    };
    
    class bomb_04_f;
    class rhs_ammo_fab100: bomb_04_f {
        cost = 5;
    };
    
    class rhs_rpg26_rocket;
    class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        allowAgainstInfantry = 1;
        cost = 10;
    };
    class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl {
        cost = 50;
    };
    class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl {
        cost = 30;
    };
    class rhs_rpg7v2_type63_airburst: rhs_rpg7v2_og7v {
        cost = 40;
    };
};
