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
            "rhsgref_c_troops",
            "lbtt_Vest_config",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_USMC",
            "CUP_Creatures_Military_Russia",
            "CUP_Creatures_Military_PMC",
            "CUP_Creatures_Military_Germany",
            "UK3CB_BAF_Equipment_Vests"
        };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
