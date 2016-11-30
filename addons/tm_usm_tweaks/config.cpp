#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "US Military Mod tweaks";
		author = "Delta, Snippers";
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
