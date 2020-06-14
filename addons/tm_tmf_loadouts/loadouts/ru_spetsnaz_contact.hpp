// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear\n\nContact DLC Spetsnaz\n\nVANILLA AT WEAPONS";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"U_O_R_Gorka_01_F", "U_O_R_Gorka_01_F", "U_O_R_Gorka_01_brown_F"};
    vest[] = {};
    backpack[] = {"B_FieldPack_green_F"};
    headgear[] = {};
    goggles[] = 
    {
        "CUP_RUS_Balaclava_blk",
        "CUP_RUS_Balaclava_grn",
        "rhs_googles_yellow",
        "rhs_googles_orange",
        "bear_bandana_atacs_fg",
        "G_Bandanna_oli",
        "G_Bandanna_blk",
        "CUP_G_ESS_BLK",
        "CUP_G_ESS_KHK",
        "CUP_G_ESS_BLK_Facewrap_Black",
        "CUP_G_ESS_RGR_Facewrap_Tropical",
        "CUP_PMC_Facewrap_Black",
        "CUP_PMC_Facewrap_Tropical",
        "rhsusf_oakley_goggles_ylw",
        LIST_5("")
    };
    hmd[] = 
    {
        //"rhs_1PN138" 
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
    
    code = "";
    
    faces[] = {"faceset:russian"};
    insignias[] = {"Spetsnaz223rdDetachment"};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
        "H_HelmetAggressor_F",
        "H_HelmetAggressor_cover_F"
    };
    vest[] = {"V_SmershVest_01_F"};
    primaryWeapon[] = {
        "arifle_AK12_lush_F",
        "arifle_AK12_lush_F",
        "arifle_AK12_lush_F",
        "arifle_AK12_F"
    };
    silencer[] = {};
    attachment[] = {"acc_flashlight"};
    scope[] = {
        "optic_arco_ak_lush_f",
        "optic_arco_ak_lush_f",
        "optic_arco_ak_lush_f",
        "optic_arco_ak_blk_f"
    };
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] = {
        LIST_8("30rnd_762x39_AK12_Lush_Mag_F"),
        LIST_3("30Rnd_762x39_AK12_Mag_Tracer_F"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] = {
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
	vest[] = {"V_SmershVest_01_radio_F"};
    primaryWeapon[] = {
        "arifle_AK12_GL_lush_F",
        "arifle_AK12_GL_lush_F",
        "arifle_AK12_GL_lush_F",
        "arifle_AK12_GL_F"
    };
    magazines[] += {
        LIST_2("rhs_mag_M441_HE"),
        LIST_3("rhs_mag_M397_HET"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    backpack[] = {"B_Battle_Belt_F"};
    primaryWeapon[] = {
        "arifle_AK12U_lush_F",
        "arifle_AK12U_lush_F",
        "arifle_AK12U_lush_F",
        "arifle_AK12U_F"
    };
};
class m : car 
{
    displayName = "Medic";
    backpack[] = {"rhs_medic_bag"};
    backpackItems[] =
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_pp2000"};
    scope[] = {"rhsusf_acc_t1_high"};
    sidearmWeapon[] = {};
    magazines[] = {
        LIST_5("rhs_mag_9x19mm_7n31_44"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] += {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red")
    };
    linkedItems[] += {"ItemGPS", "rhs_pdu4"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backpack[] = {"B_RadioBag_01_black_F"};
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_mag_m715_Green"),
        LIST_3("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_nspd"),
        LIST_3("rhs_mag_M441_HE"),
        LIST_2("rhs_mag_m714_White"),
        LIST_4("30rnd_762x39_AK12_Lush_Mag_F"),
        LIST_3("30rnd_762x39_AK12_Lush_Mag_Tracer_F"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
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
    backpack[] = {"B_Carryall_green_F"};
    primaryWeapon[] = {
        "arifle_RPK12_lush_F",
        "arifle_RPK12_lush_F",
        "arifle_RPK12_lush_F",
        "arifle_RPK12_F"
    };
    magazines[] =
    {
        LIST_4("75rnd_762x39_AK12_Lush_Mag_F"),
        LIST_4("75rnd_762x39_AK12_Mag_Tracer_F"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Carryall_green_F"};
    backpackItems[] =
    {
        LIST_6("75rnd_762x39_AK12_Lush_Mag_F")
    };
    linkedItems[] += {"rhs_pdu4"};
};
class rat : car
{
    displayName = "Rifleman (RPG-26)";
    secondaryWeapon[] = {"launch_RPG32_green_F"};
    magazines[] += {
        "RPG32_F"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_DMR_04_Tan_F"};
    silencer[] = {};
    scope[] = {"optic_dms_weathered_kir_f"};
    bipod[] = {"bipod_02_f_lush"};
    attachment[] = {};
    magazines[] =
    {
        LIST_8("10Rnd_127x54_Mag"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    scope[] = {"rhs_acc_1p78"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR_7N26"),
        LIST_2("rhs_100Rnd_762x54mmR_7BZ3"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Carryall_green_F"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26"),
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_Carryall_green_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_RPG32_green_F"};
    backpack[] = {"B_Carryall_green_F"};
    magazines[] += {
        LIST_2("RPG32_F"),
        "RPG32_HE_F"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_green_F"};
    backpackItems[] =
    {
        LIST_2("RPG32_F"),
        "RPG32_HE_F"
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
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("RPG32_F"),
        "RPG32_HE_F"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"B_Carryall_green_F"};
    secondaryWeapon[] = {"launch_O_Vorona_green_F"};
    backpackItems[] = {
        "Vorona_HEAT",
        "Vorona_HEAT"
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_green_F"};
    backpackItems[] = {
        "Vorona_HE",
        "Vorona_HE"
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_Carryall_green_F"};
    backpackItems[] = {
        "Vorona_HEAT",
        "Vorona_HEAT"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
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
        "ItemWatch",
        "ItemGPS"
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
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"CUP_launch_Igla"};
    backpack[] = {"B_Carryall_green_F"};
    magazines[] +=
    {
        LIST_2("CUP_Igla_M")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"B_Carryall_green_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("CUP_Igla_M")
    };
};
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"optic_dms_weathered_kir_f"};
    scope[] = {"optic_lrps"};
    bipod[] = {"bipod_02_f_lush"};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] =
    {
        LIST_10("10Rnd_762x54_Mag"),
        LIST_4("rhs_18rnd_9x21mm_7BT3")
    };
    backpack[] = {};
    linkedItems[] += {"ItemGPS"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_Tank_eaf_F"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"B_FieldPack_green_F"};
    headgear[] = {"H_Tank_eaf_F"};
    goggles[] = {};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
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
    backpack[] = {"B_Carryall_green_F"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"B_Carryall_green_F"};
    items[] +=
    {
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {};
    linkedItems[] += {"O_UavTerminal"};
};
