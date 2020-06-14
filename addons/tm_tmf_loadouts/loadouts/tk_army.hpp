// in case of fire, tell Bear

tooltip = "Author: Bear\n\n(vest has armor)";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"CUP_U_O_TK_Green", "CUP_U_O_TK_MixedCamo"};
    vest[] = {"bear_m23_pioneer1_plate_tk"};
    backpack[] = {"B_Battle_Belt_F"};
    headgear[] = {};
    goggles[] = {
        "CUP_TK_NeckScarf",
        "CUP_G_Scarf_Face_Red",
        "JK_FullBeard_Black",
        "CUP_FR_NeckScarf2",
        "CUP_FR_NeckScarf3",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    hmd[] = {};
    faces[] = {"faceset:persian"};

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
    headgear[] = {"CUP_H_TK_Helmet", "CUP_H_TK_Helmet", "bear_helmet_M1_tan", "bear_helmet_M1_tan_alt01"};
    primaryWeapon[] = {"CUP_arifle_FNFAL5061"};
    silencer[] = {};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_762x51_FNFAL_M"),
        LIST_2("CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
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
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_5("CUP_1Rnd_HE_M203"),
        LIST_2("CUP_1Rnd_Smoke_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
	primaryWeapon[] = {"CUP_SKS"};
    magazines[] =
    {
        LIST_13("CUP_10Rnd_762x39_SKS_M"),
        LIST_3("rhs_mag_rdg2_white")
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
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    silencer[] = {"rhs_acc_pgs64_74u"};
    primaryWeapon[] = {"rhs_weap_aks74u"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("CUP_1Rnd_SmokeGreen_M203"),
        LIST_2("CUP_1Rnd_SmokeRed_M203")
    };
    linkedItems[] += {"Binocular"};
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
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    uniform[] = {"CUP_U_O_TK_Officer"};
    headgear[] = {"CUP_H_TK_Beret"};
    vest[] = {"CUP_V_O_TK_OfficerBelt2"};
    goggles[] = {"UK3CB_BAF_G_Tactical_Black"};
    primaryWeapon[] = {"CUP_arifle_AKS74U"};
    scope[] = {"cup_optic_pso_1_ak_open"};
    secondaryWeapon[] = {"rhs_weap_tt33"};
    magazines[] = {
        LIST_4("rhs_30Rnd_545x39_7N6M_green_AK"),
        LIST_3("rhs_mag_762x25_8"),
        LIST_3("rhs_mag_nspd"),
        LIST_5("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
    backpackItems[] = {};
};
class fac : sl
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
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
    backpack[] = {"rhssaf_alice_smb"};
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    primaryWeapon[] = {"CUP_lmg_M60"};
    bipod[] = {};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhssaf_alice_smb"};
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backpack[] = {"rhs_rpg"};
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    magazines[] += {"rhs_rpg7_PG7V_mag"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
    scope[] = {};
    bipod[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_12("CUP_10x_303_M"),
		LIST_4("rhs_mag_9x18_8_57N181S"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M60"};
    scope[] = {};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhssaf_alice_smb"};
    vest[] = {"bear_m23_pioneer2_plate_tk"};
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    magazines[] +=
    {
        "rhs_rpg7_OG7V_mag"
    };
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
    vest[] = {"bear_m23_pioneer2_plate_tk"};
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
    vest[] = {"bear_m23_pioneer2_plate_tk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
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
    backpack[] = {"RHS_Metis_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : car
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
    secondaryWeapon[] = {};
    backpackItems[] = {};
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
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
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backPack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        "rhs_fim92_mag"
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backPack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    backpackItems[] =
    {
        "rhs_fim92_mag"
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"CUP_H_TK_Lungee"};
    goggles[] = {};
    primaryWeapon[] = {"CUP_srifle_LeeEnfield"};
    scope[] = {"cup_optic_no23mk2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_10("CUP_10x_303_M"),
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_5("CUP_1Rnd_HE_M203"),
        LIST_2("CUP_1Rnd_Smoke_M203")
    };
    linkedItems[] += {"Binocular"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"CUP_V_O_TK_CrewBelt"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_O_TK_CrewBelt"};
    headgear[] = {"rhs_tsh4"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_alt"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
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
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_3("DemoCharge_Remote_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"rhssaf_alice_smb"};
    items[] +=
    {
        "APERSTripMine_Wire_Mag",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};