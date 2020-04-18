// in case of fire, tell Bear
//Compatible with ACE Advanced Medical

tooltip = "Author: Bear\n\nSerbian Army, 63rd Parachute Battalion (RHS: SAF). 5.56x45 mm HK G36KV rifles.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhssaf_uniform_m10_digital"};
    vest[] = {};
    backpack[] = {"rhssaf_kitbag_digital"};
    headgear[] = {};
    goggles[] = {"default"};
    
    hmd[] = { /* "rhsusf_ANPVS_14" */ };
    
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
    linkedItems[] =
    {
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
    headgear[] = 
    {
        "rhssaf_helmet_m97_digital",
        "rhssaf_helmet_m97_digital_black_ess",
        "rhssaf_helmet_m97_digital_black_ess_bare",
        "rhssaf_helmet_m97_veil_digital"
    };
    vest[] = {"rhssaf_vest_md98_rifleman"};
    backpack[] = {"rhssaf_kitbag_digital", "rhssaf_kitbag_md2camo"};
    primaryWeapon[] =
    {
        "rhs_weap_g36kv"
    };
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    scope[] = {"rhsusf_acc_compm4"};
    bipod[] = {"rhsusf_acc_grip3"};
    silencer[] = {};
    magazines[] =
    {
        LIST_8("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        LIST_2("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white")
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
    primaryWeapon[] = {"rhs_weap_g36kv_ag36"};
    magazines[] =
    {
        LIST_6("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        LIST_2("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_M433_HEDP"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    //primaryWeapon[] = {"rhs_weap_m70ab2"};
    magazines[] =
    {
        LIST_6("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        "rhssaf_mag_br_m84",
        "rhssaf_mag_brd_m83_white"
    };
};
class m : car 
{
    displayName = "Medic";
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
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    attachment[] = {};
    scope[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_4("CUP_30Rnd_9x19_MP5"),
        "rhssaf_mag_br_m84",
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhssaf_vest_md98_rifleman"};
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red"),
        LIST_2("rhssaf_mag_brd_m83_green")
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
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("rhssaf_mag_brd_m83_green"),
        LIST_2("SmokeShellYellow"),
        LIST_3("rhs_mag_M441_HE"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_6("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        "rhssaf_mag_br_m84",
        LIST_2("rhssaf_mag_brd_m83_white")
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
        "rhs_pdu4"
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
    primaryWeapon[] = {"rhs_weap_minimi_para_railed"};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {"rhsusf_acc_SFMB556"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhsusf_200rnd_556x45_M855_box"),
        "rhssaf_mag_br_m84",
        "rhssaf_mag_brd_m83_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhsusf_200rnd_556x45_M855_box"),
        LIST_2("rhssaf_30rnd_556x45_EPR_G36")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m80"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m76"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    magazines[] =
    {
        LIST_16("rhsgref_10Rnd_792x57_m76"),
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m84"};
    sidearmWeapon[] = {};
    scope[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_5("rhs_100Rnd_762x54mmR"),
        "rhssaf_mag_br_m84",
        "rhssaf_mag_brd_m83_white"
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
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
    backPack[] = {"RHS_M2_Tripod_Bag"};
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
    backPack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    magazines[] +=
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
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
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Tripod_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    secondaryWeapon[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
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
        "ItemWatch"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"rhssaf_booniehat_digital"};
    backpack[] = {"rhssaf_kitbag_digital"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m82a1"};
    scope[] = {"rhsusf_acc_premier"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_6("rhsusf_mag_10Rnd_STD_50BMG_M33"),
        "rhssaf_mag_br_m84",
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
    linkedItems[] += {"Binocular"};
};
class sp : sn
{
    displayName = "Spotter";
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    scope[] = {"rhsusf_acc_compm4"};
    bipod[] = {"rhsusf_acc_grip3"};
    silencer[] = {};
    primaryWeapon[] = {"rhs_weap_g36kv"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        LIST_2("rhssaf_mag_brd_m83_white")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
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
    uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhsusf_hgu56p_saf", "rhsusf_hgu56p_visor_saf"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhssaf_mag_brd_m83_green")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhsusf_hgu56p_saf", "rhsusf_hgu56p_visor_saf"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhssaf_mag_brd_m83_green")
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
    uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S")
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
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"B_Carryall_oli"};
    items[] +=
    {
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"rhs_sidor"};
    linkedItems[] += {"O_UavTerminal"};
};
