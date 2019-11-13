#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "RHS Abrams idle sound fix";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"RHSUSF_c_vehicleSounds"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgSoundShaders.hpp"
