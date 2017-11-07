#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = "Unlock extra RHS content";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = 
		{
			"A3_Characters_F",
			"rhsusf_c_troops"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgWeapons.hpp"
