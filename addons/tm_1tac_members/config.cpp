#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1Tac Members";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "tac1_tm_insignia", "tmf_adminmenu"};
        VERSION_CONFIG;
    };
};

#include "admins.hpp"

#include "players.hpp"

#include "recruits.hpp"

#include "CfgEventHandlers.hpp"

#include "CfgFunctions.hpp"