#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Stop 40mm grenades bouncing";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "rhs_c_weapons", "rhsusf_c_weapons"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"