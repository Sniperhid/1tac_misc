// in case of fire, tell Bear
//Author - ChrisyBGaming

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"CUP_U_O_TK_Green"};
   	vest[] = {};
   	backpack[] = {"rhs_sidor"};
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
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsgref_M56"};
	vest[] = {"CUP_V_I_Carrier_Belt"};
    primaryWeapon[] = {"hlc_rifle_ak47"};
    magazines[] =
    {
        LIST_8("hlc_30Rnd_762x39_b_ak")
    };
	backpackItems[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
	};
};
class m : r 
{
    displayName = "Medic";
	primaryWeapon[] = {"rhs_weap_m38"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
	headgear[] = {"H_Booniehat_khk"};
	magazines[] =
    {
        LIST_8("rhsgref_5Rnd_762x54_m38"),
		LIST_3("rhs_mag_9x18_8_57N181S")
    };
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_rdg2_white"),
		"rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
	};
};
class ftl : r
{
    displayName = "Fireteam Leader";
	headgear[] = {"bear_ssh68"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
	backpackItems[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white"),
		LIST_3("rhs_mag_9x18_8_57N181S")
	};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
};
class co : sl
{
    displayName = "Platoon Leader";
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"CUP_arifle_RPK74"};
	headgear[] = {"bear_ssh68"};
	magazines[] =
	{
		LIST_5("CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class rat : m
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"CUP_launch_RPG7V"};
	backpack[] = {"rhs_rpg_empty"};
	backpackItems[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white"),
		LIST_3("rhs_mag_9x18_8_57N181S"),
		LIST_2("CUP_PG7V_M")
	};
};
class trap : r
{
	displayName = "Trapper";
	primaryWeapon[] = {"CUP_hgun_SA61"};
	sidearmWeapon[] = {"CUP_hgun_SA61"};
	magazines[] =
    {
        LIST_10("CUP_20Rnd_B_765x17_Ball_M")
    };
	backpackItems[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white"),
		LIST_3("APERSTripMine_Wire_Mag")
	};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
	magazines[] =
    {
        LIST_6("hlc_30Rnd_762x39_b_ak"),
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
	backpackItems[] = {};
};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : hmgg
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
