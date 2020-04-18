/* assignGear specific macros */
//Dependencies - 3CB Weapons, 3CB Equipment, RHS, CUP, USM, HLC M60
tooltip = "Author: Sam";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"usm_bdu_btisrl_odg","usm_bdu_bti_odg","usm_bdu_srh_odg","usm_bdu_srl_odg","usm_bdu_odg"};
    vest[] = {};
    backpack[] = {"CUP_B_AlicePack_OD","CUP_B_AlicePack_Khaki"};
    headgear[] = {"usm_bdu_boonie_odg","","H_Bandanna_khk","usm_bdu_boonie_odg","usm_bdu_boonie_odg","usm_bdu_boonie_odg"};
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
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_OLI","rhsgref_alice_webbing"};
    primaryWeapon[] = {"rhs_weap_l1a1_wood"};
    silencer[] = {"rhsgref_acc_falmuzzle_l1a1"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_11("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
    items[] = 
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
	backpackItems[] = {"rhs_weap_m79"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_10("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
};
class sc : car
{
	displayName = "Scout";
	primaryWeapon[] = {"mbg_m16a1"};
    magazines[] =
    {
        LIST_10("rhs_mag_20Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_20Rnd_556x45_M855A1_Stanag"),
		LIST_2("rhs_grenade_mkii_mag"),
		LIST_2("SmokeShell")
	};
    linkedItems[] += {"Binocular"};
}
class m : car
{
    displayName = "Medic";
    traits[] = {"medic"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = 
    {
            LIST_15("ACE_fieldDressing"),
            LIST_20("ACE_elasticBandage"),
            LIST_20("ACE_packingBandage"),
            LIST_2("ACE_atropine"),
            LIST_10("ACE_morphine"),
            LIST_10("ACE_epinephrine"),
            LIST_5("ACE_tourniquet"),
            LIST_6("ACE_bloodIV"),
            LIST_6("ACE_splint"),
            LIST_1("ACE_surgicalKit"),
			LIST_2("SmokeShell")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    /*primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        "rhs_grenade_mkii_mag",
        LIST_2("SmokeShell")
    };*/
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellOrange")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
	primaryWeapon[] = {"mbg_m16a1"};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
		LIST_10("rhs_mag_20Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellOrange"),
		LIST_2("rhs_grenade_mkii_mag"),
        LIST_3("UK3CB_BAF_9_13Rnd")
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
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    items[] = 
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
	backpack[] = {"usm_pack_762x51_ammobelts"};
    primaryWeapon[] = {"hlc_lmg_m60"};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    bipod[] = {};
    magazines[] = {
        LIST_4("hlc_100Rnd_762x51_M_M60E4"),
        LIST_2("hlc_100Rnd_762x51_T_M60E4"),
		LIST_3("UK3CB_BAF_9_13Rnd"),
        "rhs_grenade_mkii_mag",
        "SmokeShell"
	};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_M_M60E4"),
        LIST_2("hlc_100Rnd_762x51_T_M60E4")
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
    scope[] = {"rhsgref_acc_l1a1_l2a2"};
    magazines[] =
    {
        LIST_10("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("hlc_100Rnd_762x51_T_M60E4"),
        LIST_2("hlc_100Rnd_762x51_M_M60E4"),
        "rhs_grenade_mkii_mag",
        "SmokeShell",
		LIST_3("UK3CB_BAF_9_13Rnd")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_T_M60E4")
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
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_T_M60E4")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_L111A1"};
    magazines[] =
    {
        LIST_7("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    magazines[] =
    {
        LIST_7("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
    backpackItems[] =
        {
            "UK3CB_BAF_127_100Rnd"
        };
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backpack[] = {"rhsgref_hidf_alicepack"};
    secondaryWeapon[] = {"UK3CB_BAF_Tripod"};
    magazines[] =
    {
        LIST_7("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"rhsgref_hidf_alicepack"};
    secondaryWeapon[] = {"rhs_weap_maaws"};
    secondaryAttachments[] = {};
    magazines[] =
    {
		LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        "rhs_grenade_mkii_mag",
        LIST_2("SmokeShell"),
        LIST_3("rhs_mag_maaws_HEDP")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEDP")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhsgref_hidf_alicepack"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEDP")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        "rhs_grenade_mkii_mag",
        LIST_2("SmokeShell")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"rhsgref_hidf_alicepack"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        "SmokeShell"
    };
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("SmokeShell")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_OLI"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    secondaryWeapon[] = {"UK3CB_BAF_L16"};
    backpackItems[] =
    {
        "UK3CB_BAF_1Rnd_81mm_Mo_Shells"
    };
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
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_OLI"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White")
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    vest[] = {"UK3CB_BAF_V_PLCE_Webbing_OLI"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    secondaryWeapon[] = {"UK3CB_BAF_L16_Tripod"};
    backpackItems[] =
    {
        LIST_2("UK3CB_BAF_1Rnd_81mm_Mo_Shells")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        "rhs_fim92_mag"
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
        "Rangefinder"
    };
    backpackItems[] =
    {
        "rhs_fim92_mag"
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"CUP_srifle_LeeEnfield_rail"};
    scope[] = {"optic_KHS_old"};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
        LIST_9("CUP_10x_303_M"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_4("UK3CB_BAF_9_13Rnd")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class sp : sn
{
    displayName = "Spotter";
    primaryWeapon[] = {"rhs_weap_l1a1_wood"};
	scope[] = {"rhsgref_acc_l1a1_l2a2"};
    silencer[] = {"rhsgref_acc_falmuzzle_l1a1"};
    magazines[] =
    {
        LIST_7("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("rhs_mag_20Rnd_762x51_m62_fnfal"),
        LIST_2("rhs_grenade_mkii_mag"),
        LIST_2("SmokeShell"),
        LIST_2("UK3CB_BAF_9_13Rnd")
    };
        linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"bear_uniform_m93_dpm"};
    headgear[] = {"CUP_H_USMC_Crew_Helmet"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] = {"engineer"};
    uniform[] = {"bear_uniform_m93_dpm"};
    headgear[] = {"CUP_H_USMC_Crew_Helmet"};
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
    primaryWeapon[] = {};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"default"};
	magazines[] = {
		LIST_2("SmokeShell"),
        LIST_2("UK3CB_BAF_9_13Rnd")
	};
    linkedItems[] += {"ItemGPS"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    traits[] = {"engineer"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
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
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"UK3CB_BAF_L9A1"};
    magazines[] =
    {
		LIST_2("SmokeShell"),
        LIST_4("UK3CB_BAF_9_13Rnd")
    };
    items[] = 
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] = {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    sidearmWeapon[] = {"ACE_VMH3"};
    magazines[] =
    {
		LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        "rhs_grenade_mkii_mag",
        LIST_2("SmokeShell"),
        LIST_3("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        "SLAMDirectionalMine_Wire_Mag"
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] = {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    sidearmWeapon[] = {"ACE_VMH3"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        "rhs_grenade_mkii_mag",
        "SmokeShell"
    };
    linkedItems[] += {"B_UavTerminal"};
};
