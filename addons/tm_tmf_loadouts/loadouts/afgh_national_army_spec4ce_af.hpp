// in case of fire, tell Bear

tooltip = "Author: Bear\n\nAssisted by NATO during Operation Enduring Freedom";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_indep2_spec4ce_afghan_forest"};
   	vest[] = {};
   	backpack[] = {"bear_sidor_tan"};
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
    headgear[] = {
		LIST_8("rhssaf_helmet_m97_olive_nocamo"),
		"rhssaf_helmet_m97_olive_nocamo_black_ess",
		"rhssaf_helmet_m97_olive_nocamo_black_ess_bare"
	};
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    primaryWeapon[] = 
	{
		"rhs_weap_m16a4_carryhandle"
	};
	bipod[] = {};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_11("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
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
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle_M203"};
	bipod[] = {};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
	backpack[] = {"rhs_medic_bag"};
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
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("SmokeShellGreen")
    };
};
class sl : r
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    magazines[] +=
    {
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellYellow")
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
	primaryWeapon[] = {"rhs_weap_m249_pip"};
	bipod[] = {};
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
	magazines[] =
    {
        LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] = {"rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag","rhs_rpg7_OG7V_mag"};
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
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
	primaryWeapon[] = {"rhs_weap_m240G"};
	scope[] = {};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
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
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
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
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryWeaponItems[] = {"rhs_acc_pgo7v"};
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
	backpackItems[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
	backpackItems[] = {"rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag","rhs_rpg7_OG7V_mag","rhs_rpg7_OG7V_mag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	backpack[] = {"rhs_TOW_Tripod_Bag"};
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
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
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
	backpack[] = {"B_Carryall_cbr"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_cbr"};
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
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    headgear[] = {"rhs_booniehat2_marpatwd","rhsusf_bowman_cap","rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_sr25"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_2("rhsusf_20Rnd_762x51_m993_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    scope[] = {"rhsusf_acc_ACOG3"};
	primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_pmag"};
	silencer[] = {"rhsusf_acc_SF3P556"};
	sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_10("30Rnd_556x45_Stanag"),
        LIST_3("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhsusf_cvc_ess","rhsusf_cvc_helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    headgear[] = {"rhsusf_cvc_ess","rhsusf_cvc_helmet"};
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
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
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
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
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
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    backpack[] = {"B_Carryall_cbr"};
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
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
	backpack[] = {"B_Carryall_cbr"};
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
	vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    linkedItems[] += {"B_UavTerminal"};
};