#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1TAC BEST";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {QGVAR(flag)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "A3_Ui_F", "A3_Structures_F_Mil_Flags"};
        VERSION_CONFIG;
    };
};

class CfgMarkers {
    class flag_NATO;
    class GVAR(flag): flag_NATO {
        name = "1Tac Flag";
        icon = QPATHTOF(data\marker_ca.paa);
        texture = QPATHTOF(data\marker_ca.paa);
		scope = 2;
    };
    class GVAR(logo_black): flag_NATO {
        name = "1Tac (Black)";
        icon = QPATHTOF(data\logo_black_ca.paa);
        texture = QPATHTOF(data\logo_black_ca.paa);
    };
    class GVAR(logo_green): flag_NATO {
        name = "1Tac (Green)";
        icon = QPATHTOF(data\logo_green_ca.paa);
        texture = QPATHTOF(data\logo_green_ca.paa);
    };
    class GVAR(logo_white): flag_NATO {
        name = "1Tac (White)";
        icon = QPATHTOF(data\logo_white_ca.paa);
        texture = QPATHTOF(data\logo_white_ca.paa);
		scope = 2;
    };
};

class CfgVehicles {
    class FlagCarrier;
    class GVAR(flag): FlagCarrier {
        displayName = "Flag (1Tac)";
        author = "1TAC_MISC";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\flag_co.paa)));
        };
    };
};