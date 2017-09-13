/* assignGear specific macros */ 

tooltip = "Author: Bear\n\nAirborne forces are 'elite' infantry, and airborne mostly in name.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhs_uniform_cu_ocp_101st"};
   	vest[] = {};
   	backpack[] = {"rhsusf_falconii_mc"};
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

	// These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
	radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsusf_ach_helmet_ocp","rhsusf_ach_helmet_ess_ocp","rhsusf_ach_helmet_headset_ocp","rhsusf_ach_helmet_headset_ess_ocp"};
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
    primaryWeapon[] = {"rhs_weap_m4a1_pmag","rhs_weap_m4a1_mstock","rhs_weap_m4a1"};
    scope[] = {"rhsusf_acc_compm4"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
    primaryWeapon[] = {"rhs_weap_m4a1_m320"};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
		LIST_2("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"lerca_1200_tan","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        "rhsusf_mag_15Rnd_9x19_FMJ"
    };
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	radios[] = {"ACRE_PRC117F"};
	magazines[] = {
		"rhsusf_mag_15Rnd_9x19_FMJ",
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green"),
		LIST_2("rhs_mag_m18_purple"),
		LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
		LIST_5("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	radios[] = {"ACRE_PRC117F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ACE_Vector"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
	bipod[] = {};
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	magazines[] =
	{
		LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_sr25_ec"};
	scope[] = {"rhsusf_acc_LEUPOLDMK4"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
	magazines[] =
	{
		LIST_10("rhsusf_20Rnd_762x51_m118_special_Mag"),
		LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240B"};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
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
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
		"ItemGPS"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
	backpack[] = {"B_Carryall_oli"};
	magazines[] +=
	{
		LIST_2("rhs_mag_smaw_HEDP"),
		LIST_3("rhs_mag_smaw_SR")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		LIST_2("rhs_mag_smaw_HEDP"),
		"rhs_mag_smaw_SR"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_2("rhs_mag_smaw_HEDP"),
		"rhs_mag_smaw_SR"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
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
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
	backpack[] = {"B_Carryall_oli"};
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
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
	primaryWeapon[] = {"rhs_weap_m4a1_m320"};
    magazines[] =
    {
		LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White"),
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    headgear[] = {"H_HelmetCrew_I"};
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
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
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
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_an_m8hc"),		
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
    vest[] = {"rhsusf_spcs_ocp_rifleman"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
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
	vest[] = {"rhsusf_spcs_ocp_rifleman"};
    linkedItems[] += {"B_UavTerminal"};
};