#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "Unlock extra content";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"A3_Characters_F",
			"rhs_c_weapons",
			"rhsusf_c_weapons",
			"rhsusf_c_troops",
            "CUP_Weapons_Panzerfaust",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_Russia",
            "us_military_units"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

/*class CBA_DisposableLaunchers {
    tm_panzerfaust3_rhs[] = {"tm_panzerfaust3_rhs","tm_panzerfaust3_rhs_used"};
    tm_bunkerfaust3_rhs[] = {"tm_bunkerfaust3_rhs","tm_bunkerfaust3_rhs_used"};
};*/

#include "CfgAmmo.hpp"
#include "CfgGlasses.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"