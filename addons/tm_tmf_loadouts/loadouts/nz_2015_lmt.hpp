tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep_nzmcu"};
    vest[] = {"CUP_V_B_Eagle_SPC_Empty"};
    backpack[] = {"B_Kitbag_cbr"};
    headgear[] = {"bear_mich_nzmcu"};
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
    primaryWeapon[] = {"rhs_weap_hk416d145"};
    scope[] = {"rhsusf_acc_acog_rmr"};
    attachment[] = {};
    silencer[] = {"rhsusf_acc_sf3p556"};
    bipod[] = {"rhs_acc_grip_ffg2"};
    vest[] = {"CUP_V_B_Eagle_SPC_Rifleman"};
    magazines[] =
    {
        LIST_11("rhs_mag_30Rnd_556x45_M855_PMAG"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_hk416d145_m320"};
    vest[] = {"CUP_V_B_Eagle_SPC_GL"};
    magazines[] +=
    {
        LIST_5("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_hk416d10_LMT"};
    vest[] = {"CUP_V_B_Eagle_SPC_Patrol"};
};
class lightcar : r
{
    displayName = "Light Carabinier";
    primaryWeapon[] = {"rhs_weap_hk416d10_LMT"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855_PMAG"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : lightcar
{
    displayName = "Medic";
    backpack[] = {"CUP_B_USMC_AssaultPack"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_splint"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("SmokeShell")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    scope[] = {};
    magazines[] =
    {
        LIST_4("rhs_mag_30Rnd_556x45_M855_PMAG"),
        "HandGrenade",
        "SmokeShell"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"CUP_V_B_Eagle_SPC_TL"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    vest[] = {"CUP_V_B_Eagle_SPC_SL"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    vest[] = {"CUP_V_B_Eagle_SPC_RTO"};
    magazines[] = {
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ"),
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_3("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellPurple"),
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_7("rhs_mag_30Rnd_556x45_M855_PMAG"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"),
        "HandGrenade",
        LIST_2("SmokeShell")
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
        "ItemGPS",
        "ACE_Vector"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
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
    primaryWeapon[] = {"rhs_weap_m249_pip_S"};
    bipod[] = {"rhsusf_acc_saw_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    vest[] = {"CUP_V_B_Eagle_SPC_AR"};
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_soft_pouch")
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
    primaryWeapon[] = {"rhs_weap_sr25_ec"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_10("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_762x51")
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
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class hmgg : lightcar
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : lightcar
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : lightcar
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
class matg : lightcar
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_maaws"};
    secondaryAttachments[] = {"rhs_optic_maaws"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_3("rhs_mag_maaws_HEAT")
    };
};
class matac : lightcar
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("rhs_mag_maaws_HEAT")
    };
};
class matag : lightcar
{
    displayName = "MAT Assistant Gunner";
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
        LIST_3("rhs_mag_maaws_HEAT")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpackItems[] =
    {
        LIST_1("rhs_fgm148_magazine_AT")
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_1("rhs_fgm148_magazine_AT")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpackItems[] =
    {
        LIST_1("rhs_fgm148_magazine_AT")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : lightcar
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
class mtrac : lightcar
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : lightcar
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
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
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
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    vest[] = {"V_Chestrig_rgr"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    backpack[] = {};
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203"};
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"CUP_V_B_Eagle_SPC_Crew"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"CUP_V_B_Eagle_SPC_Crew"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
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
    vest[] = {"CUP_V_B_Eagle_SPC_Crew"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"CUP_V_B_Eagle_SPC_Crew"};
    backpack[] = {"CUP_B_USMC_AssaultPack"};
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
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
    vest[] = {"V_TacVest_oli"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_3("ClaymoreDirectionalMine_Remote_Mag")
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
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855_PMAG"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};