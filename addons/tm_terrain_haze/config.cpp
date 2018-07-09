#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1TAC Terrain Haze Reduction";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "A3_Map_Data", "A3_Map_Altis"};
        VERSION_CONFIG;
    };
};

#include "CfgWorlds.hpp"