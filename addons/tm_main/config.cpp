#include "script_component.hpp"

class cfgPatches {
	class ADDON {
        name = "1Tac Misc: Main";
		author = "1Tac";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		/* Require CBA and all components below */
		requiredAddons[] = {"cba_main"};
		VERSION_CONFIG;
	};
};