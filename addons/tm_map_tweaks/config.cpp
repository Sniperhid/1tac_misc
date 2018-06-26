#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1TAC Map Tweaks";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "ace_map"};
        VERSION_CONFIG;
    };
};

class RscMapControl {
    #include "MapTweaks.hpp"
};

class RscDisplayMainMap {
    class controlsBackground {
        class CA_Map: RscMapControl {
            #include "MapTweaks.hpp"
        };
    };
};