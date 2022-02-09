tooltip = "East Germany 1980s Winter. Author: Toiton. See bottom of classlist for extra classes";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_gc_army_uniform_soldier_80_win"};
    vest[] = {};
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    headgear[] = {"gm_gc_army_headgear_m56_cover_win"};
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
    vest[] = {"gm_gc_army_vest_80_rifleman_str"};
    backpack[] = {};
    primaryWeapon[] = {"gm_mpiak74n_brn"};
    magazines[] =
    {
        LIST_8("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_2("gm_30Rnd_545x39mm_B_T_7T3_ak74_org"),
        LIST_2("gm_handgrenade_frag_rgd5"),
        LIST_2("gm_smokeshell_wht_gc")
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
        LIST_5("gm_handgrenade_frag_rgd5")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_7("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_1("gm_30Rnd_545x39mm_B_T_7T3_ak74_org"),
        LIST_1("gm_handgrenade_frag_rgd5"),
        LIST_2("gm_smokeshell_wht_gc")
    };
};
class m : car
{
    displayName = "Medic";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
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
        "gm_smokeshell_wht_gc"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mpiaks74nk_brn"};
    magazines[] =
    {
        LIST_5("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        "gm_handgrenade_frag_rgd5"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    vest[] = {"gm_gc_army_vest_80_leader_str"};
    linkedItems[] += {"gm_df7x40_grn","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_df7x40_grn",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    magazines[] =
    {
        LIST_8("gm_30Rnd_545x39mm_B_7N6_ak74_org"),
        LIST_2("gm_30Rnd_545x39mm_B_T_7T3_ak74_org"),
        LIST_2("gm_handgrenade_frag_rgd5"),
        LIST_2("gm_smokeshell_wht_gc")
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
    vest[] = {"gm_gc_army_vest_80_lmg_str"};
    backpack[] = {"gm_gc_army_backpack_80_lmg_str"};
    primaryWeapon[] = {"gm_lmgrpk_brn"};
    secondaryWeapon[] = {"gm_pm_blk"};
    magazines[] =
    {
        LIST_4("gm_75Rnd_762x39mm_B_M43_ak47_blk"),
        LIST_2("gm_8Rnd_9x18mm_B_pst_pm_blk"),
        "gm_handgrenade_frag_rgd5",
        "gm_smokeshell_wht_gc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"gm_gc_army_vest_80_lmg_str"};
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_lmg_str"};
    backpackItems[] =
    {
        LIST_3("gm_75Rnd_762x39mm_B_T_M43_ak47_blk")
    };
    linkedItems[] += {"gm_df7x40_grn"};
};
class rat : car
{
    displayName = "Rifleman (RPG-7)";
    vest[] = {"gm_gc_army_vest_80_at_str"};
    backpack[] = {"gm_gc_army_backpack_80_at_str"};
    secondaryWeapon[] = {"gm_rpg7_prp"};
    secondaryAttachments[] = {"gm_pgo7v_blk"};
    backpackItems[] = {LIST_2("gm_1Rnd_40mm_heat_pg7v_rpg7")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"gm_svd_wud"};
    scope[] = {"gm_pso1_gry"};
    magazines[] = {
        LIST_6("gm_10Rnd_762x54mmR_AP_7N1_svd_blk"),
        LIST_2("gm_10Rnd_762x54mmR_B_T_7t2_svd_blk"),
        "gm_handgrenade_frag_rgd5",
        "gm_smokeshell_wht_gc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"gm_hmgpkm_prp"};
    magazines[] = {
        LIST_3("gm_100Rnd_762x54mm_B_T_t46_pk_grn"),
        LIST_2("gm_8Rnd_9x18mm_B_pst_pm_blk"),
        "gm_handgrenade_frag_rgd5",
        "gm_smokeshell_wht_gc"
    };
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("gm_100Rnd_762x54mm_B_T_t46_pk_grn")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("gm_100Rnd_762x54mm_B_T_t46_pk_grn")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_df7x40_grn",
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
        "gm_df7x40_grn"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    secondaryWeapon[] = {"gm_rpg7_prp"};
    secondaryAttachments[] = {"gm_pgo7v_blk"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_40mm_heat_pg7vl_rpg7")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_40mm_heat_pg7vl_rpg7")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_df7x40_grn"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_40mm_heat_pg7vl_rpg7")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"gm_fagot_launcher_weaponBag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"gm_fagot_launcher_weaponBag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"gm_fagot_launcher_weaponBag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_df7x40_grn"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"O_Mortar_01_weapon_F"};
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
    backPack[] = {"O_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"O_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_df7x40_grn"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    goggles[] = {"gm_gc_army_facewear_dustglasses"};
    secondaryWeapon[] = {"gm_9k32m_oli"};
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_72mm_he_9m32m")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_df7x40_grn",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_72mm_he_9m32m")
    };
};
class sn : dm
{
    displayName = "Sniper";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    headgear[] = {"gm_ge_headgear_hat_80_oli"};
};
class sp : g
{
    displayName = "Spotter";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    headgear[] = {"gm_ge_headgear_hat_80_oli"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    headgear[] = {"gm_gc_army_headgear_crewhat_80_blk"};
    linkedItems[] += {"gm_df7x40_grn"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    primaryWeapon[] = {};
    sidearmWeapon[] = {"gm_pm_blk"};
    uniform[] = {"gm_gc_airforce_uniform_pilot_80_blu"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {"gm_gc_headgear_zsh3_wht"};
    goggles[] = {"default"};
    magazines[] = {LIST_4("gm_8Rnd_9x18mm_B_pst_pm_blk")};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
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
    sidearmWeapon[] = {"gm_pm_blk"};
    uniform[] = {"gm_gc_airforce_uniform_pilot_80_blu"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {"gm_gc_headgear_zsh3_wht"};
    goggles[] = {"default"};
    magazines[] = {LIST_4("gm_8Rnd_9x18mm_B_pst_pm_blk")};
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
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
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
    backpack[] = {"gm_gc_army_backpack_80_assaultpack_empty_str"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",     
        LIST_1("ATMine_Range_Mag"),
        LIST_4("APERSMine_Range_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"O_UAV_01_backpack_F"};
    linkedItems[] += {"O_UavTerminal"};
};
class break
{
    displayName = "---- Bonus Classes Below ----";
}
class rr : r
{
    displayName = "Radioman";
    backpack[] = {"gm_gc_backpack_r105m_brn"};
}