#include "script_component.hpp"

if (serverName != "Team One Tactical - EU #2") exitWith {};

if (isServer) then {
    missionNamespace setVariable [QGVAR(acre_toggle), 1, true];
} else {
    player createDiarySubject [QGVAR(diary), "Mission Testing"];
    player createDiaryRecord [QGVAR(diary), "ACRE2 is disabled by default on the mission testing server. Admins can toggle it on/off using the <font color='#FFA500'>#toggleacre2</font> chat commmand."];

    ["toggleacre2", {
        missionNamespace setVariable [QGVAR(acre_toggle), 1 - GVAR(acre_toggle), true];
        ["setSoundSystemMasterOverride", [GVAR(acre_toggle)]] remoteExecCall ["acre_sys_rpc_fnc_callRemoteProcedure", -2];
    }, "admin"] call CBA_fnc_registerChatCommand;

    [{
        !isNil QGVAR(acre_toggle) && time > 1
    }, {
        ["setSoundSystemMasterOverride", [GVAR(acre_toggle)]] call acre_sys_rpc_fnc_callRemoteProcedure;
    }] call CBA_fnc_waitUntilAndExecute;
};
