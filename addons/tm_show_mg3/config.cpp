#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Show MG3";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"A3_Weapons_F",
			"JO_MG_MG3"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
