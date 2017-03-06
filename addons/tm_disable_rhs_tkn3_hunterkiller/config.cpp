#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = "Disable RHS TKN-3 Hunter-Killer script";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_optics"
		};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscWeaponTKN3_FCS: RscUnitInfo
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	};
};