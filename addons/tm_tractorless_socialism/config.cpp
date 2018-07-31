#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Tractorless Socialism";
        author = "gamma_gandalph";
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
        name = "1Tac Tractorless Socialism";
        icon = QPATHTOF(data\marker_ca.paa);
        texture = QPATHTOF(data\marker_ca.paa);
    };
    class GVAR(icon): flag_NATO {
        name = "1Tac TacSickle";
        icon = QPATHTOF(data\icon_co.paa);
        texture = QPATHTOF(data\icon_co.paa);
    };
};

class CfgVehicles {
    class FlagCarrier;
    class GVAR(flag): FlagCarrier {
        displayName = "Flag (1Tac Tractorless Socialism)";
        author = "gamma_gandalph";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers {
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOF(data\flag_co.paa)));
        };
    };
};