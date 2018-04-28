class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_flecktarn_full","rhsgref_uniform_flecktarn"};
    vest[] = {"V_PlateCarrier2_rgr_noflag_F","V_PlateCarrier1_rgr_noflag_F"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhsusf_opscore_mar_fg_pelt","rhsusf_opscore_mar_fg"};
    goggles[] = {};
    hmd[] = {"rhsusf_Rhino"};
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
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
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
    primaryWeapon[] = {"rhs_weap_g36kv"};
	scope[] = {"rhsusf_acc_SpecterDR","rhsusf_acc_g33_xps3"};
	bipod[] = {"rhsusf_acc_grip2","rhsusf_acc_grip3"};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
	silencer[] = {"rhsusf_acc_SFMB556","rhsusf_acc_SF3P556"};
	sidearmWeapon[] = {"CUP_hgun_Phantom"};
    magazines[] =
    {
        LIST_8("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
		LIST_3("CUP_18Rnd_9x19_Phantom"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
	backpackItems[] =
	{
		"ACE_bodyBag",
		LIST_5("ACE_CableTie")
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_g36kv_ag36"};
    magazines[] =
    {
        LIST_8("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhssaf_30rnd_556x45_Tracers_G36"),
        "HandGrenade",
        LIST_2("SmokeShell"),
		LIST_3("CUP_18Rnd_9x19_Phantom"),
		LIST_5("rhs_mag_M441_HE"),
        LIST_3("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_g36c"};
	scope[] = {"rhsusf_acc_eotech_552"};
};
class m : car 
{
    displayName = "Medic";
	backpackItems[] += {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_10("ACE_bodyBag")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
	scope[] = {"rhsusf_acc_T1_high"};
	bipod[] = {"rhs_acc_grip_ffg2"};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_8("rhsusf_mag_40Rnd_46x30_FMJ"),
        "HandGrenade",
        LIST_2("SmokeShell"),
		LIST_3("CUP_18Rnd_9x19_Phantom"),
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ACE_Vector"
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
    primaryWeapon[] = {"rhs_weap_minimi_para_railed"};
    scope[] = {"rhsusf_acc_eotech_552"};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_2("rhsusf_100Rnd_556x45_soft_pouch"),
        "HandGrenade",
        "SmokeShell",
        LIST_3("CUP_18Rnd_9x19_Phantom")
    };
	backpackItems[] =
	{
		LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
	{
		LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
	};
    linkedItems[] += {"Rangefinder"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"arifle_SPAR_03_snd_F"};
    scope[] = {"optic_DMS"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_8("20Rnd_762x51_Mag"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_01_tan_F"};
    scope[] = {"rhsusf_acc_ACOG_RMR"};
    magazines[] =
    {
        LIST_2("150Rnd_93x64_Mag"),
        "HandGrenade",
        "SmokeShell",
    };
	backpackItems[] = 
	{
		LIST_3("150Rnd_93x64_Mag")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] = 
	{
		LIST_3("150Rnd_93x64_Mag")
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
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("150Rnd_93x64_Mag")
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
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    magazines[] +=
    {
        LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
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
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
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
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
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
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"H_Booniehat_oli"};
    primaryWeapon[] = {"CUP_srifle_G22_wdl"};
    scope[] = {"CUP_optic_SB_3_12x50_PMII"};
	bipod[] = {"HLC_bipod_UTGShooters"}
    sidearmWeapon[] = {"CUP_hgun_Compact"};
    magazines[] =
    {
        LIST_8("CUP_5Rnd_762x67_G22"),
        LIST_2("SmokeShell"),
        LIST_3("CUP_10Rnd_9x19_Compact")
    };
};
class sp : r
{
    displayName = "Spotter";
	headgear[] = {"H_Booniehat_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhssaf_vest_md98_digital"};
    backpack[] = {"rhssaf_kitbag_digital"};
    headgear[] = {"H_Tank_black_F"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhssaf_vest_md98_digital"};
    backpack[] = {"rhssaf_kitbag_digital"};
    headgear[] = {"H_Tank_black_F"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhssaf_vest_md98_digital"};
    backpack[] = {"rhssaf_kitbag_digital"};
    headgear[] = {"H_Tank_black_F"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
	uniform[] = {"rhsgref_uniform_olive"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhssaf_kitbag_smb"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhsgref_uniform_olive"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhssaf_kitbag_smb"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"rhsgref_uniform_olive"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhssaf_kitbag_smb"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
/*class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};*/
