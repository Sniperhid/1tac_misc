//Compatible with ACE Advanced Medical
tooltip = "Author: Käsmeister\n\nDelta Force operators on bodyguard duty. Additional classes for VIPs.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_I_B_PMC_Unit_17","CUP_I_B_PMC_Unit_13","CUP_I_B_PMC_Unit_3","CUP_I_B_PMC_Unit_4","CUP_I_B_PMC_Unit_7","CUP_I_B_PMC_Unit_6","CUP_I_B_PMC_Unit_43","CUP_I_B_PMC_Unit_38","CUP_I_B_PMC_Unit_35","usm_bdu_bnu_blk","usm_bdu_bnu_tan","U_C_ArtTShirt_01_v6_F"};
    vest[] = {"CUP_V_CPC_tlbelt_rngr","CUP_V_CPC_Fastbelt_rngr","CUP_V_CPC_communicationsbelt_rngr"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"CUP_H_FR_Headset","CUP_H_FR_Headset","sfp_headset","CUP_H_USA_Cap_NY_DEF","CUP_H_FR_Cap_Headset_Green","CUP_H_PMC_Cap_PRR_Tan"};
    goggles[] = {"rhsusf_shemagh_grn","","","","rhsusf_shemagh2_grn","rhsusf_shemagh_tan","rhsusf_shemagh2_tan","G_Spectacles","UK3CB_BAF_G_Tactical_Black"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:american"};
    // Leave empty to not change faces.
    insignias[] = {};
    // Leave empty to not change insignias

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
    items[] = {"FirstAidKit"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
		"ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"rhs_weap_mk18","rhs_weap_mk18_bk","rhs_weap_mk18_KAC_bk","rhs_weap_mk18_KAC"};
    scope[] = {"cup_optic_microt1","rhsusf_acc_eotech_xps3","cup_optic_vortexrazor_uh1_black","rhsusf_acc_t1_high","rhsusf_acc_eotech_552","rhsusf_acc_compm4"};
    attachment[] = {""};
	silencer[] = {"cup_muzzle_mfsup_flashhider_556x45_black"};
	bipod[] = {"rhsusf_acc_tdstubby_blk","rhsusf_acc_grip3","rhsusf_acc_kac_grip","rhsusf_acc_rvg_blk","rhsusf_acc_grip2"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger"),
        LIST_2("rhs_mag_m67"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"CUP_V_CPC_weaponsbelt_rngr"};
    primaryWeapon[] = {"rhs_weap_mk18_m320","bear_weap_mk18_m320_tan"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M397_HET"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_mk18","rhs_weap_mk18_bk","rhs_weap_mk18_KAC_bk","rhs_weap_mk18_KAC"};
	scope[] = {"cup_optic_microt1","rhsusf_acc_eotech_xps3","cup_optic_vortexrazor_uh1_black","rhsusf_acc_t1_high","rhsusf_acc_eotech_552","rhsusf_acc_compm4"};
    attachment[] = {""};
	silencer[] = {"cup_muzzle_mfsup_flashhider_556x45_black"};
	bipod[] = {"rhsusf_acc_tdstubby_blk","rhsusf_acc_grip3","rhsusf_acc_kac_grip","rhsusf_acc_rvg_blk","rhsusf_acc_grip2"};
	magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger"),
        LIST_1("rhs_mag_m67"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
	vest[] = {"bear_cpc_medicalbelt_rngr_patch"};
	backpackItems[] =
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5_Rail"};
	scope[] = {"cup_optic_microt1","rhsusf_acc_eotech_xps3","cup_optic_vortexrazor_uh1_black","rhsusf_acc_t1_high","rhsusf_acc_eotech_552","rhsusf_acc_compm4"};
    magazines[] =
    {
        LIST_8("30Rnd_9x21_Mag_SMG_02"),
        LIST_2("rhs_mag_m67"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_Mk48"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
        "rhs_mag_m67",
        "SmokeShell",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"arifle_SPAR_03_blk_F"};
    scope[] = {"rhsusf_acc_g33_xps3","rhsusf_acc_g33_t1"};
	silencer[] = {"muzzle_snds_b"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_8("ACE_20Rnd_762x51_M993_AP_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    scope[] = {"rhsusf_acc_eotech_xps3"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51_m80a1epr"),
        "rhs_mag_m67",
        "SmokeShell",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m80a1epr")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m80a1epr")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
    magazines[] +=
    {
        LIST_3("rhs_mag_maaws_HEDP")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhs_mag_maaws_HEDP")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhs_mag_maaws_HEDP")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_3("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"CUP_V_CPC_lightbelt_rngr"};
    primaryWeapon[] = {"rhs_weap_XM2010"};
    scope[] = {"rhsusf_acc_m8541"};
	silencer[] = {"rhsusf_acc_m2010s_wd"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"CUP_hgun_Mk23"};
	sidearmAttachments[] = {"cup_muzzle_snds_mk23","cup_acc_mk23_lam_f"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("rhs_mag_m67"),
        LIST_4("CUP_12Rnd_45ACP_mk23")
    };
};
class sp : g
{
    displayName = "Spotter";
	vest[] = {"CUP_V_CPC_weaponsbelt_rngr"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_cvc_ess",
        "rhsusf_cvc_alt_helmet",
        "rhsusf_cvc_helmet",
        "rhsusf_cvc_green_ess",
        "rhsusf_cvc_green_alt_helmet",
        "rhsusf_cvc_green_helmet"
    };
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_cvc_ess",
        "rhsusf_cvc_alt_helmet",
        "rhsusf_cvc_helmet",
        "rhsusf_cvc_green_ess",
        "rhsusf_cvc_green_alt_helmet",
        "rhsusf_cvc_green_helmet"
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_hgu56p_black",
        "rhsusf_hgu56p_visor_black",
        "rhsusf_hgu56p_green",
        "rhsusf_hgu56p_visor_green",
        "rhsusf_hgu56p",
        "rhsusf_hgu56p_visor"
    };
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_hgu56p_visor_mask_black",
        "rhsusf_hgu56p_visor_mask_Empire_black",
        "rhsusf_hgu56p_visor_mask_black_skull",
        "rhsusf_hgu56p_visor_mask_green",
        "rhsusf_hgu56p_visor_mask_green_mo",
        "rhsusf_hgu56p_visor_mask",
        "rhsusf_hgu56p_visor_mask_mo",
        "rhsusf_hgu56p_visor_mask_skull",
        "rhsusf_hgu56p_visor_mask_smiley"
    };
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
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
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_oli"};
    magazines[] =
    {
        LIST_6("rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk"),
        LIST_2("rhs_mag_an_m8hc"),        
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"B_Carryall_oli"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};
class vip : baseMan
{
    displayName = "VIP";
	uniform[] = {"U_C_FormalSuit_01_black_F","U_C_FormalSuit_01_blue_F","U_C_FormalSuit_01_gray_F","U_C_FormalSuit_01_khaki_F","U_C_FormalSuit_01_tshirt_black_F","U_C_FormalSuit_01_tshirt_gray_F","U_C_Uniform_Scientist_01_formal_F","U_C_Uniform_Scientist_01_F"};
	vest[] = {"rhsusf_spcs_ocp"};
	headgear[] = {"rhssaf_helmet_m97_black_nocamo"};
	goggles[] = {"Bear_RoundGlasses_blk","G_Spectacles","G_Spectacles","","","",""};
	backPack[] = {""};
    primaryWeapon[] = {""};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP");
    };
};
class vipnogun : baseMan
{
    displayName = "VIP (Unarmed)";
	uniform[] = {"U_C_FormalSuit_01_black_F","U_C_FormalSuit_01_blue_F","U_C_FormalSuit_01_gray_F","U_C_FormalSuit_01_khaki_F","U_C_FormalSuit_01_tshirt_black_F","U_C_FormalSuit_01_tshirt_gray_F","U_C_Uniform_Scientist_01_formal_F","U_C_Uniform_Scientist_01_F"};
	vest[] = {""};
	headgear[] = {""};
	goggles[] = {"Bear_RoundGlasses_blk","G_Spectacles","G_Spectacles","","","",""};
	backPack[] = {""};
    primaryWeapon[] = {""};
	sidearmWeapon[] = {""};
};