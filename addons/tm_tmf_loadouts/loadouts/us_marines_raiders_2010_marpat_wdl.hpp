// in case of fire, tell Bear
//Compatible with ACE Advanced Medical

tooltip = "Author: Bear\n\nHigh speed, low drag.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_FROG01_wd"};
    vest[] = {};
    headgear[] = {};
    backpack[] = {};
    goggles[] = {"default"};
    hmd[] = 
    {
        // "rhsusf_ANPVS_15"
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

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    
    insignias[] = {"tac1_tm_insignia_marsoc", "tac1_tm_insignia_marsoc2"};
    faces[] = {"faceset:american"};
};
class r : baseMan
{
    displayName = "Rifleman (M72A7)";
    headgear[] = {
        "rhsusf_mich_bare_alt",
        "rhsusf_mich_bare_headset",
        "rhsusf_mich_bare_norotos_alt",
        "rhsusf_mich_bare_norotos_alt_headset",
        "rhsusf_mich_bare_norotos_arc_alt",
        "rhsusf_mich_bare_norotos_arc_alt_headset",
        "rhsusf_mich_bare_norotos_arc_headset",
        "rhsusf_mich_bare_norotos_headset"
    };
    vest[] = {
        "rhsusf_mbav_rifleman",
        "rhsusf_mbav_rifleman",
        "rhsusf_mbav_rifleman",
        "CUP_V_B_Ciras_Coyote",
        "CUP_V_B_Ciras_Coyote2",
        "CUP_V_B_Ciras_Coyote3",
        "CUP_V_B_Ciras_Coyote4",
        "CUP_V_B_Ciras_Coyote_USSF"
    };
    primaryWeapon[] = {
        "rhs_weap_mk18_bk",
        "rhs_weap_m4a1_blockII_bk"
    };
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    bipod[] = {
        "rhsusf_acc_kac_grip",
        "rhsusf_acc_grip2"
    };
    scope[] = {"rhsusf_acc_eotech_552", "rhsusf_acc_compm4"};
    silencer[] = {"rhsusf_acc_SF3P556", "rhsusf_acc_SFMB556"};
    attachment[] = {"cup_acc_anpeq_15_flashlight_black_l"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
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
        "rhs_booniehat2_marpatwd"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"rhsusf_falconii_coy", "bear_eagleaiii_marpat_wd"};
    vest[] = {
        "rhsusf_mbav_grenadier",
        "rhsusf_mbav_grenadier",
        "rhsusf_mbav_grenadier",
        "CUP_V_B_Ciras_Coyote",
        "CUP_V_B_Ciras_Coyote2",
        "CUP_V_B_Ciras_Coyote3",
        "CUP_V_B_Ciras_Coyote4",
        "CUP_V_B_Ciras_Coyote_USSF"
    };
    primaryWeapon[] = {
        "rhs_weap_m4a1_blockII_M203_bk"
    };
    bipod[] = {};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
    secondaryWeapon[] = {};
};
class car : r
{
    displayName = "Carabinier";
    secondaryWeapon[] = {};
};
class m : car
{
    displayName = "Corpsman";
    backpack[] = {"rhsusf_falconii_coy", "bear_eagleaiii_marpat_wd"};
    vest[] = {
        "rhsusf_mbav_medic",
        "rhsusf_mbav_medic",
        "rhsusf_mbav_medic",
        "CUP_V_B_Ciras_Coyote",
        "CUP_V_B_Ciras_Coyote2",
        "CUP_V_B_Ciras_Coyote3",
        "CUP_V_B_Ciras_Coyote4",
        "CUP_V_B_Ciras_Coyote_USSF"
    };
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
    vest[] = {
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "CUP_V_B_Ciras_Coyote",
        "CUP_V_B_Ciras_Coyote2",
        "CUP_V_B_Ciras_Coyote3",
        "CUP_V_B_Ciras_Coyote4",
        "CUP_V_B_Ciras_Coyote_USSF"
    };
    primaryWeapon[] = {"rhsusf_weap_MP7A1_base_f"};
    scope[] = {"rhsusf_acc_eotech_xps3"};
    attachment[] = {"rhsusf_acc_M952V"};
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
    secondaryWeapon[] = {};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"ItemGPS"};
};
class sl : r
{
    displayName = "Squad Leader";
    primaryWeapon[] = {"rhs_weap_mk17_STD"};
    silencer[] = {};
    attachment[] = {"rhsusf_acc_anpeq15side"};
    bipod[] = {"rhsusf_acc_tdstubby_tan"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    magazines[] =
    {
        LIST_8("rhs_mag_20Rnd_SCAR_762x51_m80a1_epr"),
        LIST_4("rhs_mag_20Rnd_SCAR_762x51_m62_tracer"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_2("rhs_mag_m18_green"),
        LIST_2("rhs_mag_m18_red"),
        LIST_2("rhs_mag_m18_purple")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    secondaryWeapon[] = {};
};
class co : sl
{
    displayName = "Platoon Leader";
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
class ar_m27 : r
{
    displayName = "Automatic Rifleman (M27 IAR)";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    primaryWeapon[] = {"rhs_weap_m27iar_grip"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_9("tac1_tm_mag_compat_60Rnd_556x45_Mk318_Surefire"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar_m27 : r
{
    displayName = "Ass. Automatic Rifleman (M27 IAR)";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    backpackItems[] =
    {
        LIST_6("tac1_tm_mag_compat_60Rnd_556x45_Mk318_Surefire")
    };
    linkedItems[] += {"Binocular"};
};
class ar : r
{
    displayName = "Automatic Rifleman (M249)";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    primaryWeapon[] = {"rhs_weap_m249_light_S"};
    bipod[] = {"rhsusf_acc_grip4_bipod"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    silencer[] = {"rhsusf_acc_SF3P556"};
    vest[] = {
        "rhsusf_mbav_mg",
        "rhsusf_mbav_mg",
        "rhsusf_mbav_mg",
        "rhsusf_mbav_mg",
        "rhsusf_mbav_mg",
        "CUP_V_B_Ciras_Coyote",
        "CUP_V_B_Ciras_Coyote2",
        "CUP_V_B_Ciras_Coyote3",
        "CUP_V_B_Ciras_Coyote4",
        "CUP_V_B_Ciras_Coyote_USSF"
    };
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
    secondaryWeapon[] = {};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman (M249)";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote")
    };
    linkedItems[] += {"Binocular"};
    secondaryWeapon[] = {};
};
class rat : car
{
    displayName = "Rifleman (M72A7)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    backpack[] = {"rhsusf_falconii_coy"};
    backpackItems[] = {"tm_weap_m72e10"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_mk17_LB"};
    silencer[] = {"rhsusf_acc_aac_scarh_silencer"};
    scope[] = {"cup_optic_sb_11_4x20_pm"};
    bipod[] = {"rhsusf_acc_grip2_tan"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_SCAR_762x51_m118_special"),
        LIST_5("rhs_mag_20Rnd_SCAR_762x51_mk316_special"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    secondaryWeapon[] = {};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B_CAP"};
    scope[] = {"rhsusf_acc_ACOG_MDO"};
    silencer[] = {"rhsusf_acc_ARDEC_M240"};
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_762x51_m80a1epr"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m80a1epr")
    };
    secondaryWeapon[] = {};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"rhsusf_assault_eagleaiii_coy", "bear_eagleaiii_marpat_wd"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
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
    secondaryWeapon[] = {};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_smaw_HEDP"),
        LIST_3("rhs_mag_smaw_SR")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEDP"),
        "rhs_mag_smaw_SR"
    };
    secondaryWeapon[] = {};
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEDP"),
        "rhs_mag_smaw_SR"
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
    secondaryWeapon[] = {};
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
        "ItemWatch",
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
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
    secondaryWeapon[] = {};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backpack[] = {"rhsusf_falconii_coy"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
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
        "ItemWatch",
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
    headgear[] = {
        "rhs_booniehat2_marpatwd"
    };
    vest[] = {
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "rhsusf_mbav_light",
        "CUP_V_B_Ciras_Coyote",
        "CUP_V_B_Ciras_Coyote2",
        "CUP_V_B_Ciras_Coyote3",
        "CUP_V_B_Ciras_Coyote4",
        "CUP_V_B_Ciras_Coyote_USSF"
    };
    primaryWeapon[] = {"rhs_weap_m40a5_wd"};
    scope[] = {"rhsusf_acc_m8541_low_wd"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    attachment[] = {};
    magazines[] =
    {
        LIST_10("rhsusf_10Rnd_762x51_m993_Mag"),
        LIST_3("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
    secondaryWeapon[] = {};
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Kestrel4500",
        "ACE_microDAGR"
    };
};
class sp : g
{
    displayName = "Spotter";
    headgear[] = {
        "rhs_booniehat2_marpatwd"
    };
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
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
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
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