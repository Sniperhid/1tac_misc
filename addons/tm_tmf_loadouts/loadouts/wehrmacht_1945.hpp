// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Chris";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_m93_olivegray"};
    vest[] = {"CUP_V_B_ALICE"};
    backpack[] = {"CUP_B_ACRScout_m95"};
    headgear[] = {"rhsgref_helmet_m1942","rhsgref_helmet_m1942_alt1","rhsgref_helmet_m1942_heersplintercover"};
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
    primaryWeapon[] = {"rhs_weap_kar98k"};
    magazines[] =
    {
        LIST_9("rhsgref_5Rnd_792x57_kar98k"),
        LIST_2("rhs_grenade_sthgr43_heerfrag_mag")
    };
};
class car : r
{
    displayName = "Carabinier";
    headgear[] = {"rhsgref_hat_m43cap_heer"};
	magazines[] =
    {
        LIST_9("rhsgref_5Rnd_792x57_kar98k")
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
    primaryWeapon[] = {"rhs_weap_MP44"};
    magazines[] =
    {
        LIST_6("rhsgref_30Rnd_792x33_SmE_StG")
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
    displayName = "Machine Gunner";
    primaryWeapon[] = {"rhs_weap_mg42"};
    sidearmWeapon[] = {"rhs_weap_type94_new"};
    magazines[] =
    {
        LIST_3("rhsgref_50Rnd_792x57_SmE_drum"),
        LIST_2("rhs_mag_6x8mm_mhp")
    };
};
class aar : r
{
    displayName = "Assistant Machine Gunner";
	magazines[] =
    {
        LIST_9("rhsgref_5Rnd_792x57_kar98k")
    };
	backpack[] = {"usm_pack_200rnd_556_bandoliers"};
    backpackItems[] =
    {
        "rhsgref_296Rnd_792x57_SmE_belt",
		LIST_4("rhsgref_50Rnd_792x57_SmE_drum")
    };
    linkedItems[] += {"Binocular"};
};
class ab : r
{
	displayName = "Ammo Bearer";
	magazines[] =
    {
        LIST_9("rhsgref_5Rnd_792x57_kar98k")
    };
	backpack[] = {"usm_pack_200rnd_556_bandoliers"};
    backpackItems[] =
    {
        "rhsgref_296Rnd_792x57_SmE_belt",
		LIST_4("rhsgref_50Rnd_792x57_SmE_drum")
    };
};
class rat : car
{
    displayName = "Rifleman (Panzerfaust 60)";
    secondaryWeapon[] = {"rhs_weap_panzerfaust60"};
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
        LIST_2("rhs_mine_TM43_mag")
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
        LIST_2("rhs_mine_smine44_press_mag")
    };
};
