// in case of fire, tell Bear
//Compatible with ACE Advanced Medical

tooltip = "Author: Bear\n\nEast Germany. 7.62x39 mm rifles.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_m88_strichtarn"};
   	vest[] = {};
   	backpack[] = {"bear_sidor_strichtarn"};
   	headgear[] = {};
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
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] =
	{
        "ItemMap",
        "ItemCompass",
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
    headgear[] = {"rhsgref_M56"};
	vest[] = {"bear_6sh46_high_capacity"};
    backpack[] = {"bear_sidor_strichtarn"};
    primaryWeapon[] =
	{
		"rhs_weap_akm"
	};
	scope[] = {};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
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
	backpack[] = {"bear_sidor_strichtarn"};
    primaryWeapon[] = {"rhs_weap_akm_gp25","rhs_weap_akms_gp25"};
    magazines[] =
    {
		LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_2("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akms"};
	magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class m : car 
{
    displayName = "Medic";
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
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_akms"};
	silencer[] = {};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
		LIST_2("rhs_mag_nspd")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class sl : g
{
    displayName = "Squad Leader";
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
	magazines[] = {
		LIST_2("rhs_GRD40_Green"),
		LIST_3("rhs_GRD40_Red"),
		LIST_2("rhs_mag_nspd"),
		LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
		LIST_6("rhs_30Rnd_762x39mm"),
        "rhs_30Rnd_762x39mm_tracer",
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
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
        "ACE_morphine",
        "ACE_tourniquet",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"hlc_rifle_rpk"};
	bipod[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_8("hlc_45Rnd_762x39_m_rpk"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"bear_sidor_strichtarn"};
    backpackItems[] =
    {
        LIST_5("hlc_45Rnd_762x39_m_rpk")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_m76"};
	silencer[] = {};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_16("rhsgref_10Rnd_792x57_m76"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkm"};
	sidearmWeapon[] = {};
	backpack[] = {"B_Carryall_oli"};
	scope[] = {};
	magazines[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_3("rhs_100Rnd_762x54mmR")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_DShkM_TripodLow_Bag"};
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
	secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
	magazines[] +=
	{
		"rhs_rpg7_PG7VR_mag",
		LIST_2("rhs_rpg7_PG7VL_mag")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
	backpackItems[] =
	{
		LIST_2("rhs_rpg7_PG7VR_mag"),
		"rhs_rpg7_OG7V_mag"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_pdu4"
	};
	backpackItems[] =
	{
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_TBG7V_mag",
		"rhs_rpg7_OG7V_mag"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"RHS_Metis_Tripod_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"RHS_Metis_Gun_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	secondaryWeapon[] = {};
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
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"rhs_fieldcap_khk"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m76"};
    scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_10("rhsgref_10Rnd_792x57_m76"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
	backpack[] = {};
	linkedItems[] += {"Binocular"};
};
class sp : sn
{
    displayName = "Spotter";
	backpack[] = {"B_FieldPack_cbr"};
    scope[] = {};
	silencer[] = {};
	primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
		LIST_4("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_4("rhs_GRD40_White"),
		LIST_3("rhs_mag_9x18_12_57N181S")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"bear_sidor_strichtarn"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
	linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"B_Carryall_oli"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"bear_sidor_strichtarn"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
	magazines[] += {
		LIST_2("rhs_mag_nspd")
	};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"bear_sidor_strichtarn"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_nspd")
	};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"bear_sidor_strichtarn"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S")
    };
	items[] =
	{
		LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
	};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
	items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_Carryall_oli"};
    items[] +=
    {
		"ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"bear_sidor_strichtarn"};
    linkedItems[] += {"O_UavTerminal"};
};
