#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = "AI Config Tweaks";
        author = "Snippers";
        authors[] = {"Snippers"};
        authorUrl = "http://www.teamonetactical.com";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tac1_tm_main","a3_data_f","a3data"};
        VERSION_CONFIG;
    };
};

class CfgAILevelPresets {
    class AILevelLow {
        displayName = "1Tac";
        precisionAI = 0.345;
        skillAI = 1;  
    };
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
