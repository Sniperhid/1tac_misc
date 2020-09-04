// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Luka Stark";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_woodland"};
    vest[] = {"CUP_V_B_GER_Carrier_Rig_2_Brown"};
    backpack[] = {""};
    headgear[] = {"rhs_6b26", "H_Bandanna_camo", "usm_bdu_cap_wdl"};
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
    primaryWeapon[] = {"rhs_weap_m70b3n"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("rhssaf_30Rnd_762x39mm_M67"),
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
	backpack[] = {"rhs_sidor"};
    magazines[] +=
    {
        LIST_5("rhs_mag_rgd5"),
        LIST_3("rhs_mag_rdg2_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_kar98k"};
	magazines[] = 
	{
		LIST_3("rhsgref_5rnd_792x57_kar98k"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
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
		LIST_6("ACE_splint"),
		LIST_1("ACE_surgicalKit")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m3a1"};
    magazines[] =
    {
        LIST_3("rhsgref_30rnd_1143x23_M1T_SMG"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_mag_rdg2_white")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_RPK74"};
	backpack[] = {"rhs_sidor"};
    magazines[] =
    {
        LIST_2("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_3("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_panzerfaust60", "rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_kar98k"};
    scope[] = {"hlc_optic_zf95base"};
    magazines[] =
    {
        LIST_4("rhsgref_5rnd_792x57_kar98k"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    magazines[] +=
    {
        LIST_2("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_2("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
    };
    backpackItems[] =
    {
        LIST_3("CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
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
        "ItemRadio",
        "ItemWatch",
        "Binocular",
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_2("rhs_rpg7_PG7V_mag"),
	LIST_1("rhs_rpg7_PG7VL_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7V_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
    };
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7V_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
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
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
    };
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : dm
{
    displayName = "Sniper";
    headgear[] = {};
    goggles[] = {"default"};
    scope[] = {"CUP_optic_SB_3_12x50_PMII"};
};
class sp : g
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {"B_AssaultPack_khk"};
    headgear[] = {"rhs_tsh4"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_tsh4"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
};
class jp : smg
{
    displayName = "Jet Pilot";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {"default"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {"B_AssaultPack_khk"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    //vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_oli"};
    backpack[] = {};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"rhs_sidor"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "DemoCharge_Remote_Mag",
        "SLAMDirectionalMine_Wire_Mag"
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"rhs_sidor"};
    items[] +=
    {
        "APERSBoundingMine_Range_Mag",
        "APERSTripMine_Wire_Mag"
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
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};