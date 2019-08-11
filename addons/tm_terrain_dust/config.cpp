#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Force terrain dust effects";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tac1_tm_main"/*,
            "CUP_Worlds_DustEffects",
            "tem_anizay",
            "pulau",
            "Ruha"*/
        };
        VERSION_CONFIG;
    };
};

//#include "CfgVehicles.hpp"