#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1Tac Unit Insignia";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main"};
        VERSION_CONFIG;
    };
};

#include "players.hpp"

#include "CfgEventHandlers.hpp"
#include "CfgUnitInsignia.hpp"