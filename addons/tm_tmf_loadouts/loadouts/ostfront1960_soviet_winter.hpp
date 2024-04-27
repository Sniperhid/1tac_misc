tooltip = "Author: Käsmeister.\n\nAlt-history WW2 Soviet Army loadout (1960s, Winter)";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhs_uniform_afghanka_winter","rhs_uniform_afghanka_winter_boots"};
	// 
   	vest[] = {"rhs_6b3_AK","rhs_6b3_AK_2","rhs_6b3_AK_3","rhs_6b3"};
   	backpack[] = {"rhs_sidor"};
   	headgear[] = {"CUP_H_TK_Helmet"};
   	goggles[] = {"gm_headgear_foliage_summer_forest_01","gm_headgear_foliage_summer_forest_02","gm_headgear_foliage_summer_forest_03","gm_headgear_foliage_summer_forest_04"};
   	hmd[] = {"usm_nvg_giglovesscarf"};
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
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_SKS"};
	secondaryWeapon[] = {};
    scope[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_12("CUP_10Rnd_762x39_SKS_M"),
        LIST_2("rhs_mag_f1"),
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
    primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_762x39mm"),
		LIST_2("rhs_mag_f1"),
		LIST_2("rhs_mag_rdg2_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akm"};
    scope[] = {};
    bipod[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_mag_f1"),
		LIST_1("rhs_mag_rdg2_white")
    };
};
class m : r
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
        LIST_1("ACE_surgicalKit"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m92"};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    silencer[] = {};
	magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_mag_f1"),
		LIST_1("rhs_mag_rdg2_white")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	vest[] = {"rhs_6b3_off"};
	sidearmWeapon[] = {"rhs_weap_tt33"};
	magazines[] += {LIST_3("rhs_mag_762x25_8")};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : r
{
    displayName = "Scout";
	vest[] = {"rhs_6b3_R148"};
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
	vest[] = {"rhs_6b3_RPK"};
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_1("rhs_75Rnd_762x39mm"),
		LIST_6("tac1_tm_mag_compat_40Rnd_762x39"),
		LIST_1("rhs_mag_f1"),
		LIST_1("rhs_mag_rdg2_white")
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("tac1_tm_mag_compat_40Rnd_762x39"),
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
	backpack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"launch_RPG7_F"};
	backPackItems[] =
	{
        LIST_3("rhs_rpg7_PG7V_mag")
	};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_Mosin_Nagant"};
	scope[] = {"cup_optic_pem"};
	magazines[] =
	{
		LIST_8("rhsgref_5Rnd_762x54_m38"),
		LIST_2("rhs_mag_f1"),
		LIST_1("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkm"};
	magazines[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : r
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
		LIST_3("rhs_100Rnd_762x54mmR")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
	backpack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgac : mmgac
{
    displayName = "HMG Ammo Carrier";
	backpack[] = {"RHS_DShkM_TripodLow_Bag"};
	backpackItems[] = {};
};
class hmgag : mmgag
{
	displayName = "HMG Assistant Gunner";
	backpack[] = {"RHS_DShkM_TripodLow_Bag"};
	backpackItems[] = {};
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
	backpack[] = {"rhs_rpg_empty"};
	scope[] = {"rhs_acc_pgo7v"};
	backpackItems[] =
	{
		LIST_4("rhs_rpg7_PG7V_mag")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] =
	{
		LIST_4("rhs_rpg7_PG7V_mag")
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
		LIST_3("rhs_rpg7_PG7V_mag")
	};
};
class hatg : matg
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {""};
	backpack[] = {"gm_fagot_launcher_weaponBag"};
	backpackItems[] = {};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"gm_fagot_launcher_weaponBag"};
	backpackItems[] = {};
};
class hatag : r
{
	displayName = "HAT Assistant Gunner";
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
    secondaryWeapon[] = {"gm_9k32m_oli"};
    backpackItems[] =
    {
		LIST_1("gm_9k32m_oli")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
		LIST_1("gm_9k32m_oli")
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
class sp : dm
{
    displayName = "Spotter";
	scope[] = {""};
	Items[] +=
    {
        "Binocular"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {""};
	hmd[] = {""};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {""};
	hmd[] = {""};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	headgear[] = {"rhs_tsh4_ess"};
	goggles[] = {""};
	hmd[] = {""};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {""};
	hmd[] = {""};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
    goggles[] = {""};
	hmd[] = {""};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    goggles[] = {""};
	hmd[] = {""};
	backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {""};
	hmd[] = {""};
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
