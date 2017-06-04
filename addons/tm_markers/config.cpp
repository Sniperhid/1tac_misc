#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		name = "More marker shapes";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_UI_F"};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
	
	class bear_patches_marker_brushes // dummy addon
	{
		name = "More marker shapes";
		author = "Bear";
		url = "http://www.teamonetactical.com";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_UI_F"};
		requiredVersion = REQUIRED_VERSION;
		VERSION_CONFIG;
	};
};

#include "CfgMarkers.hpp"
#include "CfgMarkerBrushes.hpp"
