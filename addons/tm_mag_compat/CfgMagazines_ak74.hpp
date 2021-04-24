class CUP_60Rnd_545x39_AK74M_M;
class GVAR(60Rnd_545x39_7N10): CUP_60Rnd_545x39_AK74M_M {
    displayName = "60rnd AK-74 7N10";
    displayNameShort = "7N10";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_7N10_Ball";
    count = 60;
    initSpeed = 880;
    lastRoundsTracer = 3;
    tracersEvery = 0;
    mass = 18;
    descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    scope = 1;
};
class GVAR(60Rnd_545x39_7N22): GVAR(60Rnd_545x39_7N10) {
    displayName = "60rnd AK-74 7N22";
    displayNameShort = "7N22 - AP";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_7N22_Ball";
    initSpeed = 890;
    descriptionShort = "Caliber: 5.45x39mm AP<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    scope = 1;
};
class GVAR(60Rnd_545x39_7T3M): GVAR(60Rnd_545x39_7N10) {
    displayName = "60rnd AK-74 7T3M (Tracer)";
    displayNameShort = "7T3M Tracer";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_Ball_Tracer_Green";
    initSpeed = 883;
    tracersEvery = 1;
    descriptionShort = "Caliber: 5.45x39mm Tracers<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    scope = 1;
};
class GVAR(60Rnd_545x39_7U1): GVAR(60Rnd_545x39_7N10) {
    displayName = "60rnd AK-74 7U1 (Subsonic)";
    displayNameShort = "7U1 Subsonic";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_7U1_Ball";
    initSpeed = 303;
    lastRoundsTracer = 0;
    tracersEvery = 0;
    descriptionShort = "Caliber: 5.45x39mm Subsonic<br />Rounds: 60<br />Used in: AK-74M, AK-105";
    scope = 1;
};

class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M;
class GVAR(45Rnd_545x39_RPK74M_7N10): CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M {
    displayName = "45rnd RPK-74 7N10";
    displayNameShort = "7N10";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_7N10_Ball";
    initSpeed = 880;
    lastRoundsTracer = 5;
    tracersEvery = 5;
    descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 45<br />Used in: RPK-74M";
};
class GVAR(45Rnd_545x39_RPK74M_7N22): CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M {
    displayName = "45rnd RPK-74 7N22";
    displayNameShort = "7N22 - AP";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_7N22_Ball";
    initSpeed = 890;
    lastRoundsTracer = 5;
    tracersEvery = 5;
    descriptionShort = "Caliber: 5.45x39mm AP<br />Rounds: 45<br />Used in: RPK-74M";
};
class GVAR(45Rnd_545x39_RPK74M_7T3M): CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M {
    displayName = "45rnd RPK-74 7T3M (Tracer)";
    displayNameShort = "7T3M Tracer";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_Ball_Tracer_Green";
    initSpeed = 883;
    tracersEvery = 1;
    descriptionShort = "Caliber: 5.45x39mm Tracers<br />Rounds: 45<br />Used in: RPK-74M";
};
class GVAR(45Rnd_545x39_RPK74M_7U1): CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M {
    displayName = "45rnd RPK-74 7U1 (Subsonic)";
    displayNameShort = "7U1 Subsonic";
    author = "1TAC_MISC";
    ammo = "rhs_B_545x39_7U1_Ball";
    initSpeed = 303;
    tracersEvery = 0;
    lastRoundsTracer = 0;
    descriptionShort = "Caliber: 5.45x39mm Subsonic<br />Rounds: 45<br />Used in: RPK-74M";
};