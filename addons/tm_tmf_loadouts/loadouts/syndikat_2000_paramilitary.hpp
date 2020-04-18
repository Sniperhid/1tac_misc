
tooltip = "Author: Freddo\n\nUses LoW and APEX DLC\n\nBalanced against HIDF 2000s loadout";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_I_C_Soldier_Para_2_F",
        "U_I_C_Soldier_Para_3_F",
        "U_I_C_Soldier_Para_5_F",
        "U_I_C_Soldier_Para_4_F",
        "U_I_C_Soldier_Para_1_F"
    };
    vest[] = 
    {
        "V_TacChestrig_cbr_F",
        "V_TacChestrig_grn_F",
        "V_TacChestrig_oli_F",
        "V_HarnessO_brn"
    };
    backpack[] = {};
    headgear[] = 
    {
        LIST_12(""),
        "H_Bandanna_camo",
        "H_Bandanna_blu",
        "H_Bandanna_cbr",
        "H_Bandanna_gry",
        "H_Cap_blk",
        "H_Cap_oli",
        "H_Hat_camo",
        "H_Booniehat_khk"
    };
    goggles[] = {"default"};
    hmd[] = {};
    faces[] = {"faceset:african", "faceset:tanoan"};

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
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Banana",
        "ACE_Flashlight_KSF1",
        LIST_2("Chemlight_red")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
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
        LIST_2("rhs_weap_ak74"),
        "rhs_weap_ak74_3",
        "rhs_weap_ak74_2",
        "rhs_weap_aks74",
        "rhs_weap_aks74_2"
    };
    attachment[] = {"rhs_acc_2dpzenit"};
    silencer[] = {"rhs_acc_dtk"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_545x39_AK"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"V_HarnessOGL_brn"};
    primaryWeapon[] = 
    {
        "rhs_weap_aks74_gp25",
        "rhs_weap_ak74_gp25"
    };
    magazines[] +=
    {
        LIST_4("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_2("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
};
class m : car 
{
    displayName = "Medic";
    traits[] = {"medic"};
    backpack[] = {"rhs_medic_bag"};
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
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_savz61"};
    magazines[] =
    {
        LIST_8("rhsgref_20rnd_765x17_vz61"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class sht : r
{
    displayName = "Shotgunner";
    primaryWeapon[] = {"CUP_sgun_Saiga12K"};
    scope[] = {"cup_optic_kobra"};
    magazines[] =
    {
        LIST_4("CUP_8Rnd_B_Saiga12_74Pellets_M"),
        LIST_4("CUP_8Rnd_B_Saiga12_74Slug_M"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    scope[] = {"rhs_acc_pso1m21_ak"};
    primaryWeapon[] = 
    {
        "rhs_weap_ak74n",
        "rhs_weap_ak74n_2"
    };
    items[] += {"ACE_MapTools"};
    magazines[] += {LIST_2("rhs_30Rnd_545x39_AK_green")};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    primaryWeapon[] = {"rhs_weap_aks74un"};
    silencer[] = {"rhs_acc_pgs64_74un"};
    headgear[] = {"CUP_H_SLA_BeretRed"};
    goggles[] = {"G_Aviator"};
    uniform[] = {"U_I_C_Soldier_Camo_F"};
    vest[] = {"V_BandollierB_oli"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_545x39_AK"),
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] += {"rhs_pdu4"};
};
class fac : car
{
    displayName = "Forward Air Controller";
    headgear[] = {"CUP_H_FR_Headband_Headset"};
    linkedItems[] += {"rhs_pdu4"};
    backpack[] = {"usm_pack_alice_prc119"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"B_LegStrapBag_olive_F"};
    primaryWeapon[] = {"CUP_arifle_RPK74"};
    scope[] = {"rhs_acc_1p29"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_2("rhs_mag_9x18_8_57N181S"),
        LIST_5("rhs_75Rnd_762x39mm"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Messenger_Olive_F"};
    backpackItems[] =
    {
        LIST_4("rhs_75Rnd_762x39mm")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class rhe : car
{
    displayName = "Rifleman (RSHG-2)";
    secondaryWeapon[] = {"rhs_weap_rshg2"};
}
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svds"};
    scope[] = {"rhs_acc_pso1m21"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    backpack[] = {"bear_rd54_green","bear_rd54_sand"};
    primaryWeapon[] = {"rhs_weap_pkp"};
    magazines[] =
    {
        LIST_2("rhs_mag_9x18_8_57N181S"),
        LIST_6("rhs_100Rnd_762x54mmR"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"bear_rd54_green","bear_rd54_sand"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : ftl
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"bear_rd54_green","bear_rd54_sand"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backpack[] = {"RHS_NSV_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpack[] = {"RHS_NSV_Gun_Bag"};
};
class hmgag : ftl
{
    displayName = "HMG Assistant Gunner";
    backpack[] = {"RHS_NSV_Tripod_Bag"};
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_TBG7V_mag"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_3("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_TBG7V_mag"
    };
};
class matag : ftl
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_3("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_TBG7V_mag"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_3("rhs_rpg7_PG7VR_mag")
    };
};
class hatac : matac
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag"),
        "rhs_rpg7_TBG7V_mag"
    };
};
class hatag : matag
{
    displayName = "HAT Assistant Gunner";
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag"),
        "rhs_rpg7_TBG7V_mag"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    secondaryWeapon[] = {"potato_vz99_carryWeapon"};
    backpack[] = {"bear_rd54_green"};
    backpackItems[] =
    {
        LIST_6("potato_vz99_HE"),
        "potato_vz99_smokeWhite",
        "potato_vz99_flare"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backpack[] = {"bear_rd54_green"};
    backpackItems[] =
    {
        LIST_6("potato_vz99_HE"),
        "potato_vz99_smokeWhite",
        "potato_vz99_flare"
    };
};
class mtrag : ftl
{
    displayName = "Mortar Assistant Gunner";
    backpack[] = {"bear_rd54_green"};
    backpackItems[] =
    {
        LIST_6("potato_vz99_HE"),
        "potato_vz99_smokeWhite",
        "potato_vz99_flare"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"rhs_assault_umbts"};
    secondaryWeapon[] = {"rhs_weap_igla"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    backpack[] = {"rhs_assault_umbts"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"U_I_C_Soldier_Para_2_F"};
    vest[] = {"V_TacChestrig_oli_F"};
    headgear[] = {"CUP_H_FR_Headband_Headset"};
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_ksvk"};
    scope[] = {"cup_optic_pso_3"};
    sidearmWeapon[] = {"rhs_weap_pb_6p9"};
    sidearmAttachments[] = {"rhs_acc_6p9_suppressor"};
    magazines[] =
    {
        LIST_3("rhs_mag_9x18_8_57N181S"),
        LIST_6("CUP_5Rnd_127x108_KSVK_M"),
        LIST_2("rhs_mag_rgo")
    };
};
class sp : ftl
{
    displayName = "Spotter";
    silencer[] = {"rhs_acc_dtk4short"};
    uniform[] = {"U_I_C_Soldier_Para_2_F"};
    vest[] = {"V_TacChestrig_oli_F"};
    headgear[] = {"H_Booniehat_khk_hs"};
    items[] += {"ACE_SpottingScope"};
    goggles[] = {"default"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"V_I_G_resistanceLeader_F","V_TacVest_oli","V_TacVest_camo","V_TacVest_brn"};
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular"};
};
class vd : sht
{
    displayName = "Vehicle Driver";
    traits[] = {"engineer"};
    vest[] = {"V_I_G_resistanceLeader_F","V_TacVest_oli","V_TacVest_camo","V_TacVest_brn"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"H_Cap_headphones"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_I_G_resistanceLeader_F","V_TacVest_oli","V_TacVest_camo","V_TacVest_brn"};
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"V_I_G_resistanceLeader_F","V_TacVest_oli","V_TacVest_camo","V_TacVest_brn"};
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
    goggles[] = {"default"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] = {"engineer"};
    vest[] = {"V_I_G_resistanceLeader_F","V_TacVest_oli","V_TacVest_camo","V_TacVest_brn"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"H_Cap_headphones"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    vest[] = {"V_I_G_resistanceLeader_F","V_TacVest_oli","V_TacVest_camo","V_TacVest_brn"};
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
    goggles[] = {"default"};
};
class eng : sht
{
    displayName = "Combat Engineer (Explosives)";
    traits[] = {"engineer","explosiveSpecialist"};
    headgear[] = {"CUP_H_TKI_Lungee_Open_01"};
    sidearmWeapon[] = {"ACE_VMM3"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    backpackItems[] = {
        "ACE_DefusalKit",
        "ACE_M26_Clacker",
        "ACE_wirecutter",
        LIST_4("DemoCharge_Remote_Mag"),
        "SatchelCharge_Remote_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};
