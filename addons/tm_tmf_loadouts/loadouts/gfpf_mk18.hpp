tooltip = "Author: Käsmeister. \n\nAlt-history loadout - earth was federalised in 2011 and the GFPF was formed to keep the peace around the globe.\n\nSpecial operators ready for both quiet and loud operations at day and night, even in a CBRN environment. Players will find suppressors and gas masks in their gear. ";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"RM_SWAT_Uniform_02"};
    vest[] = {"CUP_V_B_Ciras_Black","CUP_V_B_Ciras_Black2","CUP_V_B_Ciras_Black3","CUP_V_B_Ciras_Black4"};
    backpack[] = {"B_AssaultPack_blk"};
    headgear[] = {"rhsusf_opscore_bk_pelt"};
    goggles[] = {"CUP_G_ESS_BLK_Scarf_Blk"};
    hmd[] = {"CUP_NVG_GPNVG_black"};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:caucasian"};
    // Leave empty to not change faces.
    insignias[] = {};
    // Leave empty to not change insignias

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
    items[] = {"avon_SF12"};
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
    primaryWeapon[] = {"rhs_weap_mk18_bk","rhs_weap_mk18_KAC_bk","rhs_weap_mk18"};
    scope[] = {"cup_optic_microt1","optic_holosight_blk_f","rhsusf_acc_eotech_552","cup_optic_vortexrazor_uh1_black"};
    attachment[] = {"cup_acc_flashlight"};
	silencer[] = {"cup_muzzle_mfsup_flashhider_556x45_black"};
	bipod[] = {"rhsusf_acc_rvg_blk"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_10("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
		"rhsusf_acc_nt4_black",
        "ACE_tourniquet"
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_mk18_m320"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
	{
		LIST_8("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
		LIST_1("Handgrenade"),
		LIST_1("SmokeShell")
	};
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"gm_ge_backpack_satchel_80_san"};
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
		LIST_1("SmokeShell")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5SD6"};
	attachment[] = {"cup_acc_flashlight"};
	silencer[] = {""};
	bipod[] = {""};
	scope[] = {"cup_optic_microt1","optic_holosight_blk_f","cup_optic_vortexrazor_uh1_black"};
    magazines[] =
    {
        LIST_8("tac1_tm_mag_compat_30Rnd_9x19mm_MP5_JHP"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell")
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
    primaryWeapon[] = {"rhs_weap_m4a1_blockII_bk"};
    bipod[] = {"bipod_01_f_blk"};
    magazines[] =
    {
        LIST_5("rhs_mag_100Rnd_556x45_M855A1_cmag_mixed"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
        "HandGrenade",
        "SmokeShell"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhs_mag_100Rnd_556x45_M855A1_cmag_mixed")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m16a4"};
    scope[] = {"rhsusf_acc_acog"};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    bipod[] = {"bipod_01_f_blk"};
    magazines[] =
    {
        LIST_10("rhs_mag_20Rnd_556x45_M855A1_Stanag"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m249_pip_ris"};
    scope[] = {"rhsusf_acc_acog"};
	bipod[] = {"rhsusf_acc_kac_grip_saw_bipod"};
	silencer[] = {""};
	attachment[] = {""};
    magazines[] =
    {
        LIST_4("rhsusf_200Rnd_556x45_box"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP"),
        "HandGrenade",
        "SmokeShell"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_200Rnd_556x45_box")
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
        LIST_3("rhsusf_200Rnd_556x45_box")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
	primaryWeapon[] = {"rhs_weap_fnmag"};
	scope[] = {"rhsusf_acc_acog"};
	magazines[] =
	{
		LIST_5("rhsusf_100Rnd_762x51"),
		LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
	};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
	backpackItems[] = {LIST_4("rhsusf_mag_17Rnd_9x19_JHP")};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
	backpackItems[] = {LIST_4("rhsusf_mag_17Rnd_9x19_JHP")};
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
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    magazines[] +=
    {
        LIST_1("rhs_mag_maaws_HEAT"),
		LIST_2("rhs_mag_maaws_HEDP")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
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
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"gm_pzf3_blk"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_60mm_heat_dm22_pzf3")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
	backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm22_pzf3")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm22_pzf3")
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
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Gun_Bag"};
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
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
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
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_3("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"rhs_weap_XM2010"};
    scope[] = {"rhsusf_acc_m8541"};
	bipod[] = {"bipod_01_f_blk"};
	attachment[] = {"cup_acc_anpeq_15_black"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_acog"};
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
    backpack[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class jp : smg
{
    displayName = "Jet pilot";
    vest[] = {"V_TacVest_blk"};
    backpack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
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
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};