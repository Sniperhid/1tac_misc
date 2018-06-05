#include "script_component.hpp"

if (hasInterface) then {
    ["tmf_assigngear_done", {
        params ["_unit"];
        
        if (_unit isEqualTo player && isNil QGVAR(disable)) then {
            if (isNil QGVAR(is1Tac)) then {
                ((squadParams player) param [0, []]) params [["_squadNick", ""]];
                private _playerUID = getPlayerUID player;
                GVAR(is1Tac) = (_squadNick isEqualTo "1Tac") || {(("true" configClasses (configFile >> QGVAR(players))) findIf {(getText (_x >> "uid")) isEqualTo _playerUID}) >= 0};
            };
            
            if (GVAR(is1Tac)) then {
                [player, QGVAR(insignia)] call BIS_fnc_setUnitInsignia;
            };
        };
    }] call tmf_event_fnc_addEventHandler;
};