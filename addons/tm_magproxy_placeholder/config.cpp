#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Magazine proxy placeholder models";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main" /*, "A3_Weapons_F", "rhs_c_weapons", "rhsusf_c_weapons", "UK3CB_BAF_Weapons_Ammo"*/};
        VERSION_CONFIG;
    };
};

//#include "CfgMagazines.hpp"