/* assignGear specific macros */

// dependencies: US military mod, RHS USF, CUP units, mbg_m16a2, RHS SAF, RHS GREF, 3CB Weapons, ACE
/* Originally by Morbo */

//tooltip = "Author: Snippers"; //confirm
//Compatible with ACE Advanced Medical

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"usm_bdu_odg"};
    vest[] = {};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    headgear[] = {};
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
    faces[] = {"faceset:american"};
};
class r : baseMan
{
    displayName = "Rifleman (M14)";
    headgear[] = 
    {
        "rhsgref_helmet_M1_bare",
        "rhsgref_helmet_M1_bare_alt01"
    };
    vest[] = {"usm_vest_LBE_rm"};
    backpack[] = {"CUP_B_AlicePack_Khaki"};
    primaryWeapon[] = {"rhs_weap_m14"};
    magazines[] =
    {
        LIST_7("rhsusf_20Rnd_762x51_m80_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
    backpackItems[] = {"ACE_EntrenchingTool"};
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class ra : r
{
    displayName = "Rifleman (M16)";
    primaryWeapon[] = {"CUP_arifle_M16A1"};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855_Stanag"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc"
    };
};
class rm : r
{
    displayName = "Rifleman (Garand)";
    primaryWeapon[] = {"rhs_weap_m1garand_sa43"};
    magazines[] =
    {
        LIST_15("rhsgref_8Rnd_762x63_M2B_M1rifle"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc"
    };
};
class car : ra
{
    displayName = "Carabinier";
    primaryWeapon[] = {"CUP_arifle_M16A1"};
};
class g : car
{
    displayName = "Grenadier";
    vest[] = {"usm_vest_LBE_gr"};
    primaryWeapon[] = {"rhs_weap_m79"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_10("rhs_mag_M441_HE"),
        LIST_6("rhsusf_mag_7x45acp_MHP"),
        LIST_4("rhs_mag_m714_White"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("rhs_mag_m662_red"),
        LIST_2("rhs_mag_m661_green"),
        LIST_2("rhs_mag_M585_white")
    };
};
class m : ra
{
    displayName = "Medic";
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    magazines[] =
    {
        LIST_6("rhsusf_5Rnd_00Buck"),
        LIST_3("rhsusf_5Rnd_Slug"),
        LIST_2("rhs_mag_an_m8hc")
    };
    backpack[] = {"usm_pack_m5_medic"};
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
        LIST_3("rhs_mag_an_m8hc")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m3a1"};
    magazines[] = 
    {
        LIST_6("rhsgref_30rnd_1143x23_M1911B_SMG"),
        LIST_2("rhs_mag_m67"),
        "rhs_mag_an_m8hc"
    };
};
class ftl : r
{
    displayName = "Fireteam Leader (M14)";
    magazines[] +=
    {
        LIST_4("rhs_mag_an_m8hc"),
        LIST_2("rhs_mag_m18_purple")
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class ftla : ra
{
    displayName = "Fireteam Leader (M16)";
    magazines[] +=
    {
        LIST_4("rhs_mag_an_m8hc"),
        LIST_2("rhs_mag_m18_purple")
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class sl : ftla
{
    displayName = "Squad Leader";
    vest[] = {"usm_vest_LBE_rmp"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
};
class slr : sl
{
    displayName = "Squad Leader(Radio)";
    backpack[] = {"usm_pack_st138_prc77"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"rhsgref_hat_M1951"};
    backpack[] = {"usm_pack_st138_prc77"};
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Platoon Sergeant";
    backpack[] = {"usm_pack_alice_prc77"};
    magazines[] += {
        LIST_2("rhs_mag_m18_red"),
        LIST_2("rhs_mag_m18_purple")
    };
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_M60"};
    backPack[] = {"usm_pack_762x51_ammobelts"};
    vest[] = {"usm_vest_LBE_mg"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : ra
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
    backpackItems[] =
    {
        "rhs_weap_m72a7"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m14_rail"};
    scope[] = {"optic_khs_old"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : ra
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class hmgg : smg
{
    displayName = "HMG Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_L111A1"};
    backPack[] = {"usm_pack_alice"};
    backpackItems[] = {"UK3CB_BAF_127_100Rnd"};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"usm_pack_alice"};
    backpackItems[] = {"UK3CB_BAF_127_100Rnd"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_Tripod"};
    backPack[] = {"usm_pack_alice"};
    backpackItems[] = {"UK3CB_BAF_127_100Rnd"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j",
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"usm_pack_alice"};
    secondaryWeapon[] = {"rhs_weap_maaws"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class matac : ra
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"usm_pack_alice"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"usm_pack_alice"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"rhs_Tow_Gun_Bag"};
    backpackItems[] = {};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"rhs_Tow_Gun_Bag"};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"rhs_TOW_Tripod_Bag"};
    backpackItems[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    secondaryWeapon[] = {"UK3CB_BAF_M6"};
    backPack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = 
    {
        LIST_6("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
        LIST_2("UK3CB_BAF_1Rnd_60mm_Mo_Flare_White"),
        LIST_2("UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = 
    {
        LIST_6("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
        LIST_2("UK3CB_BAF_1Rnd_60mm_Mo_Flare_White"),
        LIST_2("UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White")
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = 
    {
        LIST_6("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
        LIST_2("UK3CB_BAF_1Rnd_60mm_Mo_Flare_White"),
        LIST_2("UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j",
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    headgear[] = {"rhsgref_hat_M1951"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    headgear[] = {"rhsgref_hat_M1951"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : dm
{
    displayName = "Sniper";
    headgear[] = {"usm_bdu_boonie_odg"};
};
class sp : rm
{
    displayName = "Spotter";
    headgear[] = {"usm_bdu_boonie_odg"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
    magazines[] += {"ClaymoreDirectionalMine_Remote_Mag"};
    items[] += {"ACE_EntrenchingTool","ACE_MapTools","ACE_DefusalKit"};
};
class vg : smg
{
    displayName = "Vehicle Crew";
    headgear[] = {"H_HelmetCrew_I"};
    vest[] = {"rhsgref_otv_khaki"};
    backpack[] = {};
    backpackItems[] = {};
};
class vc : vg
{
    displayName = "Vehicle Commander";
    backpack[] = {"usm_pack_st138_prc77"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
};
class vd : vg
{
    displayName = "Vehicle Driver";
    backPack[] = {"usm_pack_abag_m60"};
    backpackItems[] = {"ToolKit"};
};
class pc : vg
{
    displayName = "Helicopter Crew";
    headgear[] = {"CUP_H_USMC_Helmet_Pilot"};
};
class pp : pc
{
    displayName = "Helicopter Pilot";
    backpack[] = {"usm_pack_st138_prc77"};
    magazines[] += {
        LIST_2("rhs_mag_m18_purple")
    };
};
class pcc : pc
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"usm_pack_abag_m60"};
    backpackItems[] = {"ToolKit"};
};
class jp : baseMan
{
    displayName = "Plane pilot";
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    vest[] = {"bear_otv_tan"};
    headgear[] = {"CUP_H_RUS_TSH_4_Brown"};
    goggles[] = {"G_Lowprofile"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    backpack[] = {"rhsusf_eject_Parachute_backpack"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_MapTools"
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    code = "(unitBackpack _unit) addItemCargoGlobal ['ACRE_PRC77',1];";
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    sidearmWeapon[] = {"ACE_VMM3"};
    backpackItems[] = {
        "ACE_wirecutter",
        "ToolKit",
        LIST_4("DemoCharge_Remote_Mag"),
        "SatchelCharge_Remote_Mag",
        LIST_2("rhs_mag_an_m14_th3")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    sidearmWeapon[] = {"ACE_VMM3"};
    backpackItems[] = {
        LIST_2("ATMine_Range_Mag"),
        LIST_15("rhsusf_mine_m14_mag"),
        LIST_4("ClaymoreDirectionalMine_Remote_Mag"),
        "APERSTripMine_Wire_Mag"
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class UAV : car
{
    displayName = "UAV Operator";
    backpackItems[] = {};
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_UavTerminal"};
};
