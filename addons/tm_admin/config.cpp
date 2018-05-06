#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1TAC Admin whitelist";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "tmf_adminmenu"};
        VERSION_CONFIG;
    };
};

class tmf_adminmenu_authorized_players {
    class Bear {
        uid = "76561198014669991";
    };
    class Nick {
        uid = "76561198031183429";
    };
    class Sam {
        uid = "76561198010479904";
    };
    class Snake {
        uid = "76561198052428514";
    };
    class Snippers {
        uid = "76561197974275147";
    };
    class Titan {
        uid = "76561198002666327";
    };
};