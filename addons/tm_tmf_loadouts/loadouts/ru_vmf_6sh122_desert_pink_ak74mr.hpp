// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear\n\nLike the Russian forces seen in Syria (earlier). 6Sh122 oversuit and Ratnik gear. Upgraded AK-74MRs.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_O_RUS_Ratnik_Desert"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"default"};
    hmd[] = {/*"rhs_1PN138"*/};
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
    
    insignias[] = {"tac1_tm_insignia_russia"};
    faces[] = {"faceset:russian"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
        "CUP_H_RUS_6B47_v2_Desert",
        "CUP_H_RUS_6B47_v2_GogglesClosed_Desert",
        "CUP_H_RUS_6B47_v2_GogglesClosed_Desert",
        /*"CUP_H_RUS_6B47_v2_GogglesDown_Desert",*/
        "CUP_H_RUS_6B47_v2_GogglesUp_Desert"
    };
    vest[] = {"CUP_Vest_RUS_6B45_Sh117_Desert"};
    primaryWeapon[] = {"rhs_weap_ak74mr"};
    silencer[] = {"rhs_acc_uuk"};
    bipod[] = {"rhs_acc_grip_ffg2", "rhs_acc_grip_rk6"};
    attachment[] = {"rhs_acc_2dpzenit_ris"};
    scope[] = {"rhs_acc_1p87"};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N22_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_plum_green"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgn",
        "rhs_mag_rgo",
        "rhs_mag_rdg2_white"
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
class r_ak762 : r
{
    displayName = "Rifleman (AK103)";
    primaryWeapon[] = {"rhs_weap_ak103_npz"};
    silencer[] = {"rhs_acc_dtk3"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm_polymer_89"),
        LIST_2("rhs_30Rnd_762x39mm_polymer_tracer"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgn",
        "rhs_mag_rgo",
        "rhs_mag_rdg2_white"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"CUP_O_RUS_Patrol_bag_Desert", "CUP_O_RUS_Patrol_bag_Desert_Shovel"};
    vest[] = {"CUP_Vest_RUS_6B45_Sh117_VOG_Desert"};
    primaryWeapon[] = {"rhs_weap_ak74mr_gp25"};
    magazines[] +=
    {
        LIST_5("rhs_VOG25"),
        LIST_2("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    backpack[] = {};
};
class m : car 
{
    displayName = "Medic";
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
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_ak105"};
    silencer[] = {"rhs_acc_pgs64"};
    attachment[] = {"rhs_acc_perst1ik"};
    scope[] = {"rhs_acc_1p63"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_545x39_7N22_AK"),
        "rhs_mag_rgn",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red"),
        LIST_2("rhs_mag_nspd")
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("rhs_mag_nspd"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_6("rhs_30Rnd_545x39_7N22_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_plum_green"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgn",
        "rhs_mag_rdg2_white"
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
    primaryWeapon[] = {"CUP_lmg_Pecheneg_top_rail"};
    bipod[] = {};
    silencer[] = {};
    vest[] = {"CUP_Vest_RUS_6B45_Sh117_PKP_Desert"};
    backpack[] = {"CUP_O_RUS_Patrol_bag_Desert", "CUP_O_RUS_Patrol_bag_Desert_Shovel"};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgn",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"CUP_O_RUS_Patrol_bag_Desert", "CUP_O_RUS_Patrol_bag_Desert_Shovel"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (RPG-26)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_AS_VAL_flash"};
    silencer[] = {};
    scope[] = {"cup_optic_pso_1_1_open"};
    bipod[] = {};
    magazines[] =
    {
        LIST_4("rhs_20rnd_9x39mm_SP5"),
        LIST_4("rhs_20rnd_9x39mm_SP6"),
        LIST_2("rhs_mag_9x19_17"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"CUP_O_RUS_Patrol_bag_Desert", "CUP_O_RUS_Patrol_bag_Desert_Shovel"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"CUP_O_RUS_Patrol_bag_Desert", "CUP_O_RUS_Patrol_bag_Desert_Shovel"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_TBG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Kornet_Tripod_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
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
        "rhs_pdu4"
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
class mtrac : r
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
        "rhs_pdu4"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backpack[] = {"rhs_rpg"};
    backpackItems[] =
    {
        "rhs_mag_9k38_rocket"
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"rhs_rpg"};
    backpackItems[] =
    {
        "rhs_mag_9k38_rocket"
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] =
    {
        LIST_6("rhs_5Rnd_338lapua_t5000"),
        "rhs_mag_rgn",
        LIST_3("rhs_18rnd_9x21mm_7BT3")
    };
    backpack[] = {};
};
class sp : g
{
    displayName = "Spotter";
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"rhs_uniform_emr_des_patchless"};
    vest[] = {"rhs_6b23_digi_crewofficer"};
    backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"rhs_uniform_emr_des_patchless"};
    vest[] = {"rhs_6b23_digi"};
    backpack[] = {"CUP_O_RUS_Patrol_bag_Summer"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] =
    {
        LIST_4("rhs_18rnd_9x21mm_7BT3")
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
    uniform[] = {"CUP_U_O_RUS_Ratnik_Pink"};
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
    uniform[] = {"CUP_U_O_RUS_Ratnik_Pink"};
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
    backpack[] = {};
    linkedItems[] += {"O_UavTerminal"};
};
