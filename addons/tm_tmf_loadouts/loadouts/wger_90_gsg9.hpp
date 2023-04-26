tooltip = "West German GSG-9, 1990. Author: Käsmeister";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_ge_bgs_uniform_special_80_blk","gm_ge_bgs_uniform_special_rolled_80_blk"};
    vest[] = {""};
    backpack[] = {""};
    headgear[] = {
        "gm_ge_bgs_headgear_beret_grn_sf"
    };
    goggles[] = {"gm_ge_facewear_stormhood_blk"};
    hmd[] = {""};
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
    
    insignias[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
	headgear[] = {
		"gm_ge_headgear_psh77_oli",
        "gm_ge_bgs_headgear_psh77_cover_smp",
		"gm_ge_headgear_psh77_up_oli",
		"gm_ge_bgs_headgear_psh77_cover_up_smp",
		"gm_ge_headgear_psh77_down_oli",
		"gm_ge_bgs_headgear_psh77_cover_down_smp"
	};
    vest[] = {"gm_ge_bgs_vest_type18_blk"};
    backpack[] = {""};
    primaryWeapon[] = {"gm_sg551_blk"};
    magazines[] =
    {
        LIST_6("gm_30Rnd_556x45mm_B_DM11_sg550_brn"),
        LIST_2("gm_30Rnd_556x45mm_B_T_DM21_sg550_brn"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
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
    primaryWeapon[] = {"gm_hk69a1_blk"};
	sidearmWeapon[] = {"gm_p210_blk"};
    magazines[] =
    {
        LIST_10("1Rnd_HE_Grenade_shell"),
		LIST_3("gm_8Rnd_9x19mm_B_DM11_p210_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class car : r
{
    displayName = "Carabinier";
    magazines[] =
    {
        LIST_5("gm_30Rnd_556x45mm_B_DM11_sg550_brn"),
        LIST_1("gm_30Rnd_556x45mm_B_T_DM21_sg550_brn"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_1("gm_smokeshell_wht_dm25")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mp5a2_blk"};
    magazines[] =
    {
        LIST_6("gm_30Rnd_9x19mm_B_DM11_mp5_blk"),
        "gm_handgrenade_frag_dm51a1",
		"gm_smokeshell_wht_dm25"
    };
};
class m : smg
{
    displayName = "Medic";
    vest[] = {"gm_ge_vest_sov_armor_80_blk"};
    backpack[] = {"gm_ge_backpack_satchel_80_san"};
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
        LIST_1("ACE_surgicalKit")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    vest[] = {"gm_ge_vest_sov_armor_80_blk"};
	sidearmWeapon[] = {"gm_p210_blk"};
	magazines[] = 
	{
		LIST_6("gm_30Rnd_556x45mm_B_DM11_sg550_brn"),
        LIST_2("gm_30Rnd_556x45mm_B_T_DM21_sg550_brn"),
		LIST_2("gm_8Rnd_9x19mm_B_DM11_p210_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
	};
    linkedItems[] += {"gm_ferod16_oli","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] =
    {
        LIST_6("gm_30Rnd_556x45mm_B_DM11_sg550_brn"),
        LIST_2("gm_30Rnd_556x45mm_B_T_DM21_sg550_brn"),
		LIST_2("gm_8Rnd_9x19mm_B_DM11_p210_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_1("gm_smokeshell_wht_dm25")
    };
};
class fac : co
{
    displayName = "Forward Air Controller";
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
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
	backpack[] = {"gm_ge_army_backpack_80_oli"};
    primaryWeapon[] = {"gm_g8a2_blk"};
	scope[] = {"gm_feroz24_stanaghk_blk"};
	bipod[] = {"gm_g8_bipod_blk"};
    sidearmWeapon[] = {"gm_p210_blk"};
    magazines[] =
    {
        LIST_8("gm_40Rnd_762x51mm_B_T_DM21A2_g3_blk"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p210_blk"),
        "gm_handgrenade_frag_dm51a1",
        "gm_smokeshell_wht_dm25"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"gm_ge_army_backpack_80_oli"};
    backpackItems[] =
    {
        LIST_6("gm_40Rnd_762x51mm_B_T_DM21A2_g3_blk")
    };
    linkedItems[] += {"gm_ferod16_oli"};
};
class rat : car
{
    displayName = "Rifleman (PzF3)";
    backpack[] = {"gm_ge_army_backpack_80_oli"};
    secondaryWeapon[] = {"gm_pzf44_2_oli"};
	secondaryAttachments[] = {"gm_feroz2x17_pzf44_2_blk"};
    backpackItems[] = {LIST_2("gm_1Rnd_44x537mm_heat_dm32_pzf44_2")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"gm_psg1_blk"};
	sidearmWeapon[] = {"gm_p210_blk"};
    scope[] = {"gm_zf6x42_psg1_stanag_blk"};
	bipod[] = {"gm_msg90_bipod_blk"};
    magazines[] =
    {
        LIST_10("gm_10Rnd_762x51mm_AP_DM151_g3_blk"),
		LIST_2("gm_8Rnd_9x19mm_B_DM11_p210_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_smokeshell_wht_dm25")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backpack[] = {"gm_ge_army_backpack_80_oli"};
	primaryWeapon[] = {"gm_mg8a2_blk"};
	scope[] = {"gm_feroz24_stanaghk_blk"};
	bipod[] = {"gm_g8_bipod_blk"};
	sidearmWeapon[] = {"gm_p210_blk"};
    magazines[] =
    {
        LIST_4("gm_100Rnd_762x51mm_B_T_DM21A1_mg8_oli"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p210_blk"),
        "gm_handgrenade_frag_dm51a1",
        "gm_smokeshell_wht_dm25"
    };
	
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
	backpackItems[] = {LIST_2("gm_100Rnd_762x51mm_B_T_DM21A1_mg8_oli")};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	backpackItems[] = {LIST_2("gm_100Rnd_762x51mm_B_T_DM21A1_mg8_oli")};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli",
        "ItemGPS"
    };
};
class hmgg : mmgg
{
    displayName = "HMG Gunner - Same as MMG";

};
class hmgac : mmgac
{
    displayName = "HMG Ammo Carrier - Same as MMG";
};
class hmgag : mmgag
{
    displayName = "HMG Assistant Gunner - Same as MMG";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
	backpack[] = {"rhs_tortila_black"};
    secondaryWeapon[] = {"gm_pzf3_blk"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_tortila_black"};
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"rhs_tortila_black"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_60mm_heat_dm12_pzf3")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"gm_milan_launcher_weaponBag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"gm_milan_launcher_weaponBag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"gm_milan_launcher_weaponBag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli"
    };
};
class mtrg : car
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
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"gm_fim43_oli"};
	backpack[] = {"gm_ge_army_backpack_80_oli"};
    magazines[] +=
    {
        LIST_2("gm_1Rnd_70mm_he_m585_fim43")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"gm_ge_army_backpack_80_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_70mm_he_m585_fim43")
    };
};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] = {"gm_msg90a1_blk"};
	scope[] = {"gm_zf10x42_stanaghk_blk"};
	bipod[] = {"gm_msg90_bipod_blk"};
};
class sp : smg
{
    displayName = "Spotter";
	magazines[] =
    {
        LIST_8("gm_30Rnd_9x19mm_B_DM11_mp5_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1"),
		LIST_2("gm_smokeshell_wht_dm25")
    };
	items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "gm_ferod16_oli",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"gm_ge_bgs_vest_type18_blk"};
    backpack[] = {""};
    headgear[] = {"gm_ge_bgs_headgear_beret_crew_grn_sf"};
    linkedItems[] += {"gm_ferod16_oli"};
};
class vd : vc
{
    displayName = "Vehicle Driver";
    backpack[] = {"gm_ge_army_backpack_80_oli"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
    backpack[] = {"gm_ge_army_backpack_80_oli"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    sidearmWeapon[] = {"gm_p210_blk"};
    vest[] = {"gm_ge_army_vest_pilot_oli"};
    headgear[] = {"gm_ge_headgear_sph4_oli"};
    goggles[] = {"default"};
    magazines[] += {LIST_2("gm_8Rnd_9x19mm_B_DM11_p210_blk")};
	linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    backpack[] = {"gm_ge_army_backpack_80_oli"};
    backpackItems[] = {"ToolKit"};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    backpackItems[] = {};
};
class jp : pp
{
    displayName = "Jet pilot";
};
class eng : smg
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"gm_ge_bgs_vest_type18_blk"};
    backpack[] = {"gm_ge_army_backpack_80_oli"};
	primaryWeapon[] = {"gm_hk512_wud"};
	attachment[] = {"gm_surefire_l60_wht_hoseclamp_blk"};
	magazines[] = 
	{
		LIST_10("gm_7rnd_12ga_hk512_pellet"),
		LIST_2("gm_handgrenade_frag_dm51a1"),
		LIST_2("gm_smokeshell_wht_dm25")
	};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",     
        LIST_4("gm_explosive_petn_charge")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : smg
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"gm_ge_bgs_vest_type18_blk"};
    backpack[] = {"gm_ge_army_backpack_80_oli"};
	primaryWeapon[] = {"gm_hk512_wud"};
	attachment[] = {"gm_surefire_l60_wht_hoseclamp_blk"};
	magazines[] = 
	{
		LIST_10("gm_7rnd_12ga_hk512_pellet"),
		LIST_2("gm_handgrenade_frag_dm51a1"),
		LIST_2("gm_smokeshell_wht_dm25")
	};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_4("gm_mine_ap_dm31")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};
