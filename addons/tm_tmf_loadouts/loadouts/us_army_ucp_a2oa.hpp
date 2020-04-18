/* assignGear specific macros */ 
//Compatible with ACE Advanced Medical

tooltip = "Author: Bear\n\nRHS compatible\n\nAttempts to mimic the US Army faction of Arma 2: Operation Arrowhead (set in 2012).";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_acu_ucp"};
    vest[] = {};
    backpack[] = {"B_Kitbag_cbr"};
    headgear[] = {};
    goggles[] = {"default"};
    hmd[] = {"rhsusf_ANPVS_14"};
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
    
    insignias[] = {"usm_1starmdiv_od"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = 
    {
        "rhsusf_mich_bare_tan_headset",
        "rhsusf_mich_bare_alt_tan",
        "rhsusf_mich_bare_tan",
        "rhsusf_mich_bare_norotos_tan",
        "rhsusf_mich_bare_norotos_alt_tan",
        "rhsusf_mich_bare_norotos_alt_tan_headset",
        "rhsusf_mich_bare_norotos_tan_headset",
        "rhsusf_mich_bare_norotos_arc_alt_tan",
        "rhsusf_mich_bare_norotos_arc_alt_tan_headset",
        "rhsusf_mich_bare_norotos_alt_semi",
        "rhsusf_mich_bare_norotos_arc_alt_semi_headset",
        "rhsusf_mich_bare_norotos_arc_alt_semi"
    };
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
    primaryWeapon[] = {"tac1_tm_rhs_mk17_556mm_cqc"};
    scope[] = {"rhsusf_acc_compm4"};
    attachment[] = {"rhsusf_acc_anpeq15_wmx"};
    bipod[] = {"rhsusf_acc_grip3"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_Mk318_SCAR"),
        LIST_4("rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull"),
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
    vest[] = {"rhsusf_iotv_ucp_Grenadier"};
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] +=
    {
        LIST_6("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_4("rhs_mag_30Rnd_556x45_Mk318_SCAR"),
        LIST_4("rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
    vest[] = {"rhsusf_iotv_ucp_Medic"};
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
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("CUP_30Rnd_9x19_MP5"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
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
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_purple"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
        LIST_7("rhs_mag_30Rnd_556x45_Mk318_SCAR"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
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
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m249_pip_L"};
    bipod[] = {"rhsusf_acc_kac_grip_saw_bipod"};
    vest[] = {"rhsusf_iotv_ucp_SAW"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_4("rhsusf_200Rnd_556x45_M855_soft_pouch_ucp"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_4("rhsusf_200Rnd_556x45_M855_soft_pouch_ucp")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M136)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_mk17_LB"};
    scope[] = {"rhsusf_acc_M8541"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_6("rhs_mag_20Rnd_SCAR_762x51_m80_ball"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240G"};
    scope[] = {"rhsusf_acc_ELCAN","rhsusf_acc_ELCAN_ard"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51_m80a1epr"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    vest[] = {"rhsusf_iotv_ucp_SAW"};
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
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
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
    secondaryWeapon[] = {"rhs_weap_maaws"};
    secondaryAttachments[] = {"rhs_optic_maaws"};
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
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
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
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
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
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
    backPack[] = {"B_Mortar_01_support_F"};
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
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m24sws_d"};
    silencer[] = {"rhsusf_acc_m24_muzzlehider_d"};
    scope[] = {"rhsusf_acc_leupoldmk4_d"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_762x51_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
};
class sp : r
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
    linkedItems[] += {"ACE_Vector","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_Mk318_SCAR"),
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
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
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    linkedItems[] += {"B_UavTerminal"};
};