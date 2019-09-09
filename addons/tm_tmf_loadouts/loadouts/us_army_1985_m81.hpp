/* assignGear specific macros */

// this is now 1986! science!
// dependencies: US military mod, RHS USF, CUP weapons + units, HLC m60 + m14, mbg_m16a2
// originally by Fingers
//Compatible with ACE Advanced Medical

tooltip = "WARNING: MAT role is NOT RHS compatible";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "usm_bdu_wdl",
        "usm_bdu_btisrl_wdl",
        "usm_bdu_bti_wdl",
        "usm_bdu_srh_wdl",
        "usm_bdu_srl_wdl",
        "usm_bdu_bnu_wdl"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {"usm_helmet_pasgt_ce_wdl", "usm_helmet_pasgt_ceswd_wdl"};
    goggles[] = {"default", "usm_kneepads_blk"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.
    faces[] = {"faceset:african", "faceset:caucasian"};
    // Leave empty to not change faces.
    insignias[] = {"usm_USA"};
    // Leave empty to not change insignias

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
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Flashlight_MX991",
        LIST_2("ACE_CableTie"),
        LIST_3("Chemlight_green")
    };
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

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"usm_vest_pasgt_lbe_rm"};
    primaryWeapon[] = {"CUP_arifle_M16A1"};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_10("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"usm_vest_pasgt_lbe_gr"};
    primaryWeapon[] = {"CUP_arifle_M16A2_GL"}; // TODO: Replace with M16A1 M203, coming next CUPdate
    magazines[] +=
    {
        LIST_10("CUP_1Rnd_HEDP_M203"),
        LIST_4("CUP_1Rnd_Smoke_M203")
    };
};
class car : r
{
    displayName = "Carabinier";
    vest[] = {"usm_vest_pasgt_lbe_rm2"};
};
class m : car
{
    displayName = "Medic";
    backpack[] = {"B_FieldPack_khk"}; // TODO: Replace with DHI
    backpackItems[] =
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_atropine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_1("ACE_surgicalKit"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_smg_MP5A5"};
    magazines[] =
    {
        LIST_6("CUP_30Rnd_9x19_MP5"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    items[] += {"ACE_MapTools"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"CUP_hgun_M9"};
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_pasgt_lbe_rmp"};
    backPack[] = {"CUP_B_Kombat_Radio_Olive"}; // TODO: Replace with DHI
    magazines[] +=
    {
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
        "rhs_mag_m18_green"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_pasgt_lbe_rmp"};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backPack[] = {"CUP_B_Kombat_Radio_Olive"}; // TODO: Replace with DHI
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_SOFLAM"
    };
    items[] +=
    {
        "ACE_DAGR"
    };
    magazines[] +=
    {
        "rhs_mag_m18_green",
        LIST_2("rhs_mag_m18_red"),
        LIST_2("rhs_mag_m18_purple"),
        LIST_2("rhs_mag_m18_yellow")
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"usm_vest_pasgt_lbe_mg"};

    primaryWeapon[] = {"rhs_weap_m249"};
    magazines[] =
    {
        LIST_5("rhsusf_100Rnd_556x45_M855_mixed_soft_pouch"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_FieldPack_khk"}; // TODO: Replace with DHI
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_556x45_M855_mixed_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    headgear[] = {"usm_bdu_boonie_wdl"};

    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_artel_m14"};
    magazines[] =
    {
        LIST_6("hlc_20Rnd_762x51_B_M14"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    magazines[] =
    {
        LIST_4("hlc_100Rnd_762x51_M_M60E4"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_FieldPack_khk"}; // TODO: Replace with DHI
    backpackItems[] =
    {
        LIST_5("hlc_100Rnd_762x51_M_M60E4")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_FieldPack_khk"}; // TODO: Replace with DHI
    backpackItems[] =
    {
        LIST_5("hlc_100Rnd_762x51_M_M60E4"),
        "ACE_EntrenchingTool"
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
        "Binocular"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"CUP_launch_M47"};
    code = "_this addSecondaryWeaponItem 'CUP_Dragon_EP1_M'";
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] += {"CUP_Dragon_EP1_M"};
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
    backpackItems[] += {"CUP_Dragon_EP1_M"};
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
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_lbe_rm2"};
    backPack[] = {"I_Mortar_01_weapon_F"};
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
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_lbe_rm2"};
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_lbe_rm2"};
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    items[] +=
    {
        "ACE_RangeTable_82mm",
        "ACE_DAGR"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_lbe_rm2"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    code = "_this addSecondaryWeaponItem 'rhs_fim92_mag'";
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    headgear[] = {"usm_bdu_cap_wdl"};
    vest[] = {"usm_vest_lbe_rm2"};
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {};
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    vest[] = {"rhsgref_chestrig"};

    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_artel_m14"};
    sidearmWeapon[] = {"CUP_hgun_M9"};
    sidearmAttachments[] = {"cup_muzzle_snds_m9"};
    magazines[] =
    {
        LIST_6("hlc_20Rnd_762x51_B_M14"),
        LIST_2("rhs_mag_mk3a2"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] += {"ACE_Kestrel4500"};
};
class sp : r
{
    displayName = "Spotter";
    headgear[] = {};
    uniform[] = {"CUP_U_B_USMC_Ghillie_WDL"};
    vest[] = {"rhsgref_chestrig"};

    scope[] = {"cup_optic_microt1_low"};
    primaryWeapon[] = {"CUP_arifle_Colt727_M203"};
    sidearmWeapon[] = {"CUP_hgun_M9"};
    sidearmAttachments[] = {"cup_muzzle_snds_m9"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_mk3a2"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_4("CUP_1Rnd_HEDP_M203"),
        LIST_4("CUP_1Rnd_Smoke_M203"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class vg : car
{
    displayName = "Vehicle Crew";
    headgear[] = {"H_HelmetCrew_I"};
    goggles[] = {};
    vest[] = {"V_TacVest_oli"};

    magazines[] =
    {
        LIST_3("rhs_mag_30Rnd_556x45_M855_Stanag"),
        "SmokeShellGreen"
    };
};
class vc : vg
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular"};
    items[] +=
    {
        "ACE_DAGR",
        "ACE_MapTools"
    };
};
class vd : vg
{
    displayName = "Vehicle Driver";
    backpack[] = {"B_LegStrapBag_olive_F"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
    goggles[] = {};
    vest[] = {"V_TacVest_oli"};
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};

    magazines[] =
    {
        LIST_2("rhs_mag_m18_green"),
        LIST_3("CUP_30Rnd_9x19_MP5")
    };
};
class pp : pc
{
    displayName = "Helicopter Pilot";
};
class pcc : pc
{
    displayName = "Helicopter Crew Chief";
    items[] += {"ACE_MapTools"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    backpackItems[] = {"ToolKit"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"CUP_V_B_PilotVest"};

    sidearmWeapon[] = {"CUP_hgun_M9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ"),
        "rhs_mag_m18_purple"
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_MapTools"
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class engr : car
{
    displayName = "Combat Engineer (Repair)";
    backpack[] = {"B_FieldPack_cbr"}; // TODO: Replace with DHI
    backpackItems[] =
    {
        "ToolKit",
        "ACE_wirecutter",
        "ACE_EntrenchingTool"
    };
};
class eng : baseMan
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"usm_vest_pasgt"};
    backpack[] = {"rhsgref_wdl_alicepack"}; // TODO: Replace with DHI

    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    magazines[] =
    {
        LIST_8("rhsusf_8Rnd_00Buck"),
        LIST_4("rhsusf_8Rnd_Slug")
    };
    sidearmWeapon[] = {"ACE_VMM3"};
    backpackItems[] =
    {
        "SatchelCharge_Remote_Mag",
        LIST_4("DemoCharge_Remote_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
    items[] += {"ACE_Clacker","ACE_DefusalKit"};
};
class engm : baseMan
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"usm_vest_pasgt"};
    backpack[] = {"rhsgref_wdl_alicepack"}; // TODO: Replace with DHI

    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    magazines[] =
    {
        LIST_8("rhsusf_8Rnd_00Buck"),
        LIST_4("rhsusf_8Rnd_Slug")
    };
    sidearmWeapon[] = {"ACE_VMM3"};

    items[] +=
    {
        "ACE_DefusalKit",
        LIST_20("rhsusf_mine_m14_mag"),
        LIST_15("rhsusf_mine_m14_mag"),
        LIST_2("ACE_FlareTripMine_Mag"),
        "ATMine_Range_Mag"

    };
};
class UAV : smg
{
    displayName = "UAV Operator";
    headgear[] = {"usm_headwrap_odg1"};
    backpack[] = {"CUP_B_Kombat_Radio_Olive"};
    linkedItems[] += {"B_UavTerminal"};
};
