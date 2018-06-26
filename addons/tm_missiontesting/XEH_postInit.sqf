#include "script_component.hpp"

/*if (serverName != "Team One Tactical - EU #2") exitWith {};

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

    GVAR(acre_toggle_fix) = true;
    ["stopfixacre2", {
        GVAR(acre_toggle_fix) = !GVAR(acre_toggle_fix);
    }, "all"] call CBA_fnc_registerChatCommand;

    ["CBA_loadingScreenDone", {
        [{
            !isNil QGVAR(acre_toggle) && time > 1
        }, {
            [GVAR(acre_toggle)] call FUNC(toggleACRE2);
        }] call CBA_fnc_waitUntilAndExecute;

        player addEventHandler ["respawn", {
            [{
                if ((GVAR(acre_toggle) == 1) && !([player] call acre_api_fnc_isSpectator)) then {
                    [GVAR(acre_toggle)] call FUNC(toggleACRE2);
                };
            }, 1, 1] call CBA_fnc_waitAndExecute;
        }];

        ["ace_unconscious", {
            params ["_unit", "_status"];
            if (local _unit && _status) then {
                [{
                    _this getVariable ["acre_sys_core_isDisabled", false]
                }, {
                    _this setVariable ["acre_sys_core_isDisabled", false, true];
                }, _unit, 1] call CBA_fnc_waitUntilAndExecute;
            };
        }] call CBA_fnc_addEventHandler;

        [{
            if !(GVAR(acre_toggle_fix)) exitWith {};

            private _isSpectator = [player] call acre_api_fnc_isSpectator;
            if !(_isSpectator isEqualTo (GVAR(acre_toggle) == 1)) then {
                systemChat format [
                    "[MISSION TESTING] Your ACRE2 toggle state (%1) appears to not match the global value (%2). This has been fixed; you can toggle this by typing '#stopfixacre2'.",
                    _isSpectator,
                    !_isSpectator
                ];
                [GVAR(acre_toggle)] call FUNC(toggleACRE2);
            };
        }, 5] call CBA_fnc_addPerFrameHandler;
    }] call CBA_fnc_addEventHandler;
};*/
