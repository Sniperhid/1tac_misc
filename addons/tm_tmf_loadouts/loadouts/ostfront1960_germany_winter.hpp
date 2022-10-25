tooltip = "Author: Käsmeister.\n\nAlt-history WW2 German Army loadout (1960s, Winter)";
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"CUP_U_O_RUS_Ratnik_Winter"};
	// 
   	vest[] = {"CUP_V_B_PASGT_winter"};
   	backpack[] = {"B_FieldPack_green_F"};
   	headgear[] = {"rhsgref_helmet_m1942_heerwintercover","rhsgref_helmet_m1942_winter_alt1"};
   	goggles[] = {"CUP_G_RUS_Balaclava_Ratnik_v2","G_Bandanna_oli","murshun_cigs_cig0","CUP_G_Scarf_Face_Blk","CUP_TK_NeckScarf","rhsusf_shemagh_grn","rhsusf_shemagh_od"};
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
    primaryWeapon[] = {"rhs_weap_MP44"};
	secondaryWeapon[] = {};
    scope[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_9("rhsgref_30Rnd_792x33_SmE_StG"),
        LIST_2("rhs_grenade_sthgr43_heerfrag_mag"),
		LIST_2("rhs_grenade_nbhgr39B_mag")
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
    primaryWeapon[] = {"gm_hk69a1_blk"};
	sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] =
    {
        LIST_9("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_4("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_kar98k"};
    scope[] = {};
    bipod[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_9("rhsgref_5Rnd_792x57_kar98k"),
        LIST_1("rhs_grenade_sthgr43_heerfrag_mag"),
		LIST_1("rhs_grenade_nbhgr39B_mag")
    };
};
class m : car
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
		LIST_2("rhs_grenade_nbhgr39B_mag")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mp2a1_blk"};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    silencer[] = {};
	magazines[] =
    {
        LIST_7("gm_32Rnd_9x19mm_B_DM51_mp2_blk"),
        LIST_2("rhs_grenade_sthgr43_heerfrag_mag"),
		LIST_1("rhs_grenade_nbhgr39B_mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"gm_p1_blk"};
	magazines[] += {LIST_3("gm_8Rnd_9x19mm_B_DM11_p1_blk")};
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
	backpack[] = {"gm_dk_army_backpack_73_oli"};
	primaryWeapon[] = {"rhs_weap_mg42"};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_1("rhsgref_296Rnd_792x57_SmK_belt"),
	};
	backpackItems[] =
    {
        LIST_1("rhsgref_296Rnd_792x57_SmK_belt"),
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
        LIST_2("rhsgref_296Rnd_792x57_SmK_belt"),
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    secondaryWeapon[] = {"gm_pzf84_win"};
	backPackItems[] =
	{
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf")
	};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"CUP_srifle_CZ550"};
	scope[] = {};
	magazines[] =
	{
		LIST_8("CUP_5x_22_LR_17_HMR_M"),
		LIST_2("rhs_grenade_sthgr43_heerfrag_mag"),
		LIST_1("rhs_grenade_nbhgr39B_mag")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	magazines[] =
	{
		LIST_1("rhsgref_296Rnd_792x57_SmK_belt"),
	};
	backpackItems[] =
    {
        LIST_1("rhsgref_296Rnd_792x57_SmK_belt"),
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
        LIST_2("rhsgref_296Rnd_792x57_SmK_alltracers_belt")
    };
};
class mmgag : car
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("rhsgref_296Rnd_792x57_SmK_alltracers_belt")
	};
};
class hmgg : mmgg
{
    displayName = "HMG Gunner";
};
class hmgac : mmgac
{
    displayName = "HMG Ammo Carrier";
};
class hmgag : mmgag
{
	displayName = "HMG Assistant Gunner";
};
class matg : rat
{
	displayName = "MAT Gunner";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
	backpackItems[] =
	{
		LIST_3("gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
	backpackItems[] =
	{
		LIST_3("gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf")
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_2("gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf")
	};
};
class hatg : matg
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {""};
	backpack[] = {"gm_fagot_launcher_weaponBag"};
	backpackItems[] =
	{
		""
	};
};
class hatac : matac
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"gm_fagot_launcher_weaponBag"};
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
	backpackItems[] =
	{
		""
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
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
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
		LIST_2("gm_1Rnd_70mm_he_m585_fim43")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"gm_dk_army_backpack_73_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
		LIST_2("gm_1Rnd_70mm_he_m585_fim43")
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
class sp : ftl
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
    goggles[] = {""};
	hmd[] = {""};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4_ess"};
    goggles[] = {""};
	hmd[] = {""};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	headgear[] = {"rhs_tsh4_ess"};
	goggles[] = {""};
	hmd[] = {""};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    headgear[] = {"gm_ge_headgear_sph4_oli"};
    goggles[] = {""};
	hmd[] = {""};
};
class pcc : car
{
    displayName = "Helicopter Crew Chief";
    goggles[] = {""};
	hmd[] = {""};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    goggles[] = {""};
	hmd[] = {""};
	backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    headgear[] = {"gm_ge_headgear_sph4_oli"};
    goggles[] = {""};
	hmd[] = {""};
	sidearmWeapon[] = {"gm_mp2a1_blk"};
    magazines[] =
    {
        LIST_5("gm_32Rnd_9x19mm_B_DM51_mp2_blk")
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
