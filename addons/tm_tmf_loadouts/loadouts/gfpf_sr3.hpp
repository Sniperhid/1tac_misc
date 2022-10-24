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
    primaryWeapon[] = {"CUP_arifle_SR3M_Vikhr_VFG"};
    scope[] = {"rhs_acc_okp7_dovetail"};
    attachment[] = {"cup_acc_flashlight"};
	silencer[] = {"cup_muzzle_snds_sr3m"};
	bipod[] = {""};
	sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] =
    {
        LIST_9("tac1_tm_mag_compat_30Rnd_9x39mm_SP6"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
    primaryWeapon[] = {"rhs_weap_ak74m_gp25_npz"};
	scope[] = {"rhs_acc_rakurspm","rhs_acc_1p87","cup_optic_microt1","rhsusf_acc_eotech_xps3"};
	silencer[] = {"rhs_acc_ak5"};
	bipod[] = {""};
	attachment[] = {""};
    magazines[] =
    {
		LIST_9("rhs_30Rnd_545x39_7N10_2mag_plum_AK"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
		"rhs_acc_tgpa",
        "ACE_tourniquet"
	};
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
	{
		LIST_7("tac1_tm_mag_compat_30Rnd_9x39mm_SP6"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
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
    primaryWeapon[] = {"CUP_smg_vityaz_top_rail"};
	scope[] = {"rhs_acc_rakurspm","rhs_acc_1p87","cup_optic_microt1","rhsusf_acc_eotech_xps3"};
	attachment[] = {""};
	silencer[] = {"cup_muzzle_mfsup_flashhider_762x39_black"};
	bipod[] = {""};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_9x19AP_Vityaz"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
		"cup_muzzle_snds_kzrzp_ak762",
        "ACE_tourniquet"
	};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green")
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
    primaryWeapon[] = {"rhs_weap_rpk74m_npz"};
	scope[] = {"rhs_acc_rakurspm","rhs_acc_1p87","cup_optic_microt1","rhsusf_acc_eotech_xps3"};
	silencer[] = {"rhs_acc_ak5"};
    bipod[] = {""};
	attachment[] = {"rhs_acc_2dpzenit"};
    magazines[] =
    {
        LIST_7("tac1_tm_mag_compat_45Rnd_545x39_RPK74M_7N22"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
        "HandGrenade",
        "SmokeShell"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("tac1_tm_mag_compat_45Rnd_545x39_RPK74M_7N22")
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
    primaryWeapon[] = {"rhs_weap_vss"};
    scope[] = {"rhs_acc_pso1m21"};
	attachment[] = {""};
    bipod[] = {""};
    magazines[] =
    {
        LIST_9("rhs_20rnd_9x39mm_SP6"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    scope[] = {"rhs_acc_1p78"};
	bipod[] = {""};
	silencer[] = {""};
	attachment[] = {""};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26"),
		LIST_3("rhs_18rnd_9x21mm_7N29"),
        "HandGrenade",
        "SmokeShell"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR_7N26")
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
        LIST_3("rhs_100Rnd_762x54mmR_7N26")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
	backpack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
	backpack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
	backpack[] = {"RHS_Kord_Tripod_Bag"};
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
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    magazines[] +=
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
		LIST_2("rhs_rpg7_OG7V_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
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
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    magazines[] +=
    {
        LIST_2("rhs_rpg7_PG7VM_mag"),
		LIST_1("rhs_rpg7_PG7VR_mag")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
	backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VM_mag"),
		LIST_1("rhs_rpg7_PG7VR_mag")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
	backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VM_mag"),
		LIST_1("rhs_rpg7_PG7VR_mag")
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
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
    magazines[] +=
    {
        LIST_3("rhs_mag_9k38_rocket")
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
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
	bipod[] = {"bipod_01_f_blk"};
	attachment[] = {""};
    magazines[] =
    {
        LIST_8("rhs_5Rnd_338lapua_t5000"),
        LIST_2("HandGrenade"),
        LIST_3("rhs_18rnd_9x21mm_7N29")
    };
};
class sp : g
{
    displayName = "Spotter";
	primaryWeapon[] = {"rhs_weap_ak74m_gp25"};
    scope[] = {"rhs_acc_pso1m2"};
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