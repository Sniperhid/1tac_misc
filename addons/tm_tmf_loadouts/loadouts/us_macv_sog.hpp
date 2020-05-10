tooltip = "Author: Chris";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"usm_bdu_srl_tgrstp","usm_bdu_srh_tgrstp","usm_bdu_btisrl_tgrstp"};
    vest[] = {"rhsgref_alice_webbing"};
    backpack[] = {"CUP_B_AlicePack_OD"};
    headgear[] = {"usm_bdu_boonie_tgrstp","usm_bdu_boonie_odg"};
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
    items[] = 
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_tourniquet",
        "ACE_morphine"
    };
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
};
class r : baseMan
{
    displayName = "Rifleman M4";
    primaryWeapon[] = {"CUP_arifle_M4A1"};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_556x45_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class r2 : baseMan
{
    displayName = "Rifleman AK";
    primaryWeapon[] = {"CUP_arifle_AK47"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_762x39_AK47_M"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] =
    {
        LIST_8("CUP_20Rnd_556x45_Stanag"),
        LIST_3("CUP_1Rnd_HEDP_M203"),
        LIST_3("CUP_1Rnd_Smoke_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car 
{
    displayName = "Medic";
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
    primaryWeapon[] = {};
    sidearmWeapon[] = {"CUP_hgun_MicroUzi"};
    magazines[] =
    {
        LIST_8("CUP_30Rnd_9x19_UZI"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman Stoner";
    primaryWeapon[] = {"CUP_arifle_M16A1"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        "rhs_mag_100Rnd_556x45_M855_cmag",
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    backpackItems[] = 
    {
        LIST_2("rhs_mag_100Rnd_556x45_M855_cmag")
    };
};
class ar2 : r
{
    displayName = "Automatic Rifleman RPK";
    primaryWeapon[] = {"CUP_arifle_AK47"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_2("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    backpackItems[] = 
    {
        LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman Stoner";
    backpackItems[] =
    {
        LIST_2("rhs_mag_100Rnd_556x45_M855_cmag")
    };
    linkedItems[] += {"Binocular"};
};
class aar2 : r2
{
    displayName = "Assistant Automatic Rifleman RPK";
    backpackItems[] =
    {
        LIST_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    magazines[] +=
    {
        "rhs_m72a7_mag"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m14_rail"};
    scope[] = {"optic_khs_old"};
    bipod[] = {"rhsusf_acc_m14_bipod"};
    magazines[] =
    {
        LIST_5("rhsusf_20Rnd_762x51_m80_Mag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_20Rnd_762x51_m80_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"CUP_lmg_M60"};
    magazines[] =
    {
        "rhsusf_100Rnd_762x51",
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
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
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_maaws"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_SPG9_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
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
    backPack[] = {"rhs_M252_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
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
    primaryWeapon[] = {"CUP_srifle_CZ550"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_7("CUP_5x_22_LR_17_HMR_M"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    linkedItems[] += {"ItemGPS"};
};
class jp : pp {};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
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
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
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
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};
