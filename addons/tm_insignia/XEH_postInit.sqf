#include "script_component.hpp"

if (hasInterface) then {
    [{!isNull player && time > 3}, {
        ((squadParams player) param [0, []]) params [["_squadNick", ""]];
        private _playerUID = getPlayerUID player;
        private _is1Tac = (_squadNick isEqualTo "1Tac") || ((("true" configClasses (configFile >> QGVAR(players))) findIf {(getText (_x >> "uid")) isEqualTo _playerUID}) >= 0);
        
        if (_is1Tac && isNil QGVAR(disable)) then {
            {
                if (_x isEqualTo "insignia") exitWith {
                    player setObjectTextureGlobal [_forEachIndex, getText (configFile >> "CfgUnitInsignia" >> QGVAR(insignia) >> "texture")];
                };
            } forEach getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform player >> "ItemInfo" >> "uniformClass") >> "hiddenSelections");
    
            ["tmf_assigngear_done", {
                params ["_unit"];
                if (_unit isEqualTo player && isNil QGVAR(disable)) then {
                    {
                        if (_x isEqualTo "insignia") exitWith {
                            player setObjectTextureGlobal [_forEachIndex, getText (configFile >> "CfgUnitInsignia" >> QGVAR(insignia) >> "texture")];
                        };
                    } forEach getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform player >> "ItemInfo" >> "uniformClass") >> "hiddenSelections");
                };
            }] call tmf_event_fnc_addEventHandler;
        };
    }, 0, 60, {}] call CBA_fnc_waitUntilAndExecute;
};