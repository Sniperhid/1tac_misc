#include "\x\tac1\addons\tm_missiontesting\script_component.hpp"

params ["_toggleOff"];

GVAR(acre_toggle) = [0, 1] select _toggleOff;

[GVAR(acre_toggle) == 1] call acre_api_fnc_setSpectator;
["setSoundSystemMasterOverride", [GVAR(acre_toggle)]] call acre_sys_rpc_fnc_callRemoteProcedure;

systemChat format [
    "[MISSION TESTING] ACRE2 %1; any admin can toggle on/off with the '#toggleacre2' chat command.",
    ["enabled", "disabled"] select GVAR(acre_toggle)
];
