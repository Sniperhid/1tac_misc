#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "MG3 NIArms sounds";
		author = "Bear, NIArms";
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
