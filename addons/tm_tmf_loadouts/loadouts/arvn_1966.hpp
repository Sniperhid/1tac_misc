/* assignGear specific macros */
tooltip = "Author: Fingers";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhsgref_uniform_og107"};
   	vest[] = {};
   	backpack[] = {};
   	headgear[] = {};
   	goggles[] = {""};
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
    headgear[] = {"rhsgref_helmet_M1_bare","rhsgref_helmet_M1_bare_alt01","rhsgref_helmet_M1_painted","rhsgref_helmet_M1_painted_alt01"};
	vest[] = {"rhsgref_alice_webbing"};
    backpack[] = {};
    primaryWeapon[] = {"rhs_weap_m1garand_sa43"};
    scope[] = {};
    magazines[] =
    {
        LIST_11("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"),
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
    primaryWeapon[] = {"rhs_weap_m79"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    magazines[] =
    {
        LIST_12("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),        
		"HandGrenade",
        "SmokeShell",
		LIST_4("rhsusf_mag_7x45acp_MHP")		
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m3a1"};
    backpack[] = {"rhsgref_hidf_alicepack"};
	magazines[] =
    {
        LIST_7("rhsgref_30rnd_1143x23_M1911B_SMG"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : r
{
    displayName = "Medic";
    backpack[] = {"usm_pack_m5_medic"};
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
    backpack[] = {};
    primaryWeapon[] = {"rhs_weap_m3a1"};
    magazines[] =
    {
        LIST_6("rhsgref_30rnd_1143x23_M1911B_SMG"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
		LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class sl : car
{
    displayName = "Squad Leader";
    backpack[] = {"usm_pack_st138_prc77"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"rhsgref_hat_M1951"};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhssaf_zrak_rd7j"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"hlc_lmg_m60"};
	backPack[] = {"usm_pack_762x51_ammobelts"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
	magazines[] =
	{
		LIST_5("hlc_100Rnd_762x51_M_M60E4"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("rhsusf_mag_7x45acp_MHP")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backPack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_M_M60E4")
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"hlc_rifle_M14_Bipod"};
	scope[] = {"hlc_optic_artel_m14"};
	magazines[] =
	{
		LIST_10("hlc_20Rnd_762x51_B_M14"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"hlc_lmg_m60"};
	backPack[] = {"usm_pack_762x51_ammobelts"};
	scope[] = {};
	magazines[] =
	{
		LIST_5("hlc_100Rnd_762x51_M_M60E4"),
		"HandGrenade",
		"SmokeShell",
		LIST_2("rhsusf_mag_7x45acp_MHP")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backPack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_M_M60E4")
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
		"rhssaf_zrak_rd7j"
	};
	backpackItems[] =
	{
		LIST_3("hlc_100Rnd_762x51_M_M60E4")
	};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : r
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_M2_Tripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhssaf_zrak_rd7j"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_maaws"};
	secondaryAttachments[] = {"rhs_optic_maaws"};
	backpack[] = {"rhsgref_hidf_alicepack"};
	magazines[] +=
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhsgref_hidf_alicepack"};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class matag : r
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"rhsgref_hidf_alicepack"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhssaf_zrak_rd7j"
	};
	backpackItems[] =
	{
		LIST_2("rhs_mag_maaws_HEAT"),
		"rhs_mag_maaws_HE"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"rhsgref_hidf_alicepack"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"rhsgref_hidf_alicepack"};
	backpackItems[] =
	{
	"rhs_fgm148_magazine_AT"
	};
};
class hatag : r
{
	displayName = "HAT Assistant Gunner";
	backpack[] = {"rhsgref_hidf_alicepack"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhssaf_zrak_rd7j"
	};
};
class mtrg : r
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
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
};
class samg : r
{
    displayName = "AA Missile Specialist";
	backpack[] = {"rhsgref_hidf_alicepack"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"rhsgref_hidf_alicepack"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"rhsgref_uniform_tigerstripe"};
    vest[] = {"rhsgref_alice_webbing"};
    headgear[] = {"usm_bdu_boonie_tgrstp"};
    goggles[] = {""};
    primaryWeapon[] = {"hlc_rifle_M14_Bipod"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_7("hlc_20Rnd_762x51_B_M14"),
        "HandGrenade",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
	backpack[] = {};
	linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class sp : sn
{
    displayName = "Spotter";
	primaryWeapon[] = {"rhs_weap_m1garand_sa43"};
    magazines[] =
    {
		LIST_8("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("HandGrenade"),
        "SmokeShell",
		LIST_3("rhsusf_mag_7x45acp_MHP")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhsgref_hat_M1951"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhsgref_hat_M1951"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {""};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {""};
    linkedItems[] += {"ItemGPS"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {""};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_3("rhsusf_mag_7x45acp_MHP")
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
	backpack[] = {"rhsgref_hidf_alicepack"};
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
	backpack[] = {"rhsgref_hidf_alicepack"};
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
};