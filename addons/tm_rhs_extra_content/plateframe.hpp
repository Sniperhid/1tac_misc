class rhsusf_plateframe_sapi;
class rhsusf_plateframe_light: rhsusf_plateframe_sapi {};
class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi {};
class rhsusf_plateframe_teamleader: rhsusf_plateframe_rifleman {};
class rhsusf_plateframe_grenadier: rhsusf_plateframe_rifleman {};
class rhsusf_plateframe_machinegunner: rhsusf_plateframe_rifleman {};
class rhsusf_plateframe_marksman: rhsusf_plateframe_rifleman {};
class rhsusf_plateframe_medic: rhsusf_plateframe_rifleman {};

#define MAKENAME(DISPLAYNAME) (DISPLAYNAME)

#define MAKETEXTURES(TEXTURE) hiddenSelectionsTextures[] = {\
        QUOTE(rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\data\TEXTURE.paa),\
        "rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",\
        "rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",\
        "rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",\
        "rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",\
        "rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",\
        "rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa",\
        "rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"\
    };

#define PLATEFRAME(DISPLAYNAME,CLASSNAME,TEXTURE,SCOPE) class GVAR(TRIPLES(plateframe,CLASSNAME,sapi)): rhsusf_plateframe_sapi {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,light)): rhsusf_plateframe_light {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Light));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,rifleman)): rhsusf_plateframe_rifleman {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Rifleman));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,teamleader)): rhsusf_plateframe_teamleader {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Teamleader));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,grenadier)): rhsusf_plateframe_grenadier {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Grenadier));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,machinegunner)): rhsusf_plateframe_machinegunner {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Machinegunner));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,marksman)): rhsusf_plateframe_marksman {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Marksman));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};\
class GVAR(TRIPLES(plateframe,CLASSNAME,medic)): rhsusf_plateframe_medic {\
    displayName = QUOTE(Plateframe MAKENAME(DISPLAYNAME/Medic));\
    author = "Red Hammer Studios, 1TAC_MISC";\
    scope = SCOPE;\
    dlc = "bear_bearskins";\
    MAKETEXTURES(TEXTURE)\
};

PLATEFRAME(Multicam,multicam,rhs_Plateframe_Sapi_MultiCam_co,1)
PLATEFRAME(Multicam (Cover),multicam_cover,rhs_Plateframe_Cover_Multicam_co,1)
PLATEFRAME(AOR1,aor1,rhs_Plateframe_Sapi_AOR1_co,1)
PLATEFRAME(AOR2,aor2,rhs_Plateframe_Sapi_AOR2_co,1)
PLATEFRAME(Black,black,rhs_Plateframe_Sapi_Black_co,2)
PLATEFRAME(Toadvine,toadvine,rhs_Plateframe_Sapi_ToadVine_co,1)