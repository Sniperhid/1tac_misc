#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Show hidden faces";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = 
		{
			"A3_Characters_F_Heads",
			"A3_Characters_F_Mark"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgFaces.hpp"