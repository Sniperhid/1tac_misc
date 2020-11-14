/* assignGear specific macros */ 
//Compatible with ACE Advanced Medical

tooltip = "Author: Bear\n\nHigh speed, low drag, giga operator\nUS Army SFOD-D/Delta Force/CAG in Multicam";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "bear_uniform_g3_multicam_us",
        "bear_uniform_g3_multicam_us2",
        "bear_uniform_g3_multicam_alt_us",
        "bear_uniform_g3_multicam_alt_us2",
        "bear_uniform_g3_multicam_alt2_us",
        "bear_uniform_g3_multicam_alt2_us2",
        "bear_uniform_g3_tan_multicam_us",
        "bear_uniform_g3_tan_multicam_us2"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {
        "CUP_Beard_Black",
        "CUP_Beard_Black",
        "CUP_Beard_Black",
        "CUP_G_Grn_Scarf_GPS_Beard",
        "CUP_G_Tan_Scarf_GPS_Beard",
        "CUP_G_White_Scarf_GPS_Beard",
        "CUP_G_Beard_Shades_Black",
        "rhs_googles_clear",
        "rhs_googles_black",
        "rhs_googles_orange",
        "G_Bandanna_blk",
        "bear_bandana_m81",
        "bear_bandana_multicam",
        "CUP_PMC_Facewrap_Black",
        "CUP_PMC_Facewrap_Tropical",
        "CUP_G_GPS",
        "CUP_G_Scarf_Face_Grn",
        "CUP_G_Scarf_Face_Tan",
        "G_Shades_Black",
        "CUP_FR_NeckScarf2",
        "CUP_FR_NeckScarf5",
        "G_Sport_Blackred",
        "CUP_G_WatchGPSCombo",
        "CUP_G_Grn_Scarf_GPS",
        "CUP_G_Tan_Scarf_GPS",
        "UK3CB_BAF_G_Tactical_Black",
        "UK3CB_BAF_G_Tactical_Black",
        "UK3CB_BAF_G_Tactical_Clear",
        "UK3CB_BAF_G_Tactical_Grey",
        "UK3CB_BAF_G_Tactical_Grey",
        "UK3CB_BAF_G_Tactical_Orange",
        "UK3CB_BAF_G_Tactical_Orange",
        "UK3CB_BAF_G_Tactical_Yellow",
        "G_Spectacles_Tinted",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    hmd[] = {};
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
    
    insignias[] = {"tac1_tm_insignia_usasoc"};
    faces[] = {"faceset:american"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
        "bear_opscore_multicam_cover_pelt",
        "bear_opscore_multicam2_cover_pelt",
        "bear_opscore_multicam3_cover_pelt",
        "bear_opscore_multicam4_cover_pelt",
        "bear_opscore_multicam5_cover_pelt",
        "bear_opscore_multicam6_cover_pelt",
        
        "bear_opscore_multicam_cover_pelt_cam",
        "bear_opscore_multicam2_cover_pelt_cam",
        "bear_opscore_multicam3_cover_pelt_cam",
        "bear_opscore_multicam4_cover_pelt_cam",
        "bear_opscore_multicam5_cover_pelt_cam",
        "bear_opscore_multicam6_cover_pelt_cam",
        
        "bear_opscore_multicam_cover_pelt_nsw_cam",
        "bear_opscore_multicam2_cover_pelt_nsw_cam",
        "bear_opscore_multicam3_cover_pelt_nsw_cam",
        "bear_opscore_multicam4_cover_pelt_nsw_cam",
        "bear_opscore_multicam5_cover_pelt_nsw_cam",
        "bear_opscore_multicam6_cover_pelt_nsw_cam",
        
        "rhsusf_opscore_paint_pelt_nsw", "rhsusf_opscore_paint_pelt_nsw",
        "rhsusf_opscore_paint_pelt_nsw_cam", "rhsusf_opscore_paint_pelt_nsw_cam",
        "rhsusf_opscore_ut_pelt_cam", "rhsusf_opscore_ut_pelt_cam",
        "rhsusf_opscore_ut_pelt_nsw_cam", "rhsusf_opscore_ut_pelt_nsw_cam",
        
        "bear_opscore_tan_pelt", "bear_opscore_tan_pelt",
        "bear_opscore_tan_pelt_cam", "bear_opscore_tan_pelt_cam",
        "bear_opscore_tan_pelt_nsw", "bear_opscore_tan_pelt_nsw",
        "bear_opscore_tan_pelt_nsw_cam", "bear_opscore_tan_pelt_nsw_cam"
    };
    vest[] = {
        "CUP_V_B_LBT_LBV_US_MCam",
        "CUP_V_B_LBT_LBV_US_MCam",
        "lbt_operator_mc",
        "lbt_comms_mc",
        "lbt_tl_mc",
        "lbt_operator_aor1",
        "lbt_comms_aor1",
        "lbt_tl_aor1",
        "tac1_tm_rhs_extra_content_plateframe_multicam_rifleman",
        "tac1_tm_rhs_extra_content_plateframe_aor1_rifleman"
    };
    primaryWeapon[] = {
        "rhs_weap_mk18_KAC",
        "rhs_weap_mk18_KAC_bk",
        "bear_weap_mk18_desert",
        "bear_weap_mk18_KAC_desert",
        "bear_weap_mk18_tan",
        "bear_weap_mk18_KAC_tan"
    };
    scope[] = {"rhsusf_acc_eotech_xps3"};
    attachment[] = {"rhsusf_acc_anpeq15_bk"};
    bipod[] = {"rhsusf_acc_rvg_blk","rhsusf_acc_rvg_de","rhsusf_acc_tdstubby_blk","rhsusf_acc_grip3","rhsusf_acc_grip2"};
    silencer[] = {"rhsusf_acc_sfmb556","rhsusf_acc_sf3p556"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_9("tac1_tm_mag_compat_30Rnd_556x45_M995_AP_PMAG_Tan"),
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
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"B_Kitbag_mcamo", "bear_eagleaiii_multicam"};
    vest[] = {
        "lbt_weapons_mc",
        "lbt_weapons_aor1",
        "tac1_tm_rhs_extra_content_plateframe_multicam_grenadier"
    };
    primaryWeapon[] = {
        "rhs_weap_mk18_m320",
        "bear_weap_mk18_m320_desert",
        "bear_weap_mk18_m320_tan"
    };
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_8("tac1_tm_mag_compat_30Rnd_556x45_M995_AP_PMAG_Tan"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
    uniform[] = {
        "bear_uniform_g3_multicam_med",
        "bear_uniform_g3_multicam_medic",
        "bear_uniform_g3_multicam_alt_med",
        "bear_uniform_g3_multicam_alt_medic",
        "bear_uniform_g3_multicam_alt2_med",
        "bear_uniform_g3_multicam_alt2_medic",
        "bear_uniform_g3_tan_multicam_med",
        "bear_uniform_g3_tan_multicam_medic"
    };
    backpack[] = {"B_AssaultPack_mcamo", "bear_eagleaiii_multicam"};
    vest[] = {"bear_lbt_medical_mc_patch", "tac1_tm_rhs_extra_content_plateframe_multicam_medic"};
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
    vest[] = {"lbt_light_mc", "tac1_tm_rhs_extra_content_plateframe_multicam_light"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("tac1_tm_mag_compat_30Rnd_556x45_M995_AP_PMAG_Tan"),
        "rhs_mag_m67"
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
    linkedItems[] += {"lerca_1200_tan","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
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
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_mag_m715_Green"),
        LIST_3("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green"),
        LIST_2("rhs_mag_m18_purple"),
        LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
        LIST_5("tac1_tm_mag_compat_30Rnd_556x45_M995_AP_PMAG_Tan"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    uniform[] = {
        "bear_uniform_g3_multicam_cct",
        "bear_uniform_g3_multicam_alt_cct",
        "bear_uniform_g3_multicam_alt2_cct",
        "bear_uniform_g3_tan_multicam_cct"
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
    backpack[] = {"B_AssaultPack_mcamo", "bear_eagleaiii_multicam"};
    primaryWeapon[] = {"CUP_lmg_Mk48"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    silencer[] = {"rhsusf_acc_ARDEC_M240"};
    bipod[] = {};
    vest[] = {"rhsusf_plateframe_machinegunner", "tac1_tm_rhs_extra_content_plateframe_multicam_machinegunner"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_AssaultPack_mcamo", "bear_eagleaiii_multicam"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    backpack[] = {"B_AssaultPack_mcamo"};
    backpackItems[] = {"tm_weap_m72e10"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_mk17_LB"};
    silencer[] = {"rhsusf_acc_aac_scarh_silencer"};
    scope[] = {"cup_optic_elcan_specterdr_kf_coyote", "cup_optic_elcan_specterdr_coyote"};
    bipod[] = {"rhsusf_acc_grip2_tan"};
    vest[] = {"rhsusf_plateframe_marksman", "tac1_tm_rhs_extra_content_plateframe_multicam_marksman"};
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
    primaryWeapon[] = {"CUP_lmg_Mk48_nohg"};
    scope[] = {"rhsusf_acc_ACOG_MDO"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    silencer[] = {"rhsusf_acc_ARDEC_M240"};
    backpack[] = {"B_AssaultPack_mcamo", "bear_eagleaiii_multicam", "B_Kitbag_mcamo"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51_m80a1epr"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_AssaultPack_mcamo", "bear_eagleaiii_multicam", "B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51_m80a1epr")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_AssaultPack_mcamo", "bear_eagleaiii_multicam", "B_Kitbag_mcamo"};
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
        LIST_4("rhsusf_100Rnd_762x51_m80a1epr")
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
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HE"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT"),
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
        LIST_3("rhs_mag_maaws_HEDP")
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
    backPack[] = {"B_Mortar_01_weapon_F"};
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
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
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
    primaryWeapon[] = {
        "UK3CB_BAF_L118A1_Covert",
        "UK3CB_BAF_L118A1_Covert_BL"
    };
    scope[] = {"rksl_optic_pmii_312"};
    bipod[] = {};
    magazines[] =
    {
        LIST_5("UK3CB_BAF_762_L42A1_10Rnd"),
        LIST_5("UK3CB_BAF_762_L42A1_10Rnd_T"),
        "rhs_mag_m67",
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    backpack[] = {};
};
class sp : g
{
    displayName = "Spotter";
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spcs_ocp_crewman"};
    backpack[] = {"B_Kitbag_mcamo"};
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
    vest[] = {"rhsusf_spcs_ocp_crewman"};
    backpack[] = {"B_Kitbag_mcamo"};
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
    backpack[] = {};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"B_Kitbag_mcamo"};
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
    backpack[] = {"B_Kitbag_mcamo"};
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
    backpack[] = {"B_Kitbag_mcamo"};
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
    uniform[] = {
        "bear_uniform_g3_multicam_eod",
        "bear_uniform_g3_multicam_alt_eod",
        "bear_uniform_g3_multicam_alt2_eod",
        "bear_uniform_g3_tan_multicam_eod"
    };
    backpack[] = {"B_Carryall_oli"};
    magazines[] =
    {
        LIST_5("tac1_tm_mag_compat_30Rnd_556x45_M995_AP_Stanag_Pull"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
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
    uniform[] = {
        "bear_uniform_g3_multicam_eod",
        "bear_uniform_g3_multicam_alt_eod",
        "bear_uniform_g3_multicam_alt2_eod",
        "bear_uniform_g3_tan_multicam_eod"
    };
    backpack[] = {"B_Kitbag_mcamo"};
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