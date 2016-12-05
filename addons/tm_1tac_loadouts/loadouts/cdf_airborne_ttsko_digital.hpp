// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = 
	{
		"rhsgref_uniform_para_ttsko_mountain",
		"rhsgref_uniform_para_ttsko_oxblood",
		"rhsgref_uniform_para_ttsko_urban"
	};
   	vest[] = {};
   	backpack[] = {"B_FieldPack_oli"};
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
    linkedItems[] = {
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
		"rhsgref_6b27m_ttsko_digi",
		"rhsgref_6b27m_ttsko_digi",
		"rhsgref_6b27m_ttsko_digi",
		"rhsgref_6b27m_ttsko_urban"
	};
	vest[] = {"rhsgref_otv_digi","rhsgref_otv_khaki"};
    backpack[] = {"B_FieldPack_oli"};
    primaryWeapon[] = {"rhs_weap_m21a_pr"};
    scope[] = {"rhs_acc_rakursPM"};
    silencer[] = {};
    magazines[] =
    {
        LIST_11("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhsgref_30rnd_556x45_m21_t"),
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
	backpack[] = {"rhsusf_falconii"};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m21s_pr"};
	magazines[] =
    {
        LIST_6("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhsgref_30rnd_556x45_m21_t"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
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
    primaryWeapon[] = {"rhs_weap_m21s_fold"};
	scope[] = {};
	magazines[] =
    {
        LIST_6("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhsgref_30rnd_556x45_m21_t"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
		LIST_2("SmokeShellGreen")
    };
	secondaryWeapon[] = {"rhs_weap_rshg2"};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
	secondaryWeapon[] = {};
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
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellYellow"),
		LIST_6("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhsgref_30rnd_556x45_m21_t"),
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
	primaryWeapon[] = {"rhs_weap_m249_pip_L_para"};
	bipod[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
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
	backpack[] = {"B_FieldPack_oli"};
	primaryWeapon[] = {"rhs_weap_m240G"};
	sidearmWeapon[] = {};
	scope[] = {};
	magazines[] =
	{
		LIST_6("rhsusf_100Rnd_762x51"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
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
		"rhs_pdu4"
	};
	backpackItems[] =
	{
		LIST_4("rhsusf_100Rnd_762x51")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : car
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
	secondaryAttachments[] = {"rhs_acc_pgo7v"};
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
	backpack[] = {"RHS_Kornet_Tripod_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"RHS_Kornet_Gun_Bag"};
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
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"bear_carryall_lizard"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"bear_carryall_lizard"};
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
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhs_acc_rakursPM"};
	silencer[] = {};
	primaryWeapon[] = {"rhs_weap_m21s_pr"};
    attachment[] = {"rhs_acc_2dpZenit"};
    sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_7("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhsgref_30rnd_556x45_m21_t"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
	linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
	linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
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
        LIST_3("rhs_mine_pmn2_mag"),
        LIST_3("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {};
    linkedItems[] += {"O_UavTerminal"};
};