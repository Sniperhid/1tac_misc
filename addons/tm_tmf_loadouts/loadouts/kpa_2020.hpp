tooltip = "Author: Fingers. A more well-equipped version of Takistani Insurgents designed for TvTs.";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhsgref_uniform_woodland"};
   	vest[] = {"V_TacVest_camo"};
   	backpack[] = {"CUP_B_CivPack_WDL"};
   	headgear[] = {"rhsgref_helmet_pasgt_woodland","rhsgref_helmet_pasgt_woodland_rhino"};
   	goggles[] = {};
   	hmd[] = {};
    faces[] = {"faceset:asian"};

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
    primaryWeapon[] = {"rhs_weap_ak74_2","rhs_weap_ak74"};
    silencer[] = {"rhs_acc_dtk1983"};
	magazines[] =
    {
        LIST_9("rhs_30Rnd_545x39_7N6M_AK"),
        "rhs_mag_f1",
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
    primaryWeapon[] = {"rhs_weap_ak74_gp25","rhs_weap_aks74_gp25"};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_545x39_7N6M_AK"),
        "rhs_mag_f1",
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74_2","rhs_weap_aks74"};
    scope[] = {};
    attachment[] = {};
    silencer[] = {"rhs_acc_dtk1983"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N6M_AK"),
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
   	headgear[] = {"usm_bdu_cap_wdl"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x18_8_57N181S")
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
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	bipod[] = {};
	magazines[] =
	{
		"rhs_75Rnd_762x39mm",
		LIST_6("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		"rhs_mag_f1",
		LIST_2("rhs_mag_rdg2_white")
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v"};
	backPack[] = {"rhs_rpg_empty"};
	backPackItems[] =
	{
        LIST_3("rhs_rpg7_PG7V_mag"),
		LIST_2("rhs_rpg7_OG7V_mag"),
	};
};
class dm : r
{
	displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_aks74n"};
	scope[] = {"rhs_acc_pso1m2"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkm"};
	backpack[] = {"rhssaf_alice_md2camo"};
	scope[] = {};
	magazines[] =
	{
		LIST_3("rhs_100Rnd_762x54mmR"),
	};
};
class mmgac : smg
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"rhssaf_alice_md2camo"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : car
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"rhssaf_alice_md2camo"};
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
	secondaryAttachments[] = {"rhs_acc_pgo7v3"};
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
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
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
    scope[] = {"rhs_acc_pso1m2"};
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
    headgear[] = {"rhs_zsh7a_mike"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    headgear[] = {"rhs_zsh7a_mike"};
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
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"rhssaf_alice_md2camo"};
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
