/* assignGear specific macros */

// dependencies: K_MNP, CUP units + weapons, HLC AUGs, RHS USF

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"MNP_CombatUniform_Australia","MNP_CombatUniform_Australia_S"};
   	vest[] = {"MNP_Vest_Australia"};
   	backpack[] = {"B_Kitbag_rgr"};
   	headgear[] = {"MNP_Helmet_Australia"};
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
    primaryWeapon[] = {"hlc_rifle_aug"};
    scope[] = {};
    attachment[] = {"acc_pointer_IR"};
    magazines[] =
    {
        LIST_11("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("hlc_30Rnd_556x45_T_AUG"),
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
    primaryWeapon[] = {"hlc_rifle_auga3_GL_B"};
	scope[] = {"rhsusf_acc_ACOG"};
    magazines[] +=
    {
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_aug"};
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"CUP_B_USMC_AssaultPack"};
	headgear[] = {"MNP_Boonie_AUS"};
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
    primaryWeapon[] = {"hlc_rifle_aug"};
    magazines[] =
    {
        LIST_6("hlc_30Rnd_556x45_B_AUG"),
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
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
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
	radios[] = {"ACRE_PRC117F"};
	magazines[] = {
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_3("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellPurple"),
		LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
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
	sidearmWeapon[] = {"rhsusf_weap_m9"};
	magazines[] =
	{
		LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
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
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240B"};
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
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
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
	secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
	magazines[] +=
	{
		LIST_3("rhs_mag_smaw_HEDP"),
		LIST_3("rhs_mag_smaw_SR")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("rhs_mag_smaw_HEDP"),
		"rhs_mag_smaw_SR"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
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
		LIST_2("rhs_mag_smaw_HEDP"),
		"rhs_mag_smaw_SR"
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
    backPack[] = {"B_HMG_01_support_F"};
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
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
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
    scope[] = {"rhsusf_acc_ACOG_d"};
	primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203"};
    magazines[] =
    {
		LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"MNP_Vest_Light_R3"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"MNP_Vest_Light_R3"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
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
    vest[] = {"MNP_Vest_Light_R3"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"MNP_Vest_Light_R3"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	backpack[] = {;
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    vest[] = {"rhsusf_iotv_ucp"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
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