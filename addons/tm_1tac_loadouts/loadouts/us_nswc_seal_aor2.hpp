// in case of fire, tell Bear


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"bear_uniform_g3_aor2"};
   	vest[] = {};
   	backpack[] = {"rhsusf_falconii_coy"};
   	headgear[] = {};
   	goggles[] = {"default"};
   	hmd[] = 
	{
		// "rhsusf_ANPVS_15"
	};
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
    headgear[] = 
	{
		"rhsusf_opscore_aor2_pelt_nsw",
		"rhsusf_opscore_aor2_pelt",
		"rhsusf_opscore_aor2"
	};
	vest[] = {"rhsusf_spc_rifleman"};
    primaryWeapon[] = 
	{
		LIST_3("rhs_weap_mk18_KAC_wd"),
		LIST_3("rhs_weap_mk18_wd"),
		LIST_3("rhs_weap_m4a1_blockII_wd"),
		LIST_3("rhs_weap_m4a1_blockII_KAC_wd"),
		
		"rhs_weap_mk18_KAC_bk",
		"rhs_weap_mk18_bk",
		"rhs_weap_mk18",
		"rhs_weap_m4a1_blockII_KAC",
		"rhs_weap_m4a1_blockII_KAC_bk",
		"rhs_weap_m4a1_blockII_bk",
		"rhs_weap_m4a1_blockII"
	};
	bipod[] = 
	{
		"rhsusf_acc_grip2",
		"rhsusf_acc_grip3",
		""
	};
    scope[] = 
	{
		"rhsusf_acc_SpecterDR_OD"
	};
    silencer[] = 
	{
		"rhsusf_acc_SF3P556",
		"rhsusf_acc_SF3P556",
		"rhsusf_acc_SF3P556",
		"rhsusf_acc_SFMB556"
	};
    attachment[] = 
	{
		"rhsusf_acc_anpeq15side_bk"
	};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
	vest[] = {"rhsusf_spc_teamleader"};
    primaryWeapon[] = 
	{
		LIST_3("rhs_weap_m4a1_blockII_M203_wd"),
		"rhs_weap_mk18_m320",
		"rhs_weap_m4a1_blockII_M203",
		"rhs_weap_m4a1_blockII_M203_bk"
	};
	bipod[] = {};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"rhsusf_spc_corpsman"};
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
	vest[] = {"rhsusf_spc_light"};
	primaryWeapon[] = {"rhsusf_weap_MP7A1_base_f"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
	attachment[] = {"rhsusf_acc_M952V"};
	bipod[] = {};
	backpackItems[] = {};
    magazines[] =
    {
        LIST_3("rhsusf_mag_40Rnd_46x30_FMJ"),
        LIST_2("rhsusf_mag_40Rnd_46x30_JHP"),
        LIST_2("rhsusf_mag_40Rnd_46x30_AP"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : r
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	vest[] = {"rhsusf_spc_squadleader"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ"),
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellYellow")
    };
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
	primaryWeapon[] = {"rhs_weap_m249_pip_S_vfg"};
	bipod[] = {};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
	vest[] = {"rhsusf_spc_iar"};
	magazines[] =
	{
		LIST_5("rhsusf_100Rnd_556x45_soft_pouch"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_sr25_ec_wd"};
	scope[] = {"rhsusf_acc_premier_low"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
	silencer[] = {"rhsusf_acc_SR25S"};
	magazines[] =
	{
		LIST_10("rhsusf_20Rnd_762x51_m118_special_Mag"),
		LIST_2("HandGrenade"),
		LIST_2("SmokeShell")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	vest[] = {"rhsusf_spc_mg"};
	primaryWeapon[] = {"rhs_weap_m240B"};
	scope[] = {"rhsusf_acc_SpecterDR_A"};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
		"HandGrenade",
		"SmokeShell",
		LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	vest[] = {"rhsusf_spc_mg"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	vest[] = {"rhsusf_spc_teamleader"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
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
		LIST_3("rhsusf_100Rnd_762x51")
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
	vest[] = {"rhsusf_spc_squadleader"};
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
	secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
	backpack[] = {"B_Carryall_oli"};
	magazines[] +=
	{
		LIST_2("rhs_mag_smaw_HEDP"),
		LIST_3("rhs_mag_smaw_SR")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		LIST_2("rhs_mag_smaw_HEDP"),
		"rhs_mag_smaw_SR"
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	vest[] = {"rhsusf_spc_squadleader"};
	backpack[] = {"B_Carryall_oli"};
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
		LIST_2("rhs_mag_smaw_HEDP"),
		"rhs_mag_smaw_SR"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class hatac : r
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	vest[] = {"rhsusf_spc_squadleader"};
	backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		LIST_2("rhs_fgm148_magazine_AT")
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Rangefinder",
		"ItemGPS"
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
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
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"rhsusf_spc_squadleader"};
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
	backpack[] = {"B_Carryall_oli"};
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
    vest[] = {"rhsusf_spc_corpsman"};
    headgear[] = {"rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_M107_w"};
    scope[] = {"rhsusf_acc_premier"};
	bipod[] = {};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_10Rnd_STD_50BMG_M33"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"rhsusf_spc_squadleader"};
    scope[] = {"rhsusf_acc_SpecterDR_OD"};
	primaryWeapon[] = 
	{
		"rhs_weap_mk18_wd"
	};
	silencer[] = {"rhsusf_acc_SF3P556"};
	sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_6("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("1Rnd_SmokeGreen_Grenade_shell")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
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
    vest[] = {"rhsusf_spc_rifleman"};
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
    vest[] = {"rhsusf_spc_rifleman"};
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
	vest[] = {"rhsusf_spc_squadleader"};
    linkedItems[] += {"B_UavTerminal"};
};