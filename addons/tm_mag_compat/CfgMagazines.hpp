class CfgMagazines {
    class CUP_60Rnd_556x45_SureFire;
    class GVAR(60Rnd_556x45_M855A1_Surefire): CUP_60Rnd_556x45_SureFire {
        displayname = "60rnd Surefire M855A1";
        displayNameShort = "M855A1 EPR";
        author = "1TAC_MISC";
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        count = 60;
        initSpeed = 960;
        lastRoundsTracer = 0;
        tracersEvery = 0;
        mass = 18;
        descriptionshort = "Caliber: 5.56x45mm NATO<br/>Rounds: 60<br/>Used in: M27 IAR";
    };
    class GVAR(60Rnd_556x45_M855A1_Surefire_Tracer_Red): GVAR(60Rnd_556x45_M855A1_Surefire) {
        displayname = "60rnd Surefire M856A1 (Tracer)";
        displayNameShort = "M856A1 Tracer";
        author = "1TAC_MISC";
        ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
        tracersEvery = 1;
    };
    class GVAR(60Rnd_556x45_Mk318_Surefire): GVAR(60Rnd_556x45_M855A1_Surefire) {
        displayname = "60rnd Surefire Mk318 Mod 0";
        displayNameShort = "Mk318";
        author = "1TAC_MISC";
        ammo = "rhs_ammo_556x45_Mk318_Ball";
        initSpeed = 950.366;
    };
    
    class CUP_60Rnd_545x39_AK74M_M;
    class GVAR(60Rnd_556x45_545x39_7N10): CUP_60Rnd_545x39_AK74M_M {
        displayName = "60rnd AK-74 7N10";
        displayNameShort = "7N10";
        author = "1TAC_MISC";
        ammo = "rhs_B_545x39_7N10_Ball";
        count = 60;
        initSpeed = 880;
        lastRoundsTracer = 0;
        tracersEvery = 0;
        mass = 18;
        descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    };
    class GVAR(60Rnd_556x45_545x39_7N22): GVAR(60Rnd_556x45_545x39_7N10) {
        displayName = "60rnd AK-74 7N22";
        displayNameShort = "7N22 - AP";
        author = "1TAC_MISC";
        ammo = "rhs_B_545x39_7N22_Ball";
        initSpeed = 890;
        descriptionShort = "Caliber: 5.45x39mm AP<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    };
    class GVAR(60Rnd_556x45_545x39_7T3M): GVAR(60Rnd_556x45_545x39_7N10) {
        displayName = "60rnd AK-74 7T3M (Tracer)";
        displayNameShort = "7T3M Tracer";
        author = "1TAC_MISC";
        ammo = "rhs_B_545x39_Ball_Tracer_Green";
        initSpeed = 883;
        tracersEvery = 1;
        descriptionShort = "Caliber: 5.45x39mm Tracers<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    };
};