#include "script_component.hpp"

if (serverName != "Team One Tactical - EU #2") exitWith {};

if (isServer) then {
    missionNamespace setVariable [QGVAR(acre_toggle), true, true];
} else {
    player createDiarySubject [QGVAR(diary), "Mission Testing"];
    player createDiaryRecord [QGVAR(diary), "ACRE2 is disabled by default on the mission testing server. Admins can toggle it on/off using the <font color='#FFA500'>#toggleacre2</font> chat commmand."];

    ["toggleacre2", {
        missionNamespace setVariable [QGVAR(acre_toggle), !GVAR(acre_toggle), true];
        [GVAR(acre_toggle)] remoteExecCall ["acre_api_fnc_setSpectator", -2];
    }, "admin"] call CBA_fnc_registerChatCommand;

    [{
        !isNil QGVAR(acre_toggle)
    }, {
        [GVAR(acre_toggle)] call acre_api_fnc_setSpectator;
    }] call CBA_fnc_waitUntilAndExecute;
};
