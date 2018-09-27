#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "MG3 clone of RHSGREF MG42";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "rhsusf_c_weapons", "rhsgref_c_weapons"};
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"