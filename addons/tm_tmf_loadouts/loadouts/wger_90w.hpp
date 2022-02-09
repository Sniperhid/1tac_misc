tooltip = "West Germany 1990s Winter. Author: Toiton. See bottom of classlist for extra classes";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_ge_army_uniform_soldier_parka_80_win"};
    vest[] = {};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    headgear[] = {
        "gm_ge_headgear_m92_cover_win",
        "gm_ge_headgear_m92_cover_glasses_win"
    };
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
    
    insignias[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"gm_ge_vest_90_rifleman_flk"};
    backpack[] = {};
    primaryWeapon[] = {"gm_g36a1_blk"};
    magazines[] =
    {
        LIST_8("gm_30Rnd_556x45mm_B_DM11_g36_blk"),
        LIST_2("gm_30Rnd_556x45mm_B_T_DM21_g36_blk"),
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
    magazines[] +=
    {
        LIST_5("gm_handgrenade_frag_dm51a1")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_7("gm_30Rnd_556x45mm_B_DM11_g36_blk"),
        LIST_1("gm_30Rnd_556x45mm_B_T_DM21_g36_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class m : car
{
    displayName = "Medic";
    vest[] = {"gm_ge_vest_90_medic_flk"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
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
    primaryWeapon[] = {"gm_mp2a1_blk"};
    magazines[] =
    {
        LIST_5("gm_32Rnd_9x19mm_B_DM11_mp2_blk"),
        "gm_handgrenade_frag_dm51a1"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    vest[] = {"gm_ge_vest_90_leader_flk"};
    linkedItems[] += {"gm_ferod16_oli","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    magazines[] =
    {
        LIST_8("gm_30Rnd_556x45mm_B_DM11_g36_blk"),
        LIST_2("gm_30Rnd_556x45mm_B_T_DM21_g36_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
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
    vest[] = {"gm_ge_vest_90_machinegunner_flk"};
    primaryWeapon[] = {"gm_mg3_blk"};
    secondaryWeapon[] = {"gm_p1_blk"};
    magazines[] =
    {
        LIST_2("gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk"),
        "gm_handgrenade_frag_dm51a1",
        "gm_smokeshell_wht_dm25"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn")
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class rat : car
{
    displayName = "Rifleman (PzF3)";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    secondaryWeapon[] = {"gm_pzf3_blk"};
    backpackItems[] = {LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"gm_g3a3_oli"};
    scope[] = {"gm_feroz24_blk"};
    magazines[] =
    {
        LIST_8("gm_20Rnd_762x51mm_B_DM41_g3_blk"),
        LIST_2("gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli",
        "ItemGPS"
    };
};
class hmgg : ar
{
    displayName = "HMG Gunner - Same as MMG";

};
class hmgac : aar
{
    displayName = "HMG Ammo Carrier - Same as MMG";
};
class hmgag : aar
{
    displayName = "HMG Assistant Gunner - Same as MMG";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    secondaryWeapon[] = {"gm_pzf3_blk"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")
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
        "gm_ferod16_oli"
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
        "gm_ferod16_oli"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"gm_fim43_oli"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_70mm_he_m585_fim43")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
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
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    goggles[] = {"gm_headgear_foliage_summer_forest_01"};
    uniform[] = {"gm_ge_army_uniform_soldier_parka_80_win"};
};
class sp : g
{
    displayName = "Spotter";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    goggles[] = {"gm_headgear_foliage_summer_forest_01"};
    uniform[] = {"gm_ge_army_uniform_soldier_parka_80_win"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"gm_ge_army_uniform_crew_90_flk"};
    vest[] = {"gm_ge_army_vest_80_crew"};
    backpack[] = {"gm_ge_army_backpack_90_flk"};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk"};
    linkedItems[] += {"gm_ferod16_oli"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
    backpack[] = {"gm_ge_army_backpack_90_flk"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
    backpack[] = {"gm_ge_army_backpack_90_flk"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    primaryWeapon[] = {};
    sidearmWeapon[] = {"gm_p1_blk"};
    vest[] = {"gm_ge_army_vest_pilot_oli"};
    headgear[] = {"gm_ge_headgear_sph4_oli"};
    goggles[] = {"default"};
    magazines[] = {LIST_4("gm_8Rnd_9x19mm_B_DM11_p1_blk")};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    backpackItems[] = {};
};
class jp : smg
{
    displayName = "Jet pilot";
    primaryWeapon[] = {};
    sidearmWeapon[] = {"gm_p1_blk"};
    vest[] = {"gm_ge_army_vest_pilot_oli"};
    headgear[] = {"gm_ge_headgear_sph4_oli"};
    goggles[] = {"default"};
    magazines[] = {LIST_4("gm_8Rnd_9x19mm_B_DM11_p1_blk")};
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"gm_ge_vest_armor_90_demolition_flk"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",     
        LIST_4("gm_explosive_petn_charge")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"gm_ge_vest_armor_90_demolition_flk"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",     
        LIST_2("ATMine_Range_Mag"),
        LIST_4("APERSMine_Range_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};
class break
{
    displayName = "---- Bonus Classes Below ----";
}
class hg : r
{
    displayName = "Heavy Grenadier";
    primaryWeapon[] = {"gm_hk69a1_blk"};
    secondaryWeapon[] = {"gm_p1_blk"};
    magazines[] = {
        LIST_11("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_2("UGL_FlareWhite_F"),
        LIST_4("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
};
class mp : r
{
    displayName = "Military Police"
    vest[] = {"gm_ge_army_vest_80_mp_wht"};
    headgear[] = {"gm_ge_headgear_beret_red_militarypolice"};
    primaryWeapon[] = {};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] = {LIST_4("gm_8Rnd_9x19mm_B_DM11_p1_blk")};
};
class rr : r
{
    displayName = "Radioman";
    backpack[] = {"gm_ge_backpack_sem35_oli"};
}