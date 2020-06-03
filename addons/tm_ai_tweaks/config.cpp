#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "AI Config Tweaks";
        author = "Snippers, Bear";
        authors[] = {"Snippers", "Bear"};
        authorUrl = "http://www.teamonetactical.com";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tac1_tm_main","a3_data_f","a3data","A3_Map_Data","A3_Weapons_F",
            "rhs_c_weapons","rhs_c_heavyweapons","rhs_c_airweapons","rhsusf_c_weapons","rhsusf_c_heavyweapons","rhsgref_c_weapons",
            "hlcweapons_g3",
			"CUP_Weapons_AK",
			"CUP_Weapons_FNFAL",
			"CUP_Weapons_Galil",
			"CUP_Weapons_LeeEnfield",
			"CUP_Weapons_Mosin",
			"CUP_Weapons_SKS"
        };
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgBrains.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"

// Disable AI prone stance on all(?) surfaces
class CfgSurfaces {
    class Default {
        AIAvoidStance = 2;
    };
};

// Global Coefficent.
class CfgAILevelPresets {
    class AILevelLow {
        displayName = "1Tac";
        precisionAI = 0.3;
        skillAI = 1;
    };
};


// Further Modifiers
// ACE3 AI skills
// https://community.bistudio.com/wiki/CfgAISkill

class CfgAISkill {
    aimingAccuracy[] = {0,0, 1,0.6};  // {0,0,1,1};   v1.26 defaults
    aimingShake[]    = {0,0, 1,0.9};  // {0,0,1,1};
    aimingSpeed[]    = {0,0, 1,0.8};  // {0,0.5,1,1};
    commanding[]     = {0,0, 1,0.8};  // {0,0,1,1};
    courage[]        = {0,0, 1,0.9};  // {0,0,1,1};
    endurance[]      = {0,0, 1,0.8};  // {0,0,1,1};
    general[]        = {0,0, 1,0.9};  // {0,0,1,1};
    // apparently breaks rapid firing in single fire mode for players
    //reloadSpeed[]    = {0,0, 1,0.8};  // {0,0,1,1};
    spotDistance[]   = {0,0, 1,0.9};  // {0,0.2,1,0.4};
    spotTime[]       = {0,0, 1,0.7};  // {0,0,1,0.7};
};

class CfgDifficultyPresets {
    defaultPreset = "Regular";
    class Regular {
        description = "Snippers says use this one";
        levelAI = "AILevelLow";
        displayName = "1Tac";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
    class Recruit {
        description = "Snippers says use this one";
        levelAI = "AILevelLow";
        displayName = "1Tac";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
    class Veteran {
        description = "Snippers says use this one";
        levelAI = "AILevelLow";
        displayName = "1Tac";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
    class Custom {
        description = "Snippers says use this one";
        levelAI = "AILevelLow";
        displayName = "1Tac";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 0;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
};
