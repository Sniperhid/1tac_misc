// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Freddo";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep2_idf"};
    vest[] = {"V_PlateCarrier1_rgr_noflag_F"};
    backpack[] = {"B_Carryall_oli"};
    headgear[] = {};
    goggles[] = {"default"};
    hmd[] = {};
    faces[] = 
    {
        "Ioannou",
        "GreekHead_A3_13",
        "GreekHead_A3_14",
        "GreekHead_A3_11",
        "GreekHead_A3_12"
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
    items[] = 
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Flashlight_XL50",
        LIST_2("Chemlight_green"),
        LIST_2("ACE_CableTie")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhssaf_helmet_m97_olive_nocamo"};
    hmd[] = 
    {
        "dzn_NVG_IDF_Mitznefet_Cover",
        "dzn_NVG_IDF_Mitznefet_Cover_Desert",
        "dzn_NVG_IDF_Mitznefet_Cover3",
        "dzn_NVG_IDF_Mitznefet_Cover3_Desert",
        "dzn_NVG_IDF_Mitznefet_Cover2",
        "dzn_NVG_IDF_Mitznefet_Cover2_Desert"
    };
    primaryWeapon[] = {LIST_4("idf_x95m_ng"), LIST_4("idf_x95m"), "mbg_m16a2"};
    scope[] = {"rhsusf_acc_rx01", "idf_optic_mars"};
    attachment[] = {"rhsusf_acc_m952v"};
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"V_PlateCarrier2_rgr_noflag_F"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203", "rhs_weap_m4a1_carryhandle_m203S"};
    magazines[] +=
    {
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {LIST_5("idf_x95m"), LIST_5("idf_x95m_ng"), LIST_3("rhs_weap_m4a1_carryhandle")};
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"V_PlateCarrier2_rgr_noflag_F"};
    insignias[] = {"UK3CB_BAF_Insignia_RedCross"};
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] = 
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_8("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_salineIV_500"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {};
    sidearmWeapon[] = {"CUP_hgun_MicroUzi"};
    magazines[] =
    {
        LIST_5("CUP_30Rnd_9x19_UZI"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] =
    {
        LIST_5("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Yellow"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    items[] += {"ACE_MapTools"};
    linkedItems[] += {"Binocular"};
};
class sl : r
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"UK3CB_BAF_L105A1"};
    magazines[] +=
    {
        LIST_3("UK3CB_BAF_9_13Rnd"),
        "rhs_mag_m18_red"
    };
    items[] += 
    {
        "ACE_DAGR",
        "ACE_MapTools",
        "usm_bdu_cap_odg"
    };
    linkedItems[] += {"rhsusf_bino_lerca_1200_tan"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"T1_Beret_Green"};
};
class fac : car
{
    displayName = "Forward Air Controller";
    backpack[] = {"UK3CB_BAF_B_Bergen_OLI_JTAC_H_A"};
    linkedItems[] += {"Laserdesignator_03"};
    items[] += {"ACE_DAGR"};
    backpackItems[] = 
    {
        "rhs_mag_m18_green",
        "rhs_mag_m18_purple",
        "rhs_mag_m18_red",
        "rhs_mag_m18_yellow"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"tac1_tm_negev_ng5_Negev_NG5"};
    scope[] = {"rhsusf_acc_elcan"};
    bipod[] = {"bipod_03_F_oli"};
    sidearmWeapon[] = {"UK3CB_BAF_L105A1"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_M855_soft_pouch"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_3("UK3CB_BAF_9_13Rnd")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_M855_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_sr25"};
    scope[] = {"hlc_optic_leupoldm3a"};
    magazines[] =
    {
        LIST_6("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"LMG_Zafir_F"};
    magazines[] =
    {
        LIST_4("150Rnd_762x54_Box"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_3("UK3CB_BAF_9_13Rnd")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("150Rnd_762x54_Box"),
        "150Rnd_762x54_Box_Tracer"
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    items[] += {"ACE_MapTools"};
    linkedItems[] += {"ItemRadio"};
    backpackItems[] =
    {
        LIST_2("150Rnd_762x54_Box"),
        "150Rnd_762x54_Box_Tracer"
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_L111A1"};
    backpackItems[] = {"UK3CB_BAF_127_100Rnd"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpackItems[] = {"UK3CB_BAF_127_100Rnd"};
};
class hmgag : mmgag
{
    displayName = "HMG Assistant Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_Tripod"};
    backpackItems[] = {"UK3CB_BAF_127_100Rnd"};
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw","acc_pointer_ir"};
    magazines[] +=
    {
        LIST_2("rhs_mag_smaw_HEAA"),
        LIST_2("rhs_mag_smaw_SR")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP"
    };
};
class matag : mmgag
{
    displayName = "MAT Assistant Gunner";
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"I_AT_01_weapon_F"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"I_AT_01_weapon_F"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"I_HMG_01_support_F"};
    linkedItems[] += {"Binocular"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_support_F"};
    items[] += {"ACE_DAGR","ACE_RangeTable_82mm"};
    linkedItems[] +=
    {
        "rhsusf_bino_lerca_1200_tan"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_B_FullGhillie_sard"};
    vest[] = {"V_TacChestrig_oli_F"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m82a1"};
    scope[] = {"rhsusf_acc_premier"};
    sidearmWeapon[] = {"UK3CB_BAF_L105A1"};
    sidearmAttachments[] = {"uk3cb_baf_silencer_l105a1"};
    magazines[] =
    {
        LIST_3("rhsusf_mag_10Rnd_STD_50BMG_M33"),
        "rhs_mag_mk3a2",
        LIST_3("UK3CB_BAF_9_13Rnd")
    };
};
class sp : r
{
    displayName = "Spotter";
    primaryWeapon[] = {"bear_weap_m4a1_wd_carryhandle"};
    uniform[] = {"U_B_FullGhillie_sard"};
    vest[] = {"V_TacChestrig_oli_F"};
    headgear[] = {};
    goggles[] = {"default"};
    scope[] = {"rhsusf_acc_acog_wd"};
    silencer[] = {"muzzle_snds_m_khk_f"};
    magazines[] =
    {
        LIST_3("rhs_mag_30Rnd_556x45_M855_Stanag"),
        "rhs_mag_mk3a2",
        "rhsusf_mag_10Rnd_STD_50BMG_M33"
    };
    items[] += {"ACE_MapTools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Laserdesignator_03"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    hmd[] = {};
    vest[] = {"V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    hmd[] = {};
    vest[] = {"V_TacVest_oli"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"H_HelmetCrew_I"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    hmd[] = {};
    vest[] = {"V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_I"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    hmd[] = {};
    uniform[] = {"CUP_U_I_RACS_PilotOverall"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {};
    headgear[] = {"rhsusf_ihadss"};
    goggles[] = {"default"};
    items[] += {"ACE_DAGR","ACE_MapTools"};
    linkedItems[] += {"ItemRadio"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    hmd[] = {};
    uniform[] = {"CUP_U_I_RACS_PilotOverall"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {"B_LegStrapBag_coyote_F"};
    headgear[] = {"rhsusf_ihadss"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    hmd[] = {};
    uniform[] = {"CUP_U_I_RACS_PilotOverall"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {};
    headgear[] = {"rhsusf_ihadss"};
    goggles[] = {"default"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ACE_DefusalKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal","ItemRadio"};
};
class jp : smg
{
    displayName = "Helicopter Pilot";
    hmd[] = {};
    uniform[] = {"CUP_U_I_RACS_PilotOverall"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetFighter_O"};
    goggles[] = {"default"};
    items[] += {"ACE_DAGR","ACE_MapTools"};
    linkedItems[] += {"ItemRadio"};
};