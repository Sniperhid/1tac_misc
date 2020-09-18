/* assignGear specific macros */
/* assignGear specific macros */
//Dependencies - ACE3, RHS USAF, CUP, 3CB Equipment

tooltip = "Author: Sam";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"CUP_FR_NeckScarf2","UK3CB_BAF_G_Tactical_Grey","UK3CB_BAF_G_Tactical_Orange","UK3CB_BAF_G_Tactical_Yellow","UK3CB_BAF_G_Tactical_Clear","UK3CB_BAF_G_Tactical_Black"};
    hmd[] = {/*UK3CB_BAF_HMNVS*/};
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
        "ItemWatch",
        "ACE_Flashlight_MX991"
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
    headgear[] = {
        "UK3CB_BAF_H_Mk7_Camo_A",
        "UK3CB_BAF_H_Mk7_Camo_B",
        "UK3CB_BAF_H_Mk7_Camo_C",
        "UK3CB_BAF_H_Mk7_Camo_D",
        "UK3CB_BAF_H_Mk7_Camo_E",
        "UK3CB_BAF_H_Mk7_Camo_F",
        "UK3CB_BAF_H_Mk7_Camo_ESS_A",
        "UK3CB_BAF_H_Mk7_Camo_ESS_B",
        "UK3CB_BAF_H_Mk7_Camo_ESS_C",
        "UK3CB_BAF_H_Mk7_Camo_ESS_D",
        "UK3CB_BAF_H_Mk7_Camo_CESS_A",
        "UK3CB_BAF_H_Mk7_Camo_CESS_B",
        "UK3CB_BAF_H_Mk7_Camo_CESS_C",
        "UK3CB_BAF_H_Mk7_Camo_CESS_D",
        "UK3CB_BAF_H_Mk7_Net_A",
        "UK3CB_BAF_H_Mk7_Net_B",
        "UK3CB_BAF_H_Mk7_Net_C",
        "UK3CB_BAF_H_Mk7_Net_D",
        "UK3CB_BAF_H_Mk7_Net_ESS_A",
        "UK3CB_BAF_H_Mk7_Net_ESS_B",
        "UK3CB_BAF_H_Mk7_Net_ESS_C",
        "UK3CB_BAF_H_Mk7_Net_ESS_D",
        "UK3CB_BAF_H_Mk7_Net_CESS_A",
        "UK3CB_BAF_H_Mk7_Net_CESS_B",
        "UK3CB_BAF_H_Mk7_Net_CESS_C",
        "UK3CB_BAF_H_Mk7_Net_CESS_D"
    };
    vest[] = {
        "UK3CB_BAF_V_Osprey_Rifleman_C",
        "UK3CB_BAF_V_Osprey_Rifleman_A",
        "UK3CB_BAF_V_Osprey_Rifleman_D",
        "UK3CB_BAF_V_Osprey_Rifleman_E",
        "UK3CB_BAF_V_Osprey_Rifleman_F"
    };
    backpack[] = {
        "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
        "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
        "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
        "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
        "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
    };
    primaryWeapon[] = {"UK3CB_BAF_L85A2_RIS"};
    scope[] = {"RKSL_optic_LDS"};
    attachment[] = {"UK3CB_BAF_LLM_IR_Black"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
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
    vest[] = {"UK3CB_BAF_V_Osprey_Grenadier_B"};
    primaryWeapon[] = {"UK3CB_BAF_L85A2_UGL_HWS"};
    scope[] = {"RKSL_optic_LDS"};
    attachment[] = {"UK3CB_BAF_LLM_IR_Black"};
    magazines[] +=
    {
        LIST_4("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class mar : r
{
    displayName = "Designated Marksman";
     vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"};
    primaryWeapon[] = {"UK3CB_BAF_L129A1"};
    bipod[] = {"UK3CB_underbarrel_acc_bipod"};
    attachment[] = {"UK3CB_BAF_TA648"};
    magazines[] = 
    {
        LIST_8("UK3CB_BAF_762_20Rnd"),
        LIST_2("UK3CB_BAF_762_20Rnd_T")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
    traits[] = {"medic"};
    vest[] = {"UK3CB_BAF_V_Osprey_Medic_C"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_L_A"};
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
    primaryWeapon[] = {"UK3CB_BAF_L22A2"};
    scope[] = {"UK3CB_BAF_Eotech"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        "HandGrenade",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_A"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    vest[] = {"UK3CB_BAF_V_Osprey_SL_C"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_L_A"};
    magazines[] +=
    {
        LIST_3("UK3CB_BAF_9_17Rnd")
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
    magazines[] = {
        LIST_3("UK3CB_BAF_9_17Rnd"),
        LIST_2("rhs_mag_m715_Green"),
        LIST_3("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green"),
        LIST_2("SmokeShellPurple"),
        LIST_3("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_7("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        "HandGrenade",
        LIST_2("rhs_mag_an_m8hc")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_JTAC_L_A"};
    radios[] = {"ACRE_PRC117F"};
    magazines[] =
    {
        LIST_2("Laserbatteries"),
        LIST_3("UK3CB_BAF_9_17Rnd"),
        LIST_2("rhs_mag_m715_Green"),
        LIST_3("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m18_green"),
        LIST_2("SmokeShellPurple"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_7("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        "HandGrenade",
        LIST_2("rhs_mag_an_m8hc")
    };
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
    items[] = {
        LIST_3("ACE_fieldDressing"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_Kestrel4500",
        "ACE_microDAGR",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"UK3CB_BAF_V_Osprey_MG_B"};
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    primaryWeapon[] = {"UK3CB_BAF_L110A3"};
    scope[] = {"RKSL_optic_LDS"};
    bipod[] = {};
    magazines[] =
    {
        LIST_5("rhsusf_200rnd_556x45_mixed_box"),
        "HandGrenade",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"UK3CB_BAF_V_Osprey_MG_A"};
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    backpackItems[] =
    {
        LIST_4("rhsusf_200rnd_556x45_mixed_box")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"UK3CB_BAF_NLAW_Launcher"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    scope[] = {"RKSL_optic_LDS"};
    vest[] = {"UK3CB_BAF_V_Osprey_MG_B"};
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51_m61_ap"),
        LIST_2("rhsusf_100Rnd_762x51_m62_tracer"),
        "HandGrenade",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    vest[] = {"UK3CB_BAF_V_Osprey_MG_A"};
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m61_ap")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51_m62_tracer")
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
class hmgg : car
{
    displayName = "HMG Gunner";
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    secondaryWeapon[] = {"UK3CB_BAF_L111A1"};
    backpackItems[] =
    {
        "UK3CB_BAF_127_100Rnd"
    };
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    backpackItems[] =
    {
        "UK3CB_BAF_127_100Rnd"
    };
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";    
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    secondaryWeapon[] = {"UK3CB_BAF_Tripod"};    
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
        "UK3CB_BAF_127_100Rnd"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_maaws"};
    secondaryAttachments[] = {"rhs_optic_maaws"};
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    magazines[] +=
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HE"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HE"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"UK3CB_BAF_B_Carryall_MTP"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HE"
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
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_Javelin_Slung_Tube"};
    linkedItems[] = {"UK3CB_BAF_Javelin_CLU"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    secondaryWeapon[] = {"UK3CB_BAF_Javelin_Slung_Tube"};
};    
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_Javelin_Slung_Tube"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_L16"};
    backpackItems[] =
    {
        "UK3CB_BAF_1Rnd_81mm_Mo_Shells"
    };
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
    backpackItems[] =
    {
        "UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White"
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";                                                                                      
    secondaryWeapon[] = {"UK3CB_BAF_L16_Tripod"};
    backpackItems[] =
    {
        "UK3CB_BAF_1Rnd_81mm_Mo_Shells"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
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
        "rhs_fim92_mag"
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
    vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"};
    headgear[] = {"UK3CB_BAF_H_Mk7_Camo_A"};
    primaryWeapon[] = {"UK3CB_BAF_L115A3_Ghillie"};
    scope[] = {"RKSL_optic_PMII_312_sunshade_wdl"};
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    magazines[] =
    {
        LIST_9("UK3CB_BAF_338_5Rnd"),
        LIST_2("HandGrenade"),
        LIST_4("UK3CB_BAF_9_17Rnd")
    };
    backpack[] = {};
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    primaryWeapon[] = {"UK3CB_BAF_L85A2_RIS"};
    scope[] = {"RKSL_optic_LDS"};
    attachment[] = {"UK3CB_BAF_LLM_IR_Black"};
    silencer[] = {"UK3CB_BAF_SFFH"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_3("UK3CB_BAF_9_17Rnd")
    };
    linkedItems[] += {"Rangefinder"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"UK3CB_BAF_V_Osprey_Belt_A"};
    backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
    radios[] = {"ACRE_PRC117F"};
    headgear[] = {"UK3CB_BAF_H_Mk7_Camo_ESS_A"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m715_Green")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] = {"engineer"};
    vest[] = {"UK3CB_BAF_V_Osprey_Belt_A"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"};
    headgear[] = {"UK3CB_BAF_H_Mk7_Camo_CESS_A"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {"UK3CB_BAF_B_Kitbag_MTP"};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_m715_Green")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    traits[] = {"engineer"};
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_Army"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_m715_Green")
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
    uniform[] = {"U_I_pilotCoveralls"};
    headgear[] = {"RHS_jetpilot_usaf"};
    backpack[] = {"B_Parachute"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    magazines[] =
    {
        LIST_4("UK3CB_BAF_9_17Rnd")
    };
    items[] =
    {
        LIST_3("ACE_fieldDressing"),
        LIST_2("ACE_Splint"),
        "ACE_morphine"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class poi : r
{
    displayName = "Pointman";
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_PointMan_L_A"};
    backpackItems[] = {"UK3CB_BAF_L128A1"};
    magazines[] +=
    {
        LIST_3("UK3CB_BAF_12G_Slugs"),
        LIST_3("UK3CB_BAF_12G_Pellets")
    };
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] = {"explosiveSpecialist"};
    sidearmWeapon[] = {"ACE_VMH3"};
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_C"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag"),
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (AP Mines)";
    traits[] = {"explosiveSpecialist"};
    sidearmWeapon[] = {"ACE_VMH3"};
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_C"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "ToolKit",
        "ATMine_Range_Mag",
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_C"};
    linkedItems[] += {"B_UavTerminal"};
};
