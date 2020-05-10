tooltip = "RHS compatible AT\nAuthor: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_bdu_erdl"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"usm_helmet_m1_ERDL", "usm_helmet_m1_ERDL", "usm_helmet_m1_ERDL", "usm_helmet_m1_ERDL", "usm_helmet_m1v2_ERDL"};
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
    vest[] = {"usm_vest_lbe_rm"};
    backpack[] = {"B_simc_USMC65_M41", "B_simc_USMC65_M41_M43", "B_simc_USMC65_M41_M43_roll2", "B_simc_USMC65_M41_M43_roll", "B_simc_USMC65_M41_Roll2", "B_simc_USMC65_M41_Roll"};
    primaryWeapon[] = {"CUP_arifle_M16A1"};
    scope[] = {};
    attachment[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
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
    vest[] = {"usm_vest_lbe_gr"};
    primaryWeapon[] = {"CUP_arifle_M16A1GL"};
    magazines[] +=
    {
        LIST_6("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
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
    primaryWeapon[] = {"rhs_weap_m3a1"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("rhsgref_30rnd_1143x23_M1911B_SMG"),
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
    vest[] = {"usm_vest_lbe_rmp"};
    backPack[] = {"usm_pack_st138_prc77"};
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
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backPack[] = {"usm_pack_alice_prc77"};
    backpackItems[] = {};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
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
    backpack[] = {"rhsgref_hidf_alicepack"};
    primaryWeapon[] = {"CUP_lmg_M60"};
    bipod[] = {};
    vest[] = {"usm_vest_lbe_mg"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_762x51")
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
    primaryWeapon[] = {"rhs_weap_m14_rail"};
    scope[] = {"optic_khs_old"};
    bipod[] = {"rhsusf_acc_m14_bipod"};
    magazines[] =
    {
        LIST_10("rhsusf_20Rnd_762x51_m80_Mag"),
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M60"};
    scope[] = {};
    vest[] = {"usm_vest_lbe_mg"};
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
};
class mmgag : aar
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
class sn : r
{
    displayName = "Sniper";
    vest[] = {"usm_vest_lbe_rmp"};
    headgear[] = {"usm_bdu_boonie_erdl"};
    primaryWeapon[] = {"rhs_weap_m14_rail"};
    scope[] = {"optic_khs_old"};
    bipod[] = {"rhsusf_acc_m14_bipod"};
    magazines[] =
    {
        LIST_8("rhsusf_20Rnd_762x51_m80_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
};
class sp : r
{
    displayName = "Spotter";
    vest[] = {"usm_vest_lbe_rm"};
    headgear[] = {"usm_bdu_boonie_erdl"};
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
