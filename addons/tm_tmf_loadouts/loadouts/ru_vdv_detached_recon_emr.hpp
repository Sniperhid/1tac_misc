// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear\n\n45th Guards Detached Spetsnaz\n\nHigh variation in loadouts.\nRifleman is equipped with AS Val and thermobaric launcher. AAR is equipped with silenced AKMS, as seen in Crimea and Syria.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_vdv_emr"};
    vest[] = {};
    backpack[] = {"rhs_rk_sht_30_emr", "rhs_rk_sht_30_olive", "CUP_O_RUS_Patrol_bag_Summer"};
    headgear[] = {};
    goggles[] = 
    {
        LIST_4("rhs_scarf"),
        LIST_2("G_Bandanna_blk"),
        LIST_2("G_Bandanna_oli"),
        "rhs_balaclava",
        "rhs_balaclava1_olive",
        LIST_10("")
    };
    hmd[] = 
    {
        //"rhs_1PN138" 
    };
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
    // HEY
    // YOU
    // LOOK
    code = "if ((goggles _this) isEqualTo 'rhs_balaclava' || (goggles _this) isEqualTo 'rhs_balaclava1_olive') then {removeHeadgear _this;};";
    //! ------------------------------ ------------------------------ SEE ABOVE CODE
    
    faces[] = {"faceset:russian"};
};
class r : baseMan
{
    displayName = "Rifleman (AS Val, RShG-2)";
    headgear[] = 
    {
        LIST_4("rhs_Booniehat_digi"),"rhs_Booniehat_flora",
        "rhs_beanie_green","bear_beanie_blue","bear_beanie_brown","rhs_beanie"
    };
    vest[] = {"rhs_6b23_6sh116"};
    primaryWeapon[] =
    {
        "rhs_weap_asval_grip"
    };
    attachment[] = {"rhs_acc_2dpZenit_ris"};
    scope[] = {"rhs_acc_pkas"};
    magazines[] =
    {
        LIST_4("tac1_tm_mag_compat_30Rnd_9x39mm_SP5"),
        LIST_4("tac1_tm_mag_compat_30Rnd_9x39mm_SP6"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    secondaryWeapon[] = {"rhs_weap_rshg2"};
};
class r_base : r
{
    displayName = "Rifleman";
    secondaryWeapon[] = {};
    primaryWeapon[] =
    {
        LIST_3("rhs_weap_ak74m_zenitco01_b33"),
        "rhs_weap_ak105_zenitco01_b33"
    };
    silencer[] = {"rhs_acc_dtk2"};
    attachment[] = {"rhs_acc_perst3_2dp_light_h"};
    scope[] = {"rhsusf_acc_eotech_552","rhsusf_acc_compm4"};
    bipod[] = {LIST_2("rhs_acc_grip_ffg2"),LIST_2("rhs_acc_grip_rk6"),"rhsusf_acc_grip2"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_plum_green"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class g : r_base
{
    displayName = "Grenadier";
    vest[] = {"rhs_6b23_6sh116_vog"};
    primaryWeapon[] = {"rhs_weap_ak74mr_gp25"};
    magazines[] +=
    {
        LIST_2("rhs_VOG25"),
        LIST_3("rhs_VOG25P"),
        LIST_3("rhs_GDM40")
    };
};
class car : r_base
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_ak105_zenitco01_b33"};
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"rhs_6b23_digi_medic"};
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
class smg : r_base
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_ak105"};
    silencer[] = {"rhs_acc_pgs64"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red")
    };
    linkedItems[] += {"Binocular"};
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
        "Binocular",
        "ItemGPS"
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
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
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
class ar : r_base
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_pkm"};
    bipod[] = {};
    silencer[] = {};
    backpack[] = {"rhs_tortila_olive", "rhs_tortila_emr"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class aar : r_base
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhs_tortila_olive", "rhs_tortila_emr"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
    
    primaryWeapon[] =
    {
        "rhs_weap_akms"
    };
    silencer[] = {"rhs_acc_pbs1"};
    attachment[] = {"rhs_acc_2dpZenit"};
    scope[] = {};
    bipod[] = {};
    magazines[] =
    {
        LIST_10("rhs_30Rnd_762x39mm_polymer_89"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r_base
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_vss_grip"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_4("rhs_10rnd_9x39mm_SP5"),
        LIST_4("rhs_10rnd_9x39mm_SP6"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_Pecheneg"};
    sidearmWeapon[] = {};
    scope[] = {"rhs_acc_pkas"};
    magazines[] =
    {
        LIST_5("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r_base
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhs_tortila_olive", "rhs_tortila_emr"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
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
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r_base
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
class matac : r_base
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
        "Binocular"
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
class hatac : r_base
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
        "rhs_pdu4",
        "ItemGPS"
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
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r_base
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
        "rhs_pdu4",
        "ItemGPS"
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
class sn : r_base
{
    displayName = "Sniper";
    uniform[] = {"rhs_uniform_gorka_r_y","rhs_uniform_gorka_r_y","rhs_uniform_gorka_r_g"};
    vest[] = {"rhs_6sh92_headset"};
    headgear[] = {"rhs_beanie","rhs_beanie_green"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x19_17")
    };
    backpack[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"rhs_6sh92_radio"};
    scope[] = {};
    silencer[] = {"rhs_acc_dtk"};
    primaryWeapon[] = {"rhs_weap_ak74m","rhs_weap_ak74m_2mag","rhs_weap_ak74m_plummag","rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag_camo"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    sidearmWeapon[] = {};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"rhs_uniform_vdv_mflora"};
    vest[] = {"rhs_6b13_EMR_6sh92_headset_mapcase"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"rhs_uniform_vdv_mflora"};
    vest[] = {"rhs_6b13_EMR"};
    backpack[] = {"rhs_rk_sht_30_emr_engineer_empty", "rhs_rk_sht_30_olive_engineer_empty"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {"rhs_rk_sht_30_emr_engineer_empty", "rhs_rk_sht_30_olive_engineer_empty"};
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
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
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
    vest[] = {"rhs_6b23_digi_vydra_3m"};
    backpack[] = {"rhs_tortila_olive", "rhs_tortila_emr"};
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
    vest[] = {"rhs_6b23_digi_vydra_3m"};
    backpack[] = {"rhs_tortila_olive", "rhs_tortila_emr"};
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
