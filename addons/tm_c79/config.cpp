#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "C79 reticle variant of M145";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "CUP_Weapons_West_Attachments"};
        VERSION_CONFIG;
    };
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        tm_c79 = 1;
    };
};

class CfgWeapons {
    class ItemCore;
    class CUP_optic_ElcanM145: ItemCore {
        class CBA_ScriptedOptic;
    };
    class tm_c79: CUP_optic_ElcanM145 {
        displayName = "Elcan C79";
        class CBA_ScriptedOptic: CBA_ScriptedOptic {
            reticleTexture = "\x\tac1\addons\tm_c79\data\elcan_c79_reticle_ca.paa";
            reticleTextureNight = "\x\tac1\addons\tm_c79\data\elcan_c79_reticle_n_ca.paa";
        };
    };
};