#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Hide misc stuff";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"xmas_character",
			"xmas_weapon",
			"jean_sleigh"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
