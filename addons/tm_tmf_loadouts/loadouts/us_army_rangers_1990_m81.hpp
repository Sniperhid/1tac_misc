// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

//Made by Freddo, using a modfied example loadout

/* Dependencies
    RHSUSAF
    ACE3
    MBG m16 rifles
    CUP Weapons
    NIArms M60 GPMGs
    NIArms M14 Rifles
    US Military Mod
    ACRE2(?)
*/

tooltip = "Author: Freddo\n\nRHS compatible\n\nBased of off early 1990s equipment";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"usm_bdu_w"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"default"};
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
    items[] = {"FirstAidKit","ACE_Flashlight_MX991"};
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
    displayName = "Rifleman";
    vest[] = {"usm_vest_rba_lbv_rm"};
    headgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_g_w"};
    bipod[] = {"rhsusf_acc_grip2"};
    primaryWeapon[] = {"mbg_m16a2"};
    silencer[] = {"rhsusf_acc_sfmb556"};
    magazines[] =
    {
        LIST_5("30Rnd_556x45_Stanag"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"usm_vest_rba_lbv_gr"};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"};
    magazines[] +=
    {
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class m : r
{
    displayName = "Medic";
    backPack[] = {"usm_pack_m5_medic"};
    backpackItems[] = {LIST_10("FirstAidKit"),"MediKit"};
};
class ftl : r
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle"};
    magazines[] =
    {
        LIST_3("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Yellow"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
    Items[] += {"ACE_mapTools"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"usm_vest_rba_lbv_rmp"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"usm_bdu_8point_wdl"};
};
class fac : ftl
{
    displayName = "Forward Air Controller";
    backPack[] = {"usm_pack_alice_prc119"};
    radios[] = {"ACRE_PRC117F"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m249"};
    vest[] = {"usm_vest_rba_lbv_mg"};
    magazines[] =
    {
        LIST_3("200Rnd_556x45_Box_F"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"usm_pack_200rnd_556_bandoliers"};
    backpackItems[] =
    {
        LIST_2("200Rnd_556x45_Box_F")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"tf47_at4_heat"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_artel_m14"};
    magazines[] =
    {
        LIST_5("30Rnd_556x45_Stanag"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    magazines[] =
    {
        LIST_3("hlc_100Rnd_762x51_B_M60E4"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_B_M60E4")
    };
};
class mmgag : ftl
{
    displayName = "MMG Assistant Gunner";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_B_M60E4")
    };
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : ftl
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
};
class matg : r
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"tf47_m3maaws"};
    secondaryAttachments[] = {"tf47_optic_m3maaws"};
    backPack[] = {"usm_pack_alice"};
    magazines[] +=
    {
        LIST_2("tf47_m3maaws_HEAT"),
        "tf47_m3maaws_HEDP"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_2("tf47_m3maaws_HEAT"),
        "tf47_m3maaws_HE"
    };
};
class matag : ftl
{
    displayName = "MAT Assistant Gunner";
    backPack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_2("tf47_m3maaws_HEAT"),
        "tf47_m3maaws_HE"
    };
};
class hatg : r
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : ftl
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
};
class mtrg : r
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_support_F"};
};
class mtrag : sl
{
    displayName = "Mortar Assistant Gunner";
    items[] += {"ACE_RangeCard"};
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"usm_pack_alice"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : ftl
{
    displayName = "AA Assistent Missile Specialist";
    backPack[] = {"usm_pack_alice"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"usm_bdu_boonie_erdl"};
    primaryWeapon[] = {"rhs_weap_m24sws"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    scope[] = {"hlc_optic_leupoldm3a"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    items[] += {"ACE_Tripod"};
    magazines[] =
    {
        LIST_2("rhsusf_mag_7x45acp_MHP"),
        LIST_8("rhsusf_10Rnd_762x51_m993_Mag"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
};
class sp : ftl
{
    displayName = "Spotter";
    headgear[] = {"usm_bdu_boonie_erdl"};
    items[] += {"ACE_SpottingScope"};
};
class vc : sl
{
    displayName = "Vehicle Commander";
    vest[] = {"usm_vest_rba"};
    magazines[] = {
        LIST_2("30Rnd_556x45_Stanag"),
        "Chemlight_green"
    };
    headgear[] = {"usm_helmet_cvc"};
};
class vd : r
{
    displayName = "Vehicle Driver";
    primaryWeapon[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "Chemlight_green"
    };
    vest[] = {"usm_vest_rba"};
    backpack[] = {"B_FieldPack_oli"};
    headgear[] = {"usm_helmet_cvc"};
    backpackItems[] = {"ToolKit"};
};
class vg : r
{
    displayName = "Vehicle Gunner";
    primaryWeapon[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "Chemlight_green"
    };
    vest[] = {"usm_vest_rba"};
    headgear[] = {"usm_helmet_cvc"};
};
class pp : ftl
{
    displayName = "Helicopter Pilot";
    primaryWeapon[] = {""};
    uniform[] = {"U_B_HeliPilotCoveralls"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "Chemlight_green"
    };
    vest[] = {"usm_vest_rba"};
    backpack[] = {};
    headgear[] = {"rhsusf_hgu56p_visor_green"};
    goggles[] = {"default"};
};
class pcc : r
{
    displayName = "Helicopter Crew Chief";
    primaryWeapon[] = {""};
    uniform[] = {"U_B_HeliPilotCoveralls"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "Chemlight_green"
    };
    vest[] = {"usm_vest_rba"};
    backpack[] = {"B_FieldPack_oli"};
    headgear[] = {"rhsusf_hgu56p_visor_green"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : r
{
    displayName = "Helicopter Crew";
    primaryWeapon[] = {""};
    uniform[] = {"U_B_HeliPilotCoveralls"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "Chemlight_green"
    };
    vest[] = {"usm_vest_rba"};
    backpack[] = {};
    headgear[] = {"rhsusf_hgu56p_visor_green"};
    goggles[] = {"default"};
};
class eng : r
{
    displayName = "Engineer (repair)";
    vest[] = {"usm_vest_lbv_rm"};
    headgear[] = {"usm_bdu_8point_wdl"};
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    magazines[] =
    {
        LIST_5("rhsusf_5Rnd_00Buck"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
    backPack[] = {"B_LegStrapBag_olive_F"};
    backpackItems[] = {"ToolKit"};
}
class enge : r
{
    displayName = "Combat Engineer (Explosives)";
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    magazines[] =
    {
        LIST_10("rhsusf_5Rnd_00Buck"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
    sidearmWeapon[] = {"ACE_VMH3"};
    backPack[] = {"B_FieldPack_oli"};
    items[] += {"ACE_DefusalKit","ACE_Clacker"};
    backpackItems[] = {
        LIST_4("DemoCharge_Remote_Mag"),
        "SatchelCharge_Remote_Mag"
    };
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    sidearmWeapon[] = {"ACE_VMH3"};
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    magazines[] =
    {
        LIST_10("rhsusf_5Rnd_00Buck"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc",
        "Chemlight_green"
    };
    items[] += {"ACE_DefusalKit","ACE_Clacker"};
    backpackItems[] = {
        LIST_2("ATMine_Range_Mag"),
        LIST_2("APERSMine_Range_Mag"),
        "APERSTripMine_Wire_Mag"
    };
};
class jp : r
{
    displayName = "Jet Pilot";
    primaryWeapon[] = {};
    backpack[] = {"ACE_NonSteerableParachute"};
    uniform[] = {"U_B_PilotCoveralls"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "Chemlight_green"
    };
    vest[] = {};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    code = "unitBackpack this additemcargoglobal ['acre_prc117F',1]";
};
