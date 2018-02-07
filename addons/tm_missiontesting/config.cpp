#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = "Mission Testing utilities";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tac1_tm_main", "acre_main"};
		VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
