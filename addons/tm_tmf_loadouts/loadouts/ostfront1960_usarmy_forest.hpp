tooltip = "Author: Käsmeister.\n\nAlt history WW2 US Army loadout (1960s, Forest)";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"CUP_U_B_BDUv2_roll_dirty_M81","CUP_U_B_BDUv2_dirty_M81","CUP_U_B_BDUv2_roll2_dirty_M81"};
   	vest[] = {"usm_vest_pasgt_lbe_rm2","usm_vest_pasgt_lbe_rmpr"};
   	backpack[] = {"B_simc_USMC65_M41_M43_roll2","B_simc_USMC65_M41_Roll"};
   	headgear[] = {"rhsgref_helmet_M1_liner"};
   	goggles[] = {"","","","","gm_headgear_foliage_summer_forest_01","gm_headgear_foliage_summer_forest_02","gm_headgear_foliage_summer_forest_03","gm_headgear_foliage_summer_forest_04"};
   	hmd[] = {"","usm_nvg_scarf","usm_nvg_giscarf2"};
    faces[] = {"faceset:caucasian"};

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
    primaryWeapon[] = {"rhs_weap_m14"};
	secondaryWeapon[] = {"gm_m72a3_oli"};
    scope[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_8("rhsusf_20Rnd_762x51_m80_Mag"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("rhs_grenade_m15_mag")
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
    primaryWeapon[] = {"rhs_weap_m79"};
	secondaryWeapon[] = {""};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_9("1Rnd_HE_Grenade_shell"),
		LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_5("rhsusf_mag_7x45acp_MHP")
    };
};
class car : r
{
    displayName = "Rifleman";
    primaryWeapon[] = {"rhs_weap_m1garand_sa43"};
	secondaryWeapon[] = {""};
    scope[] = {};
    bipod[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_10("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_1("rhs_grenade_mkii_mag"),
        LIST_1("rhs_grenade_m15_mag")
    };
};
class m : car
{
    displayName = "Medic";
	secondaryWeapon[] = {"gm_m72a3_oli"};
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
        LIST_1("ACE_surgicalKit"),
		LIST_2("rhs_grenade_m15_mag")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m3a1"};
	secondaryWeapon[] = {""};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    silencer[] = {};
	magazines[] =
    {
        LIST_6("rhsgref_30rnd_1143x23_M1911B_SMG"),
        LIST_1("rhs_grenade_mkii_mag"),
        LIST_1("rhs_grenade_m15_mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	secondaryWeapon[] = {"gm_m72a3_oli"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
		LIST_3("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : car
{
    displayName = "FAC";
	secondaryWeapon[] = {"gm_m72a3_oli"};
	backpackItems[] = {};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	items[] = {
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_lmg_M60"};
	secondaryWeapon[] = {""};
	scope[] = {""};
	bipod[] = {""};
	magazines[] =
	{
		LIST_3("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_100Rnd_762x51_m62_tracer"),
		"rhs_grenade_mkii_mag",
		"rhs_grenade_m15_mag"
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_100Rnd_762x51_m62_tracer")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"gm_m72a3_oli"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_M21"};
	scope[] = {"cup_optic_artel_m14"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	secondaryWeapon[] = {""};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_100Rnd_762x51_M62_tracer")
    };
};
class mmgag : car
{
	displayName = "MMG Assistant Gunner";
	secondaryWeapon[] = {"gm_m72a3_oli"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhsusf_100Rnd_762x51")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Tripod_Bag"};
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
		"Binocular"
	};
};
class matg : rat
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"gm_pzf84_oli"};
	secondaryAttachments[] = {"gm_feroz2x17_pzf84_blk"};
	backpackItems[] =
	{
		LIST_3("gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_3("gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf")
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
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf")
	};
};
class hatg : matg
{
    displayName = "HAT Gunner (same as MAT)";
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier (same as MAT)";
};
class hatag : matag
{
	displayName = "HAT Assistant Gunner (same as MAT)";
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	secondaryWeapon[] = {"gm_m72a3_oli"};
    backPack[] = {"rhs_M252_Bipod_Bag"};
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
    secondaryWeapon[] = {"gm_fim43_oli"};
    backpackItems[] =
    {
		"gm_fim43_oli"
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
        "Binocular"
    };
    backpackItems[] =
    {
		"gm_fim43_oli"
    };
};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] = {"CUP_srifle_Remington700"};
	secondaryWeapon[] = {""};
	scope[] = {"cup_optic_remington"};
	magazines[] =
	{
		LIST_8("CUP_6Rnd_762x51_R700"),
		LIST_2("rhs_grenade_mkii_mag"),
		LIST_2("rhs_grenade_m15_mag")
	};
	backpack[] = {};
	Items[] =
    {
        "ACE_RangeCard"
    };
};
class sp : r
{
    displayName = "Spotter";
	Items[] =
    {
        "Binocular"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"gm_gc_army_headgear_crewhat_80_blk"};
	goggles[] = {""};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"gm_gc_army_headgear_crewhat_80_blk"};
	goggles[] = {""};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	goggles[] = {""};
    backpack[] = {};
	backpackItems[] = {};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    headgear[] = {"RHS_jetpilot_usaf"};
	goggles[] = {""};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
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
    headgear[] = {"RHS_jetpilot_usaf"};
	goggles[] = {""};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
    magazines[] =
    {
        LIST_4("CUP_20Rnd_B_765x17_Ball_M")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
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
        LIST_2("DemoCharge_Remote_Mag")
    };
	items[] += {"ACE_M26_Clacker"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_M26_Clacker"
    };
    backpackItems[] = {
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
};
