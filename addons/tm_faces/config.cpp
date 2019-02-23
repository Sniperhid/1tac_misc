#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Show hidden faces";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "A3_Characters_F_Heads"};
        VERSION_CONFIG;
    };
};

#include "CfgFaces.hpp"