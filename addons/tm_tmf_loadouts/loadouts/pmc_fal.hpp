// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
		"CUP_I_B_PMC_Unit_43",
		"CUP_I_B_PMC_Unit_42",
		"CUP_I_B_PMC_Unit_41",
		"CUP_I_B_PMC_Unit_39",
		"CUP_I_B_PMC_Unit_36",
		"CUP_I_B_PMC_Unit_43",
		"CUP_I_B_PMC_Unit_42",
		"CUP_I_B_PMC_Unit_41",
		"CUP_I_B_PMC_Unit_39",
		"CUP_I_B_PMC_Unit_36",
		"CUP_I_B_PARA_Unit_3",
		"CUP_I_B_PARA_Unit_1",
		"CUP_I_B_PARA_Unit_8",
		"CUP_I_B_PARA_Unit_2",
		"CUP_I_B_PARA_Unit_5",
		"CUP_I_B_PARA_Unit_6",
		"U_BG_Guerilla2_3",
		"U_BG_Guerilla2_1",
		"U_BG_Guerrilla_6_1",
		"UK3CB_BAF_U_JumperUniform_MTP",
		"UK3CB_BAF_U_JumperUniform_Plain",
		"UK3CB_BAF_U_CombatUniform_MTP_TShirt",
		"usm_bdu_bnu_dcu"
	};
    headgear[] = {
		"CUP_H_PMC_Cap_Back_PRR_Tan",
		"CUP_H_PMC_Cap_Back_PRR_Grey",
		"CUP_H_PMC_Cap_Back_PRR_Grey",
		"CUP_H_CZ_Hat04",
		"CUP_H_CZ_Hat04",
		"CUP_H_PMC_Cap_EP_Tan",
		"CUP_H_PMC_Cap_EP_Grey",
		"H_Cap_oli_hs",
		"H_Cap_oli_hs",
		"CUP_H_PMC_Cap_PRR_Grey",
		"CUP_H_PMC_Cap_PRR_Tan",
		"rhsusf_bowman_cap",
		"rhsusf_Bowman",
		"H_Cap_headphones",
		"CUP_H_PMC_Beanie_Headphones_Black",
		"CUP_H_PMC_Beanie_Headphones_Khaki",
		"H_Bandanna_khk_hs",
		"CUP_H_FR_Bandana_Headset",
		"CUP_H_CZ_Pakol_headset_f_brown"
	};
    vest[] = {
		"CUP_V_MBSS_PACA_Black",
		"CUP_V_MBSS_PACA_Black",
		"CUP_V_MBSS_PACA_Green",
		"CUP_V_MBSS_PACA_Green",
		"CUP_V_B_LBT_LBV_GRN",
		"CUP_V_B_LBT_LBV_MCam",
		"CUP_V_B_LBT_LBV_Black",
		"CUP_V_B_LBT_LBV_OD",
		"CUP_V_B_Ciras_Olive",
		"CUP_V_B_Ciras_Olive2",
		"CUP_V_B_Ciras_Olive3",
		"CUP_V_B_Ciras_Olive4"
	};
    backpack[] = {"B_Battle_Belt_F"};
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
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_arifle_DSA_SA58_OSW_VFG"};
    bipod[] = {};
    scope[] = {"rhsusf_acc_compm4"};
    attachment[] = {"CUP_acc_LLM_od"};
    silencer[] = {"CUP_muzzle_mfsup_SCAR_H"};
    magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_2("CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_Desert_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m14_th3",
        "rhs_mag_an_m8hc"
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_splint"
    };
};
class g : r
{
    displayName = "Grenadier";
    backpack[] = {"B_AssaultPack_mcamo"};
    primaryWeapon[] = {"CUP_arifle_DSA_SA58_OSW_M203"};
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
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
    bipod[] = {"rhs_acc_grip_ffg2"};
    magazines[] =
    {
        LIST_6("rhsusf_mag_40Rnd_46x30_FMJ"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class m : r
{
    displayName = "Medic";
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_5("ACE_splint"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_shell"),
        LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Binocular"};
};
class sl : r
{
    displayName = "Squad Leader";
    backpack[] = {"B_AssaultPack_mcamo"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m18_green"),
        LIST_2("rhs_mag_m18_red"),
        LIST_2("rhs_mag_m18_purple")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpack[] = {"B_AssaultPack_mcamo"};
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
    backpack[] = {"B_Kitbag_mcamo"};
    primaryWeapon[] = {"CUP_arifle_DSA_SA58_DMR"};
    bipod[] = {"cup_bipod_vltor_modpod_black"};
	magazines[] =
    {
        LIST_7("CUP_30Rnd_762x51_FNFAL_M"),
        LIST_2("CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m14_th3",
        "rhs_mag_an_m8hc"
    };
    backpackItems[] = { LIST_6("CUP_30Rnd_762x51_FNFAL_M") };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m14_socom_rail"};
    silencer[] = {"rhsusf_acc_m14_flashsuppresor"};
    magazines[] =
    {
        LIST_6("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_m993_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m14_th3",
        "rhs_mag_an_m8hc"
    };
    backpackItems[] = { LIST_10("CUP_30Rnd_762x51_FNFAL_M") };
    linkedItems[] += {"ACE_Vector"};
};
class rat : r
{
    displayName = "Rifleman (M72E10)";
    secondaryWeapon[] = {"tm_weap_m72e10"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m14_socom_rail"};
    scope[] = {"uk3cb_baf_specterlds"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    silencer[] = {"rhsusf_acc_m14_flashsuppresor"};
    magazines[] =
    {
        LIST_5("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_m993_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_Mk48_nohg_tan"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        "rhs_mag_an_m8hc"
    };
    backpackItems[] = {};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Kitbag_mcamo"};
    backpackItems[] = { LIST_5("rhsusf_100Rnd_762x51") };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_Kitbag_mcamo"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ACE_Vector"
    };
    backpackItems[] = { LIST_5("rhsusf_100Rnd_762x51") };
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
    backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_maaws"};
    secondaryAttachments[] = {"rhs_weap_maaws_optic"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEAT"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HE",
        "rhs_mag_maaws_HE"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
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
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HEDP",
        "rhs_mag_maaws_HEDP"
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
class hatac : car
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
    goggles[] = {};
    primaryWeapon[] = {"UK3CB_BAF_L118A1_Covert"};
    scope[] = {"rhsusf_acc_m8541"};
    bipod[] = {};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_6("UK3CB_BAF_762_L42A1_10Rnd"),
        "rhs_mag_m67",
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    backpack[] = {};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {
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
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {
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
    backpack[] = {};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhsusf_hgu56p_visor_green"};
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
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhsusf_hgu56p_visor_mask_green"};
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
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
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