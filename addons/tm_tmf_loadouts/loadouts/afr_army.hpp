// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Plankton\n\nNo body armor!";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "CUP_U_B_BDUv2_CEU",
        "CUP_U_B_BDUv2_dirty_CEU",
        "CUP_U_B_BDUv2_roll2_CEU",
        "CUP_U_B_BDUv2_roll2_dirty_CEU",
        "CUP_U_B_BDUv2_roll_CEU",
        "CUP_U_B_BDUv2_roll_dirty_CEU",
        "usm_bdu_portliz",
        "usm_bdu_btisrl_portliz",
        "usm_bdu_srl_portliz"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:african"};

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
    headgear[] = {
        LIST_5("rhs_6B26"),
        LIST_2("rhs_6B26_green"),
        LIST_5("rhsgref_6b27m_ttsko_forest"),
        LIST_2("rhsgref_helmet_pasgt_altis_lizard"),
        LIST_2("rhsgref_helmet_pasgt_erdl"),
        LIST_5("rhsgref_helmet_pasgt_woodland"),
        LIST_1("rhs_beanie_green"),
        LIST_1("CUP_H_PMC_Beanie_Khaki"),
        LIST_1("rhsgref_hat_M1951")
    };
    vest[] = {
        "rhsgref_chestrig",
        "rhsgref_chicom"
    };
    backpack[] = {
        "bear_rd54_green",
        "B_simc_USMC65_M41",
        "B_simc_USMC65_M41_roll2"
    };
    primaryWeapon[] = {
        LIST_5("rhs_weap_akm"),
        "rhs_weap_akms"
    };
    scope[] = {};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {
        LIST_5("rhs_weap_akm_gp25"),
        "rhs_weap_akms_gp25"
    };
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("CUP_1Rnd_SMOKE_GP25_M")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {
        LIST_5("rhs_weap_ak74"),
        "rhs_weap_aks74"
    };
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
    vest[] = {"bear_6b23_od_medic"};
    backpack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_plasmaIV"),
        LIST_6("ACE_splint"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("SmokeShell")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeGreen_GP25_M")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {
        LIST_5("rhs_6B26"),
        LIST_5("rhsgref_6b27m_ttsko_forest"),
        LIST_5("rhsgref_helmet_pasgt_woodland"),
        LIST_1("rhsgref_hat_M1951")
    };
    backpack[] = {
        "B_Kitbag_sgg",
        "B_Kitbag_rgr"
    };
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    uniform[] = { // can't let CO be dirty
        "CUP_U_B_BDUv2_CEU",
        "CUP_U_B_BDUv2_roll2_CEU",
        "CUP_U_B_BDUv2_roll_CEU",
        "usm_bdu_portliz",
        "usm_bdu_btisrl_portliz",
        "usm_bdu_srl_portliz"
    };
};
class fac : co
{
    displayName = "Forward Air Controller";
    backPack[] = {"usm_pack_alice_prc77"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_pkm"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    backpack[] = {"rhssaf_kitbag_smb"};
    magazines[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_100Rnd_762x54mmR_green"),
        "HandGrenade",
        "SmokeShell",
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhssaf_kitbag_smb"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_1("rhs_rpg7_PG7V_mag")
    };
};

class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svdp"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    bipod[] = {};
    scope[] = {"rhs_acc_pso1m21"};
    magazines[] =
    {
        LIST_10("rhs_10Rnd_762x54mmR_7N1"),
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};
    backpackItems[] = {};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpack[] = {"rhssaf_kitbag_smb"};
    magazines[] +=
    {
        LIST_4("ace_csw_50Rnd_127x108_mag")
    };
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] += {"Binocular"};
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_OG7V_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
    linkedItems[] += {"Binocular"};
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Metis_Gun_Bag"};
    backpackItems[] = {};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_4("ace_compat_rhs_afrf3_mag_9M131M")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] += {"Binocular"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_3("ACE_1Rnd_82mm_Mo_HE"),
        LIST_1("ACE_1Rnd_82mm_Mo_Smoke"),
        LIST_1("ACE_1Rnd_82mm_Mo_Illum")
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] += {"Binocular"};
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
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
    linkedItems[] += {"Binocular"};
};
class sn : dm
{
    displayName = "Sniper";
    scope[] = {"rhs_acc_pso1m21"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"Binocular"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    backpack[] = {};
    linkedItems[] += {"Binocular"};
    magazines[] +=
    {
        LIST_2("SmokeShellGreen")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4"};
    backpack[] = {};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {};
    backpack[] = {"rhssaf_kitbag_smb"};
    headgear[] = {"rhs_zsh7a_mike", "rhs_zsh7a_mike_green"};
    goggles[] = {};
    items[] = {};
    backpackItems[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_DAGR"
    };
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhssaf_uniform_mig29_pilot"};
    backpack[] = {"rhssaf_kitbag_smb"};
    headgear[] = {"rhs_zsh7a", "rhs_zsh7a_alt"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_5("rhs_mag_9x18_8_57N181S"),
        LIST_2("SmokeShellBlue"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellOrange"),
        LIST_2("SmokeShellRed"),
        LIST_2("SmokeShellPurple"),
        LIST_2("SmokeShellYellow"),
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] += {"ItemGPS"};
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
    backpack[] = {"B_rhsusf_B_BACKPACK"}; // ACE Raven UAV
    //linkedItems[] += {"B_UavTerminal"}; // Raven don't use UAV terminal, only confusing to have it there too
};
