#include "script_component.hpp"

class cfgPatches
{
	class ADDON
	{
        name = "Helicam Enhancement";
		author = "Snippers";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tac1_main"};
		VERSION_CONFIG;
	};
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
