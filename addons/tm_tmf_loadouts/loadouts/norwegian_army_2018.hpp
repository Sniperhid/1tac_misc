/* assignGear specific macros */
//Compatible with ACE Advanced Medical

// dependencies: RHS USF, CUP, bearskins
// originally by Sam, thanks for El_Pasta's help for accuracy and reference photos.


tooltip = "Author: Sam";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_g3_norwegian_m98"};
    vest[] = {};
    backpack[] = {"B_Kitbag_cbr"};
    headgear[] = {};
    goggles[] = {
        "rhsusf_shemagh_gogg_tan",
        "rhsusf_shemagh2_gogg_od",
        "rhsusf_shemagh_gogg_od",
        "rhsusf_oakley_goggles_blk",
        "rhsusf_oakley_goggles_ylw",
        "rhsusf_oakley_goggles_clr",
        "rhsusf_shemagh2_tan",
        "rhsusf_shemagh_tan",
        "rhsusf_shemagh2_od",
        "rhsusf_shemagh_od",
        "rhs_googles_black",
        "rhs_googles_yellow",
        "rhs_googles_clear",
        "rhs_googles_orange",
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
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"bear_opscore_norwegian_m98_cover"};
    vest[] = {"rhsusf_mbav_light"};
    primaryWeapon[] = {"rhs_weap_hk416d145_grip3"};
    scope[] = {"rhsusf_acc_g33_T1"};
    attachment[] = {};
    bipod[] = {"rhsusf_acc_grip3"};
    magazines[] =
    {
        LIST_11("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
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
    vest[] = {"rhsusf_mbav_grenadier"};
    primaryWeapon[] = {"rhs_weap_hk416d145_m320"};
    scope[] = {"rhsusf_acc_compm4"};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_hk416d145_grip3"};
    scope[] = {"rhsusf_acc_compm4"};
};
class m : car
{
    displayName = "Medic";
    traits[] = {"medic"};
    vest[] = {"rhsusf_mbav_medic"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_2("ACE_Splint"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
    scope[] = {"rhsusf_acc_T1_low"};
    magazines[] =
    {
        LIST_6("rhsusf_mag_40Rnd_46x30_FMJ"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    headgear[] = {"bear_opscore_norwegian_m98_cover_pelt","bear_opscore_norwegian_m98_cover_pelt_nsw"};
    vest[] = {"rhsusf_mbav_rifleman"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red")
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
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    scope[] = {"rhsusf_acc_ACOG3","rhsusf_acc_g33_T1"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
    };
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("rhs_mag_m715_Green"),
        LIST_3("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green"),
        LIST_2("SmokeShellPurple"),
        LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    vest[] = {"rhsusf_mbav_rifleman"};
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
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"bear_weap_m249_pip_S_para_fde"};
    scope[] = {"rhsusf_acc_ELCAN"};
        attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    bipod[] = {};
    vest[] = {"rhsusf_mbav_mg"};
    magazines[] =
    {
        LIST_3("rhsusf_200rnd_556x45_M855_mixed_box"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("rhsusf_200rnd_556x45_M855_mixed_box")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_HK417_20"};
    scope[] = {"rhsusf_acc_M8541"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_10("CUP_20Rnd_762x51_HK417"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    vest[] = {"rhsusf_mbav_mg"};
    primaryWeapon[] = {"rhs_weap_m240G"};
    scope[] = {"rhsusf_acc_ELCAN"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
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
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
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
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_maaws"};
    secondaryAttachments[] = {"rhs_optic_maaws"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc"),
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
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
    backPack[] = {"B_Mortar_01_weapon_F"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
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
    backPack[] = {"B_Mortar_01_weapon_F"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
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
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc"),
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    primaryWeapon[] = {"rhs_weap_XM2010"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
    };
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    primaryWeapon[] = {"rhs_weap_hk416d145_m320"};
    scope[] = {"rhsusf_acc_ACOG3"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White"),
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"bear_opscore_norwegian_m98_cover_pelt","bear_opscore_norwegian_m98_cover_pelt_nsw"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] = {"engineer"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
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
    traits[] = {"engineer"};
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"CUP_V_B_PilotVest"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"rhs_googles_black"};
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
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
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
    traits[] = {"explosiveSpecialist"};
    vest[] = {"rhsusf_mbav_rifleman"};
    magazines[] +=
    {
        LIST_3("ClaymoreDirectionalMine_Remote_Mag")
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
    traits[] = {"explosiveSpecialist"};
    vest[] = {"rhsusf_mbav_rifleman"};
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
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_an_m8hc")
    };
    linkedItems[] += {"B_UavTerminal"};
};
