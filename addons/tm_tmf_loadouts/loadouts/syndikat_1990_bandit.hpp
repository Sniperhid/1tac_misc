// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

//Made by Freddo, using a modfied example loadout

/* Dependencies
    RHSUSAF
    RHSAFRF
    RHSGREF
    RHSSAF
    ACE3
    CUP Units
    NIArms AK Rifles
    US Military Mod
    CUP Weapons
    CUP Units
    MBG M16 Rifles
*/

tooltip = "Author: Freddo\n\nRHS compatible\n\nContains a healthy mix of both american and russian equipment.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_I_C_Soldier_Bandit_4_F",
        "U_I_C_Soldier_Bandit_1_F",
        "U_I_C_Soldier_Bandit_2_F",
        "U_I_C_Soldier_Bandit_5_F",
        "U_I_C_Soldier_Bandit_3_F"
    };
    vest[] = 
    {
        "V_TacChestrig_cbr_F",
        "V_TacChestrig_grn_F",
        "V_TacChestrig_oli_F",
        "V_BandollierB_blk",
        "V_BandollierB_cbr",
        "V_BandollierB_rgr",
        "V_BandollierB_khk",
        "V_BandollierB_oli",
        "V_HarnessO_brn"
    };
    backpack[] = {};
    headgear[] = 
    {
        LIST_12(""),
        "H_Bandanna_gry",
        "H_Bandanna_camo",
        "H_Bandanna_cbr",
        "H_Bandanna_surfer_grn",
        "H_Booniehat_khk",
        "H_Booniehat_oli",
        "H_Cap_grn",
        "H_Cap_oli",
        "H_Hat_Camo",
        "H_Hat_Brown",
        "H_StrawHat_dark",
        "H_Shemag_olive",
        "H_ShemagOpen_khk",
        "CUP_H_NAPA_Fedora"
    };
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
    items[] = {LIST_3("ACE_FieldDressing"),"ACE_Morphine","ACE_Flashlight_KSF1"};
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
    primaryWeapon[] = 
    {
        LIST_2("hlc_rifle_ak47"),
        "rhs_weap_akm",
        "rhs_weap_akms",
        "rhs_weap_akmn"
    };
    attachment[] = {"rhs_acc_2dpzenit"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_5("rhs_30Rnd_762x39mm"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {
        "rhs_weap_akm_gp25",
        "rhs_weap_akmn_gp25"
    };
    vest[] = {"V_HarnessOGL_brn"};
    magazines[] +=
    {
        LIST_3("1Rnd_HE_Grenade_shell"),
        "rhs_VG40TB",
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_2("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"mbg_m16a2"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_5("30Rnd_556x45_Stanag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class m : car 
{
    displayName = "Medic";
    backPack[] = {"rhs_medic_bag"};
    backpackItems[] =
    {
        LIST_15("ACE_FieldDressing"),
        LIST_10("ACE_Morphine"),
        LIST_10("ACE_Epinephrine"),
        LIST_6("ACE_bloodIV_500"),
        LIST_2("rhs_mag_an_m8hc"),
        "rhs_mag_m18_green"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_scorpion"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_6("rhsgref_20rnd_765x17_vz61"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class sht : r
{
    displayName = "Shotgunner";
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_6("rhsusf_5Rnd_00Buck"),
        LIST_2("rhsusf_5Rnd_Slug"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
    items[] += {"ACE_CableTie","ACE_MapTools"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] =
    {
        "V_TacVest_oli",
        "V_TacVest_camo",
        "bear_tactical_vest_oakleaf"
    };
    sidearmWeapon[] = {"CUP_hgun_TaurusTracker455"};
    magazines[] +=
    {
        LIST_3("CUP_6Rnd_45ACP_M")
    };
    linkedItems[] += {"ItemRadio"};
};
class co : sl
{
    displayName = "Platoon Leader";
    uniform[] = {"U_I_G_resistanceLeader_F"};
    headgear[] = {"T1_Beret_Green"};
    vest[] = {"V_I_G_resistanceLeader_F"};
    sidearmWeapon[] = {"CUP_hgun_TaurusTracker455_gold"};
};
class fac : ftl
{
    displayName = "Forward Air Controller";
    backPack[] = {"usm_pack_st138_prc77"};
    Radios[] = {"ACRE_PRC77"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backPack[] = {"usm_pack_762x51_ammobelts"};
    primaryWeapon[] = {"rhs_weap_m249_pip_S_vfg"};
    bipod[] = {"rhsusf_acc_grip4"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_3("200Rnd_556x45_Box_F"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"usm_pack_200rnd_556_bandoliers"};
    backpackItems[] =
    {
        LIST_4("200Rnd_556x45_Box_F")
    };
    linkedItems[] += {"Binocular"};
};
class arpk : ar
{
    displayName = "Automatic Rifleman (RPK)";
    primaryWeapon[] = {"hlc_rifle_rpk"};
    backPack[] = 
    {
        "B_LegStrapBag_olive_F",
        "B_LegStrapBag_coyote_F"
    };
    magazines[] =
    {
        LIST_4("hlc_75Rnd_762x39_m_rpk"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };    
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backPack[] = 
    {
        "B_LegStrapBag_olive_F",
        "B_LegStrapBag_coyote_F"
    };
    backpackItems[] = {LIST_2("rhsgref_mag_rkg3em")};
    secondaryWeapon[] = 
    {
        "rhs_weap_m72a7",
        "rhs_weap_rpg26"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svds"};
    scope[] = {"rhs_acc_pso1m21"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_9x18_8_57N181S"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkm"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"CUP_B_AlicePack_Bedroll"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : ftl
{
    displayName = "MMG Assistant Gunner";
    backPack[] = {"CUP_B_AlicePack_Bedroll"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : ftl
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodLow_Bag"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_4("rhs_30Rnd_762x39mm"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backPack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    magazines[] +=
    {
        LIST_2("rhs_rpg7_OG7V_mag"),
        LIST_2("rhs_rpg7_PG7V_mag"),
        "rhs_rpg7_PG7VL_mag"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] +=
    {
        LIST_2("rhs_rpg7_OG7V_mag"),
        "rhs_rpg7_PG7V_mag",
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_PG7VR_mag"
    };
};
class matag : ftl
{
    displayName = "MAT Assistant Gunner";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] +=
    {
        "rhs_rpg7_OG7V_mag",
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_PG7VR_mag",
        "rhs_rpg7_TBG7V_mag"
    };
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_4("rhs_30Rnd_762x39mm"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"bear_ussr_metis1_gun_bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"bear_ussr_metis1_gun_bag"};
};
class hatag : ftl
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"bear_ussr_metis1_tripod_bag"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_4("rhs_30Rnd_762x39mm"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
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
class mtrag : ftl
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_HMG_01_support_F"};
    items[] += {"ACE_RangeTable_82mm"};
    magazines[] =
    {
        "ACE_HandFlare_White",
        LIST_4("rhs_30Rnd_762x39mm"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_9k32Strela"};
    //As of the making of this loadout, the Strela counted as a single-use launcher.
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_I_C_Soldier_Para_4_F"};
    headgear[] = {"H_Booniehat_khk_hs"};
    vest[] = {"V_BandollierB_oli"};
    backPack[] = {"B_LegStrapBag_olive_F"};
    primaryWeapon[] = {"rhs_weap_m24sws_ghillie"};
    scope[] = {"optic_lrps_tna_f"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    sidearmWeapon[] = {"rhs_weap_pb_6p9"};
    items[] += 
    {
        "ACE_RangeCard",
        "ACE_Kestrel4500"
    };
    magazines[] =
    {
        LIST_7("rhsusf_5Rnd_762x51_m993_Mag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class snam : sn
{
    displayName = "Sniper (Anti-Materiel)";
    primaryWeapon[] = {"CUP_srifle_ksvk"};
    scope[] = {"rhs_acc_pso1m2"};
    items[] += 
    {
        "ACE_RangeCard",
        "ACE_Kestrel4500"
    };
    magazines[] =
    {
        LIST_4("CUP_5Rnd_127x108_KSVK_M"),
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class sp : car
{
    displayName = "Spotter";
    uniform[] = {"U_I_C_Soldier_Para_5_F"};
    headgear[] = {"H_Booniehat_khk_hs"};
    vest[] = {"V_BandollierB_oli"};
    backPack[] = {"CUP_B_AlicePack_Bedroll"};
    backpackItems[] =
    {
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"V_Rangemaster_belt"};
    magazines[] = {LIST_3("rhsgref_20rnd_765x17_vz61")};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : sht
{
    displayName = "Vehicle Driver";
    vest[] = {"V_Rangemaster_belt"};
    backpack[] = {"B_Messenger_Olive_F"};
    headgear[] = {"H_Cap_headphones"};
    magazines[] = {
        LIST_5("rhsusf_5Rnd_00Buck")
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_Rangemaster_belt"};
    headgear[] = {"H_Cap_headphones"};
    magazines[] = {
        LIST_5("rhsgref_20rnd_765x17_vz61")
    };
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};
    backPack[] = {"usm_pack_st138_prc77"};
    vest[] = {"V_Rangemaster_belt"};
    headgear[] = {"H_Cap_headphones"};
    radios[] = {"ACRE_PRC77"};
    magazines[] = {
        LIST_3("rhsgref_20rnd_765x17_vz61")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};
    vest[] = {"V_Rangemaster_belt"};
    backpack[] = {"B_Messenger_Olive_F"};
    headgear[] = {"H_Cap_headphones"};
    magazines[] = {
        LIST_5("rhsgref_20rnd_765x17_vz61")
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    vest[] = {"V_Rangemaster_belt"};
    headgear[] = {"H_Cap_headphones"};
    magazines[] = {
        LIST_5("rhsgref_20rnd_765x17_vz61")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : sht
{
    displayName = "Combat Engineer (Explosives)";
    backPack[] = {"CUP_B_AlicePack_Bedroll"};
    items[] +=
    {
        "ACE_DefusalKit",
        "ACE_M26_Clacker"
    };
    backpackItems[] = {
        LIST_3("DemoCharge_Remote_Mag"),
        "SatchelCharge_Remote_Mag",
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class engm : sht
{
    displayName = "Combat Engineer (IEDs)";
    headgear[] = {"CUP_H_TKI_Lungee_Open_06"};
    backPack[] = {"CUP_B_AlicePack_Bedroll"};
    items[] +=
    {
        "ACE_DefusalKit",
        "ACE_Cellphone"
    };
    backpackItems[] = {
        "CUP_IED_V1_M",
        "CUP_IED_V2_M",
        "CUP_IED_V3_M"
    };
};
class UAV : car
{
    displayName = "Quadrocopter Hobbyist";
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};
