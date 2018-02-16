#include "script_component.hpp"

if (serverName != "Team One Tactical - EU #2") exitWith {};

if (isServer) then {
    missionNamespace setVariable [QGVAR(acre_toggle), 1, true];
} else {
    player createDiarySubject [QGVAR(diary), "Mission Testing"];
    player createDiaryRecord [
        QGVAR(diary), [
            "ACRE2 Toggle",
            "ACRE2 is disabled by default on the mission testing server. Admins can toggle it on/off using the <font color='#FFA500'>#toggleacre2</font> chat commmand."
        ]
    ];

    ["toggleacre2", {
        [1 - GVAR(acre_toggle)] remoteExecCall [QFUNC(toggleACRE2), -2];
    }, "admin"] call CBA_fnc_registerChatCommand;

    ["CBA_loadingScreenDone", {
        [{
            !isNil QGVAR(acre_toggle) && time > 1
        }, {
            [GVAR(acre_toggle)] call FUNC(toggleACRE2);
        }] call CBA_fnc_waitUntilAndExecute;
    }] call CBA_fnc_addEventHandler;
};
