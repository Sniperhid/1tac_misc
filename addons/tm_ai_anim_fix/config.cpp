#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = "Fixes AI Animation weirdness";
		author = "Snippers";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tac1_tm_main"};
		VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
