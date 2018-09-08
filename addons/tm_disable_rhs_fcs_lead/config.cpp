#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Disable RHS FCS lead";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"rhs_main", "rhsusf_main"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

class Extended_PreStart_EventHandlers {
    class tm_disable_rhs_fcs_lead {
        init = "profileNamespace setVariable ['rhs_fcsTargetLead', 0]; saveProfileNamespace;";
    };
};