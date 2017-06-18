class CfgVehicles
{
	class Bag_Base;
	class B_AssaultPack_Base: Bag_Base 
	{
		maximumLoad = 180;
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
		maximumLoad = 160;
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
		maximumLoad = 120;
	};
	
	// RHS AFRF
	class rhs_assault_umbts: B_AssaultPack_Base
	{
		maximumLoad = 200;
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
		maximumLoad = 160;
	};
	
	// RHS USF
	class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base
	{
		maximumLoad = 200;
	};
	class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp {};
	class rhsusf_assault_eagleaiii_ocp_engineer: rhsusf_assault_eagleaiii_ocp
	{
		maximumLoad = 200;
	};
};
