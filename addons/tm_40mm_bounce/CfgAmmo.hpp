class CfgAmmo {
    class SmokeShell;
    class rhs_40mm_smoke_white: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class rhs_40mm_m714_white: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class SmokeShellRed;
    class rhs_40mm_smoke_red: SmokeShellRed {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class rhs_40mm_m713_red: SmokeShellRed {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class SmokeShellGreen;
    class rhs_40mm_smoke_green: SmokeShellGreen {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class rhs_40mm_m715_green: SmokeShellGreen {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class SmokeShellYellow;
    class rhs_40mm_smoke_yellow: SmokeShellYellow {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class rhs_40mm_m716_yellow: SmokeShellYellow {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    
    class rhs_g_vog25;
    class rhs_g_gdm40: rhs_g_vog25 {};
    class rhs_g_vg40md: rhs_g_gdm40 {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
    class rhs_g_vg40md_white: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };
};