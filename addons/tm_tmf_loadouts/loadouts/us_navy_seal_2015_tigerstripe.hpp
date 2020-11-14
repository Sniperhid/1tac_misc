// in case of fire, tell Bear
//Compatible with ACE Advanced Medical

tooltip = "Author: Bear\n\nHigh speed, low drag. Not restricted to amphibious missions.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "bear_uniform_g3_tigerstripe_seal",
        "bear_uniform_g3_tigerstripe_us"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"default"};
    hmd[] = {/*"CUP_NVG_GPNVG_black"*/};
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
        "ACE_Altimeter"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    
    insignias[] = {};
    faces[] = {"faceset:american"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = 
    {
        "bear_opscore_aor2_pelt_nsw",
        "bear_opscore_aor2_pelt_nsw",
        "bear_opscore_aor2_pelt_nsw_cam",
        "bear_opscore_aor2_pelt_nsw_cam",
        "rhsusf_opscore_mar_fg_pelt",
        "rhsusf_opscore_mar_fg_pelt",
        "rhsusf_opscore_paint_pelt",
        "rhsusf_opscore_paint_pelt_nsw",
        "rhsusf_opscore_fg_pelt_nsw",
        "rhsusf_opscore_fg_pelt_nsw",
        "bear_opscore_ranger_green_cover_pelt_nsw",
        "bear_opscore_ranger_green_cover_pelt_nsw",
        "bear_opscore_ranger_green_cover_pelt_nsw_cam",
        "bear_opscore_ranger_green_cover_pelt_nsw_cam"
    };
    vest[] = {
        "lbt_operator_aor2",
        "lbt_comms_aor2",
        "lbt_tl_aor2",
        "tac1_tm_rhs_extra_content_plateframe_aor2_rifleman",
        "tac1_tm_rhs_extra_content_plateframe_black_rifleman",
        "tac1_tm_rhs_extra_content_plateframe_black_rifleman"
    };
    primaryWeapon[] = 
    {
        "rhs_weap_hk416d10_LMT",
        "rhs_weap_hk416d10_LMT_d",
        "rhs_weap_hk416d10_LMT_wd"
    };
    bipod[] = 
    {
        "rhsusf_acc_grip2",
        "rhsusf_acc_grip3",
        "rhsusf_acc_rvg_blk",
        "rhsusf_acc_rvg_de",
        "rhsusf_acc_tdstubby_blk",
        "rhsusf_acc_tacsac_blk"
    };
    scope[] = 
    {
		"cup_optic_elcan_specterdr_rmr_coyote",
        "cup_optic_elcan_specterdr_kf_rmr_coyote"
    };
    silencer[] = 
    {
        "rhsusf_acc_nt4_black",
        "rhsusf_acc_nt4_tan"
    };
    attachment[] = 
    {
        "rhsusf_acc_anpeq15side_bk"
    };
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    sidearmAttachments[] = {"rhsusf_acc_omega9k", "cup_acc_mlpls_laser"};
    magazines[] =
    {
        LIST_8("tac1_tm_mag_compat_30Rnd_556x45_M995_AP_PMAG"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "bear_bdu_booniehat_tigerstripe"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
    vest[] = {"lbt_weapons_aor2"};
    primaryWeapon[] = 
    {
        "rhs_weap_hk416d10_m320"
    };
    bipod[] = {};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
    uniform[] = {
        "bear_uniform_g3_tigerstripe_med",
        "bear_uniform_g3_tigerstripe_medic"
    };
    backpack[] = {"B_AssaultPack_khk"};
    vest[] = {"bear_lbt_medical_aor2_patch"};
    backpackItems[] = {
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
        "rhs_mag_an_m8hc"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"lbt_light_aor1"};
    primaryWeapon[] = {"rhsusf_weap_MP7A1_base_f"};
    scope[] = {"rhsusf_acc_eotech_xps3"};
    attachment[] = {"rhsusf_acc_M952V"};
    silencer[] = {"rhsusf_acc_rotex_mp7"};
    bipod[] = {};
    backpackItems[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("rhsusf_mag_40Rnd_46x30_JHP"),
        LIST_4("rhsusf_mag_40Rnd_46x30_AP"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
    uniform[] = {
        "bear_uniform_g3_tigerstripe_cct"
    };
    backpackItems[] = {};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "ItemGPS",
        "ACE_Vector"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Kestrel4500",
        "ACE_microDAGR",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
    primaryWeapon[] = {"rhs_weap_m249_light_S"};
    bipod[] = {"rhsusf_acc_grip4_bipod"};
    scope[] = {"rhsusf_acc_ACOG_RMR"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    vest[] = {"bear_mbav_mg_green", "tac1_tm_rhs_extra_content_plateframe_aor2_machinegunner", "tac1_tm_rhs_extra_content_plateframe_black_machinegunner", "tac1_tm_rhs_extra_content_plateframe_black_machinegunner"};
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_556x45_mixed_soft_pouch"),
        LIST_3("rhsusf_100Rnd_556x45_M995_soft_pouch"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
    backpackItems[] =
    {
        LIST_2("rhsusf_100Rnd_556x45_mixed_soft_pouch"),
        LIST_2("rhsusf_100Rnd_556x45_M995_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    backpack[] = {"B_AssaultPack_khk"};
    backpackItems[] = {"tm_weap_m72e10"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_mk17_LB"};
    silencer[] = {"rhsusf_acc_aac_scarh_silencer"};
    scope[] = {"cup_optic_sb_11_4x20_pm"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    attachment[] = {"rhsusf_acc_anpeq15side"};
    vest[] = {"tac1_tm_rhs_extra_content_plateframe_aor2_marksman", "tac1_tm_rhs_extra_content_plateframe_black_marksman"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_SCAR_762x51_m118_special"),
        LIST_5("rhs_mag_20Rnd_SCAR_762x51_mk316_special"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_Mk48_nohg_od"};
    scope[] = {"rhsusf_acc_ACOG_MDO"};
    silencer[] = {"rhsusf_acc_ARDEC_M240"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_762x51_m80a1epr"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m80a1epr")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "lerca_1200_tan",
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
        "ACE_Altimeter",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
    secondaryAttachments[] = {"rhsusf_acc_anpeq15side"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HE"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HE"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "lerca_1200_tan",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HE"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ACE_Altimeter",
        "lerca_1200_tan",
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
    vest[] = {"tac1_tm_rhs_extra_content_plateframe_aor2_marksman", "tac1_tm_rhs_extra_content_plateframe_black_marksman"};
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
    headgear[] = {"rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_M107_w"};
    scope[] = {"rhsusf_acc_premier"};
    bipod[] = {};
    magazines[] =
    {
        LIST_5("rhsusf_mag_10Rnd_STD_50BMG_M33"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : r
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhs_assault_umbts", "bear_eagleaiii_aor2"};
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
    backpack[] = {"rhs_assault_umbts"};
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
    backpack[] = {"rhs_assault_umbts"};
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
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhs_assault_umbts"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ACE_Altimeter"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    uniform[] = {"bear_uniform_g3_tigerstripe_eod"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
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
    uniform[] = {"bear_uniform_g3_tigerstripe_eod"};
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