// in case of fire, tell Bear

// dependencies: RHS: AFRF + GREF, HLC AKs, bearskins otv, bear reinf ukraine

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhsgref_uniform_para_ttsko_urban"};
   	vest[] = {};
   	backpack[] = {"rhs_sidor"};
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
    headgear[] = 
	{
		LIST_7("bear_ssh68_olive"),
		LIST_3("bear_ua_6b27m_ttsko_urban")
	};
	vest[] = {"bear_otv_tan"};
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] =
	{
		"hlc_rifle_ak74",
		"hlc_rifle_ak74_dirty",
		"hlc_rifle_ak74_dirty2",
		"rhs_weap_ak74m_fullplum"
	};
	scope[] = {};
    silencer[] = {"rhs_acc_dtk"};
    magazines[] =
    {
        LIST_11("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
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
	backpack[] = {"rhs_sidor"};
    primaryWeapon[] = {"hlc_rifle_aks74_GL"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_aks74"};
};
class m : car 
{
    displayName = "Medic";
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_rifle_aks74u"};
	silencer[] = {};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
		LIST_2("rhs_GRD40_Red"),
		LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] +=
    {
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	radios[] = {"ACRE_PRC117F"};
	magazines[] = {
		LIST_3("rhs_mag_9x18_12_57N181S"),
		LIST_2("rhs_GRD40_Green"),
		LIST_3("rhs_GRD40_Red"),
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellYellow"),
		LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
		LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	radios[] = {"ACRE_PRC117F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"rhs_pdu4"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"hlc_rifle_rpk74n"};
	bipod[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_4("rhs_45Rnd_545X39_AK"),
		LIST_2("rhs_45Rnd_545X39_7N22_AK"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_2("rhs_45Rnd_545X39_AK"),
        LIST_2("rhs_45Rnd_545X39_AK_Green"),
        LIST_2("rhs_45Rnd_545X39_7N22_AK")
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
	primaryWeapon[] = {"rhs_weap_svdp"};
	silencer[] = {};
	scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
	magazines[] =
	{
		LIST_12("rhs_10Rnd_762x54mmR_7N1"),
		"rhs_mag_rgd5",
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkm"};
	sidearmWeapon[] = {};
	backpack[] = {"rhs_sidor"};
	scope[] = {};
	magazines[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
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
		"rhs_pdu4",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_Kord_Tripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_pdu4",
		"ItemGPS"
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
class matac : r
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
		"rhs_pdu4",
		"ItemGPS"
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
class hatac : r
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
		"rhs_pdu4",
		"ItemGPS"
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
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
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
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"rhs_uniform_gorka_r_y","rhs_uniform_gorka_r_y","rhs_uniform_gorka_r_g"};
    vest[] = {"rhsgref_6b23_ttsko_mountain_sniper"};
    headgear[] = {"rhs_beanie","rhs_beanie_green"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_13("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
	backpack[] = {};
	linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"rhsgref_6b23_ttsko_mountain","rhsgref_6b23_ttsko_forest"};
    scope[] = {"rhs_acc_1p78"};
	silencer[] = {"rhs_acc_dtk"};
	primaryWeapon[] = 
	{
		"hlc_rifle_ak74",
		"hlc_rifle_ak74_dirty",
		"hlc_rifle_ak74_dirty2"
	};
    magazines[] =
    {
		LIST_7("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_4("rhs_GRD40_White"),
		LIST_4("rhs_mag_9x18_12_57N181S")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
	linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("SmokeShellGreen")
	};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("SmokeShellGreen")
	};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S")
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
	backpack[] = {"rhs_sidor"};
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
        LIST_3("rhs_mine_pmn2_mag"),
        LIST_3("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    linkedItems[] += {"O_UavTerminal"};
};
