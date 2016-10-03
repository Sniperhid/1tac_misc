#include "script_component.hpp"

class CfgPatches {
	class ADDON
	{
        name = "Helicam Enhancement";
		author = "Snippers";
		authors[] = {"Snippers"};
		authorUrl = "http://www.teamonetactical.com";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tac1_tm_main","ace_map","ace_zeus","ace_overheating","ace_advanced_fatigue"};
		VERSION_CONFIG;
	};
};

#include "ace_settings.hpp"
