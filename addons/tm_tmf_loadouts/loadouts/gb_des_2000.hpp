/* assignGear specific macros */
//Dependencies - ACE3, RHS USAF, CUP, 3CB Equipment

tooltip = "Author: Sam";

class baseMan {// Weaponless baseclass
	displayName = "Unarmed";
	// All randomized.
	uniform[] = {"UK3CB_BAF_U_CombatUniform_DDPM","UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve"};
	vest[] = {};
	backpack[] = {};
	headgear[] = {};
	goggles[] = {"CUP_FR_NeckScarf","rhsusf_shemagh_tan",""};
	hmd[] = {/*UK3CB_BAF_HMNVS*/};
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
	headgear[] = 
	{
		"UK3CB_BAF_H_Mk6_DDPM_A",
		"UK3CB_BAF_H_Mk6_DDPM_B",
		"UK3CB_BAF_H_Mk6_DDPM_C",
		"UK3CB_BAF_H_Mk6_DDPM_D",
		"UK3CB_BAF_H_Mk6_DDPM_E",
		"UK3CB_BAF_H_Mk6_DDPM_F"
	};
	vest[] = 
	{
		"UK3CB_BAF_V_Osprey_DDPM2",
		"UK3CB_BAF_V_Osprey_DDPM4",
		"UK3CB_BAF_V_Osprey_DDPM5",
		"UK3CB_BAF_V_Osprey_DDPM6",
		"UK3CB_BAF_V_Osprey_DDPM7",
		"UK3CB_BAF_V_Osprey_DDPM8"
	};
	backpack[] = {"UK3CB_BAF_B_Bergen_DDPM_Rifleman_A","UK3CB_BAF_B_Bergen_DDPM_Rifleman_B"};
	primaryWeapon[] = {"UK3CB_BAF_L85A2"};
	scope[] = {"UK3CB_BAF_SUSAT"};
	attachment[] = {};
	magazines[] =
	{
		LIST_8("UK3CB_BAF_556_30Rnd"),
		LIST_2("UK3CB_BAF_556_30Rnd_T"),
		LIST_2("HandGrenade"),
		LIST_2("rhs_mag_an_m8hc")
	};
	items[] =
	{
       		LIST_5("ACE_fieldDressing"),
        	LIST_3("ACE_quikclot"),
       		"ACE_morphine",
        	"ACE_tourniquet"
	};
};
class g : r
{
	displayName = "Grenadier";
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM3"};
	primaryWeapon[] = {"CUP_arifle_L85A2_GL"};
	scope[] = {"UK3CB_BAF_SUSAT"};
	magazines[] +=
	{
		LIST_4("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell")
	};
};
class car : r
{
	displayName = "Carabinier";
	primaryWeapon[] = {"UK3CB_BAF_L85A2"};
};
class m : car
{
	displayName = "Medic";
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM9"};
	backpack[] = {"UK3CB_BAF_B_Bergen_DDPM_Rifleman_B"};
	backpackItems[] = {
        	LIST_15("ACE_fieldDressing"),
        	LIST_20("ACE_elasticBandage"),
        	LIST_20("ACE_packingBandage"),
        	LIST_2("ACE_atropine"),
        	LIST_10("ACE_morphine"),
        	LIST_10("ACE_epinephrine"),
        	LIST_5("ACE_tourniquet"),
        	LIST_6("ACE_bloodIV"),
        	LIST_1("ACE_surgicalKit"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class smg : r
{
	displayName = "Submachinegunner";
	primaryWeapon[] = {"UK3CB_BAF_L22"};
	magazines[] =
	{
		LIST_6("UK3CB_BAF_556_30Rnd"),
		"HandGrenade",
		LIST_2("rhs_mag_an_m8hc")
	};
};
class ftl : g
{
	displayName = "Fireteam Leader";
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM3"};
	backpack[] = {"UK3CB_BAF_B_Bergen_DDPM_SL_A"};
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
	sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
	items[] += {"ACE_Maptools"};
	magazines[] += 
	{
		LIST_3("UK3CB_BAF_9_13Rnd")
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
class co : sl
{
	displayName = "Platoon Leader";
	magazines[] = {
		LIST_3("UK3CB_BAF_9_13Rnd"),
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green"),
		LIST_2("SmokeShellPurple"),
		LIST_3("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_7("UK3CB_BAF_556_30Rnd"),
		LIST_2("UK3CB_BAF_556_30Rnd_T"),
		"HandGrenade",
		LIST_2("rhs_mag_an_m8hc")
	};
	backpackItems[] = {};
};
class fac : co
{
	displayName = "Forward Air Controller";
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM4"};
	radios[] = {"ACRE_PRC117F"};
	magazines[] =
	{
		LIST_2("Laserbatteries"),
		LIST_3("UK3CB_BAF_9_13Rnd"),
		LIST_2("rhs_mag_m715_Green"),
		LIST_3("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green"),
		LIST_2("SmokeShellPurple"),
		LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_7("UK3CB_BAF_556_30Rnd"),
		LIST_2("UK3CB_BAF_556_30Rnd_T"),
		"HandGrenade",
		LIST_2("rhs_mag_an_m8hc")
	};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"UK3CB_BAF_Soflam_Laserdesignator"
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
	primaryWeapon[] = {"UK3CB_BAF_L110A2"};
	scope[] = {"UK3CB_BAF_SUSAT"};
	backpack[] = {"UK3CB_BAF_B_Carryall_DDPM"};
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM7"};
	bipod[] = {};
	magazines[] =
	{
		LIST_5("UK3CB_BAF_556_100Rnd_T"),
		"HandGrenade",
		"rhs_mag_an_m8hc"
	};
};
class aar : r
{
	displayName = "Assistant Automatic Rifleman";
	backpack[] = {"UK3CB_BAF_B_Carryall_DDPM"};
	backpackItems[] =
	{
		LIST_4("UK3CB_BAF_556_100Rnd_T")
	};
	linkedItems[] += {"Binocular"};
};
class rat : car
{
	displayName = "Rifleman (AT)";
	backpack[] = {"UK3CB_BAF_B_Kitbag_DDPM"};
	secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AP_Launcher"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240B"};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51_m61_ap"),
		LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
		"HandGrenade",
		"rhs_mag_an_m8hc"
	};
};
class mmgac : r
{
	displayName = "MMG Ammo Carrier";
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
	};
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51_m61_ap")
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
    secondaryWeapon[] = {"UK3CB_BAF_L111A1"};
	backpackItems[] =
	{
		"UK3CB_BAF_127_100Rnd"
	};
};
class hmgac : r
{
	displayName = "HMG Ammo Carrier";
	backpackItems[] =
	{
		"UK3CB_BAF_127_100Rnd"
	};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
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
		"UK3CB_BAF_127_100Rnd"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AP_Launcher"};
	backpack[] = {"UK3CB_BAF_B_Carryall_DDPM"};
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
	secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AT_Launcher"};
	backpack[] = {"UK3CB_BAF_B_Carryall_DDPM"};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AP_Launcher"};
	backpack[] = {"UK3CB_BAF_B_Carryall_DDPM"};
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
    secondaryWeapon[] = {"UK3CB_BAF_L16"};
	backpackItems[] =
	{
		LIST_2("UK3CB_BAF_1Rnd_81mm_Mo_Shells")
	};
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
		LIST_2("UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White")
	};
};
class mtrag : car
{
	displayName = "Mortar Assistant Gunner";																					  
    secondaryWeapon[] = {"UK3CB_BAF_L16_Tripod"};
	backpackItems[] =
	{
		LIST_2("UK3CB_BAF_1Rnd_81mm_Mo_Shells")
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS"
	};
};
class samg : car
{
	displayName = "AA Missile Specialist";
	secondaryWeapon[] = {"rhs_weap_fim92"};
	magazines[] +=
	{
		"rhs_fim92_mag"
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
		"rhs_fim92_mag"
	};
};
class sn : r
{
	displayName = "Sniper";
	uniform[] = {"UK3CB_BAF_U_CombatUniform_DDPM_Ghillie_RM"};
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM1"};
	primaryWeapon[] = {"UK3CB_BAF_L115A3_DE"};
	scope[] = {"RKSL_optic_PMII_525"};
	sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
	magazines[] =
	{
		LIST_9("UK3CB_BAF_338_5Rnd"),
		LIST_2("HandGrenade"),
		LIST_4("UK3CB_BAF_9_13Rnd")
	};
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
	displayName = "Spotter";
	uniform[] = {"UK3CB_BAF_U_CombatUniform_DDPM_Ghillie_RM"};
	primaryWeapon[] = {"UK3CB_BAF_L85A2"};
	scope[] = {"UK3CB_BAF_SUSAT"};
	magazines[] =
	{
		LIST_7("UK3CB_BAF_556_30Rnd"),
		LIST_2("UK3CB_BAF_556_30Rnd_T"),
		LIST_2("HandGrenade"),
		LIST_2("rhs_mag_an_m8hc"),
		LIST_4("UK3CB_BAF_9_13Rnd")
	};
	linkedItems[] += {"Rangefinder"};
};
class vc : smg
{
	displayName = "Vehicle Commander";
	backpack[] = {"UK3CB_BAF_B_Kitbag_DDPM"};
	radios[] = {"ACRE_PRC117F"};
	headgear[] = {"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A"};
	linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m715_Green")
	};
};
class vd : smg
{
	displayName = "Vehicle Driver";
	backpack[] = {"UK3CB_BAF_B_Kitbag_DDPM"};
	headgear[] = {"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A"};
	linkedItems[] += {"ItemGPS"};
	backpackItems[] = {"ToolKit"};
};
class vg : vd
{
	displayName = "Vehicle Gunner";
	headgear[] = {"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A"};
	backpack[] = {"UK3CB_BAF_B_Kitbag_DDPM"};
	backpackItems[] = {};
};
class pp : smg
{
	displayName = "Helicopter Pilot";
	uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
	vest[] = {"UK3CB_BAF_V_Pilot_DDPM"};
	headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
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
	uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
	vest[] = {"UK3CB_BAF_V_Pilot_DDPM"};
	headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
	backpack[] = {"UK3CB_BAF_B_Kitbag_DDPM"};
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
	sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
	magazines[] =
	{
		LIST_4("UK3CB_BAF_9_13Rnd")
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
    sidearmWeapon[] = {"ACE_VMH3"};
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM4"};
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
	displayName = "Combat Engineer (AP Mines)";
    sidearmWeapon[] = {"ACE_VMH3"};
	vest[] = {"UK3CB_BAF_V_Osprey_DDPM4"};
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
	linkedItems[] += {"B_UavTerminal"};
};
