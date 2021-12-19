tooltip = "Author: Fingers. A more well-equipped version of Takistani Insurgents designed for TvTs.";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_m93_m81_alt","bear_uniform_m93_m81","rhsgref_uniform_ERDL","bear_uniform_m93_duck_hunter"};
   	vest[] = {"rhsgref_chicom"};
   	backpack[] = {"CUP_O_RUS_Patrol_bag_Green","CUP_O_RUS_Patrol_bag_Green_Shovel"};
   	headgear[] = {"rhsgref_hat_M1951","CUP_H_US_patrol_cap_WDL","CUP_H_US_patrol_cap_WDL","CUP_H_US_patrol_cap_OD","CUP_H_US_patrol_cap_tigerstripe","H_Bandanna_sgg","H_Bandanna_camo","usm_bdu_boonie_odg","usm_bdu_boonie_wdl"};
   	goggles[] = {};
   	hmd[] = {};
    faces[] = {};

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
    primaryWeapon[] = {"CUP_arifle_FNFAL5061_wooden"};
	magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_M"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_akms_gp25","rhs_weap_akm_gp25"};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_762x39mm"),
        "rhs_mag_f1",
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akm","rhs_weap_akms"};
    scope[] = {};
    attachment[] = {};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_762x39mm"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class m : car
{
    displayName = "Medic";
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_AK"),
        "rhs_mag_f1",
		LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
		LIST_4("rhs_GRD40_White")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_7x45acp_MHP")
    };
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
};
class fac : smg
{
    displayName = "Scout";
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
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_lmg_M60E4_norail"};
	bipod[] = {};
	magazines[] =
	{
		LIST_5("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"),
		"rhs_mag_f1",
		LIST_2("rhs_mag_rdg2_white")
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_5("CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg18"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
	scope[] = {"CUP_optic_no23mk2"};
	magazines[] =
	{
		LIST_9("CUP_10x_303_M"),
		LIST_2("rhs_mag_f1"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_fnmag"};
	scope[] = {};
	magazines[] =
	{
		LIST_3("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m62_tracer")
	};
};
class mmgac : smg
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m62_tracer")
    };
};
class mmgag : car
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
		LIST_3("rhsusf_100Rnd_762x51")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_DShkM_TripodLow_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class matg : rat
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
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
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatg : matg
{
    displayName = "HAT Gunner";
    secondaryAttachments[] = {"rhs_acc_pgo7v"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class hatag : matag
{
	displayName = "HAT Assistant Gunner";
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class mtrg : smg
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
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : smg
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
class samg : smg
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        "rhs_mag_9k38_rocket"
    };
    backpackItems[] =
    {
	"rhs_mag_9k38_rocket"
    };
};
class samag : smg
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
	"rhs_mag_9k38_rocket"
    };
};
class sn : dm
{
    displayName = "Sniper";
};
class sp : r
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4"};
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
    headgear[] = {"rhs_zsh7a_mike"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
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
    headgear[] = {"rhs_tsh4"};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
    magazines[] =
    {
        LIST_4("CUP_20Rnd_B_765x17_Ball_M")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"B_Carryall_khk"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag")
    };
	items[] += {"ACE_M26_Clacker"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_M26_Clacker"
    };
    backpackItems[] = {
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
};
