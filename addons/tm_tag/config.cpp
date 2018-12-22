#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "1Tag";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main", "ace_tagging"};
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ACE_SpraypaintBlack;
    class GVAR(spraypaint_1TAC): ACE_SpraypaintBlack {
        displayName = "1Tac Spray Paint";
        author = "Bear";
        scope = 2;
        picture = QPATHTOF(data\itemSpraypaint1TAC.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\spraycan1TAC_co.paa)};
    };
};

class ACE_Tags {
    class GVAR(spraypaint_1TAC) {
        displayName = "1Tac Spray Paint";
        requiredItem = QGVAR(spraypaint_1TAC);
        textures[] = {QPATHTOF(data\1tac_tag_ca.paa)};
        icon = QPATHTOF(data\iconTagging1TAC.paa);
    };
};