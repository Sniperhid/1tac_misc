tooltip = "Author: Käsmeister.\n\nLocal farmer faction upset by the current state of events. They use a variety of civilian or old military weaponry.";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"CUP_U_C_Villager_01","CUP_U_C_Villager_04","CUP_U_C_Villager_02","CUP_U_C_Villager_03"};
	// For other classes "CUP_U_C_Mechanic_03","CUP_U_C_Mechanic_01","CUP_U_C_Mechanic_02" || "CUP_U_C_racketeer_01" || "CUP_U_C_Tracksuit_02" || "CUP_U_C_Woodlander_01"
   	vest[] = {"CUP_V_C_Police_Holster"};
   	backpack[] = {"B_Battle_Belt_F"};
   	headgear[] = {"H_Cap_red","H_Cap_Orange_IDAP_F","CUP_H_C_MAGA_01","","","","","","H_Cap_blk_CMMG","H_Hat_brown","H_Hat_tan","H_Hat_grey","H_StrawHat_dark","CUP_H_C_Ushanka_04","CUP_H_C_Ushanka_03","sfp_ollesbrorsa_gray"};
   	goggles[] = {"","","","","","","CUP_Beard_Black","immersion_cigs_cigar1","murshun_cigs_cig1","JK_Mustage_Black","JK_Mustage_DarkBrown"};
   	hmd[] = {};
    faces[] = {"faceset:caucasian"};

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
    displayName = "Rifleman (K98K)";
    primaryWeapon[] = {"rhs_weap_kar98k"};
	secondaryWeapon[] = {};
    scope[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_12("rhsgref_5Rnd_792x57_kar98k"),
        LIST_2("MOLOTOV_MAG")
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
    displayName = "Rifleman (SKS)";
    primaryWeapon[] = {"CUP_SKS"};
    magazines[] =
    {
        LIST_9("CUP_10Rnd_762x39_SKS_M"),
        LIST_2("MOLOTOV_MAG")
    };
};
class car : r
{
    displayName = "Shotgunner";
    primaryWeapon[] = {"sgun_HunterShotgun_01_F"};
    scope[] = {};
    bipod[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_8("2Rnd_12Gauge_Pellets"),
        LIST_8("2Rnd_12Gauge_Slug"),
        LIST_2("MOLOTOV_MAG")
    };
};
class m : car
{
    displayName = "Medic";
	uniform[] = {"CUP_U_C_Mechanic_03","CUP_U_C_Mechanic_01","CUP_U_C_Mechanic_02"};
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
        LIST_1("ACE_surgicalKit")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_scorpion"};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    silencer[] = {};
	magazines[] =
    {
        LIST_8("rhsgref_20rnd_765x17_vz61"),
        LIST_2("MOLOTOV_MAG")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"sfp_ollesbrorsa_gray"};
	uniform[] = {"CUP_U_C_racketeer_01","CUP_U_C_racketeer_02","CUP_U_C_racketeer_03","CUP_U_C_racketeer_04"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] +=
    {
        LIST_3("rhs_mag_762x25_8")
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
	uniform[] = {"U_C_HunterBody_grn"};
	primaryWeapon[] = {"CUP_srifle_CZ550"};
	magazines[] =
	{
	LIST_8("CUP_5x_22_LR_17_HMR_M")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"rhs_weap_MP44"};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_8("rhsgref_30Rnd_792x33_SmE_StG"),
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_8("rhsgref_30Rnd_792x33_SmE_StG"),
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
	uniform[] = {"CUP_U_O_CHDKZ_Lopotev","CUP_U_C_Tracksuit_01","CUP_U_C_Tracksuit_02","CUP_U_C_Tracksuit_03","CUP_U_C_Tracksuit_04"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	backPack[] = {"rhs_rpg_empty"};
	backPackItems[] =
	{
        LIST_3("rhs_rpg7_PG7V_mag")
	};
};
class dm : r
{
	displayName = "Designated Marksman";
	uniform[] = {"CUP_U_C_Woodlander_01","CUP_U_C_Woodlander_02","CUP_U_C_Woodlander_03","CUP_U_C_Woodlander_04"};
	headgear[] = {"CUP_H_C_Ushanka_01","CUP_H_C_Ushanka_02","CUP_H_C_Ushanka_03","CUP_H_C_Ushanka_04"};
	primaryWeapon[] = {"CUP_srifle_CZ550"};
	scope[] = {};
	magazines[] =
	{
		LIST_8("CUP_5x_22_LR_17_HMR_M"),
		LIST_2("MOLOTOV_MAG")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"ffp_KVKK"};
	scope[] = {};
	magazines[] =
	{
		LIST_3("ffp_100Rnd_KVKK_mag"),
		LIST_1("ffp_100Rnd_KVKK_mag_Tracer")
	};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"CUP_B_HikingPack_Civ"};
    backpackItems[] =
    {
        LIST_3("ffp_100Rnd_KVKK_mag"),
		LIST_1("ffp_100Rnd_KVKK_mag_Tracer")
    };
};
class mmgag : car
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"CUP_B_HikingPack_Civ"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("ffp_100Rnd_KVKK_mag")
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
    backPack[] = {"RHS_DShkM_TripodLow_Bag"};
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
	secondaryAttachments[] = {"rhs_acc_pgo7v2"};
	backpackItems[] =
	{
		LIST_4("rhs_rpg7_PG7VL_mag")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] =
	{
		LIST_4("rhs_rpg7_PG7VL_mag")
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
		LIST_3("rhs_rpg7_PG7VL_mag")
	};
};
class hatg : matg
{
    displayName = "HAT Gunner";
    secondaryAttachments[] = {"rhs_acc_pgo7v2"};
	backpackItems[] =
	{
		LIST_1("rhs_rpg7_PG7VR_mag"),
		LIST_2("rhs_rpg7_PG7VL_mag")
	};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_1("rhs_rpg7_PG7VR_mag"),
		LIST_2("rhs_rpg7_PG7VL_mag")
	};
};
class hatag : matag
{
	displayName = "HAT Assistant Gunner";
	backpackItems[] =
	{
		LIST_1("rhs_rpg7_PG7VR_mag"),
		LIST_1("rhs_rpg7_PG7VL_mag")
	};
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
class mtrac : car
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
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
		LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
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
		LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : dm
{
    displayName = "Sniper";
	Items[] +=
    {
        "ACE_RangeCard"
    };
};
class sp : g
{
    displayName = "Spotter";
	Items[] +=
    {
        "Binocular"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4_ess"};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4_ess"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	headgear[] = {"rhs_tsh4_ess"};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_zsh7a_mike"};
};
class pcc : car
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
    headgear[] = {"rhs_zsh7a_mike"};
	sidearmWeapon[] = {"rhs_weap_scorpion"};
    magazines[] =
    {
        LIST_5("rhsgref_20rnd_765x17_vz61")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"CUP_B_HikingPack_Civ"};
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
	backpack[] = {"CUP_B_HikingPack_Civ"};
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
