#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "5.56mm variant of IWI Negev NG5";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "A3_Weapons_F_Machineguns_Zafir"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"