// incomplete

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {
		"U_C_Poor_1",
		"U_C_Poloshirt_tricolour",
		"U_C_Poloshirt_salmon",
		"U_C_Man_casual_6_F",
		"U_C_Man_casual_5_F",
		"U_C_Man_casual_4_F",
		"U_I_C_Soldier_Para_1_F",
		"U_I_C_Soldier_Para_4_F",
		"U_I_C_Soldier_Para_5_F",
		"CUP_U_O_TK_Green"
	};
   	vest[] = {};
   	backpack[] = {};
   	headgear[] = {};
   	goggles[] = {};
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
    headgear[] = {};
	vest[] = {
		"V_TacChestrig_cbr_F",
		"V_TacChestrig_grn_F",
		"V_TacChestrig_oli_F"
	};
    backpack[] = {};
    primaryWeapon[] = {"rhs_weap_akm", "rhs_weap_akms", "rhs_weap_akm", "rhs_weap_akms", "rhs_weap_m92"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer")
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
    primaryWeapon[] = {"rhs_weap_akm_gp25", "rhs_weap_akms_gp25"};
	backpack[] = {"rhs_sidor"};
    magazines[] +=
    {
        LIST_6("rhs_VOG25")
    };
	uniform[] = {
		"U_I_C_Soldier_Bandit_5_F",
		"U_I_C_Soldier_Bandit_4_F",
		"U_I_C_Soldier_Bandit_1_F",
		"U_I_C_Soldier_Bandit_2_F",
		"U_C_Man_casual_4_F"
	};
	vest[] = {
		"CUP_V_OI_TKI_Jacket2_05",
		"CUP_V_OI_TKI_Jacket2_04",
		"CUP_V_OI_TKI_Jacket2_02",
		"CUP_V_OI_TKI_Jacket2_01"
	};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74u"};
	magazines[] =
    {
        LIST_9("rhs_30Rnd_545x39_7N10_AK")
    };
	uniform[] = {
		"U_I_C_Soldier_Bandit_5_F",
		"U_I_C_Soldier_Bandit_4_F",
		"U_C_Man_casual_4_F"
	};
	vest[] = {
		"CUP_V_OI_TKI_Jacket3_06",
		"CUP_V_OI_TKI_Jacket3_04",
		"CUP_V_OI_TKI_Jacket3_01"
	};
};
class m : car
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
class smg : car
{
    displayName = "Submachinegunner";
	uniform[] = {
		"U_I_C_Soldier_Bandit_5_F",
		"U_I_C_Soldier_Bandit_4_F",
		"U_I_C_Soldier_Bandit_1_F",
		"U_I_C_Soldier_Bandit_2_F",
		"U_C_Man_casual_4_F"
	};
	vest[] = {
		"CUP_V_OI_TKI_Jacket2_05",
		"CUP_V_OI_TKI_Jacket2_04",
		"CUP_V_OI_TKI_Jacket2_02",
		"CUP_V_OI_TKI_Jacket2_01"
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
	backpack[] = {"usm_pack_st138_prc77"};
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
	backPack[] = {"usm_pack_st138_prc77"};
	magazines[] = {
		LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backPack[] = {"usm_pack_alice_prc77"};
	backpackItems[] = {};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"rhs_weap_pkm"};
	backpack[] = {"rhs_sidor"};
	bipod[] = {};
	magazines[] =
	{
		LIST_3("rhs_100Rnd_762x54mmR")
	};
	uniform[] = {
		"U_I_C_Soldier_Bandit_5_F",
		"U_I_C_Soldier_Bandit_4_F",
		"U_I_C_Soldier_Bandit_1_F",
		"U_I_C_Soldier_Bandit_2_F",
		"U_C_Man_casual_4_F"
	};
	vest[] = {
		"CUP_V_OI_TKI_Jacket2_05",
		"CUP_V_OI_TKI_Jacket2_04",
		"CUP_V_OI_TKI_Jacket2_02",
		"CUP_V_OI_TKI_Jacket2_01"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
	magazines[] += {"rhs_rpg7_PG7VL_mag"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_m76"};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_10("rhsgref_10Rnd_792x57_m76")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_pkm"};
	scope[] = {};
	magazines[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"usm_pack_762x51_ammobelts"};
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
		"ItemWatch"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
	magazines[] +=
	{
		LIST_3("rhs_rpg7_PG7VL_mag")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg"};
	magazines[] +=
	{
		LIST_3("rhs_rpg7_PG7VL_mag")
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
	backpack[] = {"rhs_rpg"};
	magazines[] +=
	{
		LIST_3("rhs_rpg7_PG7VL_mag")
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
	backpack[] = {"RHS_Metis_Tripod_Bag"};
};
class mtrg : car
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
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
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
        "ItemWatch"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m76"};
	scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
    magazines[] =
    {
        LIST_8("rhsgref_10Rnd_792x57_m76"),
        LIST_2("HandGrenade")
    };
	backpack[] = {};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {};
	primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
		LIST_7("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    sidearmWeapon[] = {};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
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
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};
