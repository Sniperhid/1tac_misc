#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "M72E10 HE-FRAG clone of RHSUSF M72A7";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {"tm_weap_m72e10","tm_weap_m72e10_used"};
		requiredAddons[] = {"tac1_tm_main","rhsusf_c_weapons"};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
