#include "script_component.hpp"

if (!hasInterface) exitWith {};

[{
    !isNull player && time > 3
}, {
    if (player call FUNC(isMember)) then {
        call FUNC(displayRecruits);
    
        [player, "tac1_tm_insignia_insignia"] call FUNC(applyInsignia);

        ["tmf_assigngear_done", {
            params ["_unit"];
            
            [{
                params ["_unit"];

                if !(_unit isEqualTo player) exitWith {};
                
                [_unit, "tac1_tm_insignia_insignia"] call FUNC(applyInsignia);
            }, _unit, 2] call CBA_fnc_waitAndExecute;
        }] call tmf_event_fnc_addEventHandler;
    } else {
        if (player call FUNC(isRecruit)) then {
            [player, "tac1_tm_insignia_fng"] call FUNC(applyInsignia);

            ["tmf_assigngear_done", {
                params ["_unit"];
                
                if !(_unit isEqualTo player) exitWith {};

                [{
                    params ["_unit"];
                    
                    [_unit, "tac1_tm_insignia_fng"] call FUNC(applyInsignia);
                }, _unit, 2] call CBA_fnc_waitAndExecute;
            }] call tmf_event_fnc_addEventHandler;
        };
    };
}, 0, 60, {}] call CBA_fnc_waitUntilAndExecute;