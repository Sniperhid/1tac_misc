#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "RHS turret servo sound fix";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_c_tanks",
			"rhs_c_t72",
			"rhs_c_sprut",
			"rhsusf_c_m1a1",
			"rhsusf_c_m1a2"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"
