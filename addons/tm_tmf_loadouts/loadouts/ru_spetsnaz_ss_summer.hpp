// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear\n\nFor fighting in the dark";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_gorka_r_ss_summer"};
    vest[] = {};
    backpack[] = {"rhs_sidor"};
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
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = 
    {
        "bear_bdu_booniehat_ss_summer",
        "bear_bdu_booniehat_ss_summer",
        "bear_bdu_booniehat_ss_summer",
        "bear_bdu_booniehat_ss_summer",
        "bear_bdu_booniehat_ss_summer",
        "usm_bdu_boonie_odg",
        "usm_bdu_boonie_odg",
        "H_Bandanna_cbr",
        "rhs_beanie_green",
        "rhs_beanie",
        "UK3CB_BAF_H_Wool_Hat"
    };
    vest[] = {
        "RPS_Smersh13", "RPS_Smersh13_sh", "RPS_Smersh13_f",
        "RPS_Smersh14", "RPS_Smersh14_sh", "RPS_Smersh14_f"
    };
    backpack[] = {};
    primaryWeapon[] = {"bear_weap_ak74m_orange_mag","rhs_weap_aks74n_2","rhs_weap_aks74n"};
    sidearmWeapon[] = {"rhs_weap_rsp30_white"};
    scope[] = {};
    silencer[] = {"rhs_acc_dtk4short"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_545x39_7N10_plum_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
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
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {
        "RPS_Smersh1", "RPS_Smersh1_sh",
        "RPS_Smersh2", "RPS_Smersh2_sh",
        "RPS_Smersh4", "RPS_Smersh4_sh",
        "RPS_Smersh7", "RPS_Smersh7_sh",
        "RPS_Smersh9", "RPS_Smersh9_sh"
    };
    silencer[] = {};
    scope[] = {};
    primaryWeapon[] = {"CUP_arifle_OTS14_GROZA_GL"};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_9x39_SP5_GROZA_M"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_6("rhs_VOG25"),
        LIST_4("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74un"};
    scope[] = {"rhs_acc_ekp1"};
    silencer[] = {"rhs_acc_pgs64_74un"};
};
class m : car 
{
    displayName = "Medic";
    backpack[] = {"rhs_medic_bag"};
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
        LIST_1("ACE_surgicalKit")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_plum_AK"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_VG40OP_green"),
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
    sidearmWeapon[] = {"rhs_weap_pb_6p9"};
    sidearmAttachments[] = {"rhs_acc_6p9_suppressor"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_3("rhs_mag_9x18_8_57N181S"),
        LIST_2("rhs_VG40OP_green"),
        LIST_3("rhs_GRD40_Red"),
        "rhs_mag_nspd",
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_VG40OP_white"),
        LIST_6("CUP_20Rnd_9x39_SP5_GROZA_M"),
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
        "Binocular"
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
    primaryWeapon[] = {"CUP_arifle_RPK74M"};
    scope[] = {"rhs_acc_ekp8_02"};
    bipod[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_7("rhs_45Rnd_545X39_7N10_AK"),
        LIST_3("rhs_45Rnd_545X39_7N22_AK"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pbs4"};
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_7("rhs_45Rnd_545X39_7N10_AK")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
    primaryWeapon[] = {"CUP_arifle_OTS14_GROZA_762"};
    scope[] = {};
    silencer[] = {"CUP_muzzle_snds_groza"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm_polymer_89"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_vss"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    magazines[] =
    {
        LIST_4("rhs_20rnd_9x39mm_SP5"),
        LIST_4("rhs_20rnd_9x39mm_SP6"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkm"};
    vest[] = {
        "RPS_Smersh3", "RPS_Smersh3_sh", "RPS_Smersh3_f",
        "RPS_Smersh5", "RPS_Smersh5_sh", "RPS_Smersh5_f"
    };
    scope[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
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
        "Binocular",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_1pn93_2"};
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
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
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
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
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
    backpack[] = {"RHS_Metis_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Metis_Tripod_Bag"};
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
        "Binocular"
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {
        "RPS_Smersh15", "RPS_Smersh15_sh", "RPS_Smersh15_f",
        "RPS_Smersh16", "RPS_Smersh16_sh", "RPS_Smersh16_f"
    };
    primaryWeapon[] = {"rhs_weap_svdp_wd"};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_pb_6p9"};
    sidearmAttachments[] = {"rhs_acc_6p9_suppressor"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"Binocular"};
};
class sp : car
{
    displayName = "Spotter";
    silencer[] = {"rhs_acc_pbs4"};
    sidearmWeapon[] = {"rhs_weap_pb_6p9"};
    sidearmAttachments[] = {"rhs_acc_6p9_suppressor"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_545x39_7N10_plum_AK"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
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
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
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
    vest[] = {"RPS_Smersh12", "RPS_Smersh12_sh", "RPS_Smersh12_f"};
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
