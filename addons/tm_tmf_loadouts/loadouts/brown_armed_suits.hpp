// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: DarkLuke, Brown Armed Suits w/ AK-12";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_C_Suit_02"};
    vest[] = {"CUP_V_PMC_IOTV_Black_Patrol"};
    backpack[] = {"CUP_B_AssaultPack_Black"};
    headgear[] = {"rhssaf_helmet_m97_black_nocamo"};
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
    items[] = {"FirstAidKit"};
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
    backpack[] = {"CUP_B_AssaultPack_Black"};
    primaryWeapon[] = {"hlc_rifle_ak12"};
    scope[] = {"CUP_optic_CompM4"};
	bipod[] = {"rhsusf_acc_tacsac_blk"};
	flashlight[] = {"UK3CB_BAF_LLM_Flashlight_Black"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N22_AK"),
        LIST_2("rhs_mag_m67"),
        LIST_1("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"hlc_rifle_ak12GL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_ak12"};
};
class m : car 
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhssaf_mag_brd_m83_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    magazines[] =
    {
        LIST_10("CUP_30Rnd_9x19_MP5"),
        LIST_2("rhs_mag_m67"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m249"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_2("rhsusf_100Rnd_556x45_soft_pouch"),
        "rhsusf_100Rnd_556x45_mixed_soft_pouch",
        "rhs_mag_m67",
        "SmokeShell",
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AP_Launcher"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svds_npz"};
	bipod[] = {"rhs_acc_harris_swivel"};
    scope[] = {"rhs_acc_dh520x56"};
    magazines[] =
    {
        LIST_6("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_m67"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "SmokeShell",
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_2("MRAWS_HEAT_F"),
		LIST_1("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
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
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper M40A5";
    uniform[] = {"CUP_U_O_RUS_Ghillie"};
    vest[] = {"rhs_6b23_6sh116_flora"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m40a5_wd"};
    scope[] = {"RKSL_optic_PMII_525"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_7("rhsusf_5Rnd_762x51_AICS_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("16Rnd_9x21_Mag")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {"RKSL_optic_PMII_525"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {"B_AssaultPack_khk"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_tsh4"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class fp : smg
{
    displayName = "Fighter Pilot";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {"B_AssaultPack_khk"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
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
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
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
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};
