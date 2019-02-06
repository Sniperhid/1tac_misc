// in case of fire, tell Bear
//Compatible with ACE Advanced Medical

// dependencies: RHS: AFRF + GREF, HLC AKs

tooltip = "Author: Bear\n\nAKMs, no body armor.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_m88_tan"};
    vest[] = {};
    backpack[] = {"rhs_sidor"};
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
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] =
    {
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
    headgear[] = {
        "rhs_ssh68",
        "rhs_ssh68",
        "ssh68_khaki",
        "ssh68_camo_green",
        "ssh68_camo_yel"
    };
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] =
    {
        "rhs_weap_akm"
    };
    scope[] = {};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_f1"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_akms"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class m : car 
{
    displayName = "Medic";
    headgear[] = {"ssh68_reg"};
    vest[] = {"bear_6sh92_khaki"};
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    primaryWeapon[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"bear_6sh92_khaki"};
    magazines[] +=
    {
        LIST_2("rhs_mag_nspd")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"bear_6sh92_khaki"};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] +=
    {
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_3("rhs_mag_9x18_12_57N181S"),
        LIST_2("rhs_mag_nspd"),
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_f1",
        LIST_2("rhs_mag_rdg2_white")
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
        "Binocular"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_arifle_RPK74"};
    bipod[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    vest[] = {"bear_6sh92_khaki"};
    magazines[] =
    {
        LIST_5("rhs_75Rnd_762x39mm"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_4("rhs_75Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    vest[] = {"bear_6sh92_khaki"};
    primaryWeapon[] = {"40th_weap_svd_wood"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rdg2_white",
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkm"};
    sidearmWeapon[] = {};
    backpack[] = {"rhs_sidor"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        "rhs_mag_f1",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    vest[] = {"bear_6sh92_khaki"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_TBG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Metis_Tripod_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Metis_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    vest[] = {"bear_6sh92_khaki"};
    secondaryWeapon[] = {};
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    vest[] = {"bear_6sh92_khaki"};
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
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
    secondaryWeapon[] = {"rhs_weap_igla"};
    backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
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
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"bear_6sh92_khaki"};
    headgear[] = {"rhs_beanie","rhs_beanie_green"};
    goggles[] = {};
    primaryWeapon[] = {"40th_weap_svd_wood"};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_f1",
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"Binocular"};
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] += {"Binocular"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"bear_6sh92_khaki"};
    backpack[] = {"B_Carryall_oli"};
    items[] +=
    {
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"rhs_sidor"};
    vest[] = {"bear_6sh92_khaki"};
    linkedItems[] += {"O_UavTerminal"};
};
