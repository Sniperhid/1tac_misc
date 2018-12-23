#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Arsenal compatible names";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_c_weapons"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
