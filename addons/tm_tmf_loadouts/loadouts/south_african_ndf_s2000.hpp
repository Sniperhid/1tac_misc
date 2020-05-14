tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep2_south_africa"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "bear_m97_c_soldier2000",
        "bear_m97_c_soldier2000",
        "bear_m97_c_soldier2000",
        "bear_m97_c_soldier2000",
        "bear_m97_c_soldier2000",
        "bear_m97_c_soldier2000",
        "bear_m97_c_black_ess_soldier2000",
        "bear_m97_c_black_ess_bare_soldier2000"
    };
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
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
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

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    
    faces[] = {"faceset:african", "faceset:tanoan"};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"bear_m23_pioneer2_plate_brown"};
    backpack[] = {"B_Battle_Belt_F"};
    primaryWeapon[] = {"CUP_arifle_Galil_SAR_black"};
    scope[] = {};
    attachment[] = {};
    magazines[] = {
        LIST_7("CUP_35Rnd_556x45_Galil_Mag"),
        LIST_2("CUP_35Rnd_556x45_Green_Tracer_Galil_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"B_TacticalPack_oli"};
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] += {
        LIST_5("rhs_mag_M441_HE"),
        LIST_5("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] = {
        LIST_7("CUP_35Rnd_556x45_Galil_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class m : car
{
    displayName = "Medic";
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
        LIST_6("ACE_Splint"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    magazines[] = {
        LIST_6("CUP_30Rnd_9x19_MP5"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    backPack[] = {"usm_pack_st138_prc77"};
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m240G"};
    backpack[] = {"B_TacticalPack_oli"};
    bipod[] = {};
    magazines[] = {
        LIST_5("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] = {
        LIST_4("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backpack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpackItems[] = {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_l1a1"};
    scope[] = {"rhsgref_acc_l1a1_l2a2"};
    silencer[] = {"rhsgref_acc_falmuzzle_l1a1"};
    magazines[] = {
        LIST_10("rhs_mag_20Rnd_762x51_m80_fnfal"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    backpack[] = {"B_TacticalPack_oli"};
    magazines[] = {
        LIST_6("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] = {
        LIST_5("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_TacticalPack_oli"};
    linkedItems[] += {
        "Binocular"
    };
    backpackItems[] = {
        LIST_5("rhsusf_100Rnd_762x51")
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
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpackItems[] += {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] += {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] += {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_OG7V_mag"
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
        "ItemWatch",
        "Rangefinder",
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
        "ItemWatch",
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
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
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
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"usm_helmet_cvc"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"usm_helmet_cvc"};
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
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
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
