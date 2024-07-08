tooltip = "GSG-9, 2030. Completely made up. Author: Käsmeister";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_CRYE_G3C_RGR"};
    vest[] = {""};
    backpack[] = {""};
    headgear[] = {
        "gm_ge_bgs_headgear_beret_grn_sf"
    };
    goggles[] = {"gm_ge_facewear_stormhood_blk"};
    hmd[] = {""};
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
    
    insignias[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
	headgear[] = {
		"H_HelmetB_TI_arid_F"
	};
    vest[] = {"CUP_V_B_LBT_LBV_OD"};
    backpack[] = {"B_AssaultPack_rgr"};
    primaryWeapon[] = {"gm_g11k2_ris_blk"};
	scope[] = {"rhsusf_acc_eotech_xps3"};
	attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_7("gm_50Rnd_473x33mm_B_DM11_g11_blk"),
        LIST_2("gm_50Rnd_473x33mm_B_T_DM21_g11_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
    items[] =
    {
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
    primaryWeapon[] = {"rhs_weap_hk416d10_m320"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_8("tac1_tm_mag_compat_30Rnd_556x45_M855A1_EMAG"),
		LIST_10("1Rnd_HE_Grenade_shell"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_5("gm_50Rnd_473x33mm_B_DM11_g11_blk"),
        LIST_1("gm_50Rnd_473x33mm_B_T_DM21_g11_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class m : car
{
    displayName = "Medic";
    backpack[] = {"B_AssaultPack_rgr"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit"),
        "gm_smokeshell_wht_dm25"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
	attachment[] = {"ace_acc_pointer_green"};
	silencer[] = {"rhsusf_acc_rotex_mp7"};
	bipod[] = {"rhsusf_acc_rvg_blk"};
    magazines[] =
    {
        LIST_6("rhsusf_mag_40Rnd_46x30_AP"),
        "gm_handgrenade_frag_dm51a1",
		"gm_smokeshell_wht_dm25"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
	magazines[] = 
	{
		LIST_7("gm_50Rnd_473x33mm_B_DM11_g11_blk"),
        LIST_2("gm_50Rnd_473x33mm_B_T_DM21_g11_blk"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
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
    magazines[] =
    {
        LIST_6("gm_50Rnd_473x33mm_B_DM11_g11_blk"),
        LIST_2("gm_50Rnd_473x33mm_B_T_DM21_g11_blk"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_1("gm_smokeshell_wht_dm25")
    };
};
class fac : co
{
    displayName = "Forward Air Controller";
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"gm_mg8a2_blk"};
	silencer[] = {"gm_suppressor_atec150_762mm_blk"};
	scope[] = {"gm_feroz24_stanaghk_blk"};
	bipod[] = {"gm_g8_bipod_blk"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_4("gm_100Rnd_762x51mm_B_T_DM21A2_mg8_oli"),
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        "gm_handgrenade_frag_dm51a1",
        "gm_smokeshell_wht_dm25"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("gm_100Rnd_762x51mm_B_T_DM21A2_mg8_oli")
    };
    linkedItems[] += {"Rangefinder"};
};
class rat : car
{
    displayName = "Rifleman (PzF3)";
	backpack[] = {"B_Carryall_green_F"};
    secondaryWeapon[] = {"gm_pzf3_blk"};
    backpackItems[] = {LIST_2("gm_1Rnd_60mm_heat_dm22_pzf3")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"arifle_SPAR_03_blk_F"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    scope[] = {"rhsusf_acc_su230a_mrds"};
	attachment[] = {"rhsusf_acc_anpeq15_bk_top"};
	silencer[] = {"muzzle_snds_b"};
    magazines[] =
    {
        LIST_9("ACE_20Rnd_762x51_M993_AP_Mag"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	primaryWeapon[] = {"CUP_lmg_MG3_rail"};
	scope[] = {"rhsusf_acc_su230a_mrds"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_4("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"),
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        "gm_handgrenade_frag_dm51a1",
        "gm_smokeshell_wht_dm25"
    };
	
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
	backpackItems[] = {LIST_2("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpackItems[] = {LIST_2("CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hmgg : mmgg
{
    displayName = "HMG Gunner - Same as MMG";

};
class hmgac : mmgac
{
    displayName = "HMG Ammo Carrier - Same as MMG";
};
class hmgag : mmgag
{
    displayName = "HMG Assistant Gunner - Same as MMG";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
};
class matg : rat
{
    displayName = "MAT Gunner";
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"B_Carryall_green_F"};
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm22_pzf3")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"B_Carryall_green_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm22_pzf3")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"gm_milan_launcher_weaponBag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"gm_milan_launcher_weaponBag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"gm_milan_launcher_weaponBag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
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
        "ItemWatch",
        "Rangefinder"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"gm_fim43_oli"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_70mm_he_m585_fim43")
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
        "gm_ferod16_oli",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_70mm_he_m585_fim43")
    };
};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] = {"CUP_srifle_G22_blk"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
	scope[] = {"cup_optic_leupoldmk4"};
	silencer[] = {"cup_muzzle_snds_awm"};
	bipod[] = {"cup_bipod_vltor_modpod_black"};
	magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class sp : g
{
    displayName = "Spotter";
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
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {""};
    headgear[] = {"gm_ge_bgs_headgear_beret_crew_grn_sf"};
	goggles[] = {"G_Bandanna_blk"};
    linkedItems[] += {"Rangefinder"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
	backpack[] = {"B_TacticalPack_blk"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
	sidearmAttachments[] = {"acc_flashlight_pistol"};
    vest[] = {"gm_ge_army_vest_pilot_oli"};
    headgear[] = {"gm_ge_headgear_sph4_oli"};
    goggles[] = {"default"};
    magazines[] += {LIST_2("rhsusf_mag_17Rnd_9x19_JHP")};
	linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
	backpack[] = {"B_TacticalPack_blk"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    backpackItems[] = {};
};
class jp : pp
{
    displayName = "Jet pilot";
};
class eng : smg
{
    displayName = "Combat Engineer (Explosives)";
	backpack[] = {"B_TacticalPack_blk"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",     
        LIST_4("gm_explosive_petn_charge")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : smg
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_TacticalPack_blk"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_4("gm_mine_ap_dm31")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};
