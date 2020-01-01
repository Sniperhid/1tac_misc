#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Mag Compat";
        author = "Bear, Snippers";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "tac1_tm_main",
            "A3_Weapons_F", "A3_Weapons_F_Machineguns_Zafir",
            "rhsusf_c_weapons",
            "mbg_m16a2",
            "UK3CB_BAF_Weapons",
            "ace_ballistics",
            "bear_ak74m_orange_bakelite",
            "CUP_Weapons_Mk48"
        };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
