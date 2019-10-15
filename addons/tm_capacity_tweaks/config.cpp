#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Gear capacity tweaks";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Characters_F",
			"us_military_units",
			"rhs_c_troops",
			"rhsusf_c_troops",
			"rhsgref_c_troops",
			"rhssaf_c_troops",
			"rhs_c_weapons",
            "CUP_Weapons_MG3",
            "CUP_Weapons_Backpacks",
			"CUP_Creatures_Military_Taki",
            "hlcweapons_core",
            "hlcweapons_m60e4"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

class UniformItem;

#include "CfgMagazines.hpp"

#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"
