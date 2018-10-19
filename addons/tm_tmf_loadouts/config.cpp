#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "1Tac Loadouts for TMF";
        author = "1TAC";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main","tmf_assigngear"};
        VERSION_CONFIG;
    };
};

#include "macros.hpp"

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgLoadouts.hpp"

#include "bear_gear\gearSelector.hpp"
