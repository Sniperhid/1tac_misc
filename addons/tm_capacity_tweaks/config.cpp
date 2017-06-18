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
			"us_military_units"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"

#include "CfgWeapons.hpp"
