// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Toiton";
//Based on LDF Faction provided by BIS

class baseMan {
    displayName = "Unarmed";
    faces[] = {"faceset:caucasian"};
    uniform[] = {"U_I_E_Uniform_01_F", "U_I_E_Uniform_01_shortsleeve_F"};
    vest[] = {"V_CarrierRigKBT_01_EAF_F","V_CarrierRigKBT_01_Olive_F"};
    backpack[] = {"B_AssaultPack_eaf_F","B_AssaultPack_wdl_F"};
    headgear[] = {};    
    goggles[] = {"default"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

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
        "ACE_morphine",
        "ACE_tourniquet"
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
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
    headgear[] = {"H_HelmetHBK_headset_F"};
    backpack[] = {"B_Kitbag_rgr"};
    vest[] = {"V_CarrierRigKBT_01_light_Olive_F","V_CarrierRigKBT_01_light_EAF_F"};
    primaryWeapon[] = {"arifle_MSBS65_F"};
    scope[] = {"optic_ico_01_f"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_msbs_mag"),
        LIST_2("30Rnd_65x39_caseless_msbs_mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MSBS65_GL_F"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class sg : r
{
    displayName = "Breacher";
    primaryWeapon[] = {"arifle_MSBS65_UBS_F"};
    magazines[] +=
    {
        LIST_4("6Rnd_12Gauge_Pellets"),
        LIST_4("6Rnd_12Gauge_Slug")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F","V_CarrierRigKBT_01_heavy_EAF_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
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
    primaryWeapon[] = {"SMG_03C_khaki"};
    magazines[] =
    {
        LIST_6("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    headgear[] = {"H_HelmetHBK_ear_F"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"H_HelmetHBK_chops_F"};
    backpack[] = {"B_RadioBag_01_eaf_F"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
    magazines[] +=
    {
        LIST_4("11Rnd_45ACP_Mag")
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
    headgear[] = {"H_Beret_EAF_01_F","H_MilCap_eaf"};
    uniform[] = {"U_I_E_Uniform_01_officer_F"};
};
class fac : sl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F","V_CarrierRigKBT_01_heavy_EAF_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    primaryWeapon[] = {"LMG_Mk200_black_F"};
    scope[] = {"optic_holosight_blk_f"};
    bipod[] = {"bipod_03_f_oli"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
    magazines[] =
    {
        LIST_2("200Rnd_65x39_cased_Box"),
        "200Rnd_65x39_cased_Box_Tracer",
        "HandGrenade",
        "SmokeShell",
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    backpackItems[] =
    {
        LIST_2("200Rnd_65x39_cased_Box")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
    magazines[] += {LIST_2("MRAWS_HEAT55_F")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"arifle_MSBS65_Mark_F"};
    scope[] = {"optic_arco_lush_f"};
    bipod[] = {"bipod_03_f_oli"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_msbs_mag"),
        LIST_2("30Rnd_65x39_caseless_msbs_mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"LMG_Mk200_black_F"};
    scope[] = {"optic_hamr"};
    magazines[] =
    {
        LIST_6("200Rnd_65x39_cased_Box"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    backpackItems[] =
    {
        LIST_3("200Rnd_65x39_cased_Box")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    headgear[] = {"H_HelmetHBK_ear_F"};
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
        LIST_1("200Rnd_65x39_cased_Box_Tracer"),
        LIST_2("200Rnd_65x39_cased_Box_Tracer")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"I_E_HMG_01_Weapon_F"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"I_E_HMG_01_Weapon_F"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    headgear[] = {"H_HelmetHBK_ear_F"};
    backPack[] = {"I_E_HMG_01_support_F"};
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
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    magazines[] +=
    {
        LIST_3("MRAWS_HEAT_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    headgear[] = {"H_HelmetHBK_ear_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
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
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    secondaryWeapon[] = {"launch_I_Titan_short_F"};
    backpackItems[] = {LIST_2("Titan_AT")};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    backpackItems[] = {LIST_2("Titan_AT")};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    headgear[] = {"H_HelmetHBK_ear_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    backpackItems[] = {LIST_2("Titan_AT")};
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
    backPack[] = {"I_E_Mortar_01_Weapon_F"};
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
    backPack[] = {"I_E_Mortar_01_Weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    headgear[] = {"H_HelmetHBK_ear_F"};
    backPack[] = {"I_E_Mortar_01_support_F"};
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
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
    secondaryWeapon[] = {"launch_I_Titan_eaf_F"};
    magazines[] +=
    {
        LIST_3("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    headgear[] = {"H_HelmetHBK_ear_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
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
        LIST_2("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"H_Booniehat_eaf"};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_DMR_02_camo_F"};
    scope[] = {"optic_ams_khk"};
    bipod[] = {"bipod_03_f_oli"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
    magazines[] =
    {
        LIST_7("10Rnd_338_Mag"),
        LIST_2("HandGrenade"),
        LIST_4("11Rnd_45ACP_Mag")
    };
};
class sp : g
{
    displayName = "Spotter";
    headgear[] = {"H_Booniehat_eaf"};
    scope[] = {"optic_erco_khk_f"};
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
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_CarrierRigKBT_01_Olive_F","V_CarrierRigKBT_01_EAF_F"};
    backpack[] = {"B_AssaultPack_eaf_F"};
    headgear[] = {"H_HelmetCrew_I_E"};
};
class vc : vg
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : vg
{
    displayName = "Vehicle Driver";
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    vest[] = {"V_CarrierRigKBT_01_Olive_F","V_CarrierRigKBT_01_EAF_F"};
    backpack[] = {"B_AssaultPack_eaf_F"};
    headgear[] = {"H_PilotHelmetHeli_I_E"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pp : pc
{
    displayName = "Helicopter Pilot";
    headgear[] = {"H_CrewHelmetHeli_I_E"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : pc
{

    displayName = "Helicopter Crew Chief";
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_I_E_Uniform_01_coveralls_F"};
    vest[] = {"V_CarrierRigKBT_01_Olive_F","V_CarrierRigKBT_01_EAF_F"};
    headgear[] = {"H_CrewHelmetHeli_I_E"};
    goggles[] = {};
	sidearmWeapon[] = {"hgun_Pistol_heavy_01_green_F"};
    magazines[] =
    {
        LIST_4("11Rnd_45ACP_Mag")
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
    uniform[] = {"U_I_E_Uniform_01_sweater_F"};
    headgear[] = {"H_HelmetHBK_chops_F"};
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F","V_CarrierRigKBT_01_heavy_EAF_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};
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
    uniform[] = {"U_I_E_Uniform_01_sweater_F"};
    headgear[] = {"H_HelmetHBK_chops_F"};
    vest[] = {"V_CarrierRigKBT_01_heavy_Olive_F","V_CarrierRigKBT_01_heavy_EAF_F"};
    backpack[] = {"B_Carryall_green_F","B_Carryall_eaf_F"};    
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
    backpack[] = {"I_E_UAV_01_backpack_F"};
    linkedItems[] += {"I_E_UavTerminal"};
};
