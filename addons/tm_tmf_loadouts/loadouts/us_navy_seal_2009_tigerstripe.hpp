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
    headgear[] = {
        "bear_mich_bare_gray_norotos",
        "bear_mich_bare_gray_norotos_alt",
        "bear_mich_bare_gray_norotos_headset",
        "rhsusf_mich_bare_norotos_alt",
        "rhsusf_mich_bare_norotos_alt_headset",
        "tm_mich_bare_norotos_alt_wood",
        "tm_mich_bare_norotos_alt_wood_headset"
    };
    vest[] = {
        "CUP_V_MBSS_PACA2_Green",
        "CUP_V_MBSS_PACA2_Green",
        "CUP_V_MBSS_PACA2_Tan"
    };
    primaryWeapon[] = {
        "bear_weap_m4a1_blockII_desert",
        "bear_weap_m4a1_blockII_KAC_desert",
        "bear_weap_m4a1_blockII_green",
        "bear_weap_m4a1_blockII_KAC_green",
        "bear_weap_m4a1_blockII_tan",
        "bear_weap_m4a1_blockII_KAC_tan"
    };
    bipod[] = {
        "rhsusf_acc_kac_grip"
    };
    scope[] = {
        "rhsusf_acc_eotech_552"
    };
    silencer[] = {};
    attachment[] = {
        "cup_acc_anpeq_2_grey"
    };
    sidearmWeapon[] = {"CUP_hgun_Mk23"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red"),
        LIST_2("CUP_12Rnd_45ACP_mk23"),
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
        "bear_bdu_booniehat_tigerstripe2"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81"};
    vest[] = {
        "CUP_V_MBSS_PACA2_Green",
        "CUP_V_MBSS_PACA2_Green",
        "CUP_V_MBSS_PACA2_Tan"
    };
    primaryWeapon[] = {
        "bear_weap_m4a1_blockII_M203_desert",
        "bear_weap_m4a1_blockII_M203_green",
        "bear_weap_m4a1_blockII_M203_tan"
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
    backpack[] = {"rhsusf_falconii", "B_TacticalPack_oli"};
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
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81", "UK3CB_BAF_B_Bergen_OLI_Rifleman_A"};
    primaryWeapon[] = {"CUP_lmg_m249_SQuantoon"};
    scope[] = {"rhsusf_acc_eotech_552_d"};
    bipod[] = {};
    vest[] = {"rhsusf_mbav_mg", "bear_mbav_mg_green"};
    magazines[] = {
        LIST_6("rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"),
        LIST_2("CUP_12Rnd_45ACP_mk23"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81", "UK3CB_BAF_B_Bergen_OLI_Rifleman_A"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    backpack[] = {"rhsusf_falconii", "B_TacticalPack_oli"};
    backpackItems[] = {"tm_weap_m72e10"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_EBR_F"};
    silencer[] = {};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] = {
        LIST_12("rhsusf_20Rnd_762x51_m80_Mag"),
        LIST_2("CUP_12Rnd_45ACP_mk23"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_Mk48"};
    scope[] = {"rhsusf_acc_eotech_552"};
    magazines[] = {
        LIST_6("rhsusf_100Rnd_762x51"),
        LIST_2("CUP_12Rnd_45ACP_mk23"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81", "UK3CB_BAF_B_Bergen_OLI_Rifleman_A"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81", "UK3CB_BAF_B_Bergen_OLI_Rifleman_A"};
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
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
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
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81"};
    headgear[] = {"rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_M107_w"};
    scope[] = {"rhsusf_acc_premier"};
    bipod[] = {};
    magazines[] =
    {
        LIST_5("rhsusf_mag_10Rnd_STD_50BMG_M33"),
        LIST_2("rhs_mag_m67"),
        LIST_4("CUP_12Rnd_45ACP_mk23")
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
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81"};
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
    backpack[] = {"rhs_assault_umbts", "B_Kitbag_sgg", "bear_eagleaiii_m81"};
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
        LIST_4("CUP_12Rnd_45ACP_mk23")
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