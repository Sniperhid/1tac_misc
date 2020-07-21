#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "ACE Tracers compat";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tac1_tm_main",
            "rhs_c_weapons",
            "rhs_c_heavyweapons",
            "rhsusf_c_weapons",
            "rhsusf_c_heavyweapons",
            "CUP_Weapons_Ammunition",
            "ace_tracers",
            "UK3CB_BAF_Vehicles_Weapons",
            "UK3CB_BAF_Weapons_Ammo"
        };
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"