#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Field Manual for RHS RPG-7V2 via ACE Interact";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"A3_UI_F",
			"ACE_interaction",
			"rhs_c_weapons"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "fieldManual_rpg7v2.hpp"

#include "CfgFunctions.hpp"

#include "CfgVehicles.hpp"
