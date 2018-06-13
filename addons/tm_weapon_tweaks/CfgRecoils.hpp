class CfgRecoils {
    class recoil_mk200;
    class tm_recoil_m249: recoil_mk200 {
        muzzleOuter[] = {"0.3", "0.7", "0.4*1", "0.4*1"};
        kickBack[] = {"0.04", "0.06"};
        temporary = "0.012";
    };
    
    class recoil_zafir;
    class tm_recoil_m240: recoil_zafir {
        kickBack[] = {"0.02","0.06*1.2"};
        muzzleOuter[] = {"0.5*0.2","0.8*1","0.6*1","0.25*1"};
    };
    
    class recoil_mxc;
    class tm_recoil_battlerifle: recoil_mxc {
        kickBack[] = {"0.03*1.4","0.08*1.4"};
    };
};
