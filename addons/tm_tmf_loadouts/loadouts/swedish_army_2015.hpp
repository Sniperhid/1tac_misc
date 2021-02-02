tooltip = "Author: Head";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"sfp_m90w_uniform_modern","sfp_m90w_uniform_long_m08","sfp_m90w_uniform_tucked_m08"};
    vest[] = {"sfp_kroppsskydd12"};
    backpack[] = {};
    headgear[] = {"sfp_m90w_helmet_headset_nvg","sfp_m90w_helmet_nvg"};
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
    primaryWeapon[] = {"sfp_ak5c", "sfp_ak5c_alt"};
    scope[] = {"sfp_optic_aimpoint"};
    attachment[] = {"cup_acc_anpeq_15_od"};
    bipod[] = {};
    magazines[] =
    {
        LIST_8("sfp_30Rnd_556x45_Stanag_plastic"),
        LIST_2("sfp_30Rnd_556x45_Stanag_tracer_plastic"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"sfp_ak5c_m203"};
    vest[] = {"sfp_kroppsskydd12_gl"};
    magazines[] =
    {
        LIST_8("sfp_30Rnd_556x45_Stanag_plastic"),
        LIST_2("sfp_30Rnd_556x45_Stanag_tracer_plastic"),
        LIST_3("rhs_mag_M433_HEDP"),
        LIST_3("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"sfp_ak5dmk2"};
    magazines[] =
    {
        LIST_6("sfp_30Rnd_556x45_Stanag_plastic"),
        LIST_2("sfp_30Rnd_556x45_Stanag_tracer_plastic"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"sfp_kroppsskydd12_medic"};
    backpack[] = {"B_Kitbag_rgr"};
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
    primaryWeapon[] = {"sfp_cbj_ms"};
    magazines[] =
    {
        LIST_6("sfp_30Rnd_650x25mag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"sfp_kroppsskydd12_tl"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] +=
    {
        LIST_2("sfp_17Rnd_9x19_Mag")
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
    vest[] = {"sfp_kroppsskydd12_mg"};
    primaryWeapon[] = {"sfp_ksp90c"};
    backpack[] = {"sfp_backpack_stridssack08"};
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] =
    {
        LIST_2("sfp_200Rnd_556x45_ksp90"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("sfp_17Rnd_9x19_Mag")
    };
    backpackItems[] =
    {
        LIST_2("sfp_200Rnd_556x45_ksp90")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"sfp_backpack_stridssack08"};
    backpackItems[] =
    {
        LIST_2("sfp_200Rnd_556x45_ksp90")
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
    primaryWeapon[] = {"sfp_ak4d"};
    scope[] = {"sfp_optic_kikarsikte09_4x"};
    bipod[] = {"bipod_01_f_blk"};
    magazines[] =
    {
        LIST_7("sfp_20Rnd_762x51_ak4_ap"),
        LIST_2("sfp_20Rnd_762x51_ak4_tracer"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    vest[] = {"sfp_kroppsskydd12_mg"};
    primaryWeapon[] = {"sfp_ksp58B2"};
    magazines[] =
    {
        LIST_2("sfp_249Rnd_762x51_ksp58"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("sfp_17Rnd_9x19_Mag")
    };
    backpackItems[] =
    {
        LIST_2("sfp_249Rnd_762x51_ksp58")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"sfp_backpack_stridssack08"};
    backpackItems[] =
    {
        LIST_3("sfp_249Rnd_762x51_ksp58")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"sfp_backpack_stridssack08"};
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
        LIST_3("sfp_249Rnd_762x51_ksp58")
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
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"sfp_grg86"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "sfp_grg_he_mag",
        LIST_2("sfp_grg_heat_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"sfp_backpack_grg_loader"};
    backpackItems[] =
    {
        "sfp_grg_heat_mag",
        "sfp_grg_smoke_mag",
        LIST_2("sfp_grg_he_mag")
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
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        "sfp_grg_heat_mag",
        LIST_2("sfp_grg_he_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
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
    displayName = "AA Assistent Missile Specialist";
    backpack[] = {"B_Carryall_oli"};
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
class sn : r
{
    displayName = "Sniper";
    primaryWeapon[] = {"sfp_psg90_camo"};
    scope[] = {"sfp_optic_kikarsikte90b_10x"};
    sidearmWeapon[] = {"sfp_p88"};
    magazines[] =
    {
        LIST_7("sfp_9Rnd_762x51_psg90_prick"),
        LIST_2("sfp_17Rnd_9x19_Mag")
    };
};
class sp : g
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
class vc : car
{
    displayName = "Vehicle Commander";
    uniform[] = {"sfp_m90p_uniform","sfp_m90p_m90fj_uniform"};
    vest[] = {"sfp_kroppsskydd12_crew"};
    backpack[] = {"sfp_backpack_stridssack08"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    uniform[] = {"sfp_m90p_uniform","sfp_m90p_m90fj_uniform"};
    vest[] = {"sfp_kroppsskydd12_crew"};
    backpack[] = {"sfp_backpack_stridssack08"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    uniform[] = {"sfp_m90p_uniform","sfp_m90p_m90fj_uniform"};
    vest[] = {"sfp_kroppsskydd12_crew"};
    backpack[] = {"sfp_backpack_stridssack08"};
    headgear[] = {"H_HelmetCrew_I"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"sfp_m87_flying_suit"};
    backpack[] = {"sfp_backpack_stridssack08"};
    vest[] = {"sfp_kroppsskydd12_crew"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"sfp_m87_flying_suit"};
    vest[] = {"sfp_kroppsskydd12_crew"};
    backpack[] = {"sfp_backpack_stridssack08"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"sfp_m87_flying_suit"};
    vest[] = {"sfp_kroppsskydd12_crew"};
    backpack[] = {"sfp_backpack_stridssack08"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    linkedItems[] += {"ItemGPS"};
};
class jp : pp {};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
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
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"B_Carryall_oli"};
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
