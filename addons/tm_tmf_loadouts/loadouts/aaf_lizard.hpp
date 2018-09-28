// in case of fire, tell Bear

tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_indep_lizard"};
   	vest[] = {};
   	backpack[] = {"B_AssaultPack_rgr"};
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
    headgear[] = {"bear_mich_lizard","bear_mich_olivedrab"};
	vest[] = {"rhsgref_otv_khaki"};
    primaryWeapon[] = {"hlc_rifle_g3a3v"};
	bipod[] = {};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("hlc_20rnd_762x51_b_G3"),
        LIST_2("hlc_20rnd_762x51_T_G3"),
        "rhs_mag_m67",
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
    primaryWeapon[] = {"HLC_Rifle_g3ka4_GL"};
	bipod[] = {};
   	backpack[] = {"bear_carryall_lizard"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
	bipod[] = {};
    scope[] = {};
	magazines[] =
    {
        LIST_7("hlc_20rnd_762x51_b_G3"),
        LIST_2("hlc_20rnd_762x51_T_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class m : r
{
    displayName = "Medic";
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
	primaryWeapon[] = {"hlc_smg_mp5a2"};
    magazines[] =
    {
        LIST_5("hlc_30Rnd_9x19_B_MP5"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Binocular"};
};
class sl : r
{
    displayName = "Squad Leader";
    magazines[] +=
    {
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
        "Binocular"
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
	primaryWeapon[] = {"tac1_tm_rhsgref_mg3"};
   	backpack[] = {"bear_carryall_lizard"};
	bipod[] = {};
	magazines[] =
	{
		LIST_4("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80"),
		"rhs_mag_an_m8hc"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
   	backpack[] = {"bear_carryall_lizard"};
    backpackItems[] = { LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80") };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"hlc_rifle_PSG1A1_RIS"};
	scope[] = {"CUP_optic_LeupoldMk4_CQ_T"};
	bipod[] = {"bipod_01_F_blk"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"tac1_tm_rhsgref_mg3"};
	magazines[] =
	{
		LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80"),
		"rhs_mag_an_m8hc"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
   	backpack[] = {"bear_carryall_lizard"};
	backpackItems[] = { LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80") };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
   	backpack[] = {"bear_carryall_lizard"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] = { LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80") };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_M2_Tripod_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
    backpack[] = {"bear_carryall_lizard"};
	secondaryWeapon[] = {"rhs_weap_maaws"};
	secondaryAttachments[] = {};
	magazines[] +=
	{
		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HEAT"
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"bear_carryall_lizard"};
	backpackItems[] =
	{
		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HE",
		"rhs_mag_maaws_HE"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
    backpack[] = {"bear_carryall_lizard"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HEDP",
		"rhs_mag_maaws_HEDP"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"rhs_Tow_Gun_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"rhs_TOW_Tripod_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	backpack[] = {"rhs_TOW_Tripod_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
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
    backPack[] = {"rhs_M252_Bipod_Bag"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
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
	backpack[] = {"bear_carryall_lizard"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
		LIST_2("rhs_fim92_mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"bear_carryall_lizard"};
	magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_b_G3"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"rhs_booniehat2_marpatwd","rhsusf_bowman_cap","rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_sr25"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_2("rhsusf_20Rnd_762x51_SR25_m993_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
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
    scope[] = {"rhsusf_acc_ACOG3"};
	primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_pmag"};
	silencer[] = {"rhsusf_acc_SF3P556"};
	sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_10("30Rnd_556x45_Stanag"),
        LIST_3("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"B_AssaultPack_rgr"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
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
    backpack[] = {"B_AssaultPack_rgr"};
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
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
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
    backpack[] = {"B_AssaultPack_rgr"};
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
	backpack[] = {"bear_carryall_lizard"};
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
	backpack[] = {"bear_carryall_lizard"};
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
    linkedItems[] += {"B_UavTerminal"};
};