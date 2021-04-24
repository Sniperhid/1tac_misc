class CfgVehicles
{
	class Bag_Base;
	class B_AssaultPack_Base: Bag_Base 
	{
		maximumLoad = 200;
	};
	class B_Battle_Belt_F: B_AssaultPack_Base {
		scope = 2;
		picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		displayName = "Battle Belt";
		model = "\A3\weapons_f\empty";
		maximumLoad = 200;
	};
	
	// USM
	class usm_pack_alice: Bag_Base
	{
		maximumLoad = 290;
	};
	class usm_pack_alice_prc119: Bag_Base
	{
		maximumLoad = 290;
	};
	class usm_pack_alice_prc77: Bag_Base
	{
		maximumLoad = 290;
	};
	class usm_pack_m5_medic: Bag_Base
	{
		maximumLoad = 200;
	};
	class usm_pack_st138_prc77: Bag_Base
	{
		maximumLoad = 180;
	};
	class usm_pack_762x51_bandoliers: Bag_Base
	{
		maximumLoad = 180;
	};
	class usm_pack_200rnd_556_bandoliers: Bag_Base
	{
		maximumLoad = 180;
	};
	class usm_pack_762x51_ammobelts: Bag_Base
	{
		maximumLoad = 180;
	};
	class usm_pack_abag_m60: Bag_Base
	{
		maximumLoad = 180;
	};
	
	// RHS AFRF
	class rhs_assault_umbts: B_AssaultPack_Base
	{
		maximumLoad = 240;
	};
	class rhs_rpg: B_AssaultPack_Base
	{
		maximumLoad = 200;
	};
	class rhs_sidor: B_AssaultPack_Base
	{
		maximumLoad = 200;
	};
	class rhs_medic_bag: B_AssaultPack_Base
	{
		maximumLoad = 200;
	};
    
    /*class rhs_rd54: B_AssaultPack_Base {
        maximumLoad = 240;
    };*/
    class rhs_r148: B_AssaultPack_Base {
        maximumLoad = 180;
    };
	
	// RHS USF
	class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base
	{
		maximumLoad = 240;
	};
	class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp {};
	class rhsusf_assault_eagleaiii_ocp_engineer: rhsusf_assault_eagleaiii_ocp
	{
		maximumLoad = 240;
	};
    
    // CUP
    class CUP_B_GER_Medic_FLecktarn: Bag_Base {
        maximumLoad = 200;
    };
    class CUP_B_GER_Medic_Tropentarn: Bag_Base {
        maximumLoad = 200;
    };
    class CUP_B_USPack_Base: Bag_Base {};
    class CUP_B_GER_Pack_Flecktarn: CUP_B_USPack_Base {
        maximumLoad = 300;
    };
    class CUP_B_GER_Pack_Tropentarn: CUP_B_USPack_Base {
        maximumLoad = 300;
    };
};
