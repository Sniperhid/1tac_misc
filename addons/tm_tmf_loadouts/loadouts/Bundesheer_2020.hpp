
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"usm_bdu_gry"};
   	vest[] = {};
   	backpack[] = {"B_Kitbag_rgr"};
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
    headgear[] = {"usm_helmet_pasgt_ce_gry","usm_helmet_pasgt_ceswd_gry"};
	vest[] = {"CUP_V_CPC_Fastbelt_rngr"};
    backpack[] = {"B_Kitbag_rgr"};
    primaryWeapon[] = {"hlc_rifle_auga2"};
    scope[] = {"CUP_optic_CompM2_low_coyote"};
    magazines[] =
    {
        LIST_11("hlc_30Rnd_556x45_B_AUG"),
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
    primaryWeapon[] = {"hlc_rifle_auga2carb"};
	magazines[] =
    {
        LIST_9("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
	vest[] = {"bear_cpc_medicalbelt_rngr_patch"};
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
    primaryWeapon[] = {"hlc_rifle_auga2para"};
    magazines[] =
    {
        LIST_6("hlc_25Rnd_9x19mm_M882_AUG"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"lerca_1200_black","ItemGPS"};
    sidearmWeapon[] = {"rhs_weap_M320"};
	vest[] = {"CUP_V_CPC_weaponsbelt_rngr"};
	magazines[] +=
    {
        LIST_2("SmokeShellGreen"),
		LIST_4("1Rnd_HE_Grenade_shell"),
		LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell")
		
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"CUP_V_CPC_communicationsbelt_rngr"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_11("hlc_30Rnd_556x45_B_AUG"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_2("SmokeShellGreen"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP")
    };
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_black",
        "ItemGPS"
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
	primaryWeapon[] = {"tac1_tm_rhsgref_mg3"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	magazines[] =
	{
		LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
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
	primaryWeapon[] = {"tac1_tm_rhsgref_mg3"};
    backPack[] = {"rhssaf_alice_smb"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	magazines[] =
	{
		LIST_6("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_4("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
    backPack[] = {"rhssaf_alice_smb"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_black",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_4("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
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
		"lerca_1200_black",
		"ItemGPS"
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
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhssaf_alice_smb"};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"rhssaf_alice_smb"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_black",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class hatg : r
{
    displayName = "HAT Gunner";
	backpack[] = {"sfp_rbs56_weapon_bag"};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"sfp_rbs56_support_bag"};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	backpack[] = {"sfp_rbs56_support_bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_black",
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
        "lerca_1200_black",
        "ItemGPS"
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
        "lerca_1200_black",
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
    primaryWeapon[] = {"sfp_psg90_base"};
    scope[] = {"rhs_acc_dh520x56"};
    magazines[] =
    {
        LIST_9("sfp_9Rnd_762x51_psg90_prick"),
        LIST_2("HandGrenade")
    };
	linkedItems[] += {"lerca_1200_black","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : ftl
{
    displayName = "Spotter";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"CUP_V_CPC_light_rngr"};
    headgear[] = {"rhsusf_cvc_green_alt_helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_CPC_light_rngr"};
    headgear[] = {"rhsusf_cvc_green_alt_helmet"};
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
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_3("rhsusf_mag_17Rnd_9x19_JHP")
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
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};