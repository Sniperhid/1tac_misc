#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Weapon Tweaks";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"tac1_tm_main", "A3_Weapons_F", "rhs_c_weapons", "rhsusf_c_weapons", "rhsgref_c_weapons", "hlcweapons_g3", "CUP_Weapons_VehicleWeapons", "CUP_Weapons_TEC9"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

#include "CfgRecoils.hpp"
#include "CfgWeapons.hpp"
