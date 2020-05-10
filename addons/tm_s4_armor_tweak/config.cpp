#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Spec4 armor tweaks";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "lbtt_Vest_config"
        };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
