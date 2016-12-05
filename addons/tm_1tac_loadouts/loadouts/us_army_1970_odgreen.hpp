/* assignGear specific macros */

// dependencies: US military mod, RHS USF, CUP weapons + units, HLC m60 + m14, mbg_m16a2
/* Originally by Morbo */

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"usm_bdu_odg"};
   	vest[] = {};
   	backpack[] = {"CUP_B_AlicePack_Khaki"};
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
    displayName = "Rifleman (M14)";
    headgear[] = {"CUP_H_USArmy_Helmet_M1_Olive"};
	vest[] = {"usm_vest_LBE_rm"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"hlc_rifle_M14"};
    scope[] = {};
    magazines[] =
    {
        LIST_7("hlc_20Rnd_762x51_B_M14"),
        "rhs_mag_m67",
		"SmokeShell"
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing")
	};
};
class ra : r
{
    displayName = "Rifleman (M16)";
    headgear[] = {"CUP_H_USArmy_Helmet_M1_Olive"};
	vest[] = {"usm_vest_LBE_rm"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"mbg_m16a1"};
    scope[] = {};
    magazines[] =
    {
        LIST_9("mbg_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
		"SmokeShell",
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing")
	};
};
class car : ra
{
    displayName = "Carabinier";
    primaryWeapon[] = {"mbg_m16a1"};
};
class g : car
{
    displayName = "Grenadier";
	vest[] = {"usm_vest_LBE_gr"};
	primaryWeapon[] = {"CUP_glaunch_M79"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_18("1Rnd_HE_Grenade_shell"),
        LIST_6("rhsusf_mag_7x45acp_MHP"),
		LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_4("1Rnd_Smokered_Grenade_shell"),
		LIST_2("CUP_1Rnd_StarCluster_Red_M203"),
		LIST_2("CUP_1Rnd_StarCluster_Green_M203"),
		LIST_2("CUP_1Rnd_StarCluster_White_M203")
    };
};
class m : ra
{
    displayName = "Medic";
	primaryWeapon[] = {"rhs_weap_M590_5RD"};
	magazines[] =
    {
        LIST_6("rhsusf_5Rnd_00Buck"),
		LIST_3("rhsusf_5Rnd_Slug"),
        LIST_2("SmokeShell"),
    };
	backpack[] = {"usm_pack_m5_medic"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_3("SmokeShell")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
};
class ftl : r
{
    displayName = "Fireteam Leader (M14)";
    magazines[] +=
    {
        LIST_4("rhs_mag_an_m8hc"),
		LIST_2("SmokeShellPurple")
    };
	backPack[] = {"CUP_B_AlicePack_Khaki"};
    linkedItems[] += {"Binocular"};
};
class ftla : ra
{
    displayName = "Fireteam Leader (M16)";
    magazines[] +=
    {
        LIST_4("rhs_mag_an_m8hc"),
		LIST_2("SmokeShellPurple")
    };
	backPack[] = {"CUP_B_AlicePack_Khaki"};
    linkedItems[] += {"Binocular"};
};
class sl : ftla
{
    displayName = "Squad Leader";
	vest[] = {"usm_vest_LBE_rmp"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
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
	backpack[] = {"usm_pack_st138_prc77"};
	radios[] = {"ACRE_PRC117F"};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Platoon Sergeant";
	backpack[] = {"usm_pack_st138_prc77"};
	backpackItems[] = {
		LIST_2("SmokeShell"),
		LIST_2("SmokeShellPurple")
	};
	radios[] = {"ACRE_PRC117F"};
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
	primaryWeapon[] = {"hlc_lmg_m60"};
	bipod[] = {};
	backPack[] = {"usm_pack_762x51_ammobelts"};
	vest[] = {"usm_vest_LBE_mg"};
	magazines[] =
	{
		LIST_4("hlc_100Rnd_762x51_M_M60E4"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc"
	};
};
class aar : ra
{
    displayName = "Assistant Automatic Rifleman";
	backPack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_4("hlc_100Rnd_762x51_M_M60E4")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    backpackItems[] =
	{
        "rhs_weap_m72a7"
    };
};
class dm : r
{
	displayName = "Designated Marksman";
	scope[] = {"hlc_optic_artel_m14"};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("hlc_100Rnd_762x51_M_M60E4")
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
		LIST_4("hlc_100Rnd_762x51_M_M60E4")
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
		"ItemWatch",
		"Binocular",
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	secondaryWeapon[] = {"tf47_m3maaws"};
	magazines[] +=
	{
		"tf47_m3maaws_HEAT"
	};
	backpackItems[] =
	{
		LIST_2("tf47_m3maaws_HEAT")
	};
};
class matac : ra
{
	displayName = "MAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("tf47_m3maaws_HEAT")
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
		LIST_2("tf47_m3maaws_HEAT")
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
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
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
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
        "ItemWatch",
        "Binocular",
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_3("rhs_fim92_mag")
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
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
};
class sp : sn
{
    displayName = "Spotter";
};
class vc : baseman
{
    displayName = "Vehicle Commander";
    vest[] = {"usm_vest_pasgt"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"usm_helmet_cvc"};
    linkedItems[] += {"Binocular"};
	magazines[] += {
		LIST_5("rhsusf_mag_7x45acp_MHP"),
		LIST_2("SmokeShellPurple")
	};
};
class vd : baseman
{
    displayName = "Vehicle Driver";
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    vest[] = {"usm_vest_pasgt"};
    headgear[] = {"usm_helmet_cvc"};
	magazines[] += {
		LIST_5("rhsusf_mag_7x45acp_MHP")
	};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	backpackItems[] = {};
};
class pp : vd
{
    displayName = "Helicopter Pilot";
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
	magazines[] += {
		LIST_2("SmokeShellPurple")
	};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Plane pilot";
    uniform[] = {"usm_bdu_odg"};
    vest[] = {"rhs_vest_pistol_holster"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
    goggles[] = {"G_Lowprofile"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
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