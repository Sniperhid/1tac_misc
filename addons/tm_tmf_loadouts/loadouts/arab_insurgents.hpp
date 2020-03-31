// in case of fire, tell Bear

tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
		"CUP_I_B_PMC_Unit_13",
		"CUP_I_B_PMC_Unit_15",
		"CUP_I_B_PMC_Unit_16",
		"CUP_I_B_PMC_Unit_35",
		"CUP_U_O_SLA_Desert",
		"CUP_U_B_BDUv2_roll2_dirty_desert",
		"CUP_U_B_BDUv2_dirty_M81_Winter",
		"CUP_U_B_BDUv2_Winter_M81",
		"CUP_I_B_PARA_Unit_8",
		"CUP_I_B_PARA_Unit_7",
		"CUP_I_B_PARA_Unit_2",
		"CUP_I_B_PARA_Unit_10",
		"usm_bdu_bnu_dcu2",
		"usm_bdu_bnu_tan",
		"usm_bdu_bnu_blu",
		"CUP_I_B_PARA_Unit_5",
		"U_I_L_Uniform_01_tshirt_skull_F",
		"U_I_L_Uniform_01_tshirt_sport_F",
		"bear_uniform_indep_m81"
	};
    vest[] = {
		"V_TacVest_blk",
		"V_TacVest_brn",
		"V_I_G_resistanceLeader_F",
		"V_TacVest_oli",
		"CUP_V_I_Guerilla_Jacket",
		"rhsgref_chicom",
		"V_TacVestIR_blk"
	};
    backpack[] = {"B_Battle_Belt_F"};
    headgear[] = {
		LIST_8(""),
		"H_Shemag_olive",
		"H_ShemagOpen_tan",
		"H_ShemagOpen_khk",
		"rhssaf_helmet_m97_black_nocamo",
		"CUP_H_PMC_Cap_Back_Tan",
		"CUP_H_PMC_Cap_Back_Grey",
		"H_Cap_oli",
		"CUP_H_C_TrackIR_01",
		"usm_headwrap_tan",
		"usm_headwrap_odg1",
		"usm_headwrap_dcu",
		"usm_helmet_pasgt_ce_des",
		"CUP_H_US_patrol_cap_OD",
		"CUP_H_SLA_Helmet_OD_worn",
		"bear_ssh68_sand",
		"CUP_H_TK_Lungee",
		"CUP_H_TK_Lungee",
		"CUP_H_TKI_Lungee_04",
		"CUP_H_TKI_Lungee_05",
		"CUP_H_TKI_Lungee_06",
		"CUP_H_TKI_SkullCap_04",
		"CUP_H_TKI_SkullCap_05"
	};
    goggles[] = {};
    hmd[] = {};
    faces[] = {"faceset:persian"};

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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"rhs_weap_akm", "rhs_weap_akm", "rhs_weap_akms", "rhs_weap_akms", "rhs_weap_pm63", "CUP_arifle_AKMN_railed_afg_desert"};
    scope[] = {};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
        "MOLOTOV_MAG",
        "rhs_mag_rdg2_white"
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_splint",
        "ACE_tourniquet"
    };
};
class r_545 : r
{
	primaryWeapon[] = {"rhs_weap_aks74u", "rhs_weap_aks74n", "rhs_weap_ak74n"};
    scope[] = {};
    silencer[] = {"rhs_acc_dtk1983"};
    magazines[] =
    {
        LIST_4("rhs_45Rnd_545X39_7N6_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_plum_green"),
        "MOLOTOV_MAG",
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_akm_gp25","rhs_weap_akms_gp25"};
    backpack[] = {"B_Battle_Belt_F"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "MOLOTOV_MAG",
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_2("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        "rhs_30Rnd_762x39mm_tracer",
        "rhs_mag_f1",
        "MOLOTOV_MAG",
        "rhs_mag_rdg2_white"
    };
};
class car2 : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_762x39mm"),
        "rhs_30Rnd_762x39mm_tracer",
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class m : car 
{
    displayName = "Medic";
    primaryWeapon[] = {"rhs_weap_ak103"};
    silencer[] = {"rhs_acc_dtk"};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_762x39mm_polymer"),
        LIST_3("rhs_30Rnd_762x39mm_polymer_tracer"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
    backpack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_5("ACE_splint"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
	primaryWeapon[] = {"rhs_weap_aks74u"};
    scope[] = {};
    silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_3("rhs_45Rnd_545X39_7N6_AK"),
        "rhs_30Rnd_545x39_AK_plum_green",
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    goggles[] = {"G_Aviator"};
    magazines[] = {
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellYellow"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "rhs_pdu4"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_splint",
        "ACE_Kestrel4500",
        "ACE_microDAGR",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_RPK74"};
    backpack[] = {"bear_sidor_tan"};
    bipod[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_10("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class aar : r_545
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"CUP_B_IDF_Backpack"};
    backpackItems[] =
    {
        LIST_8("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r_545
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    backpackItems[] +=
    {
        LIST_2("rhs_rpg7_PG7V_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_SVD"};
    silencer[] = {};
    scope[] = {"cup_optic_pso_1_open"};
    bipod[] = {};
    magazines[] =
    {
        LIST_10("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_PKM"};
    sidearmWeapon[] = {};
    backpack[] = {"B_Kitbag_rgr"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rdg2_white"
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car2
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : car2
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car2
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        "rhs_rpg7_OG7V_mag"
    };
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag")
    };
};
class matac : car
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
        "Binocular"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_TBG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};
class hatg : car2
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : car2
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car2
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_Kornet_Tripod_Bag"};
    secondaryWeapon[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class mtrg : car2
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car2
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car2
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backpack[] = {"B_Carryall_cbr"};
    magazines[] +=
    {
        "rhs_mag_9k38_rocket"
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        "rhs_mag_9k38_rocket"
    };
};
class sn : r
{
    displayName = "Sniper";
    goggles[] = {};
    primaryWeapon[] = {"CUP_srifle_SVD"};
    scope[] = {"cup_optic_pso_1_open"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_10("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_f1",
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"Binocular"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"Binocular"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"bear_sidor_tan"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"bear_sidor_tan"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
    linkedItems[] += {};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {"bear_sidor_tan"};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"bear_sidor_tan"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"bear_sidor_tan"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"bear_sidor_tan"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car2
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
class engm : car2
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
        LIST_2("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"bear_sidor_tan"};
    linkedItems[] += {"O_UavTerminal"};
};
