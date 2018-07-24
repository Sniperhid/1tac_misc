#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Hacky fix for Minimi model skeleton conflict";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "UK3CB_BAF_Weapons_L110", "CUP_Weapons_M249", "rhsusf_c_weapons"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"