tooltip = "Author: Chris";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_g3_mc"};
    vest[] = {"rhsusf_iotv_ocp_Rifleman"};
    backpack[] = {};
    headgear[] = {"UK3CB_BAF_H_Mk7_Scrim_B","UK3CB_BAF_H_Mk7_Scrim_ESS_B"};
    goggles[] = {};
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
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
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
    primaryWeapon[] = {"rhs_weap_hk416d145_grip3"};
    scope[] = {"rhsusf_acc_ELCAN"};
    attachment[] = {"rhsusf_acc_anpeq16a"};
    bipod[] = {"rhsusf_acc_rvg_blk"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_hk416d145_m320"};
    vest[] = {"rhsusf_iotv_ocp_Grenadier"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_3("rhs_mag_M433_HEDP"),
        LIST_3("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_hk416d10"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"rhsusf_iotv_ocp_Medic"};
    backpack[] = {"B_Kitbag_mcamo"};
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
        LIST_6("ACE_splint"),
        LIST_1("ACE_surgicalKit")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    magazines[] =
    {
        LIST_6("CUP_30Rnd_9x19_MP5"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhsusf_iotv_ocp_Teamleader"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"rhsusf_iotv_ocp_Squadleader"};
    sidearmWeapon[] = {"CUP_hgun_Duty"};
    magazines[] +=
    {
        LIST_2("16Rnd_9x21_Mag")
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
    vest[] = {"rhsusf_iotv_ocp_SAW"};
    primaryWeapon[] = {"CUP_lmg_M60E4"};
    backpack[] = {"B_Kitbag_mcamo"};
    sidearmWeapon[] = {"CUP_hgun_Duty"};
    magazines[] =
    {
        LIST_2("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("16Rnd_9x21_Mag")
    };
    backpackItems[] =
    {
        LIST_2("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_2("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
    magazines[] +=
    {
        "rhs_m136_mag"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_HK417_20"};
    scope[] = {"optic_DMS"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_HK417"),
        LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    vest[] = {"rhsusf_iotv_ocp_SAW"};
    primaryWeapon[] = {"CUP_lmg_MG3_rail"};
    magazines[] =
    {
        LIST_2("CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("16Rnd_9x21_Mag")
    };
    backpackItems[] =
    {
        LIST_2("CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_3("CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_Kitbag_mcamo"};
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
        LIST_3("CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
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
    secondaryWeapon[] = {"rhs_weap_maaws"};
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        LIST_2("rhs_mag_maaws_HEDP")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        LIST_2("rhs_mag_maaws_HEDP")
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
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        LIST_2("rhs_mag_maaws_HEDP")
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
    backpack[] = {"B_Kitbag_mcamo"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    backpack[] = {"B_Kitbag_mcamo"};
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
    primaryWeapon[] = {"UK3CB_BAF_L115A3_Ghillie"};
    scope[] = {"RKSL_optic_PMII_525"};
    sidearmWeapon[] = {"CUP_hgun_Duty"};
    magazines[] =
    {
        LIST_7("UK3CB_BAF_338_5Rnd"),
        LIST_2("CUP_hgun_Duty")
    };
};
class sp : g
{
    displayName = "Spotter";
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
    vest[] = {"rhsusf_iotv_ocp_Repair"};
    backpack[] = {"B_Kitbag_mcamo"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_ESS_A"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_iotv_ocp_Repair"};
    backpack[] = {"B_Kitbag_mcamo"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_ESS_A"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhsusf_iotv_ocp_Repair"};
    backpack[] = {"B_Kitbag_mcamo"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_ESS_A"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {"B_Kitbag_mcamo"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {"B_Kitbag_mcamo"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {"B_Kitbag_mcamo"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    linkedItems[] += {"ItemGPS"};
};
class jp : pp {};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Kitbag_mcamo"};
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
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"B_Kitbag_mcamo"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
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
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};
