// in case of fire, tell Bear

tooltip = "Author: Bear\n\nHigh speed, low drag. Inspired by photos of SSO in Syria and elsewhere.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_g3_atacs_au_ru"};
   	vest[] = {};
   	backpack[] = 
	{
		LIST_3("rhsusf_falconii_mc"),
		LIST_3("B_AssaultPack_cbr"),
		"rhs_assault_umbts",
		"rhs_assault_umbts",
		"rhs_assault_umbts_engineer_empty"
	};
   	headgear[] = {};
	goggles[] = 
	{
		"rhs_scarf",
		"G_Bandanna_khk",
		"G_Bandanna_tan",
		"G_Bandanna_oli",
		"rhs_balaclava",
		"rhs_balaclava",
		"bear_balaclava1_black",
		"bear_balaclava1_black",
		"rhs_googles_orange",
		"rhs_googles_yellow",
		"rhs_googles_clear",
		"rhs_googles_black",
		"CUP_FR_NeckScarf",
		"CUP_TK_NeckScarf",
		LIST_5("")
	};
   	hmd[] = 
	{
		//"rhs_1PN138" 
	};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};
	
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = 
	{
		"rhsusf_opscore_mc",
		"rhsusf_opscore_mc_pelt",
		"rhsusf_opscore_mc_pelt",
		"rhsusf_opscore_ut_pelt"
	};
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	primaryWeapon[] =
	{
		LIST_4("rhs_weap_ak74m_zenitco01_b33"),
		"rhs_weap_ak105_zenitco01_b33"
	};
	silencer[] = {"rhs_acc_dtk2"};
	attachment[] = {"rhs_acc_perst3_2dp_light_h"};
	scope[] = {LIST_4("rhs_acc_1p87"),"rhsusf_acc_eotech_552",LIST_2("rhsusf_acc_compm4")};
	bipod[] = {LIST_2("rhs_acc_grip_ffg2"),LIST_2("rhs_acc_grip_rk6"),"rhsusf_acc_grip2"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_ak74mr_gp25"};
    magazines[] +=
    {
        LIST_2("rhs_VOG25"),
        LIST_3("rhs_VOG25P"),
        LIST_4("rhs_GDM40")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_ak105_zenitco01_b33"};
};
class m : car 
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
	backpackItems[] =
	{
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
	primaryWeapon[] = {"rhs_weap_ak105"};
	silencer[] = {"rhs_acc_pgs64"};
	scope[] = {};
	bipod[] = {};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
		LIST_2("rhs_GRD40_Red")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	radios[] = {"ACRE_PRC117F"};
	magazines[] = {
		LIST_2("rhs_GRD40_Green"),
		LIST_3("rhs_GRD40_Red"),
		LIST_2("rhs_mag_nspd"),
		LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
		LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	radios[] = {"ACRE_PRC117F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"rhs_pdu4"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
    backpack[] = {"B_Carryall_cbr"};
	primaryWeapon[] = {"rhs_weap_pkp"};
	scope[] = {"rhs_acc_pkas"};
	bipod[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_2("rhs_100Rnd_762x54mmR_7N26"),
        LIST_2("rhs_100Rnd_762x54mmR_7BZ3"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR_7N26"),
        LIST_2("rhs_100Rnd_762x54mmR_7BZ3")
    };
    linkedItems[] += {"Binocular"};
	
	primaryWeapon[] = {"rhs_weap_ak104_zenitco01_b33"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_4("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
	primaryWeapon[] =
	{
		"rhs_weap_ak74m_zenitco01",
		"rhs_weap_ak105_zenitco01"
	};
	attachment[] = {"rhs_acc_perst3_2dp_light_h"};
	scope[] = {"rhsusf_acc_T1_low_fwd_ak"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_vss_grip"};
	silencer[] = {};
	scope[] = {"rhs_acc_pso1m21"};
	bipod[] = {};
	attachment[] = {};
	magazines[] =
	{
		LIST_4("rhs_10rnd_9x39mm_SP5"),
		LIST_4("rhs_10rnd_9x39mm_SP6"),
		"rhs_mag_rgd5",
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkp"};
	sidearmWeapon[] = {};
	scope[] = {"rhs_acc_pkas"};
	magazines[] =
	{
		LIST_2("rhs_100Rnd_762x54mmR_7N26"),
		LIST_3("rhs_100Rnd_762x54mmR_7BZ3"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR_7N26"),
		LIST_2("rhs_100Rnd_762x54mmR_7BZ3")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"B_Carryall_cbr"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_pdu4",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_2("rhs_100Rnd_762x54mmR_7N26"),
		LIST_2("rhs_100Rnd_762x54mmR_7BZ3")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_Kord_Tripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_pdu4",
		"ItemGPS"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpack[] = {"rhs_rpg"};
	magazines[] +=
	{
		"rhs_rpg7_PG7VR_mag",
		LIST_2("rhs_rpg7_PG7VL_mag")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_pdu4",
		"ItemGPS"
	};
	backpackItems[] =
	{
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_TBG7V_mag",
		"rhs_rpg7_OG7V_mag"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"RHS_Kornet_Tripod_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"RHS_Kornet_Gun_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	secondaryWeapon[] = {};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_pdu4",
		"ItemGPS"
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    //headgear[] = {"rhs_beanie","rhs_beanie_green"};
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
	bipod[] = {"rhs_acc_harris_swivel"};
    sidearmWeapon[] = {"rhs_weap_pp2000_folded"};
    magazines[] =
    {
        LIST_6("rhs_5Rnd_338lapua_t5000"),
        LIST_3("rhs_mag_9x19mm_7n21_20")
    };
	backpack[] = {};
	linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : r
{
    displayName = "Spotter";
	linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"rhs_uniform_msv_emr"};
    vest[] = {"rhs_6b13_EMR_6sh92_headset_mapcase"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
	linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"rhs_uniform_msv_emr"};
    vest[] = {"rhs_6b13_EMR"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
	linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_nspd")
	};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_nspd")
	};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
	sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"B_Carryall_cbr"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
	items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_Carryall_cbr"};
    items[] +=
    {
		"ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_3("rhs_mine_pmn2_mag"),
        LIST_3("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {};
    linkedItems[] += {"O_UavTerminal"};
};
