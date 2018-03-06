// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

//Made by Freddo, using a modfied example loadout

/* Dependencies
    RHSAFRF
    ACE3
    NIARMS AK Rifles
*/

/* Example Orbat: Motor rifle platoon - BTR
    HQ Element:
        Platoon Leader
        Assistant Platoon Leader
        Platoon Medic
    Motor Rifle Section:
        Squad Leader
        Assistant Squad Leader
        Automatic Rifleman
        MAT Gunner (RPG)
        MAT Ammobearer
        Marksman
        Rifleman
        BTR80/80A
            Gunner
            Driver
    Motor Rifle Section:
        Squad Leader
        Assistant Squad Leader
        Automatic Rifleman
        MAT Gunner (RPG)
        MAT Ammobearer
        2xRifleman
        BTR80/80A
            Gunner
            Driver
    Weapons Section:
        Squad Leader
        2xSpecial/Heavy Weapons Team:
            Assistant
            Gunner
            Ammobearer
*/

tooltip = "Author: Freddo\n\nRHS compatible\n\nAK12s and ultra-modern body armour, what's not to like?";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_msv_emr"};
    vest[] = {"rhs_6b43"};
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
    items[] = {LIST_3("ACE_fieldDressing"),"ACE_morphine","ACE_MapTools","ACE_CableTie","ACE_Flashlight_KSF1"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] =
    {
        "rhs_6b47",
        "rhs_6b47_bala",
        "rhs_6b47_ess",
        "rhs_6b47_ess_bala"
    };
    hmd[] = {"rhs_1PN138"};
    backpack[] = {"rhs_assault_umbts"};
    primaryWeapon[] = {"hlc_rifle_ak12"};
    scope[] = {"rhs_acc_1p87"};
    attachment[] = {"rhs_acc_perst1ik_ris"};
    magazines[] =
    {
        LIST_6("hlc_30Rnd_545x39_B_AK"),
        LIST_2("rhs_mag_rgd5"),
        "Chemlight_red",
        "rhs_mag_rdg2_white"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"hlc_rifle_ak12GL"};
    magazines[] +=
    {
        LIST_4("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_2("rhs_GDM40")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_aku12"};
};
class m : car 
{
    displayName = "Medic";
    backpackItems[] = 
    {
        LIST_15("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
};
//Not used
/*class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_01_F"};
    magazines[] =
    {
        LIST_10("30Rnd_45ACP_Mag_SMG_01"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};*/
class ftl : g
{
    displayName = "Assistant Squad Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green")
    };
    linkedItems[] += {"Binocular"};
};
class sl : r
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x19_17")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    items[] += {"rhs_fieldcap_digi2"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"hlc_rifle_RPK12"};
    magazines[] =
    {
        LIST_6("hlc_60Rnd_545x39_t_rpk"),
        LIST_2("rhs_mag_rgd5"),
        "rhs_mag_rdg2_white",
        "Chemlight_red"
    };
};
//Not used due to RPK magazines able to be loaded into normal rifle
/*class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("200Rnd_65x39_cased_Box")
    };
    linkedItems[] += {"Binocular"};
};*/
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m21"};
    magazines[] =
    {
        LIST_6("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rgd5"),
        "rhs_mag_rdg2_white",
        "Chemlight_red"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    scope[] = {"rhs_acc_pkas"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_mag_rgd5"),
        "rhs_mag_rdg2_white",
        LIST_2("rhs_mag_9x19_17"),
        "Chemlight_red"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"rhs_pdu4"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_KORD_Gun_Bag"};
    vest[] = {"rhs_6sh92_digi"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_KORD_Gun_Bag"};
    vest[] = {"rhs_6sh92_digi"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    vest[] = {"rhs_6sh92_digi_radio"};
    linkedItems[] += {"rhs_pdu4"};
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    magazines[] +=
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_PG7VR_mag"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"rhs_pdu4"};
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_PG7VR_mag"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Kornet_Gun_Bag"};
    vest[] = {"rhs_6sh92_digi"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Kornet_Gun_Bag"};
    vest[] = {"rhs_6sh92_digi"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_Kornet_Tripod_Bag"};
    vest[] = {"rhs_6sh92_digi_radio"};
    linkedItems[] += {"rhs_pdu4"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
    vest[] = {"rhs_6sh92_digi"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
    vest[] = {"rhs_6sh92_digi"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_HMG_01_support_F"};
    linkedItems[] = {"rhs_pdu4"};
    items[] += {"ACE_RangeTable_82mm","ACE_MapTools"};
    vest[] = {"rhs_6sh92_digi_radio"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    magazines[] +=
    {
        "rhs_mag_9k38_rocket"
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] = {"rhs_pdu4"};
    backpackItems[] =
    {
        "rhs_mag_9k38_rocket"
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"H_Watchcap_camo"};
    goggles[] = {"rhs_scarf"};
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_10("rhs_5Rnd_338lapua_t5000"),
        LIST_2("rhs_mag_rgd5"),
        "rhs_mag_rdg2_white",
        LIST_2("rhs_mag_9x19_17"),
        "Chemlight_red"
    };
};
class sp : g
{
    displayName = "Spotter";
    headgear[] = {"H_Watchcap_camo"};
    goggles[] = {"rhs_scarf"};
    items[] += {"ACE_SpottingScope","ACE_Kestrel4500","ACE_RangeCard"};
};
class vc : car
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4_ess_bala","rhs_tsh4_ess","rhs_tsh4_bala","rhs_tsh4"};
    hmd[] = {};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    headgear[] = {"rhs_tsh4_ess_bala","rhs_tsh4_ess","rhs_tsh4_bala","rhs_tsh4"};
    hmd[] = {};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    headgear[] = {"rhs_tsh4_ess_bala","rhs_tsh4_ess","rhs_tsh4_bala","rhs_tsh4"};
    hmd[] = {};
};
class pp : car
{
    displayName = "Helicopter Pilot";
    vest[] = {};
    magazines[] = {LIST_3("hlc_30Rnd_545x39_B_AK")};
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
    goggles[] = {"default"};
};
class pcc : car
{

    displayName = "Helicopter Crew Chief";
    vest[] = {};
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
    magazines[] = {LIST_3("hlc_30Rnd_545x39_B_AK")};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : car
{
    displayName = "Helicopter Crew";
    vest[] = {};
    magazines[] = {LIST_3("hlc_30Rnd_545x39_B_AK")};
    headgear[] = {"H_Cap_headphones"};
    goggles[] = {"default"};
};
class eng : car
{
    displayName = "Combat Engineer";
    primaryWeapon[] = {"hlc_rifle_saiga12k"};
    scope[] = {"hlc_optic_kobra"};
    sidearmWeapon[] = {"ACE_VMM3"};
    items[] += {"ACE_DefusalKit","ACE_M26_Clacker"};
    backPack[] = {"rhs_assault_umbts_engineer_empty"};
    magazines[] =
    {
        LIST_4("hlc_10rnd_12g_buck_S12"),
        "ACE_M84",
        "ACE_M14"
    };
    backpackItems[] = {
        LIST_2("DemoCharge_Remote_Mag"),
        "SatchelCharge_Remote_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    linkedItems[] += 
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "O_UavTerminal"
    };
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"rhs_zsh7a_alt"};
    magazines[] = {LIST_2("hlc_30Rnd_545x39_B_AK")};
    backPack[] = {"rhs_d6_Parachute_backpack"};
};
