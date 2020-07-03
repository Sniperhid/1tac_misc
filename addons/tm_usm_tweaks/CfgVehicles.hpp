class CfgVehicles {
    class Bag_Base;
    
	class usm_pack_alice: Bag_Base {};
	class usm_pack_alice_medic: usm_pack_alice {
        class TransportMagazines {
            delete _xx_SmokeShellPurple;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems {
            delete _xx_usm_fielddressing;
            delete _xx_usm_medikit;
        };
    };
    
	class usm_pack_alice_prc119: Bag_Base {
		mass = 40;
        class TransportMagazines {
            delete _xx_SmokeShellGreen;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
        };
    };
    
	class usm_pack_alice_prc77: Bag_Base {
		mass = 40;
        class TransportMagazines {
            delete _xx_SmokeShellGreen;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
        };
    };
    
	class usm_pack_m5_medic: Bag_Base {
        class TransportMagazines {
            delete _xx_SmokeShellPurple;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems {
            delete _xx_usm_fielddressing;
            delete _xx_usm_medikit;
        };
    };
    
	class usm_pack_st138_prc77: Bag_Base {
		mass = 40;
        class TransportMagazines {
            delete _xx_SmokeShellGreen;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
        };
    };
    
	class usm_pack_762x51_bandoliers: Bag_Base {
        class TransportMagazines {
            delete _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
        };
    };
    
	class usm_pack_200rnd_556_bandoliers: Bag_Base {
        class TransportMagazines {
            delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
        };
    };
    
	class usm_pack_762x51_ammobelts: Bag_Base {
        class TransportMagazines {
            delete _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
        };
    };
};