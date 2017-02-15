/* assignGear specific macros */
//Dependencies - ACE3, RHS USAF, CUP

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"CUP_U_B_BAF_DDPM_S1_RolledUp"};
   	vest[] = {};
   	backpack[] = {};
   	headgear[] = {};
   	goggles[] = {"CUP_FR_NeckScarf"};
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
        "ItemWatch",
		"ACE_Flashlight_MX991"
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
    headgear[] = {"CUP_H_BAF_Helmet_1_DDPM"};
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
    backpack[] = {"1T_B_Para_DPM"};
    primaryWeapon[] = {"CUP_arifle_L85A2"};
	goggles[] = {"CUP_FR_NeckScarf"};
    scope[] = {"CUP_optic_SUSAT"};
    attachment[] = {};
    magazines[] =
    {
        LIST_11("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
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
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier"};
    primaryWeapon[] = {"CUP_arifle_L85A2_GL"};
	scope[] = {"CUP_optic_SUSAT"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_L85A2"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Medic"};
	backpack[] = {"1T_B_Para_DPM"};
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
    primaryWeapon[] = {"CUP_arifle_L85A2"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        "HandGrenade",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"1T_B_Para_DPM"};
	magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
		LIST_2("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"delta_L9A1"};
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Officer"};
	backpack[] = {"1T_B_Para_DPM"};
    magazines[] +=
    {
        LIST_3("delta_mag_13x9mm")
    };
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	backpack[] = {"1T_B_Para_DPM"};
	magazines[] = {
		LIST_3("delta_mag_13x9mm"),
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green"),
		LIST_2("SmokeShellPurple"),
		LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
		LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        "HandGrenade",
        LIST_2("rhs_mag_an_m8hc")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpack[] = {"1T_B_Para_DPM"};
	radios[] = {"ACRE_PRC117F"};
	    magazines[] +=
    {
        LIST_2("Laserbatteries")
    };
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"Laserdesignator"
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
	primaryWeapon[] = {"CUP_lmg_minimipara"};
	bipod[] = {};
	magazines[] =
	{
		LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1"),
		LIST_3("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"),
		"HandGrenade",
		"rhs_mag_an_m8hc"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
		LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1"),
		LIST_3("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"),
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240G"};
	backpack[] = {"1T_B_Para_DPM"};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
		"HandGrenade",
		"rhs_mag_an_m8hc"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
	backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
	backpack[] = {"1T_B_Para_DPM"};
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51")
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
class hmgg : car
{
    displayName = "HMG Gunner";
	backpack[] = {"RHS_M2_Gun_Bag"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
	backpack[] = {"RHS_M2_MiniTripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"1T_B_Para_DPM"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
	linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
    };
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"1T_B_Para_DPM"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
	backpack[] = {"1T_B_Para_DPM"};
	backpackItems[] =
	{
		LIST_1("rhs_fgm148_magazine_AT")
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
class hatg : car
{
    displayName = "HAT Gunner";
	backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backPack[] = {"rhs_Tow_Gun_Bag"};
};	
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
	backPack[] = {"rhs_TOW_Tripod_Bag"};
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
	backpack[] = {"rhs_M252_Gun_Bag"};
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
    backpack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
	backpack[] = {"rhs_M252_Bipod_Bag"};
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
    uniform[] = {"CUP_U_B_BAF_DDPM_S1_RolledUp"};
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Scout"};
    headgear[] = {"CUP_H_BAF_Helmet_1_DDPM"};
    goggles[] = {"CUP_FR_NeckScarf"};
    primaryWeapon[] = {"CUP_srifle_AWM_des"};
    scope[] = {"optic_LRPS"};
	bipod[] = {"bipod_02_F_blk"};
    sidearmWeapon[] = {"delta_L9A1"};
    magazines[] =
    {
        LIST_9("CUP_5Rnd_86x70_L115A1"),
        LIST_2("HandGrenade"),
        LIST_4("delta_mag_13x9mm")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    primaryWeapon[] = {"CUP_arifle_L85A2_GL"};
	scope[] = {"CUP_optic_SUSAT"};
    magazines[] =
    {
		LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White"),
		LIST_4("delta_mag_13x9mm")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"CUP_U_B_BAF_DDPM_S1_RolledUp"};
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
    backpack[] = {"1T_B_Para_DPM"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_BAF_Crew_Helmet_DDPM"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"CUP_U_B_BAF_DDPM_S1_RolledUp"};
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
    backpack[] = {"1T_B_Para_DPM"};
    headgear[] = {"CUP_H_BAF_Crew_Helmet_DDPM"};
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
    uniform[] = {"CUP_U_B_BAF_DDPM_S1_RolledUp"};
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot"};
    headgear[] = {"H_PilotHelmetHeli_O"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_BAF_DDPM_S1_RolledUp"};
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot"};
    headgear[] = {"H_PilotHelmetHeli_O"};
	backpack[] = {"1T_B_Para_DPM"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
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
    uniform[] = {"U_I_pilotCoveralls"};
    headgear[] = {"H_PilotHelmetHeli_O"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"delta_L9A1"};
    magazines[] =
    {
        LIST_4("delta_mag_13x9mm")
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
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
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
    displayName = "Combat Engineer (AP Mines)";
    vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
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
	vest[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2","CUP_V_BAF_Osprey_Mk2_DDPM_Soldier1"};
    linkedItems[] += {"B_UavTerminal"};
};