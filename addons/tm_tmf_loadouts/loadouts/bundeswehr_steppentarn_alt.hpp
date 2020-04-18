// Something wrong? blameSnippers
tooltip = "Author: Toiton & Snippers\n\nGerman Army 2016";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_B_GER_Tropentarn_1","CUP_U_B_GER_Tropentarn_2"};
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_2"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_TAN"};
    headgear[] = {"CUP_H_Ger_Boonie_desert"};
    goggles[] = {""};
    hmd[] = {};
    faces[] = {"faceset:caucasian"};

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
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_2"};
    primaryWeapon[] = {"CUP_arifle_G36A_camo"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_556x45_G36_camo"),
        LIST_2("CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_2"};
    primaryWeapon[] = {"CUP_arifle_AG36_camo"};
    magazines[] +=
    {
        LIST_8("CUP_1Rnd_HEDP_M203"),
        LIST_2("CUP_1Rnd_Smoke_M203"),
        LIST_2("CUP_1Rnd_SmokeRed_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_G36K_camo"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_556x45_G36_camo"),
        LIST_2("CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo"),
        "HandGrenade",
        "SmokeShell"
    };
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_2"};
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    backpackItems[] = {
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
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
    magazines[] =
    {
        LIST_6("rhsusf_mag_40Rnd_46x30_FMJ"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeGreen_M203")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_3"};
    sidearmWeapon[] = {"CUP_hgun_Duty"};
    items[] += {"ACE_Maptools"};
    magazines[] +=
    {
        LIST_2("16Rnd_9x21_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : sl
{
    displayName = "Forward Air Controller";
    items[] += 
    {
        "ACE_Kestrel4500",
        "ACE_microDAGR"
    };
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "Rangefinder"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_3"};
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    primaryWeapon[] = {"CUP_lmg_minimi_railed"};
    sidearmWeapon[] = {"CUP_hgun_Duty"};
    magazines[] =
    {
        LIST_5("CUP_100Rnd_TE4_Green_Tracer_556x45_M249"),
        LIST_2("16Rnd_9x21_Mag"),
        "HandGrenade",
        "SmokeShell"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    backpackItems[] =
    {
        LIST_3("CUP_100Rnd_TE4_Green_Tracer_556x45_M249")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_HK417_20"};
    scope[] = {"rhsusf_acc_su230a_mrds"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_HK417"),
        LIST_3("CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_MG3"};
    magazines[] =
    {
        LIST_5("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"),
        LIST_2("16Rnd_9x21_Mag")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    backpackItems[] =
    {
        LIST_3("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_3("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : car
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
        "ItemWatch",
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
    magazines[] +=
    {
        LIST_2("MRAWS_HEAT_F"),
        "MRAWS_HE_F"
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        "MRAWS_HE_F"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        "MRAWS_HE_F"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"rhs_TOW_Tripod_Bag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"rhs_Tow_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_support_F"};
    magazines[] =
    {
        LIST_7("CUP_30Rnd_556x45_G36_camo"),
        LIST_2("CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo"),
        "HandGrenade",
        "SmokeShell"
    };
    items[] += 
    {
        "ACE_RangeTable_82mm",
        "ACE_DAGR",
        "ACE_MapTools"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
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
        LIST_2("rhs_fim92_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
    primaryWeapon[] = {"UK3CB_BAF_L115A3"};
    scope[] = {"rksl_optic_pmii_312"};
    magazines[] =
    {
        LIST_10("UK3CB_BAF_338_5Rnd"),
        LIST_2("UK3CB_BAF_338_5Rnd_Tracer"),
        "SmokeShell"
    };
    backpack[] = {};
    linkedItems[] += {"Rangefinder"};
};
class sp : sn
{
    displayName = "Spotter";
    primaryWeapon[] = {"CUP_arifle_HK416_Black"};
    scope[] = {"rhsusf_acc_su230_mrds"};
    attachment[] = {"rhsusf_acc_anpeq15a"};
    items[] += 
    {
        "ACE_DAGR",
        "ACE_Kestrel4500",
        "ACE_MapTools"
    };
    magazines[] =
    {
        LIST_8("CUP_30Rnd_556x45_PMAG_QP"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"rhsgref_uniform_flecktarn"};
    vest[] = {"CUP_V_I_RACS_Carrier_Vest_3"};
    linkedItems[] += {"Binocular"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_I_pilotCoveralls"};
    headgear[] = {"tm_hgu56p_visor_1tac_black"};
    vest[] = {};
    goggles[] = {};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_I_pilotCoveralls"};
    headgear[] = {"tm_hgu56p_visor_mask_1tac_black"};
    goggles[] = {};
    sidearmWeapon[] = {"CUP_hgun_Duty"};
    magazines[] =
    {
        LIST_3("16Rnd_9x21_Mag")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    backpackItems[] = 
    {
        LIST_3("DemoCharge_Remote_Mag"),
        "MineDetector",
        "ToolKit",
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"UK3CB_BAF_B_Carryall_TAN"};
    items[] +=
    {
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_3("ATMine_Range_Mag"),
        LIST_3("APERSBoundingMine_Range_Mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] = 
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "I_UavTerminal",
        "Rangefinder"
    };
};
