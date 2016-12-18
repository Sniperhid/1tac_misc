#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Recoil tweaks";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"A3_Weapons_F",
			"rhsusf_c_weapons"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgRecoils.hpp"
#include "CfgWeapons.hpp"
