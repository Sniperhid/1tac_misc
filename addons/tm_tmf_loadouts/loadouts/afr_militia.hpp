// incomplete

tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "U_C_Poor_1",
        "U_C_Poloshirt_tricolour",
        "U_C_Poloshirt_salmon",
        "U_C_Man_casual_6_F",
        "U_C_Man_casual_5_F",
        "U_C_Man_casual_4_F",
        "U_I_C_Soldier_Para_1_F",
        "U_I_C_Soldier_Para_4_F",
        "U_I_C_Soldier_Para_5_F",
        "CUP_U_B_BDUv2_roll_dirty_OD",
        "CUP_U_B_BDUv2_roll2_dirty_DPM",
        "CUP_U_B_BDUv2_roll_dirty_M81",
        "U_C_Uniform_Farmer_01_F",
        "U_BG_Guerilla2_3",
        "U_BG_Guerilla2_1",
        "U_C_Mechanic_01_F",
        "U_I_L_Uniform_01_tshirt_black_F",
        "U_I_L_Uniform_01_tshirt_olive_F",
        "U_I_L_Uniform_01_tshirt_skull_F",
        "U_I_L_Uniform_01_tshirt_sport_F"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {};
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
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
        LIST_20(""),
        LIST_5(""),
        "usm_headwrap_blk",
        "usm_headwrap_odg2",
        "usm_headwrap_tan",
        "usm_headwrap_tgrstp",
        "usm_headwrap_odg1",
        "ssh68_khaki",
        "H_Bandanna_blu",
        "H_Bandanna_surfer_blk",
        "H_Bandanna_surfer_grn",
        "H_Bandanna_sgg",
        "H_Bandanna_sand",
        "H_Cap_oli",
        "H_Cap_blu",
        "H_Cap_tan",
        "H_ShemagOpen_tan",
        "H_ShemagOpen_khk",
        "H_Shemag_olive"
    };
    vest[] = {
        "rhsgref_chicom"
    };
    backpack[] = {};
    primaryWeapon[] = {"rhs_weap_akm", "rhs_weap_akms"};
    silencer[] = {"rhs_acc_dtkakm"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "MOLOTOV_MAG",
        "rhs_grenade_nbhgr39_mag" //lol
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
    primaryWeapon[] = {"rhs_weap_akm_gp25", "rhs_weap_akms_gp25"};
    backpack[] = {"rhs_sidor", "B_Battle_Belt_F"};
    magazines[] +=
    {
        LIST_6("rhs_VOG25")
    };
    uniform[] = {
        "U_I_C_Soldier_Bandit_5_F",
        "U_I_C_Soldier_Bandit_4_F",
        "U_I_C_Soldier_Bandit_1_F",
        "U_I_C_Soldier_Bandit_2_F",
        "U_C_Man_casual_4_F"
    };
    vest[] = {
        "CUP_V_OI_TKI_Jacket2_05",
        "CUP_V_OI_TKI_Jacket2_04",
        "CUP_V_OI_TKI_Jacket2_02",
        "CUP_V_OI_TKI_Jacket2_01"
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N10_AK")
    };
    uniform[] = {
        "U_I_C_Soldier_Bandit_5_F",
        "U_I_C_Soldier_Bandit_4_F",
        "U_C_Man_casual_4_F"
    };
    vest[] = {
        "CUP_V_OI_TKI_Jacket3_06",
        "CUP_V_OI_TKI_Jacket3_04",
        "CUP_V_OI_TKI_Jacket3_01"
    };
};
class m : car
{
    displayName = "Medic";
    backpack[] = {"CUP_B_SLA_Medicbag"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_splint"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("SmokeShell")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    uniform[] = {
        "U_I_C_Soldier_Bandit_5_F",
        "U_I_C_Soldier_Bandit_4_F",
        "U_I_C_Soldier_Bandit_1_F",
        "U_I_C_Soldier_Bandit_2_F",
        "U_C_Man_casual_4_F"
    };
    vest[] = {
        "CUP_V_OI_TKI_Jacket2_05",
        "CUP_V_OI_TKI_Jacket2_04",
        "CUP_V_OI_TKI_Jacket2_02",
        "CUP_V_OI_TKI_Jacket2_01"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backpack[] = {"usm_pack_st138_prc77"};
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
    backPack[] = {"usm_pack_st138_prc77"};
    magazines[] = {
        LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backPack[] = {"usm_pack_alice_prc77"};
    backpackItems[] = {};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_RPK74"};
    backpack[] = {"rhs_sidor", "B_Battle_Belt_F"};
    bipod[] = {};
    magazines[] =
    {
        LIST_10("tac1_tm_mag_compat_40Rnd_762x39")
    };
    uniform[] = {
        "U_I_C_Soldier_Bandit_5_F",
        "U_I_C_Soldier_Bandit_4_F",
        "U_I_C_Soldier_Bandit_1_F",
        "U_I_C_Soldier_Bandit_2_F",
        "U_C_Man_casual_4_F"
    };
    vest[] = {
        "CUP_V_OI_TKI_Jacket2_05",
        "CUP_V_OI_TKI_Jacket2_04",
        "CUP_V_OI_TKI_Jacket2_02",
        "CUP_V_OI_TKI_Jacket2_01"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Battle_Belt_F"};
    backpackItems[] =
    {
        LIST_5("tac1_tm_mag_compat_40Rnd_762x39")
    };
    
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    magazines[] += {"rhs_rpg7_PG7V_mag"};
};

class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_Mosin_Nagant"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    bipod[] = {};
    magazines[] =
    {
        LIST_20("CUP_5Rnd_762x54_Mosin_M"),
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] = {"rhs_weap_pkm"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"usm_pack_762x51_ammobelts"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
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
        "ItemWatch"
    };
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Metis_Tripod_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Metis_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_Metis_Tripod_Bag"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
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
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
    scope[] = {"cup_optic_pem"};
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
    backpack[] = {"bear_sidor_tan"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
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
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};
