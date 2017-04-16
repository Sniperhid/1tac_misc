#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "NIArms sounds for JO MG3";
		author = "Bear, NIArms";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Sounds_F_Mark",
			"JO_MG_MG3"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "niarms\cfgSoundset.hpp"
#include "niarms\cfgSoundshaders.hpp"
#include "CfgWeapons.hpp"
