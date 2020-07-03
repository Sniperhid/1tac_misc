#define VESTMASS(CL, CR, MASS) class CL: CR\
{\
	class ItemInfo: ItemInfo\
	{\
		mass = MASS;\
	};\
};

class CfgWeapons {
    class ItemCore;
    class UniformItem;
    class Uniform_Base;
    class usm_bdu_w: Uniform_Base {
        class ItemInfo: UniformItem {
            containerClass = "Supply40";
        };
    };
    
    class VestItem;
    class usm_vest_LBE_rm: ItemCore {
        class ItemInfo: VestItem {
            mass = 32;
        };
    };
    VESTMASS(usm_vest_LBE_rmp, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_LBE_gr, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_LBE_mg, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_lbv_rm, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_lbv_rmp, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_lbv_gr, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_lbv_mg, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_LBE_rm_m, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_LBE_rmp_m, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_LBE_gr_m, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_LBE_mg_m, usm_vest_LBE_rm, 32)
    VESTMASS(usm_vest_lbv_rm_m, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_lbv_rmp_m, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_lbv_gr_m, usm_vest_LBE_rm, 40)
    VESTMASS(usm_vest_lbv_mg_m, usm_vest_LBE_rm, 40)
    
    class usm_vest_pasgt: ItemCore {
        class ItemInfo: VestItem {
            containerClass = "Supply40";
            mass = 60;
        };
    };
    VESTMASS(usm_vest_pasgt_lbe_rm, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_rmp, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_gr, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_mg, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_rm, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_rmp, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_gr, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_mg, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_rm_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_rmp_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_gr_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbe_mg_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_rm_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_rmp_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_gr_m, usm_vest_pasgt, 100)
    VESTMASS(usm_vest_pasgt_lbv_mg_m, usm_vest_pasgt, 100)
    
    class usm_vest_pasgtdes: ItemCore {
        class ItemInfo: VestItem {
            containerClass = "Supply40";
            mass = 60;
        };
    };
    VESTMASS(usm_vest_pasgtdes_lbe_rm, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_rmp, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_gr, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_mg, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_rm, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_rmp, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_gr, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_mg, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_rm_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_rmp_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_gr_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbe_mg_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_rm_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_rmp_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_gr_m, usm_vest_pasgtdes, 100)
    VESTMASS(usm_vest_pasgtdes_lbv_mg_m, usm_vest_pasgtdes, 100)
    
    class usm_vest_pasgtdcu: ItemCore {
        class ItemInfo: VestItem {
            containerClass = "Supply40";
            mass = 60;
        };
    };
    VESTMASS(usm_vest_pasgtdcu_lbe_rm, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_rmp, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_gr, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_mg, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_rm, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_rmp, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_gr, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_mg, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_rm_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_rmp_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_gr_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbe_mg_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_rm_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_rmp_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_gr_m, usm_vest_pasgtdcu, 100)
    VESTMASS(usm_vest_pasgtdcu_lbv_mg_m, usm_vest_pasgtdcu, 100)
    
    class usm_vest_rba: ItemCore {
        class ItemInfo: VestItem {
            containerClass = "Supply40";
            mass = 60;
        };
    };
    VESTMASS(usm_vest_rba_lbe_rm, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbe_rmp, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbe_gr, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbe_mg, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbv_rm, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbv_rmp, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbv_gr, usm_vest_rba, 100)
    VESTMASS(usm_vest_rba_lbv_mg, usm_vest_rba, 100)
};