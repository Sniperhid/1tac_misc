#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Display faction icons in 3DEN and Zeus";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "3den"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgFunctions.hpp"
