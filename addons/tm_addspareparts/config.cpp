#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = "Additional parts in vehicle inventories";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tac1_tm_main", "ace_repair"};
		VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"
