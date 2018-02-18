#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Tweak Faction Names";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"tac1_tm_main", "rhs_main", "rhs_c_troops", "rhsusf_main", "rhsusf_c_troops", "rhsgref_main", "rhsgref_c_troops", "rhssaf_main", "rhssaf_c_troops"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
