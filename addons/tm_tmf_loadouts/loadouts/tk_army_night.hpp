// in case of fire, tell Bear

tooltip = "Author: Bear\n\nFor NIGHT fighting!\n\n(vest has armor)";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_m88_takistani1", "bear_uniform_m88_takistani2"};
    vest[] = {"bear_6b5_drab", "bear_6b5_takistani"};
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
    sidearmWeapon[] = {"ACE_Flashlight_Maglite_ML300L"};
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
    primaryWeapon[] = {"rhs_weap_l1a1"};
    silencer[] = {"rhsgref_acc_falmuzzle_l1a1"};
    scope[] = {"rhsgref_acc_l1a1_anpvs2"};
    attachment[] = {};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_5("rhs_mag_20Rnd_762x51_m62_fnfal"),
        "rhs_mag_f1",
        LIST_4("ACE_HandFlare_Yellow"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Flashlight_MX991"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"bear_6b5_drab_rifleman", "bear_6b5_takistani_rifleman"};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    scope[] = {"cup_optic_an_pvs_4_m16"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_5("CUP_1Rnd_HE_M203"),
        LIST_5("CUP_1Rnd_StarFlare_White_M203"),
        LIST_2("CUP_1Rnd_Smoke_M203"),
        LIST_4("ACE_HandFlare_Yellow")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"bear_chicom_m88_plate_drab", "bear_chicom_m88_plate_takistani"};
    silencer[] = {};
    scope[] = {"rhs_acc_1pn93_1"};
    primaryWeapon[] = {"CUP_arifle_AKS74U"};
    magazines[] =
    {
        LIST_3("bear_orange_30Rnd_545x39_7N6M_AK"),
        LIST_3("bear_orange_30Rnd_545x39_AK_green"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white",
        LIST_3("ACE_HandFlare_Yellow")
    };
};
class smg_moreammo : smg
{
    vest[] = {"bear_6b5_drab", "bear_6b5_takistani"};
    magazines[] =
    {
        LIST_4("bear_orange_30Rnd_545x39_7N6M_AK"),
        LIST_4("bear_orange_30Rnd_545x39_AK_green"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("ACE_HandFlare_Yellow")
    };
};
class m : smg_moreammo
{
    displayName = "Medic";
    vest[] = {"bear_6b5_drab_sniper", "bear_6b5_takistani_sniper"};
	backpack[] = {"CUP_B_TK_Medic_Desert"};
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
    uniform[] = {"bear_uniform_m88_takistani_officer"};
    headgear[] = {"CUP_H_TK_Beret"};
    vest[] = {"bear_chicom_m88_plate_drab", "bear_chicom_m88_plate_takistani"};
    goggles[] = {"UK3CB_BAF_G_Tactical_Black"};
    primaryWeapon[] = {"CUP_arifle_AKS74U"};
    scope[] = {"rhs_acc_1pn93_1"};
    secondaryWeapon[] = {"rhs_weap_tt33"};
    magazines[] = {
        LIST_4("rhs_30Rnd_545x39_7N6M_green_AK"),
        LIST_3("rhs_mag_762x25_8"),
        LIST_3("rhs_mag_nspd"),
        LIST_5("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("ACE_HandFlare_Yellow")
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
        "ACE_Maptools",
        "ACE_Flashlight_MX991"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"rhssaf_alice_smb"};
    vest[] = {"bear_6b5_drab_rifleman", "bear_6b5_takistani_rifleman"};
    primaryWeapon[] = {"CUP_lmg_M60E4"};
    scope[] = {"cup_optic_an_pvs_4_m14"};
    bipod[] = {};
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white",
        LIST_4("ACE_HandFlare_Yellow")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhssaf_alice_smb"};
    vest[] = {"bear_6b5_drab_rifleman", "bear_6b5_takistani_rifleman"};
    backpackItems[] =
    {
        LIST_2("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
    };
    linkedItems[] += {"Binocular"};
};
class rat : smg_moreammo
{
    displayName = "Rifleman (AT)";
    backpack[] = {"rhs_rpg"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_1pn93_2"};
    magazines[] += {"rhs_rpg7_PG7V_mag"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_srifle_LeeEnfield_rail"};
    scope[] = {"cup_optic_an_pvs_4_m14"};
    bipod[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_12("CUP_10x_303_M"),
		LIST_4("rhs_mag_9x18_8_57N181S"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("ACE_HandFlare_Yellow")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white",
        LIST_4("ACE_HandFlare_Yellow")
    };
};
class mmgac : smg_moreammo
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_2("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
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
        LIST_2("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
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
        "Binocular"
    };
};
class matg : smg_moreammo
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_1pn93_2"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        "rhs_rpg7_OG7V_mag"
    };
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag")
    };
};
class matac : smg_moreammo
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
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
    primaryWeapon[] = {"CUP_srifle_LeeEnfield_rail"};
    scope[] = {"cup_optic_an_pvs_4_m14"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_10("CUP_10x_303_M"),
        LIST_4("rhs_mag_9x18_8_57N181S"),
        LIST_4("ACE_HandFlare_Yellow")
    };
};
class sp : sn
{
    displayName = "Spotter";
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    scope[] = {"cup_optic_an_pvs_4_m16"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_3("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white",
        LIST_5("CUP_1Rnd_HE_M203"),
        LIST_5("CUP_1Rnd_StarFlare_White_M203"),
        LIST_2("CUP_1Rnd_Smoke_M203"),
        LIST_4("ACE_HandFlare_Yellow")
    };
    linkedItems[] += {"Binocular"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"bear_chicom_m88_plate_drab", "bear_chicom_m88_plate_takistani"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"bear_chicom_m88_plate_drab", "bear_chicom_m88_plate_takistani"};
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
    hmd[] = {"rhs_1PN138"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
    hmd[] = {"rhs_1PN138"};
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
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_alt"};
    hmd[] = {"rhs_1PN138"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S"),
        LIST_4("ACE_HandFlare_Yellow")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Flashlight_MX991"
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