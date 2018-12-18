// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Freddo\n\nContains a mix of Soviet and German(including leftovers from WW2) weaponry, alongside some american equipment.";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_altis_lizard","rhsgref_uniform_altis_lizard_olive"};
    vest[] = {"rhsgref_alice_webbing"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
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
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Flashlight_MX991",
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
    backpackItems[] = {"ACE_EntrenchingTool"};
    primaryWeapon[] = {"hlc_rifle_hk33a2"};
    magazines[] =
    {
        LIST_6("hlc_30rnd_556x45_b_HK33"),
        LIST_2("hlc_30rnd_556x45_t_HK33"),
        LIST_2("rhs_mag_f1"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_m79"};
    secondaryWeapon[] = {"rhs_weap_tt33"};
    magazines[] =
    {
        LIST_4("rhs_mag_762x25_8"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_4("rhs_mag_m576"),
        LIST_4("rhs_mag_m714_White"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_M585_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_hk33ka3"};
    magazines[] =
    {
        LIST_6("hlc_30rnd_556x45_b_HK33"),
        LIST_2("hlc_30rnd_556x45_t_HK33"),
        LIST_1("rhs_mag_f1"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class m : car 
{
    displayName = "Medic";
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    backpackItems[] = 
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_5("ACE_bodyBag")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_rifle_hk53"};
};
class ftl : r
{
    displayName = "Fireteam Leader";
    items[] += {"ACE_MapTools"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backpack[] = {"usm_pack_st138_prc77"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] +=
    {
        LIST_2("rhs_mag_762x25_8"),
        "rhs_mag_nspn_red"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"usm_bdu_cap_odg"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Machinegunner";
    primaryWeapon[] = {"rhs_weap_mg42"};
    magazines[] =
    {
        LIST_8("rhsgref_50Rnd_792x57_SmK_drum"),
        "rhs_mag_f1",
        "rhs_mag_an_m8hc",
        LIST_4("16Rnd_9x21_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Machinegunner";
    backpackItems[] +=
    {
        LIST_8("rhsgref_50Rnd_792x57_SmK_drum")
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_panzerfaust60"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"hlc_rifle_g3sg1"};
    scope[] = {"hlc_optic_stanagzf_g3"};
    magazines[] =
    {
        LIST_8("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_f1",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    backpack[] = {"usm_pack_762x51_ammobelts"};
    primaryWeapon[] = {"tac1_tm_rhsgref_mg3"};
    magazines[] =
    {
        LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80"),
        "rhs_mag_f1",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] +=
    {
        LIST_3("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backpackItems[] = {};
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpackItems[] = {};
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backpackItems[] = {};
    backPack[] = {"RHS_DShkM_TripodLow_Bag"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
    backpackItems[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpackItems[] = {};
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] = {};
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_SPG9_Tripod_Bag"};
    backpackItems[] = {};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    secondaryWeapon[] = {"potato_vz99_carryWeapon"};
    backpackItems[] += 
    {
        LIST_6("potato_vz99_HE"),
        LIST_2("potato_vz99_smokeWhite"),
        "potato_vz99_flare"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backpackItems[] += 
    {
        LIST_6("potato_vz99_HE"),
        LIST_2("potato_vz99_smokeWhite"),
        "potato_vz99_flare"
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backpackItems[] += 
    {
        LIST_6("potato_vz99_HE"),
        LIST_2("potato_vz99_smokeWhite"),
        "potato_vz99_flare"
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
    items[] += {"ACE_MapTools"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_9K32Strela"};
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_I_FullGhillie_sard"};
    vest[] = {"rhsgref_chestrig"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {};
    primaryWeapon[] = {"rhs_weap_m76"};
    scope[] = {"rhs_acc_pso1m2"};
    silencer[] = {"rhs_acc_pbs1"};
    magazines[] =
    {
        LIST_7("rhsgref_10Rnd_792x57_m76"),
        LIST_2("rhs_mag_f1")
    };
};
class sp : ftl
{
    displayName = "Spotter";
    backpack[] = {"usm_pack_st138_prc77"};
    uniform[] = {"U_I_FullGhillie_sard"};
    vest[] = {"rhsgref_chestrig"};
    headgear[] = {};
    primaryWeapon[] = {"rhs_weap_m3a1_specops"};
    magazines[] = 
    {
        LIST_6("rhsgref_30rnd_1143x23_M1911B_2mag_SMG"),
        LIST_2("rhs_mag_f1")
    };
};
class vg : smg
{
    displayName = "Vehicle Crew";
    uniform[] = {"U_Tank_green_F"};
    vest[] = {"V_BandollierB_rgr"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"H_HelmetCrew_I"};
    magazines[] =
    {
        LIST_4("hlc_30rnd_556x45_b_HK33"),
        "rhs_mag_nspn_red"
    };
};
class vc : vg
{
    displayName = "Vehicle Commander";
    backpack[] = {"usm_pack_st138_prc77"};
    items[] += {"ACE_MapTools"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class vd : vg
{
    displayName = "Vehicle Driver";
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"bear_uniform_m93_olive"};
    vest[] = {"V_BandollierB_rgr"};
    backpack[] = {};
    headgear[] = {"CUP_H_RUS_ZSH_1_Goggles"};
    backpackItems[] = {};
    magazines[] =
    {
        LIST_4("hlc_30rnd_556x45_b_HK33"),
        "rhs_mag_nspn_red"
    };
};
class pp : pc
{
    displayName = "Helicopter Pilot";
    backpack[] = {"usm_pack_st138_prc77"};
    items[] += {"ACE_MapTools"};
};
class pcc : pc
{

    displayName = "Helicopter Crew Chief";
    backpack[] = {"B_LegStrapBag_olive_F"};
    backpackItems[] = {"ToolKit"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives/Repair)";
    sidearmWeapon[] = {"ACE_VMM3"};
    backpackItems[] += {
        "ACE_DefusalKit",
        "ToolKit",
        "SatchelCharge_Remote_Mag",
        "ACE_M26_Clacker",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    sidearmWeapon[] = {"ACE_VMM3"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "ACE_DefusalKit",
        "MineDetector",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
    backpackItems[] = {};
    linkedItems[] += {"I_UavTerminal"};
};
