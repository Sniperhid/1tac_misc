#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Ampersand38's Brush Clearing script";
        author = "Ampersand38";
        url = "https://github.com/ampersand38/Brush-Clearing";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "ace_trenches"};
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
