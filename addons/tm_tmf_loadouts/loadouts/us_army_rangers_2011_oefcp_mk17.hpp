tooltip = "Author: Bear\n\nRHS compatible\n\nSort of like the 75th Ranger Regiment but with an extra large serving of Mk17s.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_acu_oefcp"};
    vest[] = {};
    backpack[] = {"rhsusf_falconii_mc"};
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

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    insignias[] = {};
    faces[] = {"faceset:american"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
        "bear_opscore_ranger_green_cover_pelt_nsw_cam",
        "bear_opscore_ranger_green_cover_pelt_nsw",
        "bear_opscore_ranger_green_cover_pelt_cam",
        "bear_opscore_ranger_green_cover_pelt",
        "bear_opscore_ranger_green_cover_pelt",
        "bear_opscore_ranger_green_cover_pelt",
        
        "bear_opscore_multicam_cover_pelt",
        "bear_opscore_multicam2_cover_pelt",
        "bear_opscore_multicam3_cover_pelt",
        "bear_opscore_multicam4_cover_pelt",
        "bear_opscore_multicam5_cover_pelt",
        "bear_opscore_multicam6_cover_pelt",
        
        "bear_opscore_multicam_cover_pelt_cam",
        "bear_opscore_multicam2_cover_pelt_cam",
        "bear_opscore_multicam3_cover_pelt_cam",
        "bear_opscore_multicam4_cover_pelt_cam",
        "bear_opscore_multicam5_cover_pelt_cam",
        "bear_opscore_multicam6_cover_pelt_cam"
    };
    vest[] = {
        "CUP_V_CPC_communications_rngr",
        "CUP_V_CPC_medical_rngr",
        "CUP_V_CPC_tl_rngr",
        "CUP_V_CPC_communicationsbelt_rngr",
        "CUP_V_CPC_Fastbelt_rngr",
        "CUP_V_CPC_lightbelt_rngr",
        "CUP_V_CPC_tlbelt_rngr"
    };
    primaryWeapon[] = {"rhs_weap_mk17_CQC"};
    scope[] = 
    {
		"rhsusf_acc_eotech"
    };
    attachment[] = {"rhsusf_acc_anpeq15side"};
    bipod[] = {"rhsusf_acc_grip2_tan", "rhsusf_acc_grip3"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_SCAR_762x51_m80a1_epr"),
        LIST_3("rhs_mag_20Rnd_SCAR_762x51_m62_tracer"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
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
    vest[] = {
        "CUP_V_CPC_weapons_rngr",
        "CUP_V_CPC_weaponsbelt_rngr",
        "CUP_V_CPC_tl_rngr",
        "CUP_V_CPC_tlbelt_rngr",
        "CUP_V_CPC_communications_rngr",
        "CUP_V_CPC_communicationsbelt_rngr"
    };
    primaryWeapon[] = {"rhs_weap_mk17_CQC"};
    sidearmWeapon[] = {"rhs_weap_M320"};
    secondaryWeapon[] = {};
    magazines[] +=
    {
        LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_mk17_CQC"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_SCAR_762x51_m80a1_epr"),
        LIST_2("rhs_mag_20Rnd_SCAR_762x51_m62_tracer"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class m : car
{
    displayName = "Medic";
    vest[] = {
        "bear_cpc_medical_rngr_patch",
        "bear_cpc_medicalbelt_rngr_patch"
    };
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
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
    scope[] = {"rhsusf_acc_eotech_xps3"};
    vest[] = {"CUP_V_CPC_lightbelt_rngr"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"bear_eagleaiii_multicam"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"lerca_1200_tan","ItemGPS"};
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
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_mag_m715_Green"),
        LIST_3("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_purple"),
        LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
        LIST_4("rhs_mag_20Rnd_SCAR_762x51_m80a1_epr"),
        LIST_2("rhs_mag_20Rnd_SCAR_762x51_m62_tracer"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
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
        "ItemGPS",
        "ACE_Vector"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
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
    backpack[] = {"bear_eagleaiii_multicam"};
    primaryWeapon[] = {"CUP_lmg_Mk48"};
    bipod[] = {};
    scope[] = {"rhsusf_acc_eotech_xps3"};
    vest[] = {"bear_mbav_mg_green"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"bear_eagleaiii_multicam"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M136 AT4)";
    secondaryWeapon[] = {"rhs_weap_M136"};
    backpackItems[] = {"tm_weap_m72e10"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_mk17_LB"};
    scope[] = 
    {
		"cup_optic_sb_11_4x20_pm"
    };
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_4("rhs_mag_20Rnd_SCAR_762x51_m118_special"),
        LIST_4("rhs_mag_20Rnd_SCAR_762x51_mk316_special"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    scope[] = {"rhsusf_acc_acog_mdo"};
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m993"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"bear_eagleaiii_multicam"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m993")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"bear_eagleaiii_multicam"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m993")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : car
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
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
    secondaryAttachments[] = {"rhsusf_acc_anpeq15side"};
    backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HE"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HE"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"UK3CB_BAF_B_Carryall_OLI"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HE"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
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
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : car
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
        "lerca_1200_tan",
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
        "lerca_1200_tan",
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
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
    linkedItems[] += {"ItemGPS"};
};
class sp : g
{
    displayName = "Spotter";
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_cvc_ess",
        "rhsusf_cvc_alt_helmet",
        "rhsusf_cvc_helmet",
        "rhsusf_cvc_green_ess",
        "rhsusf_cvc_green_alt_helmet",
        "rhsusf_cvc_green_helmet"
    };
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_cvc_ess",
        "rhsusf_cvc_alt_helmet",
        "rhsusf_cvc_helmet",
        "rhsusf_cvc_green_ess",
        "rhsusf_cvc_green_alt_helmet",
        "rhsusf_cvc_green_helmet"
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_hgu56p_black",
        "rhsusf_hgu56p_visor_black",
        "rhsusf_hgu56p_green",
        "rhsusf_hgu56p_visor_green",
        "rhsusf_hgu56p",
        "rhsusf_hgu56p_visor"
    };
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {
        "rhsusf_hgu56p_visor_mask_black",
        "rhsusf_hgu56p_visor_mask_Empire_black",
        "rhsusf_hgu56p_visor_mask_black_skull",
        "rhsusf_hgu56p_visor_mask_green",
        "rhsusf_hgu56p_visor_mask_green_mo",
        "rhsusf_hgu56p_visor_mask",
        "rhsusf_hgu56p_visor_mask_mo",
        "rhsusf_hgu56p_visor_mask_skull",
        "rhsusf_hgu56p_visor_mask_smiley"
    };
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
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
    uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"bear_eagleaiii_multicam"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_oli"};
    magazines[] =
    {
        LIST_6("rhs_mag_20Rnd_SCAR_762x51_m80_ball"),
        LIST_2("rhs_mag_an_m8hc"),        
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
    backpack[] = {"B_Carryall_oli"};
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