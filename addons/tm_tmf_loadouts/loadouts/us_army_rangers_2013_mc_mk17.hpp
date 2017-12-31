/* assignGear specific macros */ 

tooltip = "Author: Bear\n\nRHS compatible\n\nSort of like the 75th Ranger Regiment but with an extra large serving of Mk17s.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhs_uniform_g3_mc"};
   	vest[] = {};
   	backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
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
    headgear[] = 
	{
		"rhsusf_mich_bare_headset",
		"rhsusf_mich_bare_alt",
		"rhsusf_mich_bare",
		"rhsusf_mich_bare_norotos",
		"rhsusf_mich_bare_norotos_alt",
		"rhsusf_mich_bare_norotos_alt_headset",
		"rhsusf_mich_bare_norotos_headset"
	};
	vest[] = {"mbavr_r"};
    primaryWeapon[] = {"CUP_arifle_Mk17_CQC_FG"};
    scope[] = {"rhsusf_acc_eotech_552"};
    attachment[] = {};
	bipod[] = {};
    magazines[] =
    {
        LIST_5("tm_20Rnd_762x51_m80_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_m993_Mag"),
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
	vest[] = {"mbavr_gl"};
    primaryWeapon[] = {"CUP_arifle_Mk17_CQC_EGLM"};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
	primaryWeapon[] = {"CUP_arifle_Mk17_CQC_FG"};
	magazines[] =
    {
        LIST_5("tm_20Rnd_762x51_m80_Mag"),
        LIST_2("rhsusf_20Rnd_762x51_m993_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"mbavr_m"};
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
    primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
	vest[] = {"mbavr_l"};
	scope[] = {};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
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
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        "rhsusf_mag_7x45acp_MHP"
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
		"rhsusf_mag_7x45acp_MHP",
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_purple"),
		LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
		LIST_4("tm_20Rnd_762x51_m80_Mag"),
        LIST_2("rhsusf_20Rnd_762x51_m993_Mag"),
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
	primaryWeapon[] = {"CUP_lmg_Mk48_wdl"};
	backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	bipod[] = {};
	scope[] = {"rhsusf_acc_eotech_552"};
	vest[] = {"mbavr_mg"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
	magazines[] =
	{
		LIST_4("rhsusf_50Rnd_762x51"),
		LIST_4("rhsusf_50Rnd_762x51_m993"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	vest[] = {"mbavr_mg"};
    backpackItems[] =
    {
        LIST_4("rhsusf_50Rnd_762x51"),
		LIST_4("rhsusf_50Rnd_762x51_m993")
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
	primaryWeapon[] = {"CUP_arifle_Mk20"};
	secondaryWeapon[] = {"rhsusf_weap_m1911a1"};
	scope[] = {"rhsusf_acc_M8541"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
	magazines[] =
	{
		LIST_3("rhsusf_mag_7x45acp_MHP"),
		LIST_4("rhsusf_20Rnd_762x51_m118_special_Mag"),
		LIST_4("rhsusf_20Rnd_762x51_m993_Mag"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240B"};
	scope[] = {"rhsusf_acc_ELCAN","rhsusf_acc_ELCAN_ard"};
	magazines[] =
	{
		LIST_3("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m993"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	vest[] = {"mbavr_mg"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m993")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	vest[] = {"mbavr_mg"};
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
		LIST_3("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m993")
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
	vest[] = {"mbavr_r"};
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
	secondaryWeapon[] = {"rhs_weap_maaws"};
	secondaryAttachments[] = {"rhs_optic_maaws"};
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
	magazines[] +=
	{
		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HEDP",
		"rhs_mag_maaws_HE"
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
	backpackItems[] =
	{
		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HEDP",
		"rhs_mag_maaws_HE"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
	vest[] = {"mbavr_r"};
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
		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HEDP",
		"rhs_mag_maaws_HE"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	vest[] = {"mbavr_r"};
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
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
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"mbavr_r"};
    backPack[] = {"B_Mortar_01_support_F"};
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
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
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
    vest[] = {"mbavr_r"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
	primaryWeapon[] = {"CUP_arifle_Mk16_STD_EGLM"};
    magazines[] =
    {
		LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White"),
		LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"mbavr_r"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {
		"rhsusf_cvc_ess",
		"rhsusf_cvc_alt_helmet",
		"rhsusf_cvc_helmet",
		"rhsusf_cvc_green_ess",
		"rhsusf_cvc_green_alt_helmet",
		"rhsusf_cvc_green_helmet"
	};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"mbavr_r"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
    headgear[] = {
		"rhsusf_cvc_ess",
		"rhsusf_cvc_alt_helmet",
		"rhsusf_cvc_helmet",
		"rhsusf_cvc_green_ess",
		"rhsusf_cvc_green_alt_helmet",
		"rhsusf_cvc_green_helmet"
	};
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
    vest[] = {"mbavr_l"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {
		"rhsusf_hgu56p_black",
		"rhsusf_hgu56p_visor_black",
		"rhsusf_hgu56p_green",
		"rhsusf_hgu56p_visor_green",
		"rhsusf_hgu56p",
		"rhsusf_hgu56p_visor"
	};
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
    vest[] = {"mbavr_l"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
    headgear[] = {
		"rhsusf_hgu56p_visor_mask_black",
		"rhsusf_hgu56p_visor_mask_Empire_black",
		"rhsusf_hgu56p_visor_mask_black_skull",
		"rhsusf_hgu56p_visor_mask_green",
		"rhsusf_hgu56p_visor_mask_green_mo",
		"rhsusf_hgu56p_visor_mask",
		"rhsusf_hgu56p_visor_mask_mo",
		"rhsusf_hgu56p_visor_mask_skull",
		"rhsusf_hgu56p_visor_mask_smiley"
	};
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
    vest[] = {"mbavr_l"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_OLI"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
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
    vest[] = {"mbavr_r"};
    backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
    magazines[] =
    {
        LIST_5("tm_20Rnd_762x51_m80_Mag"),
        LIST_2("rhsusf_20Rnd_762x51_m993_Mag"),
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
    vest[] = {"mbavr_r"};
    backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
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
	vest[] = {"mbavr_r"};
    linkedItems[] += {"B_UavTerminal"};
};