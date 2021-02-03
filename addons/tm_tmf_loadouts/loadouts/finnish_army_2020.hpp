// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts
tooltip = "Author: Savs";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"ffp_m05w_uniform"};
    vest[] = {"ffp_m05combatvest"};
    backpack[] = {};
    headgear[] = {"ffp_m05w_helmet","ffp_m05w_helmet_glasses","ffp_m05w_helmet_peltor"};
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
    primaryWeapon[] = {"ffp_rk95"};
    scope[] = {"cup_optic_microt1_low"};
    attachment[] = {};
    bipod[] = {};
    backpack[] = {"B_TacticalPack_oli"};
    magazines[] = 
    {
        LIST_8("ffp_30Rnd_762x39"),
        LIST_2("ffp_30Rnd_762x39_tracer"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
	sidearmWeapon[] = {"rhs_weap_M320"};
    vest[] = {"ffp_m05combatvest_grenade"};
    magazines[] =
    {
        LIST_8("ffp_30Rnd_762x39"),
        LIST_2("ffp_30Rnd_762x39_tracer"),
        LIST_3("rhs_mag_M433_HEDP"),
        LIST_3("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_6("ffp_30Rnd_762x39"),
        LIST_2("ffp_30Rnd_762x39_tracer"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"ffp_m05combatvest_radio"};
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
    primaryWeapon[] = {"sfp_mp5_rail"};
    magazines[] =
    {
        LIST_6("sfp_30Rnd_9mm_mp5"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	sidearmWeapon[] = {"ffp_pist2008"};
    vest[] = {"ffp_m05combatvest_radio"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] +=
    {
        LIST_2("ffp_17Rnd_9x9_Mag")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
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
    vest[] = {"ffp_m05combatvest"};
    primaryWeapon[] = {"ffp_kk_pkm"};//replace this with the ffp_kvkk if you want something older - the gun should be mostly phased out by now
	scope[] = {};
    sidearmWeapon[] = {"ffp_pist2008"};
    magazines[] =
    {
        "ffp_100Rnd_762x54_pkm",
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("ffp_17Rnd_9x9_Mag")
    };
    backpackItems[] =
    {
        LIST_2("ffp_100Rnd_762x54_pkm"),
		"ffp_100Rnd_762x54_pkm_tracer"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("ffp_100Rnd_762x54_pkm"),
		"ffp_100Rnd_762x54_pkm_tracer"
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"ffp_66kes12"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"ffp_ta11_2d"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    vest[] = {"ffp_m05combatvest"};
    primaryWeapon[] = {"ffp_kk_pkm"};
	scope[] = {"cup_optic_microt1_low"};//Savs should replace this with something better eventually to make the MMG be better than the AR
    magazines[] =
    {
        LIST_2("ffp_100Rnd_762x54_pkm"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("ffp_17Rnd_9x9_Mag")
    };
    backpackItems[] =
    {
        "ffp_100Rnd_762x54_pkm",
		"ffp_100Rnd_762x54_pkm_tracer"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("ffp_100Rnd_762x54_pkm"),
		LIST_2("ffp_100Rnd_762x54_pkm_tracer")
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
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("ffp_100Rnd_762x54_pkm")
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
    secondaryWeapon[] = {"ffp_nlaw"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("ffp_nlaw_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("ffp_nlaw_mag")
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
        LIST_3("ffp_nlaw_mag")
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
    primaryWeapon[] = {"ffp_Tkiv2000"};
    scope[] = {"ffp_optic_tkiv2000"};
    sidearmWeapon[] = {"ffp_pist2008"};
    magazines[] =
    {
        LIST_11("ffp_5Rnd_TKiv2000_mag"),
        LIST_2("ffp_17Rnd_9x9_Mag")
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
    uniform[] = {"ffp_m05w_uniform"};
    vest[] = {"ffp_m05combatvest_radio"};
	scope[] = {};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    uniform[] = {"ffp_m05w_uniform"};
    vest[] = {"ffp_m05combatvest"};
	scope[] = {};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    uniform[] = {"ffp_m05w_uniform"};
    vest[] = {"ffp_m05combatvest"};
	scope[] = {};
    headgear[] = {"H_HelmetCrew_I"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"sfp_m87_flying_suit"};
    vest[] = {"ffp_m05combatvest"};
    headgear[] = {"H_PilotHelmetHeli_B"};
	scope[] = {};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"sfp_m87_flying_suit"};
    vest[] = {"ffp_m05combatvest"};
    headgear[] = {"H_PilotHelmetHeli_B"};
	scope[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"sfp_m87_flying_suit"};
    vest[] = {"ffp_m05combatvest"};
    headgear[] = {"H_PilotHelmetHeli_B"};
	scope[] = {};
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
