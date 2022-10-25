tooltip = "Author: Käsmeister.\n\nAlt-history WW2 British SAS loadout (1960s)";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"UK3CB_BAF_U_JumperUniform_Plain"};
	// 
   	vest[] = {"CUP_Vest_RUS_6B45_Sh117_Green"};
   	backpack[] = {"B_simc_USMC65_M41_M43_roll2","B_simc_USMC65_M41_Roll"};
   	headgear[] = {"UK3CB_BAF_H_Beret_SAS"};
   	goggles[] = {"immersion_cigs_cigar0","murshun_cigs_cig0","CUP_G_Scarf_Face_Blk","","","CUP_G_Scarf_Face_Grn","rhsusf_shemagh_grn","CUP_FR_NeckScarf3","CUP_FR_NeckScarf","dvk_shemag_altcsat","usm_scarf","usm_scarf2"};
   	hmd[] = {};
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
    primaryWeapon[] = {"rhs_weap_l1a1_wood"};
	secondaryWeapon[] = {"gm_m72a3_oli"};
    scope[] = {};
    silencer[] = {"rhsgref_acc_falmuzzle_l1a1"};
    sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
    magazines[] =
    {
        LIST_9("rhs_mag_20Rnd_762x51_m80_fnfal"),
		LIST_2("CUP_13Rnd_9x19_Browning_HP"),
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
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_7("rhs_mag_20Rnd_762x51_m80_fnfal"),
		LIST_2("CUP_13Rnd_9x19_Browning_HP"),
        LIST_1("rhs_grenade_mkii_mag"),
		LIST_1("rhs_grenade_m15_mag")
    };
};
class m : r
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
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
		LIST_1("rhs_grenade_m15_mag")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m3a1_specops"};
	secondaryWeapon[] = {""};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    silencer[] = {};
	magazines[] =
    {
        LIST_6("rhsgref_30rnd_1143x23_M1911B_SMG"),
		LIST_2("CUP_13Rnd_9x19_Browning_HP"),
        LIST_1("rhs_grenade_mkii_mag"),
		LIST_1("rhs_grenade_m15_mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
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
class fac : r
{
    displayName = "Scout";
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	vest[] = {"rhs_6b3_RPK"};
	primaryWeapon[] = {"CUP_lmg_M60"};
	secondaryWeapon[] = {""};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_5("rhsusf_100Rnd_762x51"),
		LIST_2("CUP_13Rnd_9x19_Browning_HP"),
		LIST_1("rhs_grenade_mkii_mag"),
		LIST_1("rhs_grenade_m15_mag")
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	secondaryWeapon[] = {""};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"gm_m72a3_oli"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
	scope[] = {"cup_optic_no23mk2"};
	magazines[] =
	{
		LIST_8("CUP_10x_303_M"),
		LIST_2("CUP_13Rnd_9x19_Browning_HP"),
		LIST_2("rhs_grenade_mkii_mag"),
		LIST_1("rhs_grenade_m15_mag")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
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
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
	backpack[] = {"RHS_M2_Gun_Bag"};
};
class hmgac : mmgac
{
    displayName = "HMG Ammo Carrier";
	backpack[] = {"RHS_M2_Tripod_Bag"};
	backpackItems[] =
	{
		""
	};
};
class hmgag : mmgag
{
	displayName = "HMG Assistant Gunner";
	backpack[] = {"RHS_M2_Tripod_Bag"};
	backpackItems[] =
	{
		""
	};
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
	scope[] = {"gm_feroz2x17_pzf84_blk"};
	magazines[] +=
	{
		LIST_3("gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf")
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
    displayName = "HAT Gunner";
	secondaryWeapon[] = {""};
	backpack[] = {"gm_milan_launcher_weaponBag"};
	backpackItems[] =
	{
		""
	};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"gm_milan_launcher_weaponBag"};
	backpackItems[] =
	{
		""
	};
};
class hatag : r
{
	displayName = "HAT Assistant Gunner";
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
		LIST_1("gm_fim43_oli")
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
		LIST_1("gm_fim43_oli")
    };
};
class sn : dm
{
    displayName = "Sniper";
	Items[] +=
    {
        "ACE_RangeCard"
    };
};
class sp : r
{
    displayName = "Spotter";
	Items[] +=
    {
        "Binocular"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4_ess"};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4_ess"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	headgear[] = {"rhs_tsh4_ess"};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_zsh7a_mike"};
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
    headgear[] = {"rhs_zsh7a_mike"};
	sidearmWeapon[] = {"CUP_hgun_Browning_HP"};
    magazines[] =
    {
        LIST_5("CUP_13Rnd_9x19_Browning_HP")
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
