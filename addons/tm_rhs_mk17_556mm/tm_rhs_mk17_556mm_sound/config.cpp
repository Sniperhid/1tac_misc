#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "5.56mm RHS Mk17 (sound)";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "rhs_c_weapons", "rhs_c_weaponsounds", "tac1_tm_rhs_mk17_556mm"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"