#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Cursed Weapons";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "rhsusf_c_weapons"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"