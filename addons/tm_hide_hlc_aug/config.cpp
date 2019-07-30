#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Hide fluff AUG variants";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"hlcweapons_AUG"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#define HIDE_THIS scope = 1; scopeArsenal = 1; scopeCurator = 1; 
#define SHOW_THIS scope = 2; scopeArsenal = 2; scopeCurator = 2; 

//#include "CfgWeapons.hpp"
