// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "rhs_uniform_vkpo_gloves",
        "rhs_uniform_vkpo_gloves_alt"
    };
    vest[] = {};
    backpack[] = {"rhs_rk_sht_30_olive"};
    headgear[] = {};
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
    faces[] = {"faceset:russian"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = 
    {
        "rhs_6b28_green","rhs_6b28_green_bala","rhs_6b28_green_ess","rhs_6b28_green_ess_bala",
        "rhs_6b28","rhs_6b28_bala","rhs_6b28_ess","rhs_6b28_ess_bala"
    };
    vest[] = {"rhs_6b23_digi_6sh92"};
    primaryWeapon[] = {"rhs_weap_ak74m","rhs_weap_ak74m_plummag","rhs_weap_ak74m","rhs_weap_ak74m_plummag","rhs_weap_ak74m","rhs_weap_ak74m_plummag","rhs_weap_ak74m_2mag"};
    scope[] = {};
    silencer[] = {"rhs_acc_dtk"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_11("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_2("rhs_mag_9x19_17")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "rhs_vkpo_cap"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"rhs_6b23_digi_6sh92_vog"};
    primaryWeapon[] = {"rhs_weap_ak74m_gp25"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_9("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_2("rhs_mag_9x19_17"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    //primaryWeapon[] = {"rhs_weap_ak105"}; -- 105 is for crew etc
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"rhs_6b23_digi_medic"};
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
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64"};
    sidearmWeapon[] = {};
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
        LIST_2("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen")
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
    vest[] = {"rhs_6b23_digi_6sh92_headset_mapcase"};
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_mag_9x19_17"),
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellYellow"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
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
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_pkm"};
    bipod[] = {};
    silencer[] = {};
    vest[] = {"rhs_6b23_digi_6sh92"};
    backpack[] = {"rhs_tortila_olive"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_mag_9x19_17"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"rhs_6b23_digi_6sh92_radio"};
    backpack[] = {"rhs_tortila_olive"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svdp"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    magazines[] =
    {
        LIST_12("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_9x19_17"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    backpack[] = {"rhs_tortila_olive"};
    primaryWeapon[] = {"CUP_lmg_PKMN"};
    sidearmWeapon[] = {};
    scope[] = {"rhs_acc_1p29"};
    magazines[] =
    {
        LIST_5("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_mag_9x19_17"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    vest[] = {"rhs_6b23_digi_6sh92"};
    backpack[] = {"rhs_tortila_olive"};
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
        "rhs_pdu4",
        "ItemGPS"
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
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    vest[] = {"rhs_6b23_digi_6sh92_radio"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
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
    vest[] = {"rhs_6b23_digi_6sh92_headset"};
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
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
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    vest[] = {"rhs_6b23_digi_6sh92_headset"};
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
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    vest[] = {"rhs_6b23_digi_6sh92_headset"};
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
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"rhs_beanie","rhs_beanie_green"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_13("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x19_17")
    };
    backpack[] = {};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"rhs_6sh92_digi_radio"};
    backpack[] = {"rhs_rk_sht_30_olive"};
    scope[] = {"rhs_acc_1p78"};
    silencer[] = {"rhs_acc_dtk"};
    primaryWeapon[] = {"rhs_weap_ak74m","rhs_weap_ak74m_2mag","rhs_weap_ak74m_plummag","rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag_camo"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_4("rhs_GRD40_White"),
        LIST_2("rhs_mag_9x19_17")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhs_6b23_crewofficer"};
    backpack[] = {"rhs_rk_sht_30_olive_engineer_empty"};
    headgear[] = {"rhs_6b48"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhs_6b23_crew"};
    backpack[] = {"rhs_rk_sht_30_olive_engineer_empty"};
    headgear[] = {"rhs_6b48"};
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
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
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
    backpack[] = {"rhs_sidor"};
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
    backpack[] = {"rhs_tortila_olive"};
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
    backpack[] = {"rhs_tortila_olive"};
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
    vest[] = {"rhs_6b23_digi_6sh92_radio"};
    linkedItems[] += {"O_UavTerminal"};
};
