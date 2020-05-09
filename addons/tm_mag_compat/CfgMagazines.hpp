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
};