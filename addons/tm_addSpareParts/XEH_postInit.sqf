#include "script_component.hpp"

if (isServer) then {
    ["ace_settingsInitialized", {
		if (!ace_repair_addSpareParts) exitWith {};
		if (!(["ace_cargo"] call ace_common_fnc_isModLoaded)) exitWith {};
		["Car", "Init", {[_this select 0, 1, "ACE_Wheel"] call ace_repair_fnc_addSpareParts}, true, [], true] call CBA_fnc_addClassEventHandler;
		["Tank", "Init", {[_this select 0, 2, "ACE_Track"] call ace_repair_fnc_addSpareParts}, true, [], true] call CBA_fnc_addClassEventHandler;
	}] call CBA_fnc_addEventHandler;
};