class CfgRecoils {
    class recoil_default;
    class recoil_saw: recoil_default {};
    class tm_recoil_m249: recoil_saw {
        muzzleOuter[] = {0.3,0.4,0.3,0.2};
        temporary = 0.01;
    };
    
    class recoil_zafir;
    class tm_recoil_m240: recoil_zafir {
        kickBack[] = {"0.02","0.06*1.2"};
        muzzleOuter[] = {"0.5*0.2","0.8*1","0.35*1","0.35*1"};
    };
    
    class recoil_mxc;
    class tm_recoil_battlerifle: recoil_mxc {
        kickBack[] = {"0.03*1.4","0.08*1.4"};
    };
};
