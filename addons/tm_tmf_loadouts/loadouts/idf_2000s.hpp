// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Freddo";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep_olivedrab"};
    vest[] = {"mbavr"};
    backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
    headgear[] = {};
    goggles[] = {"default"};
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
    items[] = 
    {
        LIST_2("FirstAidKit"),
        "ACE_Flashlight_XL50",
        LIST_2("Chemlight_green"),
        LIST_2("ACE_CableTie")
    };
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
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsgref_helmet_pasgt_olive"};
    goggles[] = {LIST_2("rhsusf_shemagh_gogg_grn"),"rhsusf_shemagh2_gogg_grn"};
    vest[] = {"mbavr_l"};
    primaryWeapon[] = {"arifle_TRG21_F"};
    scope[] = {"rhsusf_acc_rx01_nofilter_tan"};
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
    vest[] = {"mbavr_gl"};
    primaryWeapon[] = {"arifle_TRG21_GL_F"};
    magazines[] +=
    {
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"arifle_TRG20_F"};
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"mbavr_m"};
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] = 
    {
        LIST_10("ACE_morphine"),
        LIST_15("ACE_fieldDressing"),
        LIST_6("ACE_bloodIV_500"),
        LIST_5("ACE_epinephrine"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ma : car
{
    displayName = "Medic (Advanced)";
    vest[] = {"mbavr_m"};
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] = 
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_15("ACE_quikclot"),
        LIST_12("ACE_atropine"),
        LIST_8("ACE_morphine"),
        LIST_8("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_salineIV_500"),
        "ACE_surgicalKit",
        "ACE_personalAidKit",
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
    linkedItems[] += {"Binocular","ItemRadio"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"usm_bdu_cap_odg"};
    sidearmWeapon[] = {"UK3CB_BAF_L105A1"};
    magazines[] +=
    {
        LIST_3("UK3CB_BAF_9_13Rnd"),
        "rhs_mag_m18_red"
    };
    items[] += {"ACE_DAGR"};
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
    linkedItems[] += {"Laserdesignator_03","ItemRadio"};
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
    vest[] = {"mbavr_mg"};
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
    headgear[] = {"H_Booniehat_oli"};
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
    linkedItems[] += {"ItemRadio","Binocular"};
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
        "ItemRadio",
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
    linkedItems[] =
    {
        "ItemRadio"
    };
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
    vest[] = {"V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemRadio"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"V_TacVest_oli"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"H_HelmetCrew_I"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"H_HelmetCrew_I"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
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
    uniform[] = {"CUP_U_I_RACS_PilotOverall"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetFighter_O"};
    goggles[] = {"default"};
    items[] += {"ACE_DAGR","ACE_MapTools"};
    linkedItems[] += {"ItemRadio"};
};