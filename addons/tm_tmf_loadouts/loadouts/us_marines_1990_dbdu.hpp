/* assignGear specific macros */

// dependencies: US military mod, RHS USF, CUP weapons + units, HLC m60 + m14
// originally by Snippers

/* HEAVY BACKPACK - B_Carryall_oli */
/* LIGHT BACKPACK - CUP_B_AlicePack_Khaki */

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"usm_bdu_d_m"};
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
    headgear[] = {"usm_helmet_pasgt_g_d_m","usm_helmet_pasgt_d_m"};
	vest[] = {"usm_vest_pasgtdes_lbe_rm_m"};
    backpack[] = {"usm_pack_alice"};
    primaryWeapon[] = {"mbg_m16a2"};
    magazines[] =
    {
        LIST_11("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
	//goggles[] = {"rhs_ess_black","rhs_scarf","","","","",""};
	//code = "if (goggles _this == 'rhs_ess_black' && headgear _this == 'usm_helmet_pasgt_g_d_m') then {removeGoggles _this;};";
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"usm_vest_pasgtdes_lbe_gr_m"};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"mbg_m16a2"};
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
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"mbg_m16a2"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("SmokeShellGreen")
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
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
	radios[] = {"ACRE_PRC117F"};
	backpack[] = {"usm_pack_st138_prc77"};
    sidearmWeapon[] = {};
	magazines[] = {
		LIST_2("SmokeShellGreen"),
		LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	backpack[] = {"usm_pack_alice_prc119"};
	radios[] = {"ACRE_PRC117F"};
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
	primaryWeapon[] = {"hlc_lmg_m60"};
	bipod[] = {};
	vest[] = {"usm_vest_pasgt_lbv_mg"};
	backpack[] = {"usm_pack_abag_m60"};
	magazines[] =
	{
		LIST_3("hlc_100Rnd_762x51_M_M60E4"),
		"HandGrenade",
		"SmokeShell"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
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
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"hlc_rifle_m14dmr"};
	scope[] = {"hlc_optic_artel_m14"};
	bipod[] = {};
	magazines[] =
	{
		LIST_10("hlc_20Rnd_762x51_B_M14"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m240G"};
	scope[] = {};
	magazines[] =
	{
		LIST_3("rhsusf_100Rnd_762x51"),
		"HandGrenade",
		"SmokeShell"
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
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
		"Rangefinder",
		"ItemGPS"
	};
	backpack[] = {"usm_pack_alice"};
	backpackItems[] =
	{
		LIST_4("rhsusf_100Rnd_762x51")
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
		"Rangefinder",
		"ItemGPS"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
	backpack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"CUP_launch_M47"};
	magazines[] +=
	{
		"CUP_Dragon_EP1_M"
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] =
	{
		"CUP_Dragon_EP1_M"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] =
	{
		"CUP_Dragon_EP1_M"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"B_Carryall_cbr"};
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	backpack[] = {"B_Carryall_cbr"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
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
        "ItemGPS"
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
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
	backpack[] = {"B_Carryall_cbr"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_cbr"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
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
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_M40A3"};
    scope[] = {"CUP_optic_LeupoldMk4"};
	bipod[] = {"bipod_03_F_blk"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_8("CUP_5Rnd_762x51_M24"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
	primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203"};
    magazines[] =
    {
		LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"usm_bdu_dcu_m"};
    vest[] = {"usm_vest_LBE_rm_m"};
    backpack[] = {"usm_pack_st138_prc77"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"usm_helmet_cvc"};
    linkedItems[] += {"Binocular"};
	goggles[] = {};
	code = "";
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"usm_bdu_dcu_m"};
    vest[] = {"usm_vest_LBE_rm_m"};
    backpack[] = {"usm_pack_alice"};
    headgear[] = {"usm_helmet_cvc"};
    backpackItems[] = {"ToolKit"};
	goggles[] = {};
	code = "";
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	backpackItems[] = {};
	goggles[] = {};
	code = "";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	items[] += {"ACE_DAGR"};
	code = "";
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	code = "";
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	backpack[] = {};
    backpackItems[] = {};
	code = "";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
	radios[] = {"ACRE_PRC117F"};
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
	code = "";
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    uniform[] = {"usm_bdu_w_m"};
    vest[] = {"usm_vest_pasgtdes_lbe_rm_m"};
	backpack[] = {"usm_pack_alice"};
    magazines[] =
    {
		LIST_6("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
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
    uniform[] = {"usm_bdu_w_m"};
    vest[] = {"usm_vest_pasgtdes_lbe_rm_m"};
	backpack[] = {"usm_pack_alice"};
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
    linkedItems[] += {"B_UavTerminal"};
};
