#include "\x\tac1\addons\tm_dummy_addons\script_component.hpp"

class CfgPatches {
    class achilles_data_f_achilles {
        name = "1TAC_MISC Dummy: achilles";
        author = "1TAC_MISC";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = { QUOTE(ADDON) };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
    class achilles_data_f_ares: achilles_data_f_achilles {};
    class achilles_functions_f_achilles: achilles_data_f_achilles {};
    class achilles_functions_f_ares: achilles_data_f_achilles {};
    class achilles_language_f: achilles_data_f_achilles {};
    class achilles_modules_f_achilles: achilles_data_f_achilles {};
    class AchillesEffects: achilles_data_f_achilles {};
    class achilles_modules_f_ares: achilles_data_f_achilles {};
    class achilles_settings_f: achilles_data_f_achilles {};
    class achilles_ui_f: achilles_data_f_achilles {};
};
