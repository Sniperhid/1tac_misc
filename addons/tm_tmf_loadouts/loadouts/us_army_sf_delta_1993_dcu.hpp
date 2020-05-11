tooltip = "Inspired by Black Hawk Down\nAuthor: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"usm_bdu_btisrl_dcu_m", "usm_bdu_btisrl_dcu_m", "usm_bdu_srh_dcu"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"rhsusf_protech_helmet_rhino_ess", "rhsusf_protech_helmet_rhino", "rhsusf_protech_helmet_ess", "rhsusf_protech_helmet"};
    goggles[] = {"usm_kneepads_safariland"};
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
    code = "_this call tac1_tm_tmf_loadouts_fnc_addGoggles;";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    
    insignias[] = {"usm_USA"};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"CUP_V_B_Ciras_Black4"};
    backpack[] = {"B_Battle_Belt_F"};
    primaryWeapon[] = {"CUP_arifle_Colt727"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    scope[] = {"rhsusf_acc_t1_low"};
    attachment[] = {"CUP_acc_Flashlight"};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
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
    primaryWeapon[] = {"CUP_arifle_Colt727_M203"};
    magazines[] +=
    {
        LIST_6("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    scope[] = {};
};
class m : r
{
    displayName = "Medic";
    backpack[] = {"usm_pack_m5_medic"};
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
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("CUP_30Rnd_9x19_MP5"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    backPack[] = {"usm_pack_st138_prc77"};
    magazines[] = {
        LIST_4("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_6("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        "rhsusf_mag_7x45acp_MHP"
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Marksman";
    primaryWeapon[] = {"rhs_weap_m14_rail"};
    bipod[] = {};
    scope[] = {"rhsusf_acc_compm4"};
    magazines[] =
    {
        LIST_11("rhsusf_20Rnd_762x51_m80_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_m993_Mag"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : g
{
    displayName = "Grenadier";
};
class rat : r
{
    displayName = "Rifleman (M72A7)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : ar
{
    displayName = "Designated Marksman";
    silencer[] = {"rhsusf_acc_aac_m14dcqd_silencer"};
};
class mmgg : r
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M60E4_norail"};
    scope[] = {};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"Binocular"};
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
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
        "Rangefinder"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"rhsgref_hidf_alicepack"};
    secondaryWeapon[] = {"CUP_launch_M47"};
    backpackItems[] += {"CUP_Dragon_EP1_M"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] += {"CUP_Dragon_EP1_M"};
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
        "Binocular"
    };
    backpackItems[] += {"CUP_Dragon_EP1_M"};
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"rhs_TOW_Tripod_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"rhs_TOW_Tripod_Bag"};
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
    backPack[] = {"B_Mortar_01_weapon_F"};
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
        "Binocular"
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
        "Rangefinder"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
    primaryWeapon[] = {"CUP_srifle_M14_DMR"};
    scope[] = {"optic_sos"};
    bipod[] = {"cup_bipod_harris_1a2_l_blk"};
    silencer[] = {};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_762x51_DMR"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"Binocular"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"usm_vest_lbe_rm"};
    headgear[] = {"rhsusf_cvc_green_helmet", "rhsusf_cvc_green_alt_helmet"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"usm_vest_lbe_rm"};
    headgear[] = {"rhsusf_cvc_green_helmet", "rhsusf_cvc_green_alt_helmet"};
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
    backpack[] = {"B_simc_USMC65_M41"};
    headgear[] = {"tm_hgu56p_visor_cav"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"B_simc_USMC65_M41"};
    headgear[] = {"tm_hgu56p_visor_cav"};
    goggles[] = {};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : pp
{
    displayName = "Jet pilot";
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"rhsgref_hidf_alicepack"};
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
    backpack[] = {"rhsgref_hidf_alicepack"};
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
