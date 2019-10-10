#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "5.56mm RHS Mk17";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {
            QGVAR(cqc),
            QGVAR(cqc_grip),
            QGVAR(cqc_grip2),
            QGVAR(cqc_grip3),
            QGVAR(std),
            QGVAR(std_grip),
            QGVAR(std_grip2),
            QGVAR(std_grip3),
            QGVAR(lb),
            QGVAR(lb_grip),
            QGVAR(lb_grip2),
            QGVAR(lb_grip3)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "rhs_c_weapons"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"