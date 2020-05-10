// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Chris";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"usm_bdu_bti_odg"};
    vest[] = {"CUP_V_B_ALICE"};
    backpack[] = {"B_simc_USMC65_M41_M43_roll"};
    headgear[] = {"rhsgref_helmet_M1_bare", "rhsgref_helmet_M1_bare_alt01"};
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
    items[] = 
	{
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
	};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"rhs_weap_m1garand_sa43"};
    magazines[] =
    {
        LIST_9("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("rhs_grenade_mkii_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    headgear[] = {"rhsgref_hat_m1941cap"};
	magazines[] =
    {
        LIST_9("rhsgref_8Rnd_762x63_M2B_M1rifle")
    };
};
class m : car 
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
	backpackItems[] =
	{
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
class ftl : r
{
    displayName = "Assistant Squad Leader";
	backpack[] = {"usm_pack_st138_prc77"};
    linkedItems[] += {"Binocular"};
};
class sl : r
{
    displayName = "Squad Leader";
    primaryWeapon[] = {"rhs_weap_m3a1"};
    magazines[] =
    {
        LIST_6("rhsgref_30rnd_1143x23_M1911B_SMG")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
    };
};
class co : car
{
    displayName = "Platoon Leader";
};
class ar : r
{
    displayName = "Automatic Rifleman (M14/BAR near enough)";
    primaryWeapon[] = {"rhs_weap_m14"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_20Rnd_762x51_m80_Mag"),
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
	backpackItems[] =
	{
		LIST_8("rhsusf_20Rnd_762x51_m80_Mag")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	magazines[] =
    {
        LIST_9("rhsgref_8Rnd_762x63_M2B_M1rifle")
    };
    backpackItems[] =
	{
		LIST_8("rhsusf_20Rnd_762x51_m80_Mag")
	};
    linkedItems[] += {"Binocular"};
};
class ab : r
{
	displayName = "Ammo Bearer";
	magazines[] =
    {
        LIST_9("rhsgref_8Rnd_762x63_M2B_M1rifle")
    };
    backpackItems[] =
	{
		LIST_8("rhsusf_20Rnd_762x51_m80_Mag")
	};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"CUP_B_AlicePack_OD"};
    backpackItems[] = {
        "ACE_Clacker",
        "ToolKit",
		"ACE_DefusalKit",
        LIST_4("rhs_ec400_sand_mag"),
        LIST_2("rhs_ec200_sand_mag"),
        LIST_2("rhs_ec75_sand_mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (AT Mines)";
    backpack[] = {"CUP_B_AlicePack_OD"};
    backpackItems[] = {
        "ACE_Clacker",
        "ToolKit",
		"ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag")
    };
};
class engim : car
{
    displayName = "Combat Engineer (AP Mines)";
    backpack[] = {"CUP_B_AlicePack_OD"};
    backpackItems[] = {
        "ACE_Clacker",
        "ToolKit",
		"ACE_DefusalKit",
        LIST_2("rhs_mine_m3_pressure_mag")
    };
};
