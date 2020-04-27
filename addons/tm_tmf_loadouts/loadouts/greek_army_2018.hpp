/* assignGear specific macros */
//Compatible with ACE Advanced Medical

// this is now 1986! science!
// dependencies: US military mod, RHS USF, CUP weapons + units, HLC m60 + m14, hlc_rifle_g3a3v
// originally by Fingers, adapted by CyDoN

tooltip = "WARNING: MAT role is NOT RHS compatible (By CyDoN)";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_altis_lizard"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
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
    headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
    vest[] = {"usm_vest_LBE_rm"};
    backpack[] = {};
    primaryWeapon[] = {"hlc_rifle_g3a3v"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
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
    vest[] = {"usm_vest_LBE_gr"};
    primaryWeapon[] = {"HLC_Rifle_g3ka4_GL"};
    magazines[] +=
    {
        LIST_10("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_g3a3v"};
      magazines[] =
    {
        LIST_5("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
    backpack[] = {"usm_pack_alice"};
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
        LIST_2("SmokeShell")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    magazines[] =
    {
        LIST_6("CUP_30Rnd_9x19_MP5"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : r
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
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
    vest[] = {"usm_vest_LBE_rmp"};
    backPack[] = {"usm_pack_st138_prc77"};
    items[] += {"ACE_Maptools"};
    magazines[] += {
        LIST_3("rhsusf_mag_7x45acp_MHP")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
    vest[] = {"usm_vest_LBE_rmp"};
    backPack[] = {"usm_pack_st138_prc77"};
    magazines[] = {
        LIST_7("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("rhsusf_mag_7x45acp_MHP")
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
    backpack[] = {"usm_pack_alice"};
    primaryWeapon[] = {"rhs_weap_m249"};
    bipod[] = {};
    vest[] = {"usm_vest_pasgt_lbe_mg"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_556x45_soft_pouch"),
        "HandGrenade",
        "SmokeShell"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_556x45_soft_pouch")
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
    primaryWeapon[] = {"hlc_rifle_g3a3v"};
 headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
    scope[] = {"hlc_optic_ZF95_g3"};
    bipod[] = {};
    magazines[] =
    {
        LIST_10("hlc_20Rnd_762x51_B_M14"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"tac1_tm_rhsgref_mg3"};
    vest[] = {"usm_vest_LBE_mg"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80"),
        "HandGrenade",
        "SmokeShell"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_5("tac1_tm_rhsgref_mg3_100Rnd_762x51_m80")
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
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_maaws"};
    backpackItems[] += {"rhs_mag_maaws_HEDP"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] += {"rhs_mag_maaws_HEDP"};
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
        "Binocular"
    };
    backpackItems[] += {"rhs_mag_maaws_HEDP"};
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
    uniform[] = {"rhsgref_uniform_altis_lizard"};
    vest[] = {"V_Chestrig_rgr"};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m24sws_blk"};
    scope[] = {"rhsusf_acc_M8541"};
    bipod[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_762x51_m62_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {};
     headgear[] = {"rhsgref_helmet_pasgt_altis_lizard"};
    primaryWeapon[] = {"HLC_Rifle_g3ka4_GL"};
  backpack[] = {"rhsusf_falconii"};
   sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_6("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("hlc_20rnd_762x51_MDim_G3"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    vest[] = {"usm_vest_LBE_rm"};
    headgear[] = {"usm_helmet_cvc"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
    };
};
class vd : car
{
    displayName = "Vehicle Driver";
    vest[] = {"usm_vest_LBE_rm"};
    headgear[] = {"usm_helmet_cvc"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    vest[] = {"usm_vest_LBE_rm"};
    headgear[] = {"usm_helmet_cvc"};
    backpack[] = {};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};
    backpack[] = {"rhsusf_falconii"};
    headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m18_green")
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
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
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
    //vest[] = {"rhsusf_iotv_ucp_Repair"};
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
    //vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"B_Carryall_oli"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit",
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