#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Tweak availability of RHS vehicle user actions such as opening rear M113 door";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "RHS_US_A2_AirImport",
            "RHS_US_A2Port_Armor",
            "rhsusf_c_Caiman",
            "rhsusf_c_m113",
            "rhsusf_c_RG33L",
            "rhs_c_btr"
        };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

//#include "CfgVehicles.hpp"
