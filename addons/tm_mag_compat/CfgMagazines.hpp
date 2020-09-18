class CfgMagazines {
    #include "CfgMagazines_ak74.hpp"
    #include "CfgMagazines_akm.hpp"
    #include "CfgMagazines_fal.hpp"
    #include "CfgMagazines_galil.hpp"
    #include "CfgMagazines_hk33.hpp"
    #include "CfgMagazines_m4.hpp"
    #include "CfgMagazines_m249.hpp"
    
    class rhsusf_50Rnd_762x51;
    class rhsusf_50Rnd_762x51_m993: rhsusf_50Rnd_762x51 {
        scope = 2;
    };
    class rhsusf_100Rnd_762x51_m993: rhsusf_50Rnd_762x51_m993 {
        scope = 2;
		mass = 32.34;
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_ca.paa";
    };
    
    class CUP_30Rnd_9x19_Vityaz;
    class GVAR(30Rnd_9x19_Vityaz_7N21): CUP_30Rnd_9x19_Vityaz {
        author = "1TAC_MISC";
		displayname = "30rnd 9x19mm 7N21";
		displayNameShort = "7N21";
		descriptionShort = "PP-19-01 Vityaz";
        ammo = "rhs_B_9x19_7N21";
        initSpeed = 460;
        lastRoundsTracer = 0;
    };
    class GVAR(30Rnd_9x19_Vityaz_7N31): CUP_30Rnd_9x19_Vityaz {
        author = "1TAC_MISC";
        displayname = "30rnd 9x19mm 7N31";
		displayNameShort = "7N31";
		descriptionShort = "PP-19-01 Vityaz";
        ammo = "rhs_B_9x19_7N31";
		initSpeed = 600;
        lastRoundsTracer = 0;
    };
    
    class CUP_30Rnd_9x39_SP5_VIKHR_M;
    class GVAR(30Rnd_9x39mm_SP5): CUP_30Rnd_9x39_SP5_VIKHR_M {
        author = "1TAC_MISC";
        displayname = "30rnd SR-3M SP-5";
		displayNameShort = "SP-5";
        ammo = "rhs_B_9x39_SP5";
		initSpeed = 280;
        lastRoundsTracer = 0;
        mass = 12.5;
    };
    class GVAR(30Rnd_9x39mm_SP6): CUP_30Rnd_9x39_SP5_VIKHR_M {
        author = "1TAC_MISC";
        displayname = "30rnd SR-3M SP-6 AP";
		displayNameShort = "SP-6 AP";
        ammo = "rhs_B_9x39_SP6";
		initSpeed = 280;
        lastRoundsTracer = 0;
        mass = 12.5;
    };
    
    class CUP_20Rnd_9x39_SP5_GROZA_M;
    class GVAR(20Rnd_9x39mm_Groza_SP5): CUP_20Rnd_9x39_SP5_GROZA_M {
        author = "1TAC_MISC";
        displayname = "20rnd OTs-14 SP-5";
		displayNameShort = "SP-5";
        ammo = "rhs_B_9x39_SP5";
		initSpeed = 280;
        lastRoundsTracer = 0;
    };
    class GVAR(20Rnd_9x39mm_Groza_SP6): CUP_20Rnd_9x39_SP5_GROZA_M {
        author = "1TAC_MISC";
        displayname = "20rnd OTs-14 SP-6 AP";
		displayNameShort = "SP-6 AP";
        ammo = "rhs_B_9x39_SP6";
		initSpeed = 280;
        lastRoundsTracer = 0;
    };
    
    class CUP_30Rnd_9x19_MP5;
    class GVAR(30Rnd_9x19mm_MP5_FMJ): CUP_30Rnd_9x19_MP5 {
        author = "1TAC_MISC";
        displayname = "30rnd MP5 M882 FMJ";
		displayNameShort = "9mm FMJ";
        ammo = "rhs_ammo_9x19_FMJ";
		initSpeed = 390.1;
    };
    class GVAR(30Rnd_9x19mm_MP5_JHP): CUP_30Rnd_9x19_MP5 {
        author = "1TAC_MISC";
        displayname = "30rnd MP5 Mk243 JHP";
		displayNameShort = "9mm JHP";
        ammo = "rhs_ammo_9x19_JHP";
		initSpeed = 301.8;
    };
};