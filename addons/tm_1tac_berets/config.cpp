#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "1TAC Berets";
		author = "Feanix, Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = 
		{
			"T1_Beret_Black",
			"T1_Beret_Blue",
			"T1_Beret_Green",
			"T1_Beret_Purple",
			"T1_Beret_Red"
		};
		requiredAddons[] = 
		{
			"A3_Characters_F"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
	
	// Dummy
	class bear_1tac_berets: ADDON
	{
		name = "1TAC Berets [dependency compat]";
		author = "Bear";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};



#include "CfgWeapons.hpp"
