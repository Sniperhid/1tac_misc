#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Dummy Addons";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"tac1_tm_main"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};
