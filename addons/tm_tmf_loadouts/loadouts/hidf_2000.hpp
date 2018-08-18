// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

//Made by Freddo, using a modfied example loadout, based on HIDF loadouts in RHSGREF

/* Dependencies
    RHSUSAF
    RHSAFRF
    RHSGREF
    RHSSAF
    ACE3
    CUP Units
    NIArms MP5 SMGs
    NIArms M14 Rifles
    US Military Mod
    Task Force 47 Launchers
*/

tooltip = "Author: Freddo\n\nRHS compatible\n\nBased on the RHS faction\n\nHas Laws of War equipment on some loadouts";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_ERDL"};
    vest[] = {"rhsgref_alice_webbing"};
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
    items[] = {LIST_3("ACE_fieldDressing"),"ACE_morphine","ACE_Flashlight_MX991"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemRadio",
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
    headgear[] =
    {
        "rhsgref_helmet_M1_bare",
        "rhsgref_helmet_M1_bare_alt01",
        "rhsgref_helmet_M1_painted",
        "rhsgref_helmet_M1_painted_alt01",
        "rhsgref_helmet_M1_liner"
    };
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle"};
    attachment[] = {"rhsusf_acc_wmx_bk"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_5("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle_M203"};
    magazines[] +=
    {
        LIST_4("rhs_mag_M433_HEDP"),
        LIST_2("rhs_mag_m714_White"),
        LIST_2("rhs_mag_m662_red")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
};
class m : car 
{
    displayName = "Medic";
    backPack[] = {"rhs_medic_bag"};
    backpackItems[] = 
    {
        LIST_15("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500"),
        LIST_2("rhs_mag_an_m8hc"),
        "rhs_mag_m18_green"
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a4"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_5("hlc_30Rnd_9x19_B_MP5"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
}
class sht : r
{
    displayName = "Shotgunner";
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_5("rhsusf_5Rnd_00Buck"),
        LIST_2("rhsusf_5Rnd_Slug"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    scope[] = {"rhsusf_acc_acog"};
    magazines[] +=
    {
        LIST_2("30Rnd_556x45_Stanag_Tracer_Green")
    };
    items[] += {"ACE_mapTools","ACE_CableTie"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"usm_bdu_cap_erdl"};
    linkedItems[] = {
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan"
    };
};
class fac : ftl
{
    displayName = "Forward Air Controller";
    backPack[] = {"usm_pack_alice_prc119"};
    radios[] = {"ACRE_PRC117F"};
    magazines[] += {"Laserbatteries"};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Laserdesignator_01_khk_F"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
    scope[] = {"rhsusf_acc_elcan"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    backPack[] = {"usm_pack_762x51_ammobelts"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("rhsusf_200rnd_556x45_mixed_box"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"usm_pack_200rnd_556_bandoliers"};
    backpackItems[] =
    {
        LIST_4("200Rnd_556x45_Box_F")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class rhe : car
{
    displayName = "Rifleman (M72E10)";
    secondaryWeapon[] = {"tm_weap_m72e10"};
}
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_artel_m14"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_5("20Rnd_762x51_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240G"};
    backPack[] = {"usm_pack_762x51_ammobelts"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_4("rhsusf_100Rnd_762x51"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
};
class mmgag : ftl
{
    displayName = "MMG Assistant Gunner";
    backPack[] = {"usm_pack_762x51_bandoliers"};
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
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : ftl
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_maaws"};
    backPack[] = {"rhssaf_alice_md2camo"};
    magazines[] +=
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhssaf_alice_md2camo"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT",
        "rhs_mag_maaws_HE",
        "rhs_mag_maaws_HE"
    };
};
class matag : ftl
{
    displayName = "MAT Assistant Gunner";
    backPack[] = {"rhssaf_alice_md2camo"};
    magazines[] +=
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        "rhs_mag_maaws_HEDP"
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
class hatag : ftl
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : ftl
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
    items[] += {"ACE_RangeTable_82mm"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"rhssaf_alice_md2camo"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : ftl
{
    displayName = "AA Assistent Missile Specialist";
    backPack[] = {"rhssaf_alice_md2camo"};
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"usm_bdu_boonie_erdl"};
    primaryWeapon[] = {"rhs_weap_m24sws_wd"};
    scope[] = {"rhsusf_acc_leupoldmk4_wd"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_7("rhsusf_5Rnd_762x51_m993_Mag"),
        "rhs_mag_m67",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class sp : ftl
{
    displayName = "Spotter";
    headgear[] = {"usm_bdu_boonie_erdl"};
    items[] += {"ACE_SpottingScope"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_MilCap_tna_F"};
    linkedItems[] += {"Binocular"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("hlc_30Rnd_9x19_B_MP5")
    };
};
class vd : sht
{
    displayName = "Vehicle Driver";
    backpack[] = {"B_FieldPack_khk"};
    headgear[] = {"H_MilCap_tna_F"};
    backpackItems[] = {"ToolKit"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("rhsusf_5Rnd_00Buck")
    };
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"H_Cap_headphones"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("hlc_30Rnd_9x19_B_MP5")
    };
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};
    headgear[] = {"H_Cap_headphones"};
    vest[] = {"V_TacChestrig_cbr_F"};
    backPack[] = {"usm_pack_alice_prc119"};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] += {"ItemGPS"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("hlc_30Rnd_9x19_B_MP5")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};
    headgear[] = {"H_Cap_headphones"};
    vest[] = {"V_TacChestrig_cbr_F"};
    backPack[] = {"B_FieldPack_khk"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("hlc_30Rnd_9x19_B_MP5")
    };
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};
    headgear[] = {"H_Cap_headphones"};
    vest[] = {"V_TacChestrig_cbr_F"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("hlc_30Rnd_9x19_B_MP5")
    };
};
class engr : sht
{
    displayName = "Engineer (Repair)";
    vest[] = {"V_TacChestrig_grn_F"};
    headgear[] = {"usm_bdu_cap_erdl"};
    backPack[] = {"B_LegStrapBag_olive_F"};
    backpackItems[] = {"ToolKit"};
};
class eng : sht
{
    displayName = "Combat Engineer (Explosives)";
    sidearmWeapon[] = {"ACE_VMM3"};
    magazines[] +=
    {
        "ACE_M14"
    };
    items[] +=
    {
        "ACE_DefusalKit",
        "ACE_Clacker"
    };
    backPack[] = {"B_FieldPack_khk"};
    backpackItems[] = {
        LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
        LIST_4("DemoCharge_Remote_Mag"),
        "SatchelCharge_Remote_Mag"
    };
};
class engm : sht
{
    displayName = "Combat Engineer (Mines)";
    sidearmWeapon[] = {"ACE_VMM3"};
    magazines[] +=
    {
        "ACE_M14"
    };
    items[] +=
    {
        "ACE_DefusalKit",
        "ACE_Clacker"
    };
    backPack[] = {"rhssaf_alice_md2camo"};
    backpackItems[] = {
        LIST_2("ATMine_Range_Mag"),
        LIST_10("APERSMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "APERSBoundingMine_Range_Mag"
    };
};
class jp : smg
{
    displayName = "Jet Pilot";
    headgear[] = {"rhsusf_hgu56p_visor_mask_green"};
    vest[] = {"V_Pocketed_coyote_F"};
    uniform[] = {"CUP_U_B_USMC_PilotOverall"};
    backPack[] = {"ACE_NonSteerableParachute"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    magazines[] =
    {
        LIST_2("Chemlight_green"),
        LIST_3("hlc_30Rnd_9x19_B_MP5")
    };
    linkedItems[] = {"ItemGPS"};
    code = "unitBackpack _unit additemcargoglobal ['acre_prc117F',1]";
};
