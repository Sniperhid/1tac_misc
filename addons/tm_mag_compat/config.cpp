#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Mag Compat";
		author = "Delta, Snippers, Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"tac1_tm_main",
			"A3_Weapons_F","A3_Weapons_F_Exp","A3_Weapons_F_Rifles_TRG20","A3_Weapons_F_Rifles_MK20",
			"hlcweapons_core","hlcweapons_aks",
			"rhs_c_weapons","rhsusf_c_weapons","rhsgref_c_weapons","rhssaf_c_weapons",
			"cup_weapons_grenadelaunchers","cup_weapons_l85","cup_weapons_m249","cup_weapons_mk48","cup_weapons_scar","cup_weapons_xm8",
            "mbg_m16a2",
            "UK3CB_BAF_Weapons",
            "ace_ballistics"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
