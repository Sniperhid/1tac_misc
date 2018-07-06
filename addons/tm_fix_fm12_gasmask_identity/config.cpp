#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Fix FM-12 Gas Mask identities";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "fm12_respirator"};
        VERSION_CONFIG;
    };
};

#include "CfgGlasses.hpp"