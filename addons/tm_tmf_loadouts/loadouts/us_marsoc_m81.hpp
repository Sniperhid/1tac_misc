// in case of fire, tell Bear

tooltip = "Author: Bear\n\nHigh speed, low drag.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhs_uniform_g3_m81"};
   	vest[] = {};
   	backpack[] = {"rhsusf_falconii_coy"};
   	headgear[] = {};
   	goggles[] = {"default"};
   	hmd[] = 
	{
		// "rhsusf_ANPVS_15"
	};
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
		"rhsusf_opscore_mar_fg",
		"rhsusf_opscore_mar_fg",
		"rhsusf_opscore_mar_fg",
		"rhsusf_opscore_mar_fg_pelt",
		"rhsusf_opscore_mar_fg_pelt",
		"rhsusf_opscore_mar_fg_pelt",
		"rhsusf_opscore_mar_ut",
		"rhsusf_opscore_mar_ut",
		"rhsusf_opscore_mar_ut",
		"rhsusf_opscore_mar_ut_pelt",
		"rhsusf_opscore_mar_ut_pelt",
		"rhsusf_opscore_mar_ut_pelt",
		
		"rhsusf_opscore_coy_cover_pelt",
		"rhsusf_opscore_coy_cover",
		"rhsusf_opscore_rg_cover_pelt",
		"rhsusf_opscore_rg_cover",
		
		"rhsusf_opscore_fg_pelt_nsw",
		"rhsusf_opscore_fg_pelt",
		"rhsusf_opscore_fg",
		"rhsusf_opscore_paint_pelt_nsw",
		"rhsusf_opscore_paint_pelt",
		"rhsusf_opscore_paint",
		"rhsusf_opscore_ut_pelt_nsw",
		"rhsusf_opscore_ut_pelt",
		"rhsusf_opscore_ut"
	};
	vest[] = {"rhsusf_spc_rifleman"};
    primaryWeapon[] = 
	{
		"rhs_weap_mk18_KAC",
		"rhs_weap_mk18_KAC_bk",
		"rhs_weap_mk18",
		"rhs_weap_mk18_bk",
		"rhs_weap_m4a1_blockII_d",
		"rhs_weap_m4a1_blockII_KAC_d"
	};
	bipod[] = 
	{
		"rhsusf_acc_grip1",
		"rhsusf_acc_grip2",
		"rhsusf_acc_grip2_tan",
		"rhsusf_acc_grip3",
		"rhsusf_acc_grip3_tan",
		""
	};
    scope[] = 
	{
		"rhsusf_acc_eotech_xps3",
		"rhsusf_acc_eotech_xps3",
		"rhsusf_acc_eotech_552",
		"rhsusf_acc_eotech_552_d"
	};
    silencer[] = 
	{
		"rhsusf_acc_SF3P556",
		"rhsusf_acc_SFMB556"
	};
    attachment[] = 
	{
		"rhsusf_acc_anpeq15",
		"rhsusf_acc_anpeq15_bk",
		"rhsusf_acc_anpeq15_wmx"
	};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
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
	vest[] = {"rhsusf_mbav_grenadier"};
    primaryWeapon[] = 
	{
		"rhs_weap_m4a1_blockII_M203_bk",
		"rhs_weap_m4a1_blockII_M203_d",
		"rhs_weap_m4a1_blockII_M203",
		"rhs_weap_mk18_m320",
		"rhs_weap_mk18_m320"
	};
	bipod[] = {};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"rhsusf_mbav_medic"};
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
	vest[] = {"rhsusf_mbav_light"};
	primaryWeapon[] = {"rhsusf_weap_MP7A1_base_f"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
	attachment[] = {"rhsusf_acc_M952V"};
	bipod[] = {};
	backpackItems[] = {};
    magazines[] =
    {
        LIST_3("rhsusf_mag_40Rnd_46x30_FMJ"),
        LIST_2("rhsusf_mag_40Rnd_46x30_JHP"),
        LIST_2("rhsusf_mag_40Rnd_46x30_AP"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
		LIST_2("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"ItemGPS"};
};
class sl : r
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	vest[] = {"rhsusf_mbav_rifleman"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        "rhsusf_mag_17Rnd_9x19_FMJ",
		LIST_2("rhs_mag_m18_green"),
		LIST_2("rhs_mag_m18_red"),
		LIST_2("rhs_mag_m18_purple")
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
	primaryWeapon[] = {"rhs_weap_m249_pip_S"};
	bipod[] = {};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
	scope[] = 
	{
		"rhsusf_acc_eotech_552",
		"rhsusf_acc_eotech_552",
		"rhsusf_acc_eotech_552_d"
	};
    silencer[] = {"rhsusf_acc_SF3P556"};
	vest[] = {"rhsusf_mbav_mg"};
	magazines[] =
	{
		LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
		LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_sr25_ec"};
	scope[] = {"rhsusf_acc_LEUPOLDMK4"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
	magazines[] =
	{
		LIST_10("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
		LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	vest[] = {"rhsusf_mbav_mg"};
	primaryWeapon[] = {"rhs_weap_m240B_CAP"};
	scope[] = {"rhsusf_acc_ACOG_MDO"};
	silencer[] = {"rhsusf_acc_ARDEC_M240"};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	vest[] = {"rhsusf_mbav_mg"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	vest[] = {"rhsusf_mbav_rifleman"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
	vest[] = {"rhsusf_mbav_rifleman"};
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
	vest[] = {"rhsusf_mbav_rifleman"};
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
	vest[] = {"rhsusf_mbav_rifleman"};
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
    backPack[] = {"rhs_M252_Bipod_Bag"};
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
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"rhsusf_mbav_rifleman"};
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
    vest[] = {"rhsusf_mbav_rifleman"};
    headgear[] = {"rhs_Booniehat_m81","rhsusf_bowman_cap","rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_sr25"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_2("rhsusf_20Rnd_762x51_SR25_m993_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"rhsusf_mbav_rifleman"};
    scope[] = {"rhsusf_acc_ACOG3"};
	primaryWeapon[] = 
	{
		"rhs_weap_m4a1_d_mstock",
		"rhs_weap_m4a1_d"
	};
	silencer[] = {"rhsusf_acc_SF3P556"};
	sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
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
    vest[] = {"rhsusf_mbav_rifleman"};
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
    vest[] = {"rhsusf_mbav_rifleman"};
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
	vest[] = {"rhsusf_mbav_rifleman"};
    linkedItems[] += {"B_UavTerminal"};
};