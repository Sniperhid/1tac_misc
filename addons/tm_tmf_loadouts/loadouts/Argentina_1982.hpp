
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhs_uniform_gorka_r_y","rhs_uniform_gorka_r_y_gloves"};
   	vest[] = {};
   	backpack[] = {"rhs_rd54_vest"};
   	headgear[] = {};
   	goggles[] = {""};
   	hmd[] = {};
    faces[] = {};
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
    headgear[] = {"rhsgref_helmet_M1_bare","rhsgref_helmet_M1_bare_alt01","usm_helmet_m1v2_wdl","usm_helmet_m1_wdl"};
	vest[] = {"rhsgref_alice_webbing"};
    backpack[] = {"rhs_rd54_vest"};
    primaryWeapon[] = {"CUP_arifle_FNFAL5060"};
    magazines[] =
    {
        LIST_8("rhs_mag_20Rnd_762x51_m61_fnfal"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_FNFAL5062"};
	magazines[] =
    {
        LIST_8("rhs_mag_20Rnd_762x51_m61_fnfal"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
        LIST_1("ACE_surgicalKit")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"sfp_kpistm45"};
    magazines[] =
    {
        LIST_6("sfp_36Rnd_9mm_kpistm45"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular"};
	magazines[] +=
    {
        LIST_2("SmokeShellGreen")		
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] +=
    {
		LIST_2("UK3CB_BAF_9_13Rnd")
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
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"rhs_weap_fnmag"};
	sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
	magazines[] =
	{
		LIST_7("rhsusf_50Rnd_762x51"),
		LIST_2("rhsusf_50Rnd_762x51_m62_tracer"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("UK3CB_BAF_9_13Rnd")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_5("rhsusf_50Rnd_762x51")
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
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	magazines[] =
	{
		LIST_8("rhsusf_50Rnd_762x51"),
		LIST_2("rhsusf_50Rnd_762x51_m62_tracer"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("UK3CB_BAF_9_13Rnd")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_6("rhsusf_50Rnd_762x51")
    };
};
class mmgag : r
{
	displayName = "MMG Assistant Gunner";
    backPack[] = {"rhssaf_alice_smb"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_5("rhsusf_50Rnd_762x51")
	};
};
class hmgg : smg
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : smg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : smg
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_M2_Tripod_Bag"};
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
	secondaryWeapon[] = {"rhs_weap_maaws"};
	secondaryAttachments[] = {"rhs_optic_maaws"};
	backpack[] = {"rhssaf_alice_smb"};
	magazines[] +=
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhssaf_alice_smb"};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class matag : r
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"rhssaf_alice_smb"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class hatg : matg
{
	displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_maaws"};
	secondaryAttachments[] = {"rhs_optic_maaws"};
	backpack[] = {"rhssaf_alice_smb"};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"rhssaf_alice_smb"};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class hatag : matag
{
	displayName = "HAT Assistant Gunner";
	backpack[] = {"rhssaf_alice_smb"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class mtrg : smg
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : smg
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : smg
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
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
    secondaryWeapon[] = {"rhs_weap_fim92"};
	backpack[] = {"rhssaf_alice_smb"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"rhssaf_alice_smb"};
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
    primaryWeapon[] = {"sfp_psg90_base"};
    scope[] = {"rhs_acc_dh520x56"};
    magazines[] =
    {
        LIST_9("sfp_9Rnd_762x51_psg90_prick"),
        LIST_2("HandGrenade")
    };
	linkedItems[] += {"Binocular"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : ftl
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhs_6sh46"};
    headgear[] = {"rhs_beanie_green"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhs_6sh46"};
    headgear[] = {"rhs_beanie_green"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"B_Battle_Belt_F"};
    headgear[] = {"rhsusf_hgu56p_green"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"B_Battle_Belt_F"};
    headgear[] = {"rhsusf_hgu56p_green"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"B_Battle_Belt_F"};
    headgear[] = {"rhsusf_hgu56p_green"};
	sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
        LIST_3("UK3CB_BAF_9_13Rnd")
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
	backpack[] = {"rhssaf_alice_smb"};
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
	backpack[] = {"rhssaf_alice_smb"};
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
class uav : car
{
    displayName = "UAV Operator";
};