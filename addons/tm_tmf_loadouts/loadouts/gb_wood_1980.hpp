/* assignGear specific macros */

tooltip = "Author: Sam, with help from Fingers and Crazy";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_m93_dpm"};
   	vest[] = {};
   	backpack[] = {"1T_B_Para_dpm"};
   	headgear[] = {};
   	goggles[] = {};
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
    headgear[] = {"rhs_beanie_green"};
	vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW"};
    backpack[] = {"UK3CB_BAF_B_Carryall_DPMW"};
    primaryWeapon[] = {"UK3CB_BAF_L1A1"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_11("UK3CB_BAF_762_20Rnd"),
        LIST_2("UK3CB_BAF_762_20Rnd_T"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
	/*vest[] = {"rhsusf_iotv_ocp_Grenadier"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };*/
};
class car : r
{
    displayName = "Carabinier";
    /*primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};*/
};
class m : car
{
    displayName = "Medic";
	headgear[] = {"H_Booniehat_oli"};
	backpack[] = {"CUP_B_CivPack_WDL"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("SmokeShell")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    /*primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };*/
};
class ftl : g
{
    displayName = "Fireteam Leader";
	headgear[] = {"UK3CB_BAF_H_Beret_GG"};
    magazines[] +=
    {
        /*LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),*/
		LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
	headgear[] = {"UK3CB_BAF_H_Beret_GG_PRR"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_7x45acp_MHP")
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
	magazines[] = {
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
		/*LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("1Rnd_SmokeRed_Grenade_shell"),*/
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellPurple"),
		/*LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),*/
		LIST_7("UK3CB_BAF_762_20Rnd"),
        LIST_2("UK3CB_BAF_762_20Rnd_T"),
        "HandGrenade",
        LIST_2("SmokeShell")
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
		"ItemWatch"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"UK3CB_BAF_L7A2"};
	bipod[] = {};
	magazines[] =
	{
		LIST_4("UK3CB_BAF_762_100Rnd_T"),
		LIST_2("UK3CB_BAF_762_100Rnd"),
		"HandGrenade",
		"SmokeShell"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("UK3CB_BAF_762_100Rnd_T")
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
	scope[] = {"UK3CB_BAF_SUIT"};
	magazines[] =
	{
		LIST_10("UK3CB_BAF_762_20Rnd"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"UK3CB_BAF_L7A2"};
	scope[] = {};
	magazines[] =
	{
		LIST_4("UK3CB_BAF_762_100Rnd_T"),
		LIST_2("UK3CB_BAF_762_100Rnd"),
		"HandGrenade",
		"SmokeShell"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_100Rnd_T")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_Tripod"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_3("UK3CB_BAF_762_100Rnd_T")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"UK3CB_BAF_L111A1"};
	backpackItems[] =
	{
		LIST_2("UK3CB_BAF_127_100Rnd")
	};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"UK3CB_BAF_B_Carryall_DPMW"};
	backpackItems[] =
		{
			LIST_5("UK3CB_BAF_127_100Rnd")
		};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_Tripod"};
	backPack[] = {"UK3CB_BAF_B_Carryall_DPMW"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_3("UK3CB_BAF_127_100Rnd")
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"tf47_m3maaws"};
	secondaryAttachments[] = {};
	backpack[] = {"bear_carryall_dpm"};
	magazines[] +=
	{
		LIST_4("tf47_m3maaws_HEDP")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"bear_carryall_dpm"};
	backpackItems[] =
	{
		LIST_3("tf47_m3maaws_HEDP")
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"bear_carryall_dpm"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_3("tf47_m3maaws_HEDP")
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_L16"};
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
	backpackItems[] =
	{
		LIST_5("UK3CB_BAF_1Rnd_81mm_Mo_Shells"),
		LIST_5("UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White")
	};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW"};
    secondaryWeapon[] = {"UK3CB_BAF_L16_Tripod"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
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
        "ItemWatch",
        "Rangefinder",
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
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_LeeEnfield_rail"};
    scope[] = {"optic_KHS_old"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_9("CUP_10x_303_M"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
	primaryWeapon[] = {"UK3CB_BAF_L1A1"};
    magazines[] =
    {
		LIST_7("UK3CB_BAF_762_20Rnd"),
        LIST_2("UK3CB_BAF_762_20Rnd_T"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"bear_uniform_m93_dpm"};
    backpack[] = {"B_FieldPack_oli"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_USMC_Crew_Helmet"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"bear_uniform_m93_dpm"};
    backpack[] = {"B_FieldPack_oli"};
    headgear[] = {"CUP_H_USMC_Crew_Helmet"};
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
    uniform[] = {"bear_uniform_m93_dpm"};
    vest[] = {};
    backpack[] = {"B_FieldPack_oli"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"bear_uniform_m93_dpm"};
    backpack[] = {"B_FieldPack_oli"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"default"};
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
    uniform[] = {"bear_uniform_m93_dpm"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    sidearmWeapon[] = {"ACE_VMH3"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
	items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    sidearmWeapon[] = {"ACE_VMH3"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_M26_Clacker",
		"ACE_DefusalKit"
    };
    backpackItems[] = {
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
	vest[] = {"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW"};
    linkedItems[] += {"B_UavTerminal"};
};
