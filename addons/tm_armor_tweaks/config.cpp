#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Vest/helmet armor tweaks";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "A3_Characters_F_Enoch",
            "lbtt_Vest_config"
        };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
