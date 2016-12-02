#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Hide duplicate weapons in CUP";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"CUP_Weapons_AK","CUP_Weapons_Backpacks","CUP_Weapons_G36","CUP_Weapons_Glock17",
			"CUP_Weapons_L85","CUP_Weapons_L110","CUP_Weapons_M16","CUP_Weapons_M60E4",
			"CUP_Weapons_M107","CUP_Weapons_M136","CUP_Weapons_M240","CUP_Weapons_NLAW",
			"CUP_Weapons_PK","CUP_Weapons_Saiga12k","CUP_Weapons_SMAW","CUP_Weapons_VSS",
			"CUP_Weapons_FNFAL"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
