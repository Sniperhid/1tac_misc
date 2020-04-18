tooltip = "Author: Chris/Bear/Toiton\n\nGrenadiers have 60mm mortars and are separate from lead roles";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep_m81"};
    vest[] = {"rhssaf_vest_otv_md2camo"};
    backpack[] = {"rhssaf_kitbag_md2camo"};
    headgear[] = {"rhssaf_helmet_m97_woodland","rhssaf_helmet_m97_woodland_black_ess","rhssaf_helmet_m97_woodland_black_ess_bare"};
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
        LIST_2("ACE_splint"),
        "ACE_morphine",
        "ACE_tourniquet"
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
    displayName = "Rifleman";
    primaryWeapon[] = {"CUP_Famas_F1_Rail"};
    scope[] = {"rhsusf_acc_eotech_552"};
    magazines[] =
    {
        LIST_9("CUP_25Rnd_556x45_Famas"),
        LIST_2("CUP_25Rnd_556x45_Famas_Tracer_Yellow"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class r600 : r
{
    displayName = "Rifleman (600m)";
    scope[] = {"optic_MRCO"};
};
class g : r
{
    displayName = "Grenadier"; // The Grenadier in the french army uses a knee mortar
    secondaryWeapon[] = {"UK3CB_BAF_M6"};
    magazines[] =
    {
        LIST_8("CUP_25Rnd_556x45_Famas"),
        LIST_2("CUP_25Rnd_556x45_Famas_Tracer_Yellow"),
        LIST_3("rhs_mag_M433_HEDP"),
        LIST_3("rhs_mag_m714_White"),
        LIST_6("UK3CB_BAF_1Rnd_60mm_Mo_Shells")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_7("CUP_25Rnd_556x45_Famas"),
        LIST_2("CUP_25Rnd_556x45_Famas_Tracer_Yellow"),
        LIST_1("rhs_mag_an_m8hc")
    };
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
        LIST_6("ACE_splint"),
        LIST_1("ACE_surgicalKit")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_black"};
    magazines[] =
    {
        LIST_6("50Rnd_570x28_SMG_03"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class ftl600 : r600
{
    displayName = "Fireteam Leader (600m)";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"V_PlateCarrier1_rgr_noflag_F"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_2("rhsusf_mag_15Rnd_9x19_JHP")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
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
    displayName = "Automatic Rifleman";
    vest[] = {"V_PlateCarrier1_rgr_noflag_F"};
    primaryWeapon[] = {"UK3CB_BAF_L110A2"};
    backpack[] = {"rhssaf_kitbag_md2camo"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_556x45_soft_pouch"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_15Rnd_9x19_JHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
    magazines[] +=
    {
        "rhs_m136_mag"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"CUP_arifle_HK417_20"};
    scope[] = {"optic_DMS"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_7("CUP_20Rnd_762x51_HK417"),
        LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240G"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_15Rnd_9x19_JHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
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
class hmgac : car
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
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpack[] = {"rhssaf_kitbag_md2camo"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
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
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"rhssaf_kitbag_md2camo"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
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
class mtrac : car
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
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
    vest[] = {"V_PlateCarrier1_rgr_noflag_F"};
    scope[] = {"RKSL_optic_PMII_525"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_2("rhsusf_mag_15Rnd_9x19_JHP")
    };
};
class sp : r600
{
    displayName = "Spotter";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    headgear[] = {"rhsusf_cvc_green_helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    headgear[] = {"rhsusf_cvc_green_helmet"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    headgear[] = {"rhsusf_cvc_green_helmet"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"rhsusf_hgu56p_visor_black"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"rhsusf_hgu56p_visor_black"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    backpack[] = {"rhssaf_kitbag_md2camo"};
    vest[] = {"V_TacVest_oli"};
    headgear[] = {"rhsusf_hgu56p_visor_black"};
    linkedItems[] += {"ItemGPS"};
};
class jp : pp {};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"rhssaf_kitbag_md2camo"};
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
    backpack[] = {"rhssaf_kitbag_md2camo"};
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