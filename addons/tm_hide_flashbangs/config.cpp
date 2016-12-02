#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Hide Flashbangs";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_c_weapons","rhsusf_c_weapons",
			"ace_grenades"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#define HIDE_THIS scope = 1; scopeArsenal = 0;

#include "CfgMagazines.hpp"
#include "CfgSounds.hpp"
